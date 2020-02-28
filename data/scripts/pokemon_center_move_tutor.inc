PKMN_Center_Move_Tutor::
	Lockall
	message PKMN_Center_Move_Tutor_Text_HowCanHelp
	waitmessage
	multichoice 0, 0, MULTI_PKMN_CENTER_MOVE_TUTOR, 0
	switch VAR_RESULT
	case 0, PKMN_Center_Move_Tutor_MoveReminder
	case 1, PKMN_Center_Move_Tutor_MoveDeleter
	case 2, PKMN_Center_Move_Tutor_MoveTutorIntro
	case 3, PKMN_Center_Move_Tutor_NameRater
	case 4, PKMN_Center_Move_Tutor_Exit
	case MULTI_B_PRESSED, PKMN_Center_Move_Tutor_Exit

PKMN_Center_Move_Tutor_MoveReminder::
	releaseall
	end

PKMN_Center_Move_Tutor_MoveDeleter::
	releaseall
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Move Tutor @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

PKMN_Center_Move_Tutor_MoveTutorIntro::
	goto_if_set FLAG_TALKED_TO_MOVE_TUTOR, PKMN_Center_Move_Tutor_MoveTutorMenu
	msgbox PKMN_Center_Move_Tutor_Text_Explanation, MSGBOX_DEFAULT
	setflag FLAG_TALKED_TO_MOVE_TUTOR
	goto PKMN_Center_Move_Tutor_MoveTutorMenu


PKMN_Center_Move_Tutor_MoveTutorMenu::
	msgbox PKMN_Center_Move_Tutor_Text_WhichSetofMoves, MSGBOX_DEFAULT
	special ScriptMenu_CreatePKMNCenterMoveTutorMultichoice
	waitstate
	special GetPKMNCenterMoveListMultichoice
	switch VAR_RESULT
	case 0, PKMN_Center_Move_Tutor_MoveList1
	case 1, PKMN_Center_Move_Tutor_MoveList2
	case 2, PKMN_Center_Move_Tutor_MoveList3
	case 3, PKMN_Center_Move_Tutor_MoveList4
	case 4, PKMN_Center_Move_Tutor_MoveList5
	case 5, PKMN_Center_Move_Tutor_MoveList6
	case 6, PKMN_Center_Move_Tutor_MoveList7
	case 7, PKMN_Center_Move_Tutor
	case MULTI_B_PRESSED, PKMN_Center_Move_Tutor
	releaseall
	end
	
PKMN_Center_Move_Tutor_MoveList1::
	setvar VAR_TEMP_C, SCROLL_MULTI_PC_TUTOR_SET_1
	setvar VAR_TEMP_E, 0
	setvar VAR_0x8004, SCROLL_MULTI_PC_TUTOR_SET_1
	setvar VAR_0x8006, 0
	goto PKMN_Center_Move_Tutor_ChooseMove
	
PKMN_Center_Move_Tutor_MoveList2::
	setvar VAR_TEMP_C, SCROLL_MULTI_PC_TUTOR_SET_2
	setvar VAR_TEMP_E, 1
	setvar VAR_0x8004, SCROLL_MULTI_PC_TUTOR_SET_2
	setvar VAR_0x8006, 0
	goto PKMN_Center_Move_Tutor_ChooseMove

PKMN_Center_Move_Tutor_MoveList3::
	setvar VAR_TEMP_C, SCROLL_MULTI_PC_TUTOR_SET_3
	setvar VAR_TEMP_E, 2
	setvar VAR_0x8004, SCROLL_MULTI_PC_TUTOR_SET_3
	setvar VAR_0x8006, 0
	goto PKMN_Center_Move_Tutor_ChooseMove

PKMN_Center_Move_Tutor_MoveList4::
	setvar VAR_TEMP_C, SCROLL_MULTI_PC_TUTOR_SET_4
	setvar VAR_TEMP_E, 3
	setvar VAR_0x8004, SCROLL_MULTI_PC_TUTOR_SET_4
	setvar VAR_0x8006, 0
	goto PKMN_Center_Move_Tutor_ChooseMove

PKMN_Center_Move_Tutor_MoveList5::
	setvar VAR_TEMP_C, SCROLL_MULTI_PC_TUTOR_SET_5
	setvar VAR_TEMP_E, 4
	setvar VAR_0x8004, SCROLL_MULTI_PC_TUTOR_SET_5
	setvar VAR_0x8006, 0
	goto PKMN_Center_Move_Tutor_ChooseMove

PKMN_Center_Move_Tutor_MoveList6::
	setvar VAR_TEMP_C, SCROLL_MULTI_PC_TUTOR_SET_6
	setvar VAR_TEMP_E, 5
	setvar VAR_0x8004, SCROLL_MULTI_PC_TUTOR_SET_6
	setvar VAR_0x8006, 0
	goto PKMN_Center_Move_Tutor_ChooseMove

PKMN_Center_Move_Tutor_MoveList7::
	setvar VAR_TEMP_C, SCROLL_MULTI_PC_TUTOR_SET_7
	setvar VAR_TEMP_E, 6
	setvar VAR_0x8004, SCROLL_MULTI_PC_TUTOR_SET_7
	setvar VAR_0x8006, 0
	goto PKMN_Center_Move_Tutor_ChooseMoveSet7

PKMN_Center_Move_Tutor_ChooseMove::
    msgbox PKMN_Center_Move_Tutor_Text_WhichMove, MSGBOX_DEFAULT
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	compare VAR_RESULT 17
	goto_if_eq PKMN_Center_Move_Tutor_Exit
	compare VAR_RESULT MULTI_B_PRESSED
	goto_if_eq PKMN_Center_Move_Tutor_CloseDescriptionWindow
	goto PKMN_Center_Move_Tutor_ConfirmMoveSelection
	end
	
PKMN_Center_Move_Tutor_ChooseMoveSet7::
    msgbox PKMN_Center_Move_Tutor_Text_WhichMove, MSGBOX_DEFAULT
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	compare VAR_RESULT 16
	goto_if_eq PKMN_Center_Move_Tutor_Exit
	compare VAR_RESULT MULTI_B_PRESSED
	goto_if_eq PKMN_Center_Move_Tutor_CloseDescriptionWindow
	goto PKMN_Center_Move_Tutor_ConfirmMoveSelection
	end
	
PKMN_Center_Move_Tutor_ConfirmMoveSelection::
	copyvar VAR_0x8004, VAR_TEMP_D
	copyvar VAR_0x8005, VAR_TEMP_E
	special BufferBattleFrontierTutorMoveName
	buffernumberstring 1, VAR_0x8008
	copyvar VAR_0x8004, VAR_TEMP_C
	msgbox PKMN_Center_Move_Tutor_Text_IsThisRightMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq PKMN_Center_Move_Tutor_CloseDescriptionWindow
	goto PKMN_Center_Move_Tutor_TeachTutorMove
	end

PKMN_Center_Move_Tutor_TeachTutorMove::
	msgbox PKMN_Center_Move_Tutor_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	special GetBattleFrontierTutorMoveIndex
	fadescreen FADE_TO_BLACK
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, FALSE
	goto_if_eq PKMN_Center_Move_Tutor_CloseDescriptionWindow
	msgbox PKMN_Center_Move_Tutor_Text_TeachAnotherMove, MSGBOX_YESNO
    compare VAR_RESULT, NO
	goto_if_eq PKMN_Center_Move_Tutor_Exit
    goto PKMN_Center_Move_Tutor_CloseDescriptionWindow
	end

PKMN_Center_Move_Tutor_CloseDescriptionWindow::
    special CloseBattleFrontierTutorWindow
    goto PKMN_Center_Move_Tutor_MoveTutorMenu


@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

PKMN_Center_Move_Tutor_NameRater::
	releaseall
	end

PKMN_Center_Move_Tutor_Exit::
    special CloseBattleFrontierTutorWindow
    msgbox PKMN_Center_Move_Tutor_Text_SeeYou, MSGBOX_DEFAULT
	releaseall
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Strings @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

PKMN_Center_Move_Tutor_Text_HowCanHelp:
	.string "How can I help you today?$"

PKMN_Center_Move_Tutor_Text_Explanation:
	.string "I can teach your Pokémon moves\n"
	.string "that they can't learn anywhere\l"
	.string "else.\p"
	.string "There's no charge, but you'll\n"
	.string "only have access to some\l"
	.string "moves to start with.\p"
	.string "As you earn more Gym Badges,\n"
	.string "I'll be able to teach you\l"
	.string "more moves, so check back often!$"

PKMN_Center_Move_Tutor_Text_WhichSetofMoves:
	.string "Which set of moves would you\n"
	.string "like to choose from?$"

PKMN_Center_Move_Tutor_Text_WhichMove:
	.string "Which move would should I\n"
	.string "teach to your Pokémon?$"
	
PKMN_Center_Move_Tutor_Text_IsThisRightMove:
	.string "The move {STR_VAR_1}, is it?$"

PKMN_Center_Move_Tutor_Text_TeachMoveToWhichMon:
	.string "Which Pokémon should learn\n"
	.string "{STR_VAR_1}?$"
	
PKMN_Center_Move_Tutor_Text_TeachAnotherMove:
	.string "Would you like me to teach\n"
    .string "another move?$"

PKMN_Center_Move_Tutor_Text_SeeYou:
	.string "See you later, then!$"

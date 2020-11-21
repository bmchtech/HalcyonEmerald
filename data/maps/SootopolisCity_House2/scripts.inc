SootopolisCity_House2_MapScripts:: @ 8226A76
	.byte 0

SootopolisCity_House2_EventScript_ExpertF:: @ 8226A77
	lock
	faceplayer
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq SootopolisCity_House2_EventScript_KnowAboutOrbs
	compare VAR_RESULT, NO
	call_if_eq SootopolisCity_House2_EventScript_DontKnowAboutOrbs
	release
	end

SootopolisCity_House2_EventScript_KnowAboutOrbs:: @ 8226A99
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
	return

SootopolisCity_House2_EventScript_DontKnowAboutOrbs:: @ 8226AA2
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
	return

SootopolisCity_House2_EventScript_DracoMeteorTutor::
	lock
	faceplayer
	msgbox SootopolisCity_House2_Text_DracoMeteorTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_House2_EventScript_DracoMeteorDeclined
	msgbox SootopolisCity_House2_Text_DracoMeteorWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8008, TRUE @ Used to indicate a tutor move requires max happiness
	setvar VAR_0x8005, TUTOR_MOVE_DRACO_METEOR
	call SootopolisCity_House2_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_House2_EventScript_DracoMeteorDeclined
	goto SootopolisCity_House2_EventScript_DracoMeteorTaught
	end

SootopolisCity_House2_EventScript_DracoMeteorDeclined::
	setvar VAR_0x8008, FALSE
	msgbox SootopolisCity_House2_Text_DracoMeteorDeclined, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House2_EventScript_OpenPartyMenu:: @ 82C8326
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

SootopolisCity_House2_EventScript_DracoMeteorTaught::
	setvar VAR_0x8008, FALSE
	msgbox SootopolisCity_House2_Text_DracoMeteorTaught, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs: @ 8226AAB
	.string "Mt. Pyre…\p"
	.string "At its peak are two orbs placed side\n"
	.string "by side. Did you know?$"

SootopolisCity_House2_Text_YesTwoOrbsSideBySide: @ 8226AF1
	.string "Yes, two orbs side by side…\p"
	.string "The sight of them together…\n"
	.string "It is somehow soothing…$"

SootopolisCity_House2_Text_OughtToVisitAndSee: @ 8226B41
	.string "Is that so?\n"
	.string "Perhaps you ought to visit and see…$"

SootopolisCity_House2_Text_DracoMeteorTeach:
	.string "If you wish, I can teach your Pokémon\n"
	.string "the strongest Dragon-type move.\p"
	.string "Would you like your Pokémon to learn\n"
	.string "that move?$"

SootopolisCity_House2_Text_DracoMeteorDeclined:
	.string "Understood. Come again if you change\n"
	.string "your mind.$"

SootopolisCity_House2_Text_DracoMeteorWhichMon:
	.string "Which Pokémon should learn this move?$"

SootopolisCity_House2_Text_DracoMeteorTaught:
	.string "Draco Meteor's power is exceptional,\n"
	.string "but using it lowers the user's Sp. Atk.$"

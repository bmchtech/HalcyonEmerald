MauvilleCity_House2_MapScripts:: @ 8210C5C
	.byte 0

MauvilleCity_House2_EventScript_Woman:: @ 8210C5D
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_ReceivedCoinCase
	msgbox MauvilleCity_House2_Text_BuyIceStoneAtSlateport, MSGBOX_DEFAULT
	checkitem ITEM_ICE_STONE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_House2_EventScript_AskToTradeForIceStone
	release
	end

MauvilleCity_House2_EventScript_AskToTradeForIceStone:: @ 8210C82
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
	waitmovement 0
	msgbox MauvilleCity_House2_Text_TradeIceStoneForCoinCase, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_House2_EventScript_AcceptTrade
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House2_EventScript_DeclineTrade
	end

MauvilleCity_House2_EventScript_AcceptTrade:: @ 8210CB8
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
	removeitem ITEM_ICE_STONE
	giveitem ITEM_COIN_CASE
	setflag FLAG_RECEIVED_COIN_CASE
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
	end

MauvilleCity_House2_EventScript_ReceivedCoinCase:: @ 8210CDA
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_EventScript_DeclineTrade:: @ 8210CE4
	msgbox MauvilleCity_House2_Text_ThatsDisappointing, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_EventScript_Tutor::
	lock
	faceplayer
	msgbox MauvilleCity_House2_Text_StarterMoveTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House2_EventScript_StarterMoveDeclined
	setvar VAR_0x8008, TRUE
	message MauvilleCity_House2_Text_StarterMoveWhichMove
	waitmessage
	multichoice 0, 0, MULTI_STARTER_MOVES, 0
	switch VAR_RESULT
	case 0, MauvilleCity_House2_EventScript_StarterMoveGrassPledge
	case 1, MauvilleCity_House2_EventScript_StarterMoveFirePledge
	case 2, MauvilleCity_House2_EventScript_StarterMoveWaterPledge
	case 3, MauvilleCity_House2_EventScript_StarterMoveFrenzyPlant
	case 4, MauvilleCity_House2_EventScript_StarterMoveBlastBurn
	case 5, MauvilleCity_House2_EventScript_StarterMoveHydroCannon
	case MULTI_B_PRESSED, MauvilleCity_House2_EventScript_StarterMoveDeclined
	goto MauvilleCity_House2_EventScript_StarterMoveDeclined
	end

	MauvilleCity_House2_EventScript_StarterMoveGrassPledge::
	setvar VAR_0x8005, TUTOR_MOVE_GRASS_PLEDGE
	setvar VAR_0x8006, MOVE_GRASS_PLEDGE
	goto MauvilleCity_House2_EventScript_TeachMove

	MauvilleCity_House2_EventScript_StarterMoveFirePledge::
	setvar VAR_0x8005, TUTOR_MOVE_FIRE_PLEDGE
	setvar VAR_0x8006, MOVE_FIRE_PLEDGE
	goto MauvilleCity_House2_EventScript_TeachMove

	MauvilleCity_House2_EventScript_StarterMoveWaterPledge::
	setvar VAR_0x8005, TUTOR_MOVE_WATER_PLEDGE
	setvar VAR_0x8006, MOVE_WATER_PLEDGE
	goto MauvilleCity_House2_EventScript_TeachMove

	MauvilleCity_House2_EventScript_StarterMoveFrenzyPlant::
	setvar VAR_0x8005, TUTOR_MOVE_FRENZY_PLANT
	setvar VAR_0x8006, MOVE_FRENZY_PLANT
	goto MauvilleCity_House2_EventScript_TeachMove

	MauvilleCity_House2_EventScript_StarterMoveBlastBurn::
	setvar VAR_0x8005, TUTOR_MOVE_BLAST_BURN
	setvar VAR_0x8006, MOVE_BLAST_BURN
	goto MauvilleCity_House2_EventScript_TeachMove

	MauvilleCity_House2_EventScript_StarterMoveHydroCannon::
	setvar VAR_0x8005, TUTOR_MOVE_HYDRO_CANNON
	setvar VAR_0x8006, MOVE_HYDRO_CANNON
	goto MauvilleCity_House2_EventScript_TeachMove

	MauvilleCity_House2_EventScript_TeachMove::
	buffermovename 0, VAR_0x8006
	msgbox MauvilleCity_House2_Text_StarterMoveWhichMon, MSGBOX_DEFAULT
	call MauvilleCity_House2_EventScript_OpenPartyMenu
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_House2_EventScript_StarterMoveDeclined
	goto MauvilleCity_House2_EventScript_StarterMoveTaught
	end

MauvilleCity_House2_EventScript_StarterMoveDeclined::
	setvar VAR_0x8008, FALSE
	msgbox MauvilleCity_House2_Text_StarterMoveDeclined, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_EventScript_OpenPartyMenu:: @ 82C8326
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MauvilleCity_House2_EventScript_StarterMoveTaught::
	setvar VAR_0x8008, FALSE
	msgbox MauvilleCity_House2_Text_StarterMoveTaught, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_Text_BuyIceStoneAtSlateport: @ 8210CEE
	.string "If I had a Bike, it'd be easy to cycle to\n"
	.string "Slateport for some shopping.\p"
	.string "I'd be able to buy an Ice Stone at the\n"
	.string "Pokémon Mart in Slateport.$"

MauvilleCity_House2_Text_TradeIceStoneForCoinCase: @ 8210D76
	.string "Oh! You have an Ice Stone?\n"
	.string "Will you trade it for a Coin Case?$"

MauvilleCity_House2_Text_IllTradeYouCoinCase: @ 8210DB3
	.string "Oh, now I can evolve my Eevee!\n"
	.string "I'm so happy!\p"
	.string "Okay, I'll trade you a Coin Case!$"

MauvilleCity_House2_Text_UseCoinCaseAtGameCorner: @ 8210DE7
	.string "That Coin Case can be used\n"
	.string "at the Game Corner.$"

MauvilleCity_House2_Text_ThatsDisappointing: @ 8210E16
	.string "Oh, that's disappointing.\p"
	.string "A Coin Case is needed for the\n"
	.string "Game Corner.$"

MauvilleCity_House2_Text_StarterMoveTeach:
	.string "If you've got any Pokémon from a\n"
	.string "Professor - starter Pokémon, in other\l"
	.string "words - I can teach them special moves.\p"
	.string "Would you like a Pokémon to learn one?$"

MauvilleCity_House2_Text_StarterMoveDeclined:
	.string "Suit yourself. Come back if you change\n"
	.string "your mind.$"

MauvilleCity_House2_Text_StarterMoveTaught:
	.string "If you want to try out more of these\n"
	.string "moves, you can get more starter\l"
	.string "Pokémon at the Game Corner.$"

MauvilleCity_House2_Text_StarterMoveWhichMove:
	.string "Which move should I teach?$"

MauvilleCity_House2_Text_StarterMoveWhichMon:
	.string "Which Pokémon should learn\n"
	.string "{STR_VAR_1}?$"

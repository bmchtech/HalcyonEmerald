.set LOCALID_MOVE_DELETER, 1

LilycoveCity_MoveDeletersHouse_MapScripts:: @ 821EA0A
	.byte 0

.set BALL_SWAP_PRICE,  	2000

@ VAR_0x8004: Chosen Party Slot
@ VAR_0x8005: Chosen Poke Ball
LilycoveCity_EventScript_BallSwapper::
	lock
	faceplayer
	@showmoneybox 0, 0, 0
	call_if_unset FLAG_LILYCOVE_MET_BALL_SWAPPER, LilycoveCity_EventScript_BallSwapperIntro
	checkmoney BALL_SWAP_PRICE, 0
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_BallSwapper_CantAfford
	msgbox LilycoveCity_Text_BallSwapperChoosePokemon, MSGBOX_DEFAULT
	@hidemoneybox
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge LilycoveCity_EventScript_BallSwapperExitNoMoneyBox
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq LilycoveCity_EventScript_BallSwapperEgg
	msgbox LilycoveCity_Text_BallSwapperChoosePokeBall, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	special Bag_ChoosePokeBall
	waitstate
	copyvar VAR_0x8005, VAR_ITEM_ID
	compare VAR_ITEM_ID, 0
	goto_if_eq LilycoveCity_EventScript_BallSwapperExitNoMoneyBox
	showmoneybox 0, 0, 0
	bufferpartymonnick 0, VAR_0x8004
	bufferitemname 1, VAR_0x8005
	msgbox LilycoveCity_Text_BallSwapperConfirmChoice, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_BallSwapperExit
	playse SE_SHOP
	removemoney BALL_SWAP_PRICE, 0
	removeitem VAR_ITEM_ID, 1
	updatemoneybox 0, 0
	bufferpartymonnick 0, VAR_0x8004
	msgbox LilycoveCity_Text_BallSwapperChooseGivePokemon, MSGBOX_DEFAULT
	hidemoneybox
	msgbox LilycoveCity_Text_BallSwapperChoosePleaseWait, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChangePokeBall
	playse SE_BALL_OPEN
	waitse
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	playmoncry VAR_RESULT, 0
	msgbox LilycoveCity_Text_BallSwapperDelay, MSGBOX_AUTOCLOSE
	playse SE_BALL_BOUNCE_1
	waitse
	playse SE_BALL_BOUNCE_2
	waitse
	playse SE_BALL_BOUNCE_4
	waitse
	playse SE_RG_BALL_CLICK
	waitse
	fadescreen FADE_FROM_BLACK
	playfanfare MUS_CAUGHT
	bufferpartymonnick 0, VAR_0x8004
	msgbox LilycoveCity_Text_BallSwapperAllDone, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_BallSwapperIntro::
	msgbox LilycoveCity_Text_BallSwapperIntro, MSGBOX_DEFAULT
	setflag FLAG_LILYCOVE_MET_BALL_SWAPPER
	return

LilycoveCity_EventScript_BallSwapper_CantAfford::
	msgbox LilycoveCity_Text_BallSwapperCantAfford, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_BallSwapperExit::
	hidemoneybox
	msgbox LilycoveCity_Text_BallSwapperExit, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_BallSwapperExitNoMoneyBox::
	msgbox LilycoveCity_Text_BallSwapperExit, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_BallSwapperEgg::
	msgbox LilycoveCity_Text_BallSwapperEgg, MSGBOX_DEFAULT
	release
	end

LilycoveCity_Text_BallSwapperIntro:
	.string "I'm the Poké Ball Swapper!\p"
	.string "I can move your Pokémon from their\n"
	.string "current Poké Ball into a new one.\p"
	.string "I charge ¥2000 for this, and I'll need\n"
	.string "you to provide the new Poké Ball.$"

LilycoveCity_Text_BallSwapperCantAfford:
	.string "I'm the Poké Ball Swapper!\p"
	.string "…But it seems you can't afford my\n"
	.string "services.\p"
	.string "Please come back when you have ¥2000.$"

LilycoveCity_Text_BallSwapperChoosePokemon:
	.string "Which Pokémon's Ball would you like\n"
	.string "to swap?$"

LilycoveCity_Text_BallSwapperChoosePokeBall:
	.string "And which Poké Ball will be their\n"
	.string "new home?$"

LilycoveCity_Text_BallSwapperConfirmChoice:
	.string "So you want to move {STR_VAR_1}\n"
	.string "into a {STR_VAR_2} for ¥2000?$"

LilycoveCity_Text_BallSwapperChooseGivePokemon:
	.string "Very well. Please hand over your\n"
	.string "{STR_VAR_1}.$"

LilycoveCity_Text_BallSwapperChoosePleaseWait:
	.string "Don't worry, this will only take\n"
	.string "a moment.$"

LilycoveCity_Text_BallSwapperDelay:
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "… … … … … …\n"
	.string "… … … … … …$"

LilycoveCity_Text_BallSwapperAllDone:
	.string "All done! I hope {STR_VAR_1} enjoys\n"
	.string "its new Poké Ball!$"

LilycoveCity_Text_BallSwapperExit:
	.string "See you later then!$"

LilycoveCity_Text_BallSwapperEgg:
	.string "I can't change an Egg's Poké Ball!\n"
	.string "Come back once it's hatched.$"

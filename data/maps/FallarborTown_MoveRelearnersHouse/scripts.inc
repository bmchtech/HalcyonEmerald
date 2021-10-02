.set LOCALID_EVIE, 1
.set LOCALID_IVY,  2

FallarborTown_MoveRelearnersHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_MoveRelearnersHouse_OnFrame
	.byte 0

FallarborTown_MoveRelearnersHouse_OnFrame:
	map_script_2 VAR_IVY_EVIE_HOUSE_STATE, 0, FallarborTown_EventScript_IvyEvieIntro
	.2byte 0

FallarborTown_EventScript_IvyEvieIntro::
	lockall
	applymovement LOCALID_EVIE, Common_Movement_WalkInPlaceFastestDown
	applymovement LOCALID_IVY, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_EVIE, Common_Movement_ExclamationMark
	applymovement LOCALID_IVY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_EVIE, Common_Movement_Delay48
	applymovement LOCALID_IVY, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_EVIE, FallarborTown_Movement_MoveEvieDown
	applymovement LOCALID_IVY, FallarborTown_Movement_MoveIvyDown
	waitmovement 0	
	msgbox FallarborTown_Text_AnnoyingIntroPart1, MSGBOX_DEFAULT
	applymovement LOCALID_IVY, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart2, MSGBOX_DEFAULT
	applymovement LOCALID_EVIE, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart3, MSGBOX_DEFAULT
	applymovement LOCALID_IVY, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart4, MSGBOX_DEFAULT
	applymovement LOCALID_EVIE, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart5, MSGBOX_YESNO
	compare VAR_RESULT, NO
	call_if_eq FallarborTown_Explain_EVs
	applymovement LOCALID_IVY, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq HyperTraining_EventScript_Explain_IVs
	applymovement LOCALID_EVIE, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart7, MSGBOX_DEFAULT
	applymovement LOCALID_IVY, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart8, MSGBOX_DEFAULT
	setvar VAR_IVY_EVIE_HOUSE_STATE, 1
	releaseall
	end

FallarborTown_Movement_MoveEvieDown:
	walk_fastest_down
	walk_fastest_down
	walk_fastest_left
	walk_in_place_fastest_down
	step_end

FallarborTown_Movement_MoveIvyDown:
	walk_fastest_down
	walk_fastest_down
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_in_place_fastest_down
	step_end

FallarborTown_Text_AnnoyingIntroPart1:
	.string "Hey there, Trainer!\p"
	.string "If you want your Pokémon to be the very\n"
	.string "best in all of Hoenn, you've come to\l"
	.string "the right place!\p"
	.string "I'm Evie, and this is my sister, Ivy.$"

FallarborTown_Text_AnnoyingIntroPart2:
	.string "Ivy: We offer special training\n"
	.string "programs that will seriously beef up\l"
	.string "your team!$"

FallarborTown_Text_AnnoyingIntroPart3:
	.string "Evie: But our services don't come cheap.\n"
	.string "Well, mine don't, at least.\p"
	.string "You can pay Ivy with junk-$"

FallarborTown_Text_AnnoyingIntroPart4:
	.string "Ivy: Hey!\n"
	.string "Those Bottle Caps aren't junk!\p"
	.string "They're highly collectable, thank\n"
	.string "you very much!$"

FallarborTown_Text_AnnoyingIntroPart5:
	.string "Evie: Yeah, yeah, if you say so…\p"
	.string "Anyway, do you know about your Pokémon's\n"
	.string "Effort Values, or EVs for short?$"

FallarborTown_Text_AnnoyingIntroPart6:
	.string "Ivy: OK! now, how about Individual\n"
	.string "Values, or IVs?\p"
	.string "Do you want me to explain them?$"

FallarborTown_Text_AnnoyingIntroPart7:
	.string "Evie: Right, here's the deal. For ¥100,\n"
	.string "I'll increase a Pokémon's EVs by one.$"

FallarborTown_Text_AnnoyingIntroPart8:
	.string "Ivy: And for one Bottle Cap, I'll change\n"
	.string "one of a Pokémon's IVs to whatever\l"
	.string "you want.\p"
	.string "Also, for three Caps, I'll change all\n"
	.string "of a Pokémon's IVs to give them a new\l"
	.string "Hidden Power type.$"

@@@@@@@@@@@@@@@@ Super Training Script @@@@@@@@@@@@@@@@

FallarborTown_SuperTrainer::
	lock
	faceplayer
	msgbox SuperTraining_Text_ChoosePokemon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SuperTraining_Refuse
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq SuperTraining_Egg
	bufferpartymonnick 0, VAR_0x8004
	msgbox SuperTraining_Text_TakeALookatEVs, MSGBOX_DEFAULT
	goto FallarborTown_SuperMainMenu

FallarborTown_SuperMainMenu::
	bufferpartymonnick 0, VAR_0x8004
	msgbox SuperTraining_Text_HowCanIHelp, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_SUPER_TRAINING_MENU, 0
	switch VAR_RESULT
	case 0, FallarborTown_ChangeEV
	case 1, FallarborTown_ResetEVs
	case 2, Call_FallarborTown_Explain_EVs
	case 3, HyperTraining_EventScript_DoNothing
	case 127, HyperTraining_EventScript_DoNothing
	releaseall
	end

Call_FallarborTown_Explain_EVs::
	call FallarborTown_Explain_EVs
	goto FallarborTown_SuperMainMenu

FallarborTown_Explain_EVs::
	msgbox FallarborTown_Text_ExplainEvs, MSGBOX_DEFAULT
	return

FallarborTown_ChangeEV::
	bufferpartymonnick 0, VAR_0x8004
	@specialvar VAR_RESULT, AreChosenMonEVsMaxedOut
	@compare VAR_RESULT, 1
	@goto_if_eq FallarborTown_EVsMaxedOut
	msgbox SuperTraining_Text_ThisIsMonsCurrentSpread, MSGBOX_DEFAULT
	special BufferChosenMonAllEVs
	multichoice 0, 0, MULTI_BASE_STATS, 0
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeHPEV
	case 1, FallarborTown_ChangeATKEV
	case 2, FallarborTown_ChangeDEFEV
	case 3, FallarborTown_ChangeSPEEDEV
	case 4, FallarborTown_ChangeSPATKEV
	case 5, FallarborTown_ChangeSPDEFEV
	case 127, FallarborTown_SuperMainMenu
	releaseall
	end

HyperTraining_EventScript_ChangeHPEV::
	setvar VAR_0x8005, 0
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportHP
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeATKEV::
	setvar VAR_0x8005, 1
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportAtk
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeDEFEV::
	setvar VAR_0x8005, 2
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportDef
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeSPEEDEV::
	setvar VAR_0x8005, 3
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportSpeed
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeSPATKEV::
	setvar VAR_0x8005, 4
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportSpAtk
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeSPDEFEV::
	setvar VAR_0x8005, 5
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportSpDef
	goto FallarborTown_ChooseNewEV

FallarborTown_MaxEVs::
	msgbox SuperTraining_ReportMaxEVs
	goto FallarborTown_ChangeEV

FallarborTown_EVsMaxedOut::
	msgbox SuperTraining_ReportMaxTotalEVs
	goto FallarborTown_SuperMainMenu

FallarborTown_ChooseNewEV::
	multichoice 0, 0, MULTI_EV_MENU, 0
	switch VAR_RESULT
	case 0, FallarborTown_ChangeEV4
	case 1, FallarborTown_ChangeEV8
	case 2, FallarborTown_ChangeEV12
	case 3, FallarborTown_ChangeEV64
	case 4, FallarborTown_ChangeEV128
	case 5, FallarborTown_ChangeEV252
	case 127, FallarborTown_ChangeEV

FallarborTown_ChangeEV4::
	setvar VAR_0x8006, 4
	setvar VAR_0x8009, 400
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV8::
	setvar VAR_0x8006, 8
	setvar VAR_0x8009, 800
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV12::
	setvar VAR_0x8006, 12
	setvar VAR_0x8009, 1200
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV64::
	setvar VAR_0x8006, 64
	setvar VAR_0x8009, 6400
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV128::
	setvar VAR_0x8006, 128
	setvar VAR_0x8009, 12800
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV252::
	setvar VAR_0x8006, 252
	setvar VAR_0x8009, 25200
	goto FallarborTown_DoSuperTraining

FallarborTown_ResetEVs::
	msgbox SuperTraining_Text_ICanResetEVs, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_SuperMainMenu
	special ResetChosenMonEVs
	msgbox SuperTraining_Text_EVsReset, MSGBOX_DEFAULT
	goto FallarborTown_SuperMainMenu
	
FallarborTown_DoSuperTraining::
	special CheckChosenMonCanGainEVs
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_CantExceedEVLimit
	showmoneybox 15, 0, 0
	buffernumberstring 2, VAR_0x8009
	msgbox SuperTraining_ShowPrice, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_WontPay
	checkmoney VAR_0x8009, 0
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_CantAfford
	removemoney VAR_0x8009, 0
	updatemoneybox 0, 0
	special IncreaseChosenMonEVs
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8007
	msgbox SuperTraining_Text_EVsHaveIncreased
	hidemoneybox
	goto FallarborTown_ChangeEV

FallarborTown_CantExceedEVLimit::
	buffernumberstring 1, VAR_0x8008
	msgbox SuperTraining_TooManyEVs, MSGBOX_DEFAULT
	goto FallarborTown_ChangeEV

FallarborTown_WontPay::
	hidemoneybox
	goto FallarborTown_ChangeEV

FallarborTown_CantAfford::
	msgbox FallarborTown_CantAfford_String, MSGBOX_DEFAULT
	hidemoneybox
	goto FallarborTown_ChangeEV

HyperTraining_EventScript_DoNothing::
	releaseall
	end

SuperTraining_Egg::
	msgbox FallarborTown_Text_CantTrainEgg, MSGBOX_DEFAULT
	releaseall
	end

SuperTraining_Refuse::
	msgbox FallarborTown_Text_SomeOtherTime, MSGBOX_DEFAULT
	releaseall
	end

SuperTraining_Text_ChoosePokemon:
	.string "Evie: Which Pokémon would you like me\n"
	.string "to train?$"

FallarborTown_Text_CantTrainEgg:
	.string "Oh come on, I can't train an Egg!\n"
	.string "Bring it back once it's hatched.$"

FallarborTown_Text_SomeOtherTime:
	.string "Oh, OK.\n"
	.string "Some other time, then?$"

SuperTraining_Text_RememberEvs:
	.string "And you remember how EVs work, right?$"

FallarborTown_Text_ExplainEvs:
	.string "Evie: EVs are part of every stat a\n"
	.string "a Pokémon has.\p"
	.string "They can have HP EVs, Attack EVs,\n"
	.string "Defense EVs… you get the idea.\p"
	.string "Every time your Pokémon gains\n"
	.string "experience in battle, it also gains EVs.\p"
	.string "The kind of EVs gained depends on the\n"
	.string "kind of Pokémon you defeated.\p"
	.string "For example, beating a Zubat will give\n"
	.string "your Pokémon one Speed EV.\p"
	.string "Once you have enough EVs in a stat,\n"
	.string "that stat will go up!\p"
	.string "You can have up to 252 EVs in one stat,\n"
	.string "but you can only have 510 EVs in total.\p"
	.string "It's normally good to put 252 EVs in\n"
	.string "two of your Pokémon's best stats,\l"
	.string "but you can get creative with EVs too!$"

SuperTraining_Text_TakeALookatEVs:
	.string "OK! Again, I charge ¥100 per EV\n"
	.string "added. Now let's take a look at your\l"
	.string "{STR_VAR_1}'s EVs.$"

SuperTraining_Text_ThisIsMonsCurrentSpread:
	.string "This is {STR_VAR_1}'s current EV\n"
	.string "spread.\p"
	.string "Which stat would you like it to train?$"

SuperTraining_ReportHP:
	.string "{STR_VAR_1} has {STR_VAR_2} HP EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportAtk:
	.string "{STR_VAR_1} has {STR_VAR_2} Attack EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportDef:
	.string "{STR_VAR_1} has {STR_VAR_2} Defense EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportSpeed:
	.string "{STR_VAR_1} has {STR_VAR_2} Speed EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportSpAtk:
	.string "{STR_VAR_1} has {STR_VAR_2} Sp. Atk EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportSpDef:
	.string "{STR_VAR_1} has {STR_VAR_2} Sp. Def EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_Text_EVsHaveIncreased:
	.string "{STR_VAR_1}'s EVs in that stat have\n"
	.string "increased to {STR_VAR_2}!$"

SuperTraining_Text_ICanResetEVs:
	.string "I can completely reset your\n"
	.string "{STR_VAR_1}'s EVs for free!\p"
	.string "This will remove all of its EVs, so\n"
	.string "you can add more to the stats you want\l"
	.string "{STR_VAR_1} to focus on.\p"
	.string "Would you like me to reset\n"
	.string "{STR_VAR_1}'s EVs?$"

SuperTraining_Text_HowCanIHelp:
	.string "How can I help {STR_VAR_1} today?$"
	
SuperTraining_Text_EVsReset::
	.string "{STR_VAR_1}'s EVs have been reset!$"

SuperTraining_ReportMaxEVs:
	.string "{STR_VAR_1} has 252 EVs in that stat!\n"
	.string "It can't gain any more!$"

SuperTraining_ReportMaxTotalEVs:
	.string "{STR_VAR_1}'s EVs are maxed out!\n"
	.string "It can't gain any more!$"

SuperTraining_TooManyEVs:
	.string "{STR_VAR_1} already has {STR_VAR_2} EVs in total!\n"
	.string "It can't gain that many more!$"

SuperTraining_ShowPrice:
	.string "That'll cost ¥{STR_VAR_3}. Is that OK?$"

FallarborTown_CantAfford_String:
	.string "You don't have the money.$"

@@@@@@@@@@@@@@@@ Hyper Training Script @@@@@@@@@@@@@@@@

FallarborTown_HyperTrainer::
	lockall
	faceplayer
	msgbox HyperTraining_Text_ChoosePokemon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SuperTraining_Refuse
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq SuperTraining_Egg
	bufferpartymonnick 0, VAR_0x8004
	msgbox HyperTraining_Text_LetsTakeALook, MSGBOX_DEFAULT
	goto FallarborTown_HyperMainMenu

FallarborTown_HyperMainMenu::
	bufferpartymonnick 0, VAR_0x8004
	msgbox HyperTraining_Text_HowCanIHelp, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_HYPER_TRAINING_MENU, 0
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeIV
	case 1, HyperTraining_EventScript_ChangeHiddenPower
	case 2, Call_HyperTraining_EventScript_Explain_IVs
	case 3, HyperTraining_EventScript_DoNothing
	case 127, HyperTraining_EventScript_DoNothing
	releaseall
	end

Call_HyperTraining_EventScript_Explain_IVs::
	call HyperTraining_EventScript_Explain_IVs
	goto FallarborTown_HyperMainMenu

HyperTraining_EventScript_Explain_IVs::
	msgbox HyperTraining_Text_ExplainIVs, MSGBOX_DEFAULT
	return

HyperTraining_EventScript_ChangeIV::
	bufferpartymonnick 0, VAR_0x8004
	msgbox HyperTraining_Text_WhichIVShouldChange, MSGBOX_DEFAULT
	special BufferChosenMonAllIVs
	multichoice 0, 0, MULTI_BASE_STATS, 0
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeHPIV
	case 1, FallarborTown_ChangeATKIV
	case 2, FallarborTown_ChangeDEFIV
	case 3, FallarborTown_ChangeSPEEDIV
	case 4, FallarborTown_ChangeSPATKIV
	case 5, FallarborTown_ChangeSPDEFIV
	case 127, FallarborTown_HyperMainMenu
	releaseall
	end

HyperTraining_EventScript_ChangeHPIV::
	setvar VAR_0x8005, 0
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportHP
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeATKIV::
	setvar VAR_0x8005, 1
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportAtk
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeDEFIV::
	setvar VAR_0x8005, 2
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportDef
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeSPEEDIV::
	setvar VAR_0x8005, 3
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportSpeed
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeSPATKIV::
	setvar VAR_0x8005, 4
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportSpAtk
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeSPDEFIV::
	setvar VAR_0x8005, 5
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportSpDef
	goto FallarborTown_ChooseNewIV

FallarborTown_ChooseNewIV::
	multichoice 0, 0, MULTI_IV_MENU, 0
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeIV0
	case 1, HyperTraining_EventScript_ChangeIV1
	case 2, HyperTraining_EventScript_ChangeIV14
	case 3, HyperTraining_EventScript_ChangeIV15
	case 4, HyperTraining_EventScript_ChangeIV30
	case 5, HyperTraining_EventScript_ChangeIV31
	case 127, HyperTraining_EventScript_ChangeIV

HyperTraining_EventScript_ChangeIV0::
	setvar VAR_0x8006, 0
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV1::
	setvar VAR_0x8006, 1
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV14::
	setvar VAR_0x8006, 14
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV15::
	setvar VAR_0x8006, 15
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV30::
	setvar VAR_0x8006, 30
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV31::
	setvar VAR_0x8006, 31
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeOneIV::
	checkitem ITEM_BOTTLE_CAP, 1
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTraining_EventScript_NotEnoughCaps
	special ChangeChosenMonIVs
	msgbox HyperTraining_Text_PayOneCap, MSGBOX_DEFAULT
	removeitem ITEM_BOTTLE_CAP
	goto HyperTraining_EventScript_DoHyperTraining

HyperTraining_EventScript_ChangeHiddenPower::
	msgbox HyperTraining_Text_ForThreeCapsChangeAllIVs, MSGBOX_DEFAULT
	copyvar VAR_0x800A, VAR_0x8004
	setvar VAR_0x8004, SCROLL_MULTI_HIDDEN_POWER
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeHPFighting
	case 1, HyperTraining_EventScript_ChangeHPFlying
	case 2, HyperTraining_EventScript_ChangeHPPoison
	case 3, HyperTraining_EventScript_ChangeHPGround
	case 4, HyperTraining_EventScript_ChangeHPRock
	case 5, HyperTraining_EventScript_ChangeHPBug
	case 6, HyperTraining_EventScript_ChangeHPGhost
	case 7, HyperTraining_EventScript_ChangeHPSteel
	case 8, HyperTraining_EventScript_ChangeHPFire
	case 9, HyperTraining_EventScript_ChangeHPWater
	case 10, HyperTraining_EventScript_ChangeHPGrass
	case 11, HyperTraining_EventScript_ChangeHPElectric
	case 12, HyperTraining_EventScript_ChangeHPPsychic
	case 13, HyperTraining_EventScript_ChangeHPIce
	case 14, HyperTraining_EventScript_ChangeHPDragon
	case 15, HyperTraining_EventScript_ChangeHPDark
	case 16, HyperTraining_EventScript_RebufferChosenMon
	case 127, HyperTraining_EventScript_RebufferChosenMon
	releaseall
	end

HyperTraining_EventScript_ChangeHPFighting::
	setvar 0x8007, 0
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPFlying::
	setvar 0x8007, 1
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPPoison::
	setvar 0x8007, 2
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPGround::
	setvar 0x8007, 3
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPRock::
	setvar 0x8007, 4
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPBug::
	setvar 0x8007, 5
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPGhost::
	setvar 0x8007, 6
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPSteel::
	setvar 0x8007, 7
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPFire::
	setvar 0x8007, 8
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPWater::
	setvar 0x8007, 9
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPGrass::
	setvar 0x8007, 10
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPElectric::
	setvar 0x8007, 11
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPPsychic::
	setvar 0x8007, 12
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPIce::
	setvar 0x8007, 13
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPDragon::
	setvar 0x8007, 14
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPDark::
	setvar 0x8007, 15
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeAllIVs::
	checkitem ITEM_BOTTLE_CAP, 3
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTraining_EventScript_NotEnoughCaps
	special ChangeChosenMonHiddenPower
	msgbox HyperTraining_Text_PayThreeCaps, MSGBOX_DEFAULT
	removeitem ITEM_BOTTLE_CAP, 3
	goto HyperTraining_EventScript_DoHyperTraining

HyperTraining_EventScript_DoHyperTraining::
	msgbox HyperTraining_Text_StartHyperTraining, MSGBOX_AUTOCLOSE
	fadescreen 1
	playfanfare 0x173
	waitfanfare
	fadescreen 0
	msgbox HyperTraining_Text_HyperTrainingMadeMonStronger, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_HyperTrainer
	releaseall
	end

HyperTraining_EventScript_NotEnoughCaps::
	msgbox HyperTraining_Text_NotEnoughCaps, MSGBOX_DEFAULT
	releaseall
	end

HyperTraining_EventScript_RebufferChosenMon::
	copyvar VAR_0x8004, VAR_0x800A
	goto FallarborTown_HyperMainMenu

HyperTraining_Text_ChoosePokemon:
	.string "Ivy: Which Pokémon needs some\n"
	.string "Hyper Training?$"

HyperTraining_Text_WantMeExplainIVs:
	.string "Would you like me to explain IVs again?$"

HyperTraining_Text_ExplainIVs:
	.string "Ivy: IVs are a hidden part of your\n"
	.string "Pokémon's stats that can only be\l"
	.string "changed with special training,\l"
	.string "or raised by giving them Vitamins.\p"
	.string "They can be any value between\n"
	.string "0 and 31, and affect things like\l"
	.string "the type of the move Hidden Power.\p"
	.string "Higher IVs means higher stats, but\n"
	.string "higher stats aren't always better!\p"
	.string "Example: If your Pokémon relies on\n"
	.string "Special Attacks, a low Attack IV will\l"
	.string "reduce the damage it takes if it hits\l"
	.string "itself in confusion.$"

HyperTraining_Text_LetsTakeALook:
	.string "OK! Let's take a look at your\n"
	.string "{STR_VAR_1}'s IVs.$"

HyperTraining_Text_WhichIVShouldChange:
	.string "Which of {STR_VAR_1}'s IVs\n"
	.string "would you like to change?$"

HyperTraining_ReportHP:
	.string "{STR_VAR_1}'s HP IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportAtk:
	.string "{STR_VAR_1}'s Attack IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportDef:
	.string "{STR_VAR_1}'s Defense IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportSpeed:
	.string "{STR_VAR_1}'s Speed IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportSpAtk:
	.string "{STR_VAR_1}'s Sp. Atk IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportSpDef:
	.string "{STR_VAR_1}'s Sp. Def IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_Text_HyperTrainingMadeMonStronger:
	.string "The Hyper Training made {STR_VAR_1}\n"
	.string "stronger!\p"
	.string "Would you like to train some more?$"

HyperTraining_Text_ForThreeCapsChangeAllIVs:
	.string "For three Bottle Caps, I can change all\n"
	.string "of a Pokémon's IVs at once to give them\l"
	.string "a new Hidden Power type.\p"
	.string "Would you like to change {STR_VAR_1}'s\n"
	.string "Hidden Power to one of these types?$"

HyperTraining_Text_HowCanIHelp:
	.string "How can I help {STR_VAR_1} today?$"

HyperTraining_Text_StartHyperTraining:
	.string "Got it! Let's do some Hyper Training!\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "… … … … … …\n"
	.string "… … … … … …$"

HyperTraining_Text_NotEnoughCaps:
	.string "You don't have enough Bottle Caps.$"

HyperTraining_Text_PayOneCap:
	.string "{PLAYER} handed over one Bottle Cap.$"

HyperTraining_Text_PayThreeCaps:
	.string "{PLAYER} handed over three Bottle Caps.$"

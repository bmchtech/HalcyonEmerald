.set LOCALID_MOVE_RELEARNER, 1

FallarborTown_MoveRelearnersHouse_MapScripts:: @ 8201382
	.byte 0

FallarborTown_EventScript_IvyEvieIntro::
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart1, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart2, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart3, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart4, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart5, MSGBOX_YESNO
	compare VAR_RESULT, NO
	call_if_eq FallarborTown_Explain_EVs
	applymovement 2, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq FallarborTown_EventScript_Explain_IVs
	applymovement 1, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart7, MSGBOX_DEFAULT
	applymovement 2, Common_Movement_WalkInPlaceFastestDown
	msgbox FallarborTown_Text_AnnoyingIntroPart8, MSGBOX_DEFAULT
	setflag FLAG_MET_IVY_AND_EVIE
	return


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
	.string "Also, for five Caps, I'll change all\n"
	.string "of a Pokémon's IVs to give them a new\l"
	.string "Hidden Power type.$"

@@@@@@@@@@@@@@@@ Super Training Script @@@@@@@@@@@@@@@@

FallarborTown_SuperTrainer::
	lock
	faceplayer
	call_if_unset FLAG_MET_IVY_AND_EVIE, FallarborTown_EventScript_IvyEvieIntro
	msgbox FallarborTown_Text_ChoosePokemon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SuperTraining_Refuse
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq SuperTraining_Egg
	bufferpartymonnick 0, VAR_0x8004
	msgbox SuperTraining_Text_RememberEvs, MSGBOX_YESNO
	compare VAR_RESULT, 0
	call_if_eq FallarborTown_Explain_EVs
	msgbox SuperTraining_Text_TakeALookatEVs, MSGBOX_DEFAULT
	goto FallarborTown_SuperMainMenu

FallarborTown_SuperMainMenu::
	bufferpartymonnick 0, VAR_0x8004
	msgbox SuperTraining_Text_HowCanIHelp, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_SUPER_TRAINING_MENU, 0
	switch VAR_RESULT
	case 0, FallarborTown_ChangeEV
	case 1, FallarborTown_ResetEVs
	case 2, FallarborTown_DoNothing
	case 127, FallarborTown_DoNothing
	releaseall
	end

FallarborTown_Explain_EVs::
	msgbox FallarborTown_Text_ExplainEvs, MSGBOX_DEFAULT
	return

FallarborTown_ChangeEV::
	bufferpartymonnick 0, VAR_0x8004
	specialvar VAR_RESULT, AreChosenMonEVsMaxedOut
	compare VAR_RESULT, 1
	goto_if_eq FallarborTown_EVsMaxedOut
	msgbox SuperTraining_String_5, MSGBOX_DEFAULT
	special BufferChosenMonAllEVs
	multichoice 0, 0, MULTI_BASE_STATS, 0
	switch VAR_RESULT
	case 0, FallarborTown_ChangeHPEV
	case 1, FallarborTown_ChangeATKEV
	case 2, FallarborTown_ChangeDEFEV
	case 3, FallarborTown_ChangeSPEEDEV
	case 4, FallarborTown_ChangeSPATKEV
	case 5, FallarborTown_ChangeSPDEFEV
	case 127, FallarborTown_SuperMainMenu
	releaseall
	end

FallarborTown_ChangeHPEV::
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

FallarborTown_DoNothing::
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

FallarborTown_Text_ChoosePokemon:
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

SuperTraining_Text_TakeALookatEVs::
	.string "OK! Again, I charge ¥100 per EV\n"
	.string "added. Now let's take a look at your\l"
	.string "{STR_VAR_1}'s EVs.$"

SuperTraining_String_5::
	.string "This is {STR_VAR_1}'s current EV\n"
	.string "spread.\p"
	.string "Which stat would you like it to train?$"

SuperTraining_ReportHP::
	.string "{STR_VAR_1} has {STR_VAR_2} HP EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportAtk::
	.string "{STR_VAR_1} has {STR_VAR_2} Attack EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportDef::
	.string "{STR_VAR_1} has {STR_VAR_2} Defense EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportSpeed::
	.string "{STR_VAR_1} has {STR_VAR_2} Speed EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportSpAtk::
	.string "{STR_VAR_1} has {STR_VAR_2} Sp. Atk EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportSpDef::
	.string "{STR_VAR_1} has {STR_VAR_2} Sp. Def EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_Text_EVsHaveIncreased::
	.string "{STR_VAR_1}'s EVs in that stat have\n"
	.string "increased to {STR_VAR_2}!$"

SuperTraining_Text_ICanResetEVs::
	.string "I can completely reset your\n"
	.string "{STR_VAR_1}'s EVs for free!\p"
	.string "This will remove all of its EVs, so\n"
	.string "you can add more to the stats you want\l"
	.string "{STR_VAR_1} to focus on.\p"
	.string "Would you like me to reset\n"
	.string "{STR_VAR_1}'s EVs?$"

SuperTraining_Text_HowCanIHelp::
	.string "How can I help {STR_VAR_1} today?$"
	
SuperTraining_Text_EVsReset::
	.string "{STR_VAR_1}'s EVs have been reset!$"

SuperTraining_ReportMaxEVs::
	.string "{STR_VAR_1} has 252 EVs in that stat!\n"
	.string "It can't gain any more!$"

SuperTraining_ReportMaxTotalEVs::
	.string "{STR_VAR_1}'s EVs are maxed out!\n"
	.string "It can't gain any more!$"

SuperTraining_TooManyEVs::
	.string "{STR_VAR_1} already has {STR_VAR_2} EVs in total!\n"
	.string "It can't gain that many more!$"

SuperTraining_ShowPrice::
	.string "That'll cost ¥{STR_VAR_3}. Is that OK?$"

FallarborTown_CantAfford_String::
	.string "You don't have the money.$"

@@@@@@@@@@@@@@@@ Hyper Training Script @@@@@@@@@@@@@@@@

FallarborTown_HyperTrainer::
	lockall
	faceplayer
	call_if_unset FLAG_MET_IVY_AND_EVIE, FallarborTown_EventScript_IvyEvieIntro
	msgbox FallarborTown_Text_ChoosePokemon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SuperTraining_Refuse
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq SuperTraining_Egg
	bufferpartymonnick 0, VAR_0x8004
	msgbox HyperTraining_Text_WantMeExplainIVs, MSGBOX_YESNO
	compare VAR_RESULT, YES
	call_if_eq FallarborTown_EventScript_Explain_IVs
	msgbox HyperTraining_String_4, MSGBOX_DEFAULT
	goto FallarborTown_HyperMainMenu

FallarborTown_HyperMainMenu::
	msgbox HyperTraining_String_8, MSGBOX_DEFAULT
	special BufferChosenMonAllIVs
	multichoice 0, 0, MULTI_HYPER_TRAINING_MENU, 0
	switch VAR_RESULT
	case 0, FallarborTown_ChangeIV
	case 1, FallarborTown_ChangeHiddenPower
	case 2, FallarborTown_DoNothing
	case 127, FallarborTown_DoNothing
	releaseall
	end

FallarborTown_EventScript_Explain_IVs::
	msgbox HyperTraining_Text_ExplainIVs, MSGBOX_DEFAULT
	return

FallarborTown_ChangeIV::
	msgbox HyperTraining_String_5, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_BASE_STATS, 0
	switch VAR_RESULT
	case 0, FallarborTown_ChangeHPIV
	case 1, FallarborTown_ChangeATKIV
	case 2, FallarborTown_ChangeDEFIV
	case 3, FallarborTown_ChangeSPEEDIV
	case 4, FallarborTown_ChangeSPATKIV
	case 5, FallarborTown_ChangeSPDEFIV
	case 127, FallarborTown_HyperMainMenu
	releaseall
	end

FallarborTown_ChangeHPIV::
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
	case 0, FallarborTown_ChangeIV0
	case 1, FallarborTown_ChangeIV1
	case 2, FallarborTown_ChangeIV14
	case 3, FallarborTown_ChangeIV15
	case 4, FallarborTown_ChangeIV30
	case 5, FallarborTown_ChangeIV31
	case 127, FallarborTown_ChangeIV

FallarborTown_ChangeIV0::
	setvar VAR_0x8006, 0
	special ChangeChosenMonIVs
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeIV1::
	setvar VAR_0x8006, 1
	special ChangeChosenMonIVs
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeIV14::
	setvar VAR_0x8006, 14
	special ChangeChosenMonIVs
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeIV15::
	setvar VAR_0x8006, 15
	special ChangeChosenMonIVs
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeIV30::
	setvar VAR_0x8006, 30
	special ChangeChosenMonIVs
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeIV31::
	setvar VAR_0x8006, 31
	special ChangeChosenMonIVs
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeHiddenPower::
	msgbox HyperTraining_String_7, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_HIDDEN_POWER_TYPES, 0
	switch VAR_RESULT
	case 0, FallarborTown_ChangeHPFire
	case 1, FallarborTown_ChangeHPIce
	case 2, FallarborTown_ChangeHPGrass
	case 3, FallarborTown_ChangeHPRock
	case 4, FallarborTown_ChangeHPGround
	case 5, FallarborTown_ChangeHPFighting
	case 127, FallarborTown_HyperMainMenu
	releaseall
	end

FallarborTown_ChangeHPFire::
	setvar 0x8007, 0
	special ChangeChosenMonHiddenPower
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeHPIce::
	setvar 0x8007, 1
	special ChangeChosenMonHiddenPower
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeHPGrass::
	setvar 0x8007, 2
	special ChangeChosenMonHiddenPower
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeHPRock::
	setvar 0x8007, 3
	special ChangeChosenMonHiddenPower
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeHPGround::
	setvar 0x8007, 4
	special ChangeChosenMonHiddenPower
	goto FallarborTown_DoHyperTraining

FallarborTown_ChangeHPFighting::
	setvar 0x8007, 5
	special ChangeChosenMonHiddenPower
	goto FallarborTown_DoHyperTraining

FallarborTown_DoHyperTraining::
	msgbox HyperTraining_Text_StartHyperTraining, MSGBOX_AUTOCLOSE
	fadescreen 1
	playfanfare 0x173
	waitfanfare
	fadescreen 0
	msgbox HyperTraining_String6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_HyperTrainer
	releaseall
	end

HyperTraining_Text_WantMeExplainIVs:
	.string "Would you like me to explain IVs again?$"

HyperTraining_Text_ExplainIVs:
	.string "Ivy: IVs are a hidden part of your\n"
	.string "Pokémon's stats that can only be\l"
	.string "changed with special training.\p"
	.string "They can be any value between\n"
	.string "0 and 31, and affect things like\l"
	.string "the type of the move Hidden Power.\p"
	.string "Higher IVs means higher stats, but\n"
	.string "higher stats aren't always better!\p"
	.string "Example: If your Pokémon relies on\n"
	.string "Special Attacks, a low Attack IV may\l"
	.string "help when it's confused in battle.$"

HyperTraining_String_4:
	.string "OK! Let's take a look at your\n"
	.string "{STR_VAR_1}'s IVs.$"

HyperTraining_String_5:
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

HyperTraining_String6:
	.string "The Hyper Training made {STR_VAR_1}\n"
	.string "stronger!\p"
	.string "Would you like to train some more?$"

HyperTraining_String_7:
	.string "For five Bottle Caps, I can change all\n"
	.string "of a Pokémon's IVs at once to give them\l"
	.string "a new Hidden Power type.\p"
	.string "Would you like to change {STR_VAR_1}'s\n"
	.string "Hidden Power to one of these types?$"

HyperTraining_String_8::
	.string "How can I help {STR_VAR_1} today?$"

HyperTraining_Text_StartHyperTraining:
	.string "Got it! Let's do some Hyper Training!\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "… … … … … …\n"
	.string "… … … … … …$"

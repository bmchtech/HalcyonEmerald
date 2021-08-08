.set LOCALID_COZMO, 1

FallarborTown_CozmosHouse_MapScripts:: @ 8200F12
	.byte 0

FallarborTown_CozmosHouse_EventScript_ProfCozmo:: @ 8200F13
	lockall
	faceplayer
	checkitem ITEM_TM27_RETURN, 1
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_GaveMeteorite
	checkitem ITEM_METEORITE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite:: @ 8200F38
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM27_RETURN
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	setvar VAR_0x8004, ITEM_METEORITE
	call Common_EventScript_PlayerHandedOverTheItem
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_NoticeMeteorite:: @ 8200F8B
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_AskForMeteorite:: @ 8200F9C
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite:: @ 8200FA5
	setflag FLAG_TEMP_2
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_GaveMeteorite:: @ 8200FB2
	checkPartyHasSpecies SPECIES_DEOXYS
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ExplainDeoxysFormChange
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_ExplainDeoxysFormChange::
	goto_if_set FLAG_SHOWN_DEOXYS_TO_COSMO, FallarborTown_CozmosHouse_EventScript_ShouldChangeDeoxysForm
	setflag FLAG_SHOWN_DEOXYS_TO_COSMO
	msgbox FallarborTown_CozmosHouse_Text_MeteorAffectsDeoxys, MSGBOX_DEFAULT
	delay 40
	playse SE_PIN
	applymovement LOCALID_COZMO, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_COZMO, Common_Movement_Delay48
	waitmovement 0
FallarborTown_CozmosHouse_EventScript_ShouldChangeDeoxysForm::
	msgbox FallarborTown_CozmosHouse_Text_YouHaveDeoxys, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ChangeDeoxysForm
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_ChangeDeoxysForm::
    msgbox FallarborTown_CozmosHouse_Text_WhichDeoxys, MSGBOX_DEFAULT
    special ChoosePartyMon
	waitstate
    compare VAR_0x8004, 255
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Exit
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
    goto_if_eq FallarborTown_CozmosHouse_EventScript_MonIsEgg
    isChosenMonSpecies SPECIES_DEOXYS
    compare VAR_RESULT, FALSE
    goto_if_eq FallarborTown_CozmosHouse_EventScript_MonIsNotDeoxys
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge FallarborTown_CozmosHouse_EventScript_Exit
    specialvar VAR_RESULT, ScriptGetPartyMonSpecies
    copyvar VAR_0x8006, VAR_RESULT
	lockall
	faceplayer
FallarborTown_CozmosHouse_EventScript_DeoxysMultichoice::
    bufferpartymonnick 0, VAR_0x8004
    message FallarborTown_CozmosHouse_Text_WhichForm
    waitmessage
	multichoice 0, 0, MULTI_DEOXYS_FORMES, 0
	switch VAR_RESULT
	case 0, FallarborTown_CozmosHouse_DeoxysNormal
    case 1, FallarborTown_CozmosHouse_DeoxysAttack
	case 2, FallarborTown_CozmosHouse_DeoxysDefense
    case 3, FallarborTown_CozmosHouse_DeoxysSpeed
	case 4, FallarborTown_CozmosHouse_EventScript_Exit
    case MULTI_B_PRESSED, FallarborTown_CozmosHouse_EventScript_Exit
    end

FallarborTown_CozmosHouse_EventScript_Exit::
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_MonIsEgg::
	msgbox FallarborTown_CozmosHouse_Text_EggIsNotReacting, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_MonIsNotDeoxys::
	msgbox FallarborTown_CozmosHouse_Text_PokemonIsNotReacting, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_DeoxysNormal::
    setvar VAR_0x8005, SPECIES_DEOXYS
    compare VAR_0x8006, VAR_0x8005
    goto_if_eq FallarborTown_CozmosHouse_EventScript_DeoxysAlreadyThatForme
	special ChangeMonSpecies
    msgbox FallarborTown_CozmosHouse_Text_DeoxysBalancedStats, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_DeoxysAttack::
    setvar VAR_0x8005, SPECIES_DEOXYS_ATTACK
    compare VAR_0x8006, VAR_0x8005
    goto_if_eq FallarborTown_CozmosHouse_EventScript_DeoxysAlreadyThatForme
	special ChangeMonSpecies
    msgbox FallarborTown_CozmosHouse_Text_DeoxysAttackingStats, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_DeoxysDefense::
    setvar VAR_0x8005, SPECIES_DEOXYS_DEFENSE
    compare VAR_0x8006, VAR_0x8005
    goto_if_eq FallarborTown_CozmosHouse_EventScript_DeoxysAlreadyThatForme
	special ChangeMonSpecies
    msgbox FallarborTown_CozmosHouse_Text_DeoxysDefendingStats, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_DeoxysSpeed::
    setvar VAR_0x8005, SPECIES_DEOXYS_SPEED
    compare VAR_0x8006, VAR_0x8005
    goto_if_eq FallarborTown_CozmosHouse_EventScript_DeoxysAlreadyThatForme
	special ChangeMonSpecies
    msgbox FallarborTown_CozmosHouse_Text_DeoxysSanicStats, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_DeoxysAlreadyThatForme::
	msgbox FallarborTown_CozmosHouse_Text_DeoxysAlreadyThatForme, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_CozmosWife:: @ 8200FBC
	lockall
	faceplayer
	checkitem ITEM_TM27_RETURN, 1
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsSad:: @ 8200FDA
	goto_if_unset FLAG_RECEIVED_GALLADITE, FallarborTown_CozmosHouse_EventScript_GiveGalladite
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_GiveGalladite::
	msgbox FallarborTown_CozmosHouse_Text_PleaseTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GALLADITE
	setflag FLAG_RECEIVED_GALLADITE
	releaseall
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsHappy:: @ 8200FE4
	goto_if_unset FLAG_RECEIVED_GALLADITE, FallarborTown_CozmosHouse_EventScript_GiveGalladite
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow: @ 8200FEE
	.string "Prof. Cozmo: Oh…\n"
	.string "I never should have let myself be\l"
	.string "conned into telling Team Magma where\l"
	.string "you can find Meteorites…\p"
	.string "That Meteorite from Meteor Falls…\n"
	.string "It's never going to be mine now…$"

FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt: @ 82010A2
	.string "Oh!\n"
	.string "Hah?\p"
	.string "That item…\p"
	.string "Could it be?\p"
	.string "Is it the Meteorite that Team Magma\n"
	.string "took from Meteor Falls?\p"
	.string "Please, may I have it?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"

FallarborTown_CozmosHouse_Text_PleaseUseThisTM: @ 8201159
	.string "Prof. Cozmo: This TM, it represents\n"
	.string "my feeling of gratitude.\l"
	.string "Please use it!$"

FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch: @ 82011A5
	.string "Prof. Cozmo: Oh, I can't believe it.\n"
	.string "This is really, really great!\p"
	.string "This is really going to help my research!$"

FallarborTown_CozmosHouse_Text_CrushedWithDisappointment: @ 8201212
	.string "Prof. Cozmo: Oh, but…\n"
	.string "I'm crushed with disappointment…$"

FallarborTown_CozmosHouse_Text_MayIHaveMeteorite: @ 8201249
	.string "Prof. Cozmo: Please, may I have that\n"
	.string "Meteorite?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"

FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls: @ 82012BC
	.string "Prof. Cozmo went off to Meteor Falls\n"
	.string "on Route 114 with some people from\l"
	.string "Team Magma.$"

FallarborTown_CozmosHouse_Text_FeelSorryForCozmo: @ 8201310
	.string "Poor Prof. Cozmo…\n"
	.string "He's so depressed… I feel sorry for him.$"

FallarborTown_CozmosHouse_Text_CozmoIsSoHappy: @ 820134B
	.string "Look at Prof. Cozmo…\n"
	.string "He's so happy! I think it's cute.$"

FallarborTown_CozmosHouse_Text_PleaseTakeThis:
	.string "Thank you for saving Prof. Cozmo!\p"
	.string "Please take this stone as a sign of\n"
	.string "our gratitude.$"

FallarborTown_CozmosHouse_Text_MeteorAffectsDeoxys:
	.string "Ah! It's you! I've made a discovery!\p"
	.string "It seems the Meteorite has something\n"
	.string "to do with a Pokémon called Deoxys.\p"
	.string "If exposed to the Meteorite, it'll\n"
	.string "change shape!$"

FallarborTown_CozmosHouse_Text_YouHaveDeoxys::
	.string "Oh! Is that a Deoxys with you?\p"
	.string "Would you like to bring it closer to\n"
	.string "the Meteorite?$"

FallarborTown_CozmosHouse_Text_WhichDeoxys::
	.string "Which Deoxys would you like to bring\n"
	.string "closer to the Meteorite?$"

FallarborTown_CozmosHouse_Text_EggIsNotReacting:
	.string "The Egg is not reacting to the\n"
	.string "Meteorite.$"

FallarborTown_CozmosHouse_Text_PokemonIsNotReacting:
	.string "The Pokémon is not reacting to the\n"
	.string "Meteorite.$"

FallarborTown_CozmosHouse_Text_WhichForm:
	.string "{STR_VAR_1} is reacting to the\n"
	.string "Meteorite!\p"
	.string "Which Forme should it change into?$"

FallarborTown_CozmosHouse_Text_DeoxysBalancedStats:
	.string "{STR_VAR_1} has changed to have\n"
	.string "balanced stats!$"

FallarborTown_CozmosHouse_Text_DeoxysAttackingStats:
	.string "{STR_VAR_1} has changed to have\n"
	.string "superior stats for attacking!$"

FallarborTown_CozmosHouse_Text_DeoxysDefendingStats:
	.string "{STR_VAR_1} has changed to have\n"
	.string "superior stats for defending!$"

FallarborTown_CozmosHouse_Text_DeoxysSanicStats:
	.string "{STR_VAR_1} has changed to have\n"
	.string "increased Speed!$"

FallarborTown_CozmosHouse_Text_DeoxysAlreadyThatForme:
	.string "{STR_VAR_1} is already in that Forme!$"

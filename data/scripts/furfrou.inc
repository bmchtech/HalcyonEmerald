@ Furfrou haircut script
@ Vars used:
@ gSpecialVar_0x8004: set to the party slot of the chosen Furfrou
@ gSpecialVar_0x8005: set to the form to change Furfrou to
@ gSpecialVar_0x8006: Furfrou's initial form

Furfrou_Haircut_Main::
    lockall
    faceplayer
    msgbox Furfrou_Text_DoYouKnowFurfrou, MSGBOX_YESNO
    compare VAR_RESULT, NO
	goto_if_eq Furfrou_Trim_Exit
    checkPartyHasSpecies SPECIES_FURFROU
	compare VAR_RESULT, FALSE
	goto_if_eq Furfrou_Trim_NoFurfrouInParty
    msgbox Furfrou_Text_WhichFurfrou, MSGBOX_DEFAULT
    special ChoosePartyMon
	waitstate
    compare VAR_0x8004, 255
	goto_if_eq Furfrou_Trim_Exit
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
    goto_if_eq Furfrou_Trim_SelectedMonIsEgg
    isChosenMonSpecies SPECIES_FURFROU
    compare VAR_RESULT, FALSE
    goto_if_eq Furfrou_Trim_SelectedMonIsntFurfrou
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Furfrou_Trim_Exit
    specialvar VAR_RESULT, ScriptGetPartyMonSpecies
    copyvar VAR_0x8006, VAR_RESULT
    copyvar VAR_0x8007, VAR_0x8004 @ Need to copy this because it gets overwritten by the multichoice
    goto Furfrou_Trim_Multichoice
Furfrou_Trim_Multichoice::
    bufferpartymonnick 0, VAR_0x8004
    msgbox Furfrou_Text_WhichStyle, MSGBOX_DEFAULT
    waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_FURFROU_TRIMS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
    case 0, Furfrou_HeartTrim
	case 1, Furfrou_StarTrim
    case 2, Furfrou_DiamondTrim
	case 3, Furfrou_DebutanteTrim
    case 4, Furfrou_MatronTrim
	case 5, Furfrou_DandyTrim
	case 6, Furfrou_LaReineTrim
    case 7, Furfrou_KabukiTrim
	case 8, Furfrou_PharaohTrim
    case 9, Furfrou_BackToNatural
	case 10, Furfrou_Trim_Exit
    case MULTI_B_PRESSED, Furfrou_Trim_Exit
    end

Furfrou_HeartTrim::
    setvar VAR_0x8005, SPECIES_FURFROU_HEART_TRIM
    goto Furfrou_Trim_CheckMoney

Furfrou_StarTrim::
    setvar VAR_0x8005, SPECIES_FURFROU_STAR_TRIM
    goto Furfrou_Trim_CheckMoney

Furfrou_DiamondTrim::
    setvar VAR_0x8005, SPECIES_FURFROU_DIAMOND_TRIM
    goto Furfrou_Trim_CheckMoney

Furfrou_DebutanteTrim::
    setvar VAR_0x8005, SPECIES_FURFROU_DEBUTANTE_TRIM
    goto Furfrou_Trim_CheckMoney

Furfrou_MatronTrim::
    setvar VAR_0x8005, SPECIES_FURFROU_MATRON_TRIM
    goto Furfrou_Trim_CheckMoney

Furfrou_DandyTrim::
    setvar VAR_0x8005, SPECIES_FURFROU_DANDY_TRIM
    goto Furfrou_Trim_CheckMoney

Furfrou_LaReineTrim::
    setvar VAR_0x8005, SPECIES_FURFROU_LA_REINE_TRIM
    goto Furfrou_Trim_CheckMoney

Furfrou_KabukiTrim::
    setvar VAR_0x8005, SPECIES_FURFROU_KABUKI_TRIM
    goto Furfrou_Trim_CheckMoney

Furfrou_PharaohTrim::
    setvar VAR_0x8005, SPECIES_FURFROU_PHARAOH_TRIM
    goto Furfrou_Trim_CheckMoney

Furfrou_BackToNatural::
    setvar VAR_0x8005, SPECIES_FURFROU
    goto Furfrou_Trim_CheckMoney

Furfrou_Trim_CheckMoney::
    compare VAR_0x8006, SPECIES_FURFROU
    call_if_eq Furfrou_Trim_CheckNaturalToNatural
    compare VAR_0x8006, VAR_0x8005
    call_if_eq Furfrou_Trim_ConfirmSameTrim
	checkmoney 500, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Furfrou_Trim_NotEnoughMoney
    msgbox Furfrou_Text_TakeMoney, MSGBOX_DEFAULT
    removemoney 500, 0
    msgbox Furfrou_Text_StartTrim, MSGBOX_DEFAULT
	fadescreen 1
    copyvar VAR_0x8004, VAR_0x8007
    special ChangeMonSpecies
    msgbox Furfrou_Text_Snip, MSGBOX_AUTOCLOSE
    waitmessage
	fadescreen 0
    msgbox Furfrou_Text_ThankYou, MSGBOX_DEFAULT
    showmonpic VAR_0x8005, 10, 3
    playmoncry SPECIES_FURFROU, 2
    waitmoncry
    waitbuttonpress
    hidemonpic
    msgbox Furfrou_Text_TryNewStyle, MSGBOX_DEFAULT
    releaseall
    end

Furfrou_Trim_CheckNaturalToNatural::
    compare VAR_0x8005, SPECIES_FURFROU
    goto_if_eq Furfrou_Trim_AlreadyNatural
    return

Furfrou_Trim_AlreadyNatural::
    msgbox Furfrou_Text_AlreadyHasNaturalLook, MSGBOX_DEFAULT
    releaseall
    end

Furfrou_Trim_ConfirmSameTrim::
    msgbox Furfrou_Text_SameStyle, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq Furfrou_Trim_Multichoice
    return

Furfrou_Trim_NoFurfrouInParty::
    msgbox Furfrou_Text_PlayerNoFurfrou, MSGBOX_DEFAULT
    releaseall
    end

Furfrou_Trim_SelectedMonIsEgg::
    msgbox Furfrou_Text_CantStyleEgg, MSGBOX_DEFAULT
    releaseall
    end

Furfrou_Trim_SelectedMonIsntFurfrou::
    msgbox Furfrou_Text_NotFurfrou, MSGBOX_DEFAULT
    releaseall
    end

Furfrou_Trim_NotEnoughMoney:
    msgbox Furfrou_Text_PlayerNoMoney, MSGBOX_DEFAULT
    releaseall
    end

Furfrou_Trim_Exit::
    releaseall
    end

Furfrou_Text_DoYouKnowFurfrou:
    .string "Do you know the Pokémon Furfrou?\n"
    .string "They are very rare here in Hoenn.\p"
    .string "But if you have a Furfrou with you,\n"
    .string "I'll trim it for you for ¥500.$"

Furfrou_Text_PlayerNoMoney:
    .string "Oh, dear.\n"
    .string "You don't seem to have ¥500.$"

Furfrou_Text_PlayerNoFurfrou: 
    .string "Oh, dear. You don't have a\n"
    .string "Furfrou with you today.$"

Furfrou_Text_WhichFurfrou: 
    .string "All right.\n"
    .string "Which Furfrou will I trim today?$"

Furfrou_Text_WhichStyle: 
    .string "And what kind of style were you\n"
    .string "thinking of?$"

Furfrou_Text_NotFurfrou:
    .string "Oh, I am sorry, but…\n"
    .string "I can't trim any Pokémon but Furfrou.$"

Furfrou_Text_CantStyleEgg:
    .string "Oh dear! I can't style an Egg.$"

Furfrou_Text_StartTrim:
    .string "Then let's start.\n"
    .string "Please stay calm, Furfrou.$"

Furfrou_Text_Snip:
    .string "Snip… {PAUSE 32}\n"
    .string "Snippity-snip… {PAUSE 32}\l"
    .string "Snip-snip… Snip!$"

Furfrou_Text_ThankYou:
    .string "Thank you for your patience!\p"
    .string "It's all done.\n"
    .string "Your Furfrou looks gorgeous!$"

Furfrou_Text_TakeMoney:
    .string "All right then!\p"
    .string "First, I'll take ¥500 from\n"
    .string "you for the trim.$"

Furfrou_Text_TryNewStyle:
    .string "If you ever wish to try out a\n"
    .string "new style, come back again!$"

Furfrou_Text_SameStyle:
    .string "So you would like to keep the same\n"
    .string "style and just touch up the ends a bit,\l"
    .string "is that right?$"

Furfrou_Text_AlreadyHasNaturalLook:
    .string "Oh? But your Furfrou already has\n"
    .string "its natural look.$"

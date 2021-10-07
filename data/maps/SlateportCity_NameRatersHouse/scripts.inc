.set NATURE_CHANGER_COST, 5

SlateportCity_NameRatersHouse_MapScripts::
	.byte 0

SlateportCity_NameRatersHouse_NatureChanger::
	lockall
	faceplayer
	call_if_unset FLAG_MET_NATURE_CHANGER, SlateportCity_NameRatersHouse_NatureChangerIntro
	msgbox NatureChanger_Text_ChoosePokemon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Nature_Changer_No
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Nature_Changer_Egg
	special BufferChosenMonNature
	bufferpartymonnick 0, VAR_0x8004
	msgbox NatureChanger_Text_MonHasNature, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
	compare VAR_RESULT, 0
	goto_if_eq Nature_Changer_Neutral_Nature
	msgbox NatureChanger_Text_BadTaste, MSGBOX_DEFAULT
	goto NatureChanger_2

SlateportCity_NameRatersHouse_NatureChangerIntro::
	msgbox NatureChanger_Text_Intro
	setflag FLAG_MET_NATURE_CHANGER
	return

Nature_Changer_Neutral_Nature::
	msgbox NatureChanger_Text_BoringTaste, MSGBOX_DEFAULT
	goto NatureChanger_2

NatureChanger_2::
	msgbox NatureChanger_Text_HowAboutIt, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq Nature_Changer_Yes
	compare VAR_RESULT, 0
	goto_if_eq Nature_Changer_No

Nature_Changer_Yes::
	checkitem ITEM_ORAN_BERRY, NATURE_CHANGER_COST
	compare VAR_RESULT, 1
	goto_if_eq Nature_Changer_Stat_Up
	compare VAR_RESULT, 0
	goto_if_eq Nature_Changer_Berry_Poor

Nature_Changer_No::
	msgbox NatureChanger_Text_SomeOtherTime, MSGBOX_DEFAULT
	releaseall
	end

Nature_Changer_Egg::
	msgbox NatureChanger_Text_ThisIsEgg, MSGBOX_DEFAULT
	releaseall
	end

Nature_Changer_Berry_Poor::
	msgbox NatureChanger_Text_NeedMoreBerries, MSGBOX_DEFAULT
	releaseall
	end

Nature_Changer_Stat_Up::
	message NatureChanger_Text_WhichColorPrefer
	waitmessage
	multichoice 0, 0, MULTI_FLAVORS, 0
	switch VAR_RESULT
	case 0, Nature_Up_ATK
	case 1, Nature_Up_DEF
	case 2, Nature_Up_SPATK
	case 3, Nature_Up_SPDEF
	case 4, Nature_Up_SPEED
	case 127, Nature_Changer_No

Nature_Up_ATK::
	setvar VAR_0x8005, 0
	goto Nature_Changer_Stat_Down

Nature_Up_DEF::
	setvar VAR_0x8005, 1
	goto Nature_Changer_Stat_Down
	
Nature_Up_SPEED::
	setvar VAR_0x8005, 2
	goto Nature_Changer_Stat_Down
	
Nature_Up_SPATK::
	setvar VAR_0x8005, 3
	goto Nature_Changer_Stat_Down
	
Nature_Up_SPDEF::
	setvar VAR_0x8005, 4
	goto Nature_Changer_Stat_Down
	
Nature_Changer_Stat_Down::
	message NatureChanger_Text_WhichColorDislike
	waitmessage
	multichoice 0, 0, MULTI_FLAVORS, 0
	switch VAR_RESULT
	case 0, Nature_Down_ATK
	case 1, Nature_Down_DEF
	case 2, Nature_Down_SPATK
	case 3, Nature_Down_SPDEF
	case 4, Nature_Down_SPEED
	case 127, Nature_Changer_No

Nature_Down_ATK::
	setvar VAR_0x8006, 0
	goto Nature_Changer_Nature_Change

Nature_Down_DEF::
	setvar VAR_0x8006, 1
	goto Nature_Changer_Nature_Change
	
Nature_Down_SPEED::
	setvar VAR_0x8006, 2
	goto Nature_Changer_Nature_Change
	
Nature_Down_SPATK::
	setvar VAR_0x8006, 3
	goto Nature_Changer_Nature_Change
	
Nature_Down_SPDEF::
	setvar VAR_0x8006, 4
	goto Nature_Changer_Nature_Change

Nature_Changer_Nature_Change::
	removeitem ITEM_ORAN_BERRY, NATURE_CHANGER_COST
	bufferpartymonnick 0, VAR_0x8004
	msgbox NatureChanger_Text_SpecialPokeblock, MSGBOX_DEFAULT
	fadescreen 1
	special ChangePokemonNature
	special BufferChosenMonNature
	specialvar VAR_0x8007, GetSelectedMonNicknameAndSpecies
	waitse
	msgbox NatureChanger_Text_Pause, MSGBOX_AUTOCLOSE
	playmoncry VAR_0x8007, 0
	waitmoncry
	fadescreen 0
	playfanfare 0x173
	waitfanfare
	msgbox NatureChanger_Text_MonHasNature1, MSGBOX_AUTOCLOSE
	waitfanfare
	msgbox NatureChanger_Text_ItIsDone MSGBOX_AUTOCLOSE
	releaseall
	end

NatureChanger_Text_Intro:
	.string "Ohohoho! You are a Trainer, yes?\p"
	.string "How fortunate you are to have\n"
	.string "stumbled into my home!\p"
	.string "I was once the greatest {POKEBLOCK}\n"
	.string "chef in all of Kalos!\p"
	.string "With but one taste of my {POKEBLOCK}s,\n"
	.string "your Pokémon will never want anything\l"
	.string "else again!\p"
	.string "Now, listen!\p"
	.string "A Pokémon's taste in {POKEBLOCK}s\n"
	.string "determines their very Nature!\p"
	.string "How they battle, how they grow!\n"
	.string "All decided by their likes and dislikes!\p"
	.string "So, do you see?\p"
	.string "If a Pokémon wants only the {POKEBLOCK}\n"
	.string "flavor I have given them, their Nature\l"
	.string "will change!$"

NatureChanger_Text_ChoosePokemon:
	.string "Which Pokémon needs the help of my\n"
	.string "special {POKEBLOCK}s?$"

NatureChanger_Text_MonHasNature:
	.string "Ohohoho! I see your {STR_VAR_1} has\n"
	.string "a {STR_VAR_2} Nature, yes?$"

NatureChanger_Text_BadTaste:
	.string "That means it likes {STR_VAR_1}s.\n"
	.string "This simply will not do!\p"
	.string "You will bring me five Oran Berries,\n"
	.string "and I shall create a {POKEBLOCK} that\l"
	.string "will fix this travesty!$"

NatureChanger_Text_HowAboutIt:
	.string "So, we will do this, yes?\n"
	.string "We will change your Pokémon's Nature?$"

NatureChanger_Text_SomeOtherTime:
	.string "No?!\n"
	.string "Surely you cannot mean this!$"

NatureChanger_Text_ThisIsEgg:
	.string "This is but an Egg!\p$"
	.string "An Egg cannot eat a {POKEBLOCK}!$"

NatureChanger_Text_NeedMoreBerries:
	.string "I need more Oran Berries than that.\n"
	.string "Bring me five!$"

NatureChanger_Text_BoringTaste:
	.string "That means it will eat any {POKEBLOCK}!\n"
	.string "This simply will not do!\p"
	.string "You will bring me five Oran Berries,\n"
	.string "and I shall create a {POKEBLOCK} that\l"
	.string "will fix this travesty!$"

NatureChanger_Text_WhichColorPrefer:
	.string "Ah! Very good!\p" 
	.string "Now, which {POKEBLOCK} color should\n"
	.string "your Pokémon prefer?$"

NatureChanger_Text_WhichColorDislike:
	.string "And which {POKEBLOCK} color should\n"
	.string "it dislike?$"

NatureChanger_Text_SpecialPokeblock:
	.string "Ohohoho! I will make a special\n"
	.string "{POKEBLOCK} from your Oran Berries.\p"
	.string "Your {STR_VAR_1}'s taste in {POKEBLOCK}s\n"
	.string "shall be much improved!\p"
	.string "Wait just a moment…$"

NatureChanger_Text_Pause:
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "… … … … … …\n"
	.string "… … … … … …$"

NatureChanger_Text_ItIsDone:
	.string "Oho! It is done!\p"
	.string "Your {STR_VAR_1} has much better\n"
	.string "taste in {POKEBLOCK}s than before!$"

NatureChanger_Text_MonHasNature1:
	.string "{STR_VAR_1} ate the strange {POKEBLOCK}.\p"
	.string "It seems {STR_VAR_1} really liked it!\n"
	.string "{STR_VAR_1}'s Nature became {STR_VAR_2}!$"

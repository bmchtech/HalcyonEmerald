LavaridgeTown_PokemonCenter_1F_MapScripts:: @ 81FFAFA
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavaridgeTown_PokemonCenter_1F_OnTransition: @ 81FFB05
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

@ VAR_0x800B is the Nurse's object event id
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse:: @ 81FFB0E
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Youngster:: @ 81FFB1C
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Woman:: @ 81FFB25
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman:: @ 81FFB2E
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_MoomooMilk::
	lock
	faceplayer
	showmoneybox 0, 0, 0
	msgbox LavaridgeTown_PokemonCenter_1F_Text_WantToBuyMoomooMilk, MSGBOX_DEFAULT
	multichoice 8, 0, MULTI_MOOMOO_MILK, 0
	switch VAR_RESULT
	case 0, LavaridgeTown_PokemonCenter_1F_EventScript_Buy1MoomooMilk
	case 1, LavaridgeTown_PokemonCenter_1F_EventScript_Buy12MoomooMilk
	case 2, LavaridgeTown_PokemonCenter_1F_EventScript_ExitWithoutBuying
	case 127, LavaridgeTown_PokemonCenter_1F_EventScript_ExitWithoutBuying
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Buy1MoomooMilk::
	checkmoney 500, 0
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_PokemonCenter_1F_EventScript_NotEnoughMoney
	checkitemspace ITEM_MOOMOO_MILK, 1
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_PokemonCenter_1F_EventScript_NotEnoughSpace
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HereYouGo, MSGBOX_DEFAULT
	removemoney 500, 0
	updatemoneybox 0, 0
	giveitem ITEM_MOOMOO_MILK
	hidemoneybox
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Buy12MoomooMilk::
	checkmoney 6000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_PokemonCenter_1F_EventScript_NotEnoughMoney
	checkitemspace ITEM_MOOMOO_MILK, 12
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_PokemonCenter_1F_EventScript_NotEnoughSpace
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HereYouGo, MSGBOX_DEFAULT
	removemoney 6000, 0
	updatemoneybox 0, 0
	giveitem ITEM_MOOMOO_MILK, 12
	hidemoneybox
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_ExitWithoutBuying::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_ThatsTooBad, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_NotEnoughMoney::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_NotEnoughSpace::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

LavaridgeTown_PokemonCenter_1F_Text_WantToBuyMoomooMilk:
	.string "Moomoo Milk?\p"
	.string "It's great before entering the\n"
	.string "hot spring!\p"
	.string "And even better afterward.\n"
	.string "How about some?$"

LavaridgeTown_PokemonCenter_1F_Text_ThatsTooBad:
	.string "Well, now I feel udder-ly useless!$"

LavaridgeTown_PokemonCenter_1F_Text_HereYouGo:
	.string "Here's your Moomoo Milk. Drink up!$"

LavaridgeTown_PokemonCenter_1F_Text_NotEnoughMoney:
	.string "You don't have enough money.$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether: @ 81FFB37
	.string "I think Pokémon get closer to their\n"
	.string "Trainers if they spend time together.\p"
	.string "The longer the better.\n"
	.string "That's what I think.$"

LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate: @ 81FFBAD
	.string "It's sort of magical how just sitting\n"
	.string "in a hot-spring pool can invigorate.\p"
	.string "I wish I could let my Pokémon\n"
	.string "soak, too.$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo: @ 81FFC21
	.string "Hohoho! Hey, kid, you can reach\n"
	.string "the hot springs from here.\p"
	.string "If Pokémon are getting rest, so too\n"
	.string "should their Trainers.$"


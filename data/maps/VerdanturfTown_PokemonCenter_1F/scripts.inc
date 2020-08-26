.set LOCALID_NURSE, 1

VerdanturfTown_PokemonCenter_1F_MapScripts:: @ 8202726
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VerdanturfTown_PokemonCenter_1F_OnTransition: @ 8202731
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Nurse:: @ 820273A
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_XscissorTM::
	lock
	faceplayer
	checkitem ITEM_TM81_X_SCISSOR, 1
	compare VAR_RESULT, 1
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_ReceivedTM81
	msgbox VerdanturfTown_PokemonCenter_1F_Text_DoYouLikeBugs, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq VerdanturfTown_PokemonCenter_1F_EventScript_DontLikeBugs
	msgbox VerdanturfTown_PokemonCenter_1F_Text_GiveTM81, MSGBOX_DEFAULT
	giveitem ITEM_TM81_X_SCISSOR
	msgbox VerdanturfTown_PokemonCenter_1F_Text_HaveTM81, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ReceivedTM81::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_HaveTM81, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_DontLikeBugs::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_DontLikeBugs, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart PokeMart_PokeCenterVerdanturfTown
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokeMart_PokeCenterVerdanturfTown::
	.2byte ITEM_HEAL_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_NONE
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman:: @ 8202748
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM:: @ 8202751
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_Text_DoYouLikeBugs:
	.string "Yo! Bug-type Pokémon are wickedly cool!\n"
	.string "You agree, right?$"

VerdanturfTown_PokemonCenter_1F_Text_GiveTM81:
	.string "Yeah! I like you. We can be friends.\p"
	.string "And you can have this TM!$"

VerdanturfTown_PokemonCenter_1F_Text_HaveTM81:
	.string "TM81 is X-scissor.\n"
	.string "It's a wickedly cool Bug-type attack!$"

VerdanturfTown_PokemonCenter_1F_Text_DontLikeBugs:
	.string "No? We're not on the same wavelength.$"

VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon: @ 820275A
	.string "You can't consider yourself a real\n"
	.string "Trainer if you don't have faith\l"
	.string "in your Pokémon.\p"
	.string "Only those people who can believe\n"
	.string "in their battling Pokémon can win\l"
	.string "through to the very end.$"

VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent: @ 820280B
	.string "The reason why anyone would visit\n"
	.string "Verdanturf…\p"
	.string "It's the Battle Tent. It goes without\n"
	.string "saying.\p"
	.string "Or is there somebody here that you\n"
	.string "came to see?$"


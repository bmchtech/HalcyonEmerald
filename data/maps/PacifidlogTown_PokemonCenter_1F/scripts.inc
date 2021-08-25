.set LOCALID_NURSE, 1

PacifidlogTown_PokemonCenter_1F_MapScripts:: @ 82034A7
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PacifidlogTown_PokemonCenter_1F_OnTransition: @ 82034B2
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Nurse:: @ 82034B6
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Girl:: @ 82034C4
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Woman:: @ 82034CD
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_OldMan:: @ 82034D6
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTM::
	lock
	faceplayer
	checkitem ITEM_TM64_EXPLOSION, 1
	compare VAR_RESULT, 1
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_HaveExplosion
	msgbox PacifidlogTown_PokemonCenter_1F_Text_GiveExplosion, MSGBOX_DEFAULT
	giveitem ITEM_TM64_EXPLOSION
	msgbox PacifidlogTown_PokemonCenter_1F_Text_HaveExplosion, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_HaveExplosion::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_HaveExplosion, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard: @ 82034DF
	.string "What color is your Trainer Card?\n"
	.string "Mine's copper!$"

PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola: @ 820350F
	.string "Pacifidlog Town floats on top of\n"
	.string "a colony of Corsola.\p"
	.string "If I told you that, would you believe\n"
	.string "me?$"

PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats: @ 820356F
	.string "The ancestors of the people in\n"
	.string "Pacifidlog were said to have been\l"
	.string "born on boats and then lived and died\l"
	.string "aboard them.\p"
	.string "I understand that they lived that way\n"
	.string "because they were searching for\l"
	.string "something.$"

PacifidlogTown_PokemonCenter_1F_Text_GiveExplosion: @ 82C7CFA
	.string "I don't intend to be going nowhere\n"
	.string "fast in the sticks like this forever.\p"
	.string "You watch me, I'll get out to the city\n"
	.string "and become a huge hit.\p"
	.string "Seriously, I'm going to cause\n"
	.string "a huge Explosion of popularity!\p"
	.string "Since you overheard that, I'll happily\n"
	.string "give you this TM for Explosion!$"

PacifidlogTown_PokemonCenter_1F_Text_HaveExplosion: @ 82C7E7A
	.string "For a long time, I've taught Pokémon\n"
	.string "how to use Explosion, but I've yet\l"
	.string "to ignite my own Explosion…\p"
	.string "Maybe it's because deep down,\n"
	.string "I would rather stay here…$"

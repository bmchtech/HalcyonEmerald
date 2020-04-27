Route117_PokemonDayCare_MapScripts:: @ 822BBB1
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
	.byte 0

Route117_PokemonDayCare_OnTransition: @ 822BBB7
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
	end

Route117_PokemonDayCare_EventScript_TogepiEgg::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TOGEPI_EGG, Route117_PokemonDayCare_EventScript_ReceivedEgg
	msgbox Route117_PokemonDayCare_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route117_PokemonDayCare_EventScript_DeclineEgg
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Route117_PokemonDayCare_EventScript_NoRoomForEgg
	msgbox Route117_PokemonDayCare_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TOGEPI_EGG
	playfanfare MUS_FANFA4
	message Route117_PokemonDayCare_Text_ReceivedTheEgg
	waitfanfare
	giveEgg SPECIES_TOGEPI
	release
	end

Route117_PokemonDayCare_EventScript_ReceivedEgg::
	msgbox Route117_PokemonDayCare_Text_SometimesEggFoundAtDayCare, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_NoRoomForEgg::
	msgbox Route117_PokemonDayCare_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_EventScript_DeclineEgg::
	msgbox Route117_PokemonDayCare_Text_AsYouWishThen, MSGBOX_DEFAULT
	release
	end

Route117_PokemonDayCare_Text_HaveEggWillYouTakeIt:
	.string "Ooh, you're a Pokémon Trainer,\n"
	.string "aren't you?\p "
	.string "See, I found an Egg at the Day Care,\n"
	.string "and I've been tring to find a good\l"
	.string "home for it.\p"
	.string "Would you be interested in taking it?$"

Route117_PokemonDayCare_Text_HopeYoullWalkPlentyWithEgg:
	.string "Oh, thank you! Please take good care\n"
	.string "of this Egg!$"

Route117_PokemonDayCare_Text_ReceivedTheEgg:
	.string "{PLAYER} received the Egg.$"

Route117_PokemonDayCare_Text_NoRoomForThisEgg:
	.string "Oh? You've got a full party.\n"
	.string "There's no room for this Egg…$"

Route117_PokemonDayCare_Text_AsYouWishThen:
	.string "Oh…\p"
	.string "That's a shame. Let me know if you\n"
	.string "change your mind.$"

Route117_PokemonDayCare_Text_SometimesEggFoundAtDayCare:
	.string "Sometimes Eggs are found here at the\n"
	.string "Day Care, but no one knows where they\l"
	.string "come from.$"

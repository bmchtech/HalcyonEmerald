General_Pokemart_Script::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
    goto_if_set FLAG_BADGE07_GET, Mart_Mind_Badge
	goto_if_set FLAG_BADGE06_GET, Mart_Feather_Badge
	goto_if_set FLAG_BADGE05_GET, Mart_Balance_Badge
	goto_if_set FLAG_BADGE04_GET, Mart_Heat_Badge
	goto_if_set FLAG_BADGE03_GET, Mart_Dynamo_Badge
	goto_if_set FLAG_BADGE02_GET, Mart_Knuckle_Badge
	goto_if_set FLAG_BADGE01_GET, Mart_Stone_Badge
	pokemart PokeMart_No_Badges
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokeMart_No_Badges::
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_RED_CARD
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_NONE
	release
	end

Mart_Stone_Badge::
	pokemart PokeMart_Stone_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokeMart_Stone_Badge::
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_RED_CARD
    .2byte ITEM_EJECT_BUTTON
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_ABSORB_BULB
	.2byte ITEM_NONE
	release
	end
	
Mart_Knuckle_Badge::
	pokemart PokeMart_Knuckle_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokeMart_Knuckle_Badge::
	.2byte ITEM_MENTAL_HERB
    .2byte ITEM_WHITE_HERB
	.2byte ITEM_RED_CARD
    .2byte ITEM_EJECT_BUTTON
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_ABSORB_BULB
    .2byte ITEM_SNOWBALL
	.2byte ITEM_NONE
	release
	end
	
Mart_Dynamo_Badge::
	pokemart PokeMart_Dynamo_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokeMart_Dynamo_Badge::
	.2byte ITEM_MENTAL_HERB
    .2byte ITEM_WHITE_HERB
	.2byte ITEM_RED_CARD
    .2byte ITEM_EJECT_BUTTON
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_ABSORB_BULB
    .2byte ITEM_SNOWBALL
    .2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_NONE
	release
	end

Mart_Heat_Badge::
	pokemart PokeMart_Heat_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokeMart_Heat_Badge::
	.2byte ITEM_MENTAL_HERB
    .2byte ITEM_WHITE_HERB
    .2byte ITEM_POWER_HERB
	.2byte ITEM_RED_CARD
    .2byte ITEM_EJECT_BUTTON
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_ABSORB_BULB
    .2byte ITEM_SNOWBALL
    .2byte ITEM_LUMINOUS_MOSS
    .2byte ITEM_AIR_BALLOON
	.2byte ITEM_NONE
	release
	end
	
Mart_Balance_Badge::
	pokemart PokeMart_Balance_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokeMart_Balance_Badge::
	.2byte ITEM_MENTAL_HERB
    .2byte ITEM_WHITE_HERB
    .2byte ITEM_POWER_HERB
	.2byte ITEM_RED_CARD
    .2byte ITEM_EJECT_BUTTON
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_ABSORB_BULB
    .2byte ITEM_SNOWBALL
    .2byte ITEM_LUMINOUS_MOSS
    .2byte ITEM_AIR_BALLOON
    .2byte ITEM_ELECTRIC_SEED
    .2byte ITEM_GRASSY_SEED
    .2byte ITEM_MISTY_SEED
    .2byte ITEM_PSYCHIC_SEED
	.2byte ITEM_NONE
	release
	end
	
Mart_Feather_Badge::
	pokemart PokeMart_Feather_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokeMart_Feather_Badge::
	.2byte ITEM_MENTAL_HERB
    .2byte ITEM_WHITE_HERB
    .2byte ITEM_POWER_HERB
	.2byte ITEM_RED_CARD
    .2byte ITEM_EJECT_BUTTON
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_ABSORB_BULB
    .2byte ITEM_SNOWBALL
    .2byte ITEM_LUMINOUS_MOSS
    .2byte ITEM_AIR_BALLOON
    .2byte ITEM_ELECTRIC_SEED
    .2byte ITEM_GRASSY_SEED
    .2byte ITEM_MISTY_SEED
    .2byte ITEM_PSYCHIC_SEED
    .2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_NONE
	release
	end

Mart_Mind_Badge::
	pokemart PokeMart_Mind_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokeMart_Mind_Badge::
	.2byte ITEM_MENTAL_HERB
    .2byte ITEM_WHITE_HERB
    .2byte ITEM_POWER_HERB
	.2byte ITEM_RED_CARD
    .2byte ITEM_EJECT_BUTTON
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_ABSORB_BULB
    .2byte ITEM_SNOWBALL
    .2byte ITEM_LUMINOUS_MOSS
    .2byte ITEM_AIR_BALLOON
    .2byte ITEM_ELECTRIC_SEED
    .2byte ITEM_GRASSY_SEED
    .2byte ITEM_MISTY_SEED
    .2byte ITEM_PSYCHIC_SEED
    .2byte ITEM_WEAKNESS_POLICY
    .2byte ITEM_FOCUS_SASH
	.2byte ITEM_NONE
	release
	end

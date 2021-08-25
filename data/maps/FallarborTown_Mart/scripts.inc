FallarborTown_Mart_MapScripts:: @ 81FFCBE
	.byte 0

FallarborTown_Mart_EventScript_Clerk:: @ 81FFCBF
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FallarborTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FallarborTown_Mart_Pokemart: @ 81FFCD8
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_NONE
	release
	end

FallarborTown_Mart_EventScript_Woman:: @ 81FFCF4
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_PokefanM:: @ 81FFCFD
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_Skitty:: @ 81FFD06
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, 0
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_Mart_EventScript_DrainPunchTM::
	lock
	faceplayer
	checkitem ITEM_TM60_DRAIN_PUNCH, 1
	compare VAR_RESULT, 1
	goto_if_eq FallarborTown_Mart_EventScript_ReceivedTM60
	msgbox FallarborTown_Mart_Text_FreeSample, MSGBOX_DEFAULT
	giveitem ITEM_TM60_DRAIN_PUNCH
	msgbox FallarborTown_Mart_Text_HaveTM60, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_ReceivedTM60::
	msgbox FallarborTown_Mart_Text_HaveTM60, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_Text_FreeSample:
	.string "Hi there! How are you today?\p"
	.string "Can I interest you in a free sample\n"
	.string "of Devon Corporation's new cleaning\l"
	.string "product, DRAIN PUNCH?\p"
	.string "It's super effective against grime,\n"
	.string "gunk and gunge!\p"
	.string "… … … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "Hmm? You're on an adventure?\n"
	.string "You don't need drain cleaner?\p"
	.string "Well, how about you take this TM\n"
	.string "instead?$"

FallarborTown_Mart_Text_HaveTM60:
	.string "TM60 is also Drain Punch, but it's\n"
	.string "a punch that drains HP instead.\p"
	.string "Please don't use it on any drains!$"

FallarborTown_Mart_Text_DecidingSkittyEvolve: @ 81FFD19
	.string "I'm having a hard time deciding if I\n"
	.string "should make my Skitty evolve or not.\p"
	.string "I only have to use this Moon Stone,\n"
	.string "but it's so hard to decide…\p"
	.string "If I make it evolve, it will become\n"
	.string "much stronger.\p"
	.string "But it will look so different, too.$"

FallarborTown_Mart_Text_Skitty: @ 81FFDFA
	.string "Skitty: Miyao?$"

FallarborTown_Mart_Text_SellNuggetIFound: @ 81FFE09
	.string "This Nugget I found here…\n"
	.string "I suppose I'll have to sell it, seeing\l"
	.string "as how it has no other use.$"


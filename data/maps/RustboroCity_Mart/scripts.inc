RustboroCity_Mart_MapScripts:: @ 8214F05
	.byte 0

RustboroCity_Mart_EventScript_PokefanF:: @ 8214F74
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
	end

RustboroCity_Mart_EventScript_Boy:: @ 8214F7D
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
	end

RustboroCity_Mart_EventScript_BugCatcher:: @ 8214F86
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
	end

RustboroCity_Mart_EventScript_FalseSwipeTM::
	lock
	faceplayer
	checkitem ITEM_TM98_FALSE_SWIPE, 1
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_Mart_EventScript_ReceivedTM98
	msgbox RustboroCity_Mart_Text_ExcuseMeTrainer, MSGBOX_DEFAULT
	giveitem ITEM_TM98_FALSE_SWIPE
	msgbox RustboroCity_Mart_Text_HaveTM98, MSGBOX_DEFAULT
	release
	end

RustboroCity_Mart_EventScript_ReceivedTM98::
	msgbox RustboroCity_Mart_Text_HaveTM98, MSGBOX_DEFAULT
	release
	end

RustboroCity_Mart_Text_ExcuseMeTrainer:
	.string "Excuse me, Trainer over there.\n"
	.string "Do you have a minute?\p"
	.string "You know, sometimes moves are too\n"
	.string "strong to catch a Pokémon.\p"
	.string "You end up making a Pokémon faint even\n"
	.string "when you don't want to.\p"
	.string "For such a common problem, use this!$"

RustboroCity_Mart_Text_HaveTM98:
	.string "False Swipe is a very handy move.\p"
	.string "No matter how many times it's used on\n"
	.string "the opposing Pokémon, it won't cause\l"
	.string "the Pokémon to faint!\p"
	.string "I'm offering it for free right now.\n"
	.string "This is a limited-time promotion!$"

RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish: @ 8214F8F
	.string "I'm buying some Parlyz Heals and\n"
	.string "Antidotes.\p"
	.string "Just in case I run into Paras\n"
	.string "in Petalburg Woods.$"

RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead: @ 8214FF1
	.string "My Pokémon evolved.\n"
	.string "It has a lot of HP now.\p"
	.string "I should buy Super Potions for it\n"
	.string "instead of ordinary Potions.$"

RustboroCity_Mart_Text_GettingEscapeRopeJustInCase: @ 821505C
	.string "I'm getting an Escape Rope just in\n"
	.string "case I get lost in a cave.\p"
	.string "I just need to use it to get back to\n"
	.string "the entrance.$"


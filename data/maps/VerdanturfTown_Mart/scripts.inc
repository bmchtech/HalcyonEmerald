VerdanturfTown_Mart_MapScripts:: @ 8202586
	.byte 0

VerdanturfTown_Mart_EventScript_Clerk:: @ 8202587
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart VerdanturfTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_Mart_Pokemart:
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE
	release
	end

VerdanturfTown_Mart_EventScript_Boy:: @ 82025BA
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_ExpertF:: @ 82025C3
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_Lass:: @ 82025CC
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_PaybackTM::
	lock
	faceplayer
	checkitem ITEM_TM66_PAYBACK, 1
	compare VAR_RESULT, 1
	goto_if_eq VerdanturfTown_Mart_EventScript_ReceivedTM66
	msgbox VerdanturfTown_Mart_Text_SlowPokemon, MSGBOX_DEFAULT
	giveitem ITEM_TM66_PAYBACK
	msgbox VerdanturfTown_Mart_Text_HaveTM66, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_Mart_EventScript_ReceivedTM66::
	msgbox VerdanturfTown_Mart_Text_HaveTM66, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_Mart_Text_SlowPokemon:
	.string "Do you think slow Pokémon ever get\n"
	.string "tired of taking the first hit in every\l"
	.string "battle?\p"
	.string "I think they'd be itching for a little\n"
	.string "payback!\p"
	.string "If you've got any slow Pokémon, give\n"
	.string "this TM a try.$"

VerdanturfTown_Mart_Text_HaveTM66:
	.string "TM66 contains Payback!\p"
	.string "It's an attack that doubles in power\n"
	.string "if the user moves after its target.$"

VerdanturfTown_Mart_Text_XSpecialIsCrucial: @ 82025D5
	.string "For any Pokémon match, X Special\n"
	.string "is crucial.\p"
	.string "It jacks up the power of some moves\n"
	.string "even though it's only for one battle.$"

VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent: @ 820264C
	.string "They don't seem to sell any winning\n"
	.string "strategy guides for the Battle Tent…\p"
	.string "It seems one must rely on one's\n"
	.string "own wits after all…$"

VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
	.string "The Nest Ball works better on\n"
	.string "weaker Pokémon.$"


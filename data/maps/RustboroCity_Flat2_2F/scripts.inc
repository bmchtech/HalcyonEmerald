.set LOCALID_ACE, 3
.set LOCALID_HIKER, 4

RustboroCity_Flat2_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_Flat2_2F_OnTransition
	.byte 0

RustboroCity_Flat2_2F_OnTransition: @ 82379A0
	goto_if_set FLAG_ITEM_RUSTBORO_FLOAT_STONE, RustboroCity_Flat2_2F_HideAceShowHiker
	end

RustboroCity_Flat2_2F_HideAceShowHiker:
	clearflag FLAG_HIDE_RUSTBORO_HIKER 
	removeobject LOCALID_ACE
	end

RustboroCity_Flat2_2F_EventScript_OldMan:: @ 8215FD8
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
	end

RustboroCity_Flat2_2F_EventScript_NinjaBoy:: @ 8215FE1
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_PREMIER_BALL
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
	release
	end

RustboroCity_Flat2_2F_EventScript_GavePremierBall:: @ 8216010
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_2F_EventScript_GiveFloatStone::
	lock
	faceplayer
	goto_if_set FLAG_ITEM_RUSTBORO_FLOAT_STONE, RustboroCity_Flat2_2F_EventScript_GaveFloatStone
	msgbox RustboroCity_Flat2_2F_Text_MyDadsAceAtDevon, MSGBOX_DEFAULT
	giveitem ITEM_FLOAT_STONE
	msgbox RustboroCity_Flat2_2F_Text_PokemonHoldFloatStone, MSGBOX_DEFAULT
	setflag FLAG_ITEM_RUSTBORO_FLOAT_STONE
	release
	end

RustboroCity_Flat2_2F_EventScript_GaveFloatStone::
	lock
	faceplayer
	msgbox RustboroCity_Flat2_2F_Text_PokemonHoldFloatStone, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_2F_EventScript_FatMan::
	lock
	faceplayer
	msgbox RustboroCity_Flat2_2F_Text_PutOnWeight, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays: @ 821601A
	.string "Way back in the old days, Devon was just\n"
	.string "a teeny, tiny company.$"

RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt: @ 821605A
	.string "My daddy's working at the Corporation.\p"
	.string "My daddy made this!\n"
	.string "But I can't use it, so you can have it.$"

RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo: @ 82160BD
	.string "My daddy's working at the Corporation.\p"
	.string "When I grow up, I'm going to work for\n"
	.string "Devon, too.$"

RustboroCity_Flat2_2F_Text_MyDadsAceAtDevon:
	.string "My dad's a real ace in the Devon\n"
	.string "Corporation, I'll have you know!\p"
	.string "It's no wonder I'm an ace myself!\p"
	.string "Here. I'll give you something that\n"
	.string "an Ace Trainer like me uses!$"

RustboroCity_Flat2_2F_Text_PokemonHoldFloatStone:
	.string "If you have a Pokémon hold a Float Stone,\n"
	.string "its weight will be halved.\p"
	.string "Although it looks like it'll be a while\n"
	.string "before you can use something like this\l"
	.string "as well as I can.$"

RustboroCity_Flat2_2F_Text_PutOnWeight:
	.string "… … … … … …\p"
	.string "For some reason, I've put on\n"
	.string "a lot of weight recently.$"

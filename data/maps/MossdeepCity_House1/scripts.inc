.set LOCALID_CYNTHIA, 1

@ VAR_CYNTHIA_STATE
@ 0: Unmet
@ 1: Defeated for the first time

MossdeepCity_House1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_House1_MapScripts_OnFrame
	.byte 0

MossdeepCity_House1_MapScripts_OnFrame:
	map_script_2 VAR_CYNTHIA_STATE, 1, MossdeepCity_House1_EventScript_CynthiaBattle
	.2byte 0

MossdeepCity_House1_EventScript_CynthiaBattle::
	lockall
	goto_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_House1_EventScript_End
	goto_if_set FLAG_HIDE_MOSSDEEP_CYNTHIA, MossdeepCity_House1_EventScript_End
	delay 40
	playse SE_PIN
	applymovement LOCALID_CYNTHIA, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_CYNTHIA, Common_Movement_Delay48
	waitmovement 0
	playbgm DP_SEQ_EYE_CHAMP, FALSE
	applymovement LOCALID_CYNTHIA, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	msgbox MossdeepCity_House1_Text_WhatsThis, MSGBOX_YESNO
	compare VAR_RESULT, NO
	call_if_eq MossdeepCity_House1_EventScript_CynthiaHeal
	msgbox MossdeepCity_House1_Text_BeforeISendOut, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_CYNTHIA_1, MossdeepCity_House1_Text_CynthiaDefeat
	msgbox MossdeepCity_House1_Text_BeyondExpectation, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	setflag FLAG_DAILY_REMATCH_CYNTHIA
	setvar VAR_CYNTHIA_STATE, 2
	releaseall
	end

MossdeepCity_House1_EventScript_CynthiaHeal::
	msgbox MossdeepCity_House1_Text_LetMeHealYourPokemon, MSGBOX_DEFAULT
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	return

MossdeepCity_House1_EventScript_Cynthia::
	lockall
	faceplayer
	goto_if_unset FLAG_DAILY_REMATCH_CYNTHIA, MossdeepCity_House1_EventScript_CynthiaRematch
	msgbox MossdeepCity_House1_Text_AfterBattle, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_House1_EventScript_CynthiaRematch::
	msgbox MossdeepCity_House1_Text_BeforeRematch, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_House1_EventScript_CynthiaStartRematch
	releaseall
	end

MossdeepCity_House1_EventScript_CynthiaStartRematch::
	msgbox MossdeepCity_House1_Text_NoHoldsBarred, MSGBOX_DEFAULT
	random 1
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_House1_EventScript_CynthiaTeam1
	trainerbattle_no_intro TRAINER_CYNTHIA_2, MossdeepCity_House1_Text_CynthiaDefeat
	setflag FLAG_DAILY_REMATCH_CYNTHIA
	releaseall
	end

MossdeepCity_House1_EventScript_CynthiaTeam1::
	trainerbattle_no_intro TRAINER_CYNTHIA_1, MossdeepCity_House1_Text_CynthiaDefeat
	setflag FLAG_DAILY_REMATCH_CYNTHIA
	releaseall
	end

MossdeepCity_House1_EventScript_End::
	releaseall
	end

MossdeepCity_House1_Text_WhatsThis:
	.string "What's this?\p"
	.string "Oh, you're {PLAYER}, aren't you?\n"
	.string "Hoenn's newest Champion!\p"
	.string "I'm Cynthia. I'm a Pokémon Trainer,\n"
	.string "too, like you.\p"
	.string "I have an insatiable curiosity for\n"
	.string "researching Pokémon myths.\p"
	.string "Have you heard of Navel Rock?\p"
	.string "It's said that two Legendary Pokémon\n"
	.string "await a special trainer there.\p"
	.string "You can get there by taking a\n"
	.string "Mystic Ticket to the ferry captain.\p"
	.string "I was going to go myself, but…\n"
	.string "Strangely, I get the feeling that you\l"
	.string "should go instead.\p"
	.string "Of course, there's only one way to\n"
	.string "decide - with a Pokémon battle!\p"
	.string "Would you care to be my opponent?$"

MossdeepCity_House1_Text_LetMeHealYourPokemon:
	.string "Oh? I see. Allow me to me heal your\n"
	.string "Pokémon first.$"

MossdeepCity_House1_Text_BeforeISendOut:
	.string "Before I send out my Pokémon, my heart\n"
	.string "always begins to race…\p"
	.string "Interesting…\p"
	.string "My Pokémon in their Poké Balls are\n"
	.string "radiating a happy feeling.\p"
	.string "Are you the reason?$"

MossdeepCity_House1_Text_CynthiaDefeat:
	.string "My heart is pounding so hard because I\n"
	.string "had such a heated battle with you.\p" 
	.string "You are a really great Trainer!$"

MossdeepCity_House1_Text_BeyondExpectation:
	.string "That was beyond my expectation!\n"
	.string "What an exceptional battle!\p"
	.string "I think it's clear you should have\n"
	.string "the Mystic Ticket.\p"
	.string "Go on, take it!$"

MossdeepCity_House1_Text_AfterBattle:
	.string "Cynthia: You're a great Trainer, and\n"
	.string "it would make me happy to see you\l"
	.string "again sometime.$"

MossdeepCity_House1_Text_BeforeRematch:
	.string "Cynthia: How terrific to see you again!\p"
	.string "I've got to tell you… \n"
	.string "My Pokémon are excited to battle yours.\p"
	.string "Would you care to be my opponent?$"

MossdeepCity_House1_Text_NoHoldsBarred:
	.string "This will be such fun!\n" 
	.string "No holds barred!$"

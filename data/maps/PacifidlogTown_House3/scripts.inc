PacifidlogTown_House3_MapScripts:: @ 8203C10
	.byte 0

PacifidlogTown_House3_EventScript_Girl:: @ 8203CB5
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
	end

PacifidlogTown_House3_EventScript_Guy::
	msgbox PacifidlogTown_House3_Text_UsedToBeUseful, MSGBOX_NPC
	end

PacifidlogTown_House3_Text_IsThatAPokedex:
	.string "Is that a Pokédex?\p"
	.string "Did you get to meet a lot of different\n"
	.string "Pokémon?\p"
	.string "I wish I was like you.$"

PacifidlogTown_House3_Text_UsedToBeUseful:
	.string "I used to be kinda useful, but now…\p"
	.string "Now I just stand here and waste your time\n"
	.string "with this pointless monologue, or stare\l"
	.string "at this pot.\p"
	.string "Maybe one day I'll do something\n"
	.string "again. Who knows!$"

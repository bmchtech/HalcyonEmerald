CaveOfOrigin_1F_MapScripts:: @ 8235768
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfOrigin_1F_OnTransition
	.byte 0

CaveOfOrigin_1F_OnTransition: @ 823576E
	call_if_set FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE, CaveOfOrigin_EventScript_DisableTriggers
	end

CaveOfOrigin_1F_EventScript_Carbink::
	lock
	playmoncry  SPECIES_CARBINK, 2
	waitmoncry
	msgbox CaveOfOrigin_1F_Text_CarbinkStuck, MSGBOX_DEFAULT
	closemessage
	release
	end

CaveOfOrigin_1F_Text_CarbinkStuck:
	.string "This Carbink seems to be stuck,\n"
	.string "and it's blocking the ladder.\p"
	.string "Better check back later!$"

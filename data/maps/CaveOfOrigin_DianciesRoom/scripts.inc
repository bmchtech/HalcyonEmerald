CaveOfOrigin_DianciesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Common_EventScript_RemoveOverworldAfterBattle
	.byte 0

CaveOfOrigin_DianciesRoom_EventScript_Diancie::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DIANCIE, 2
	delay 40
	waitmoncry
	specialvar VAR_RESULT, GetHighestLevelInPlayerParty
	copyvar VAR_0x800A, VAR_RESULT
	setwildbattle SPECIES_DIANCIE, VAR_0x800A, ITEM_FAIRY_GEM
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CaveOfOrigin_DianciesRoom_EventScript_DefeatedDiancie
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CaveOfOrigin_DianciesRoom_EventScript_RanFromDiancie
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq CaveOfOrigin_DianciesRoom_EventScript_RanFromDiancie
	setflag FLAG_DEFEATED_DIANCIE
	release
	end

CaveOfOrigin_DianciesRoom_EventScript_DefeatedDiancie::
	setflag FLAG_DEFEATED_DIANCIE
	goto Common_EventScript_RemoveStaticPokemon
	end

CaveOfOrigin_DianciesRoom_EventScript_RanFromDiancie::
	setvar VAR_0x8004, SPECIES_DIANCIE
	goto Common_EventScript_LegendaryFlewAway
	end

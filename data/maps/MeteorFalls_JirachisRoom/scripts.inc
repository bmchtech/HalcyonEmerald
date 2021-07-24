MeteorFalls_JirachisRoom_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Common_EventScript_RemoveOverworldAfterBattle
	.byte 0

MeteorFalls_JirachisRoom_EventScript_Jirachi::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JIRACHI, 2
	delay 40
	waitmoncry
	specialvar VAR_RESULT, GetHighestLevelInPlayerParty
	copyvar VAR_0x800A, VAR_RESULT
	setwildbattle SPECIES_JIRACHI, VAR_0x800A, ITEM_OCCA_BERRY
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MeteorFalls_JirachisRoom_EventScript_DefeatedJirachi
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MeteorFalls_JirachisRoom_EventScript_RanFromJirachi
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MeteorFalls_JirachisRoom_EventScript_RanFromJirachi
	setflag FLAG_DEFEATED_JIRACHI
	release
	end

MeteorFalls_JirachisRoom_EventScript_DefeatedJirachi::
	setflag FLAG_DEFEATED_JIRACHI
	goto Common_EventScript_RemoveStaticPokemon
	end

MeteorFalls_JirachisRoom_EventScript_RanFromJirachi::
	setvar VAR_0x8004, SPECIES_JIRACHI
	goto Common_EventScript_LegendaryFlewAway
	end

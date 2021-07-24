ShoalCave_LowTideIceRoom_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Common_EventScript_RemoveOverworldAfterBattle
	.byte 0

ShoalCave_LowTideIceRoom_EventScript_Articuno::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ARTICUNO, 2
	delay 40
	waitmoncry
	specialvar VAR_RESULT, GetHighestLevelInPlayerParty
	copyvar VAR_0x800A, VAR_RESULT
	setwildbattle SPECIES_ARTICUNO, VAR_0x800A, ITEM_YACHE_BERRY
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_DefeatedArticuno
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_RanFromArticuno
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq ShoalCave_LowTideIceRoom_EventScript_RanFromArticuno
	setflag FLAG_DEFEATED_ARTICUNO
	release
	end

ShoalCave_LowTideIceRoom_EventScript_DefeatedArticuno:: @ 8238F9F
	setflag FLAG_DEFEATED_ARTICUNO
	goto Common_EventScript_RemoveStaticPokemon
	end

ShoalCave_LowTideIceRoom_EventScript_RanFromArticuno:: @ 8238FA8
	setvar VAR_0x8004, SPECIES_ARTICUNO
	goto Common_EventScript_LegendaryFlewAway
	end

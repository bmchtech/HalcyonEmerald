SandstrewnRuins_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SandstrewnRuins_OnLoad
	.byte 0

SandstrewnRuins_OnLoad::
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, SandstrewnRuins_BlockMirageTower
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, SandstrewnRuins_BlockMirageTower
	setflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	end

SandstrewnRuins_BlockMirageTower:: @ Block the entrances to room one
	setmetatile 11, 119, METATILE_MirageTower_Ledge, 1
	setmetatile 12, 119, METATILE_MirageTower_Ledge, 1
	setmetatile 13, 119, METATILE_MirageTower_Ledge, 1
	setmetatile 12, 118, METATILE_MirageTower_Floor, 0
	setmetatile 3, 105, METATILE_MirageTower_Ledge, 1
	setmetatile 4, 105, METATILE_MirageTower_Ledge, 1
	setmetatile 5, 105, METATILE_MirageTower_Ledge, 1
	setmetatile 4, 104, METATILE_MirageTower_Floor, 0
	end

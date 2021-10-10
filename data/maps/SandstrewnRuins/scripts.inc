.set LOCALID_ODD_KEYSTONE, 20

SandstrewnRuins_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SandstrewnRuins_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SandstrewnRuins_OnTransition
	.byte 0

SandstrewnRuins_OnTransition:
	setflag FLAG_LANDMARK_SANDSTREWN_RUINS
	end

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

Sandstrewn_Ruins_EventScript_OddKeystone::
	lock
	playfanfare MUS_OBTAIN_ITEM
	msgbox Sandstrewn_Ruins_Text_OddKeystone, MSGBOX_DEFAULT
	waitmessage
	waitfanfare
	additem ITEM_ODD_KEYSTONE, 1
	removeobject LOCALID_ODD_KEYSTONE
	release
	end

Sandstrewn_Ruins_Text_OddKeystone:
	.string "{PLAYER} found one Odd Keystone!\p"
	.string "There's a faint message scratched into\n"
	.string "the back of it…\p"
	.string "“Rou… 108”\n"
	.string "“Bring Poké… … 108”\l"
	.string "“Aband… …ip.”\l"
	.string "“Storage … …sh can.”\p"
	.string "{PLAYER} put away the Odd Keystone\n"
	.string "in the Key Items Pocket.$"

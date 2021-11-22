
// Wally

static const struct TrainerMonItemCustomMoves sParty_WallyMauville[] = {
    {
    .lvl = 0,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_BLACK_SLUDGE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_VENOSHOCK, MOVE_POISON_POWDER, MOVE_LEECH_SEED
    },
    {
    .lvl = 0,
    .species = SPECIES_FLETCHINDER,
    .heldItem = ITEM_FLYING_GEM,
    .ability = 2, // Gale Wings
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FLAME_CHARGE, MOVE_ACROBATICS, MOVE_STEEL_WING, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, // Huge Power
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_BRICK_BREAK, MOVE_BULLDOZE
    },   
    {
    .lvl = 1,
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 1, // Trace
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_HYPNOSIS, MOVE_CHARM
    }
};

static const struct TrainerMonItemCustomMoves sParty_WallyVR2[] = {
    {
    .lvl = 1,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAGON_RUSH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK
    },
    {
    .lvl = 1,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, // Sturdy
    .spread = SPREAD_HP_FIRE_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Huge Power
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL, MOVE_AQUA_JET
    },
    {
    .lvl = 1,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 2, // Technician
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MEGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = 1,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Gale Wings
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_STEEL_WING, MOVE_U_TURN
    },
    {
    .lvl = 2,
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_GALLADITE,
    .ability = 1, // Trace -> Keen Edge
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_ICE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_WallyVR3[] = {
    {
    .lvl = 1,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK
    },
    {
    .lvl = 1,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = 1, // Sturdy
    .spread = SPREAD_HP_FIRE_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Huge Power
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL, MOVE_AQUA_JET
    },
    {
    .lvl = 1,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 2, // Technician
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MEGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = 1,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Gale Wings
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_STEEL_WING, MOVE_U_TURN
    },
    {
    .lvl = 2,
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_GALLADITE,
    .ability = 1, // Trace -> Keen Edge
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_ICE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_WallyVR4[] = {
    {
    .lvl = 5,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK
    },
    {
    .lvl = 5,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = 1, // Sturdy
    .spread = SPREAD_HP_FIRE_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Huge Power
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_AQUA_JET
    },
    {
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 2, // Technician
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MEGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = 5,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Gale Wings
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_STEEL_WING, MOVE_U_TURN
    },
    {
    .lvl = 7,
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_GALLADITE,
    .ability = 1, // Trace -> Keen Edge
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_ICE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_WallyVR5[] = {
    {
    .lvl = 5,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK
    },
    {
    .lvl = 5,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = 1, // Sturdy
    .spread = SPREAD_HP_FIRE_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 5,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Huge Power
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_KNOCK_OFF, MOVE_AQUA_JET
    },
    {
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 2, // Technician
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MEGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = 5,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Gale Wings
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_STEEL_WING, MOVE_U_TURN
    },
    {
    .lvl = 7,
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_GALLADITE,
    .ability = 1, // Trace -> Keen Edge
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_ICE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_WallyVR1[] = {
    {
    .lvl = 1,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAGON_RUSH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_STEALTH_ROCK
    },
    {
    .lvl = 1,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, // Sturdy
    .spread = SPREAD_HP_FIRE_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_VOLT_SWITCH, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 1,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Huge Power
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL, MOVE_AQUA_JET
    },
    {
    .lvl = 1,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 2, // Technician
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MEGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = 1,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Gale Wings
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_STEEL_WING, MOVE_U_TURN
    },
    {
    .lvl = 2,
    .species = SPECIES_GALLADE,
    .heldItem = ITEM_GALLADITE,
    .ability = 1, // Trace -> Keen Edge
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_ICE_PUNCH
    }
};

// Brendan and May
static const struct TrainerMonItemCustomMoves sParty_BrendanRoute103Mudkip[] = {
    {
    .lvl = 0,
    .species = SPECIES_TREECKO,
	.moves = MOVE_POUND, MOVE_LEER, MOVE_NONE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute103Treecko[] = {
    {
    .lvl = 0,
    .species = SPECIES_TORCHIC,
	.moves = MOVE_SCRATCH, MOVE_GROWL, MOVE_NONE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute103Torchic[] = {
    {
    .lvl = 0,
    .species = SPECIES_MUDKIP,
	.moves = MOVE_TACKLE, MOVE_GROWL, MOVE_NONE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRustboroTreecko[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_REFRESH
    },    
    {
    .lvl = -1,
    .species = SPECIES_DEWPIDER,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUG_BITE, MOVE_BUBBLE, MOVE_INFESTATION, MOVE_WATER_SPORT
    },
    {
    .lvl = -1,
    .species = SPECIES_SHROOMISH,
    .ability = 1, // Poison Heal
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BULLET_SEED, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_HEADBUTT
    },
    {
    .lvl = 0,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_DOUBLE_KICK, MOVE_ROCK_TOMB, MOVE_FLAME_CHARGE, MOVE_PECK
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRustboroMudkip[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_REFRESH
    },
    {
    .lvl = -1,
    .species = SPECIES_DEWPIDER,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUG_BITE, MOVE_BUBBLE, MOVE_INFESTATION, MOVE_WATER_SPORT
    },
    {
    .lvl = -1,
    .species = SPECIES_GROWLITHE,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_REVERSAL, MOVE_ROAR
    },
    {
    .lvl = 0,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_MEGA_DRAIN, MOVE_DRAGON_BREATH, MOVE_FURY_CUTTER, MOVE_ROCK_TOMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRustboroTorchic[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_REFRESH
    },
    {
    .lvl = -1,
    .species = SPECIES_GROWLITHE,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_FLAME_WHEEL, MOVE_BITE, MOVE_REVERSAL, MOVE_ROAR
    },
    {
    .lvl = -1,
    .species = SPECIES_SHROOMISH,
    .ability = 1, // Poison Heal
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BULLET_SEED, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_HEADBUTT
    },
    {
    .lvl = 0,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ROCK_TOMB, MOVE_GROWL
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute110Mudkip[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_ARAQUANID,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BUG_BITE, MOVE_WATER_PULSE, MOVE_ICE_FANG, MOVE_SPIDER_WEB
    },
    {
    .lvl = -1,
    .species = SPECIES_ARCANINE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FLAME_BURST, MOVE_THUNDER_FANG, MOVE_EXTREME_SPEED, MOVE_ROAR
    },
    {
    .lvl = -1,
    .species = SPECIES_MIMIKYU,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_BULK_UP, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_GRASS_PLEDGE, MOVE_DRAGON_BREATH, MOVE_FURY_CUTTER, MOVE_ROCK_TOMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute110Treecko[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_ARAQUANID,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BUG_BITE, MOVE_WATER_PULSE, MOVE_ICE_FANG, MOVE_SPIDER_WEB
    },
    {
    .lvl = -1,
    .species = SPECIES_BRELOOM,
    .ability = 1, // Poison Heal
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_ROCK_TOMB, MOVE_BULK_UP
    },
    {
    .lvl = -1,
    .species = SPECIES_MIMIKYU,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_BULK_UP, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_FIRE_PLEDGE, MOVE_BULK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute110Torchic[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_ARCANINE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FLAME_BURST, MOVE_THUNDER_FANG, MOVE_EXTREME_SPEED, MOVE_ROAR
    },
    {
    .lvl = -1,
    .species = SPECIES_BRELOOM,
    .ability = 1, // Poison Heal
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_ROCK_TOMB, MOVE_BULK_UP
    },
    {
    .lvl = -1,
    .species = SPECIES_MIMIKYU,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_BULK_UP, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BULLDOZE, MOVE_WATER_PLEDGE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute119Mudkip[] = {
    {
    .lvl = 0,
    .species = SPECIES_ARAQUANID,
    .heldItem = ITEM_MYSTIC_WATER,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_ICE_FANG, MOVE_STICKY_WEB
    },
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Scrappy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 0,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 0,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_MUD_SHOT
    },   
    {
    .lvl = 2,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_SCEPTILITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FRENZY_PLANT, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_GRASSY_TERRAIN
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute119Treecko[] = { 
    {
    .lvl = 0,
    .species = SPECIES_ARAQUANID,
    .heldItem = ITEM_MYSTIC_WATER,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_ICE_FANG, MOVE_STICKY_WEB
    },
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Scrappy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 1, // Poison Heal
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FOCUS_PUNCH, MOVE_SEED_BOMB, MOVE_SPORE, MOVE_SUBSTITUTE
    },
    {
    .lvl = 0,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 0,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_MUD_SHOT
    }, 
    {
    .lvl = 2,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLAZIKENITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_BLAST_BURN, MOVE_AURA_SPHERE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute119Torchic[] = {
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Scrappy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 0,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 1, // Poison Heal
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FOCUS_PUNCH, MOVE_SEED_BOMB, MOVE_SPORE, MOVE_SUBSTITUTE
    },
    {
    .lvl = 0,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 0,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_MUD_SHOT
    },  
    {
    .lvl = 2,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_SWAMPERTITE,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_HP_ATK_MIXED,
    .moves = MOVE_HYDRO_CANNON, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_RAIN_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanLilycoveMudkip[] = {
    {
    .lvl = 1,
    .species = SPECIES_ARAQUANID,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_ICE_FANG, MOVE_STICKY_WEB
    },
    {
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_EXTREME_SPEED, MOVE_U_TURN
    },
    {
    .lvl = 1,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 1,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 0,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_AURORA_BEAM
    }, 
    {
    .lvl = 3,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_SCEPTILITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_SOLAR_BEAM, MOVE_DRAGON_PULSE, MOVE_EARTHQUAKE, MOVE_GROWTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanLilycoveTreecko[] = {
    {
    .lvl = 1,
    .species = SPECIES_ARAQUANID,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_ICE_FANG, MOVE_STICKY_WEB
    },
    {
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_EXTREME_SPEED, MOVE_U_TURN
    },
    {
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Technician
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_MACH_PUNCH, MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_SPORE
    },
    {
    .lvl = 1,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 1,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_AURORA_BEAM
    },
    {
    .lvl = 3,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLAZIKENITE,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_HIGH_JUMP_KICK, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanLilycoveTorchic[] = {
    {
    .lvl = 1,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB
    },
    {
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_EXTREME_SPEED, MOVE_U_TURN
    },
    {
    .lvl = 1,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 1,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Technician
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_SPORE
    },
    {
    .lvl = 1,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 3,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_SWAMPERTITE,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_RAIN_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute103Mudkip[] = {
    {
    .lvl = 0,
    .species = SPECIES_TREECKO,
	.moves = MOVE_POUND, MOVE_LEER
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute103Treecko[] = { // May Route 103
    {
    .lvl = 0,
    .species = SPECIES_TORCHIC,
	.moves = MOVE_SCRATCH, MOVE_GROWL
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute103Torchic[] = { // May Route 103
    {
    .lvl = 0,
    .species = SPECIES_MUDKIP,
	.moves = MOVE_TACKLE, MOVE_GROWL
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRustboroMudkip[] = { // May Rustboro
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_REFRESH
    },
    {
    .lvl = -1,
    .species = SPECIES_STARYU,
    .ability = 1, // Natural Cure
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUBBLE_BEAM, MOVE_RECOVER, MOVE_PSYWAVE, MOVE_SWIFT
    },
    {
    .lvl = -1,
    .species = SPECIES_PONYTA,
    .ability = 2, // Flame Body
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_FLAME_WHEEL, MOVE_TAIL_WHIP, MOVE_TACKLE, MOVE_DOUBLE_KICK
    },
    {
    .lvl = 0,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_MEGA_DRAIN, MOVE_DRAGON_BREATH, MOVE_FURY_CUTTER, MOVE_ROCK_TOMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRustboroTreecko[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_REFRESH
    },
    {
    .lvl = -1,
    .species = SPECIES_STARYU,
    .ability = 1, // Natural Cure
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUBBLE_BEAM, MOVE_RECOVER, MOVE_PSYWAVE, MOVE_SWIFT
    },
    {
    .lvl = -1,
    .species = SPECIES_STEENEE,
    .ability = 2, // Sweet Veil
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_RAZOR_LEAF, MOVE_CHARM, MOVE_ACUPRESSURE, MOVE_SYNTHESIS
    },
    {
    .lvl = 0,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_DOUBLE_KICK, MOVE_ROCK_TOMB, MOVE_FLAME_CHARGE, MOVE_PECK
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRustboroTorchic[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_REFRESH
    },
    {
    .lvl = -1,
    .species = SPECIES_STEENEE,
    .ability = 2, // Sweet Veil
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_RAZOR_LEAF, MOVE_CHARM, MOVE_ACUPRESSURE, MOVE_SYNTHESIS
    },
    {
    .lvl = -1,
    .species = SPECIES_PONYTA,
    .ability = 2, // Flame Body
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_FLAME_WHEEL, MOVE_TAIL_WHIP, MOVE_TACKLE, MOVE_DOUBLE_KICK
    },
    {
    .lvl = 0,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_ROCK_TOMB, MOVE_GROWL
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute110Mudkip[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_STARMIE,
    .ability = 1, // Natural Cure
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WATER_PULSE, MOVE_RECOVER, MOVE_PSYBEAM, MOVE_ICY_WIND
    },
    {
    .lvl = -1,
    .species = SPECIES_PONYTA,
    .ability = 0, // Reckless
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BLAZE_KICK, MOVE_WILD_CHARGE, MOVE_TAKE_DOWN, MOVE_DOUBLE_KICK
    },
    {
    .lvl = -1,
    .species = SPECIES_MIMIKYU,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_BULK_UP, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_GRASS_PLEDGE, MOVE_DRAGON_BREATH, MOVE_FURY_CUTTER, MOVE_ROCK_TOMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute110Treecko[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_STARMIE,
    .ability = 1, // Natural Cure
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WATER_PULSE, MOVE_RECOVER, MOVE_PSYBEAM, MOVE_ICY_WIND
    },
    {
    .lvl = -1,
    .species = SPECIES_TSAREENA,
    .ability = 1, // Queenly Majesty
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_TROP_KICK, MOVE_LOW_SWEEP, MOVE_U_TURN, MOVE_SYNTHESIS
    },
    {
    .lvl = -1,
    .species = SPECIES_MIMIKYU,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_BULK_UP, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_FIRE_PLEDGE, MOVE_BULK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute110Torchic[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_TSAREENA,
    .ability = 1, // Queenly Majesty
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_TROP_KICK, MOVE_LOW_SWEEP, MOVE_U_TURN, MOVE_SYNTHESIS
    },
    {
    .lvl = -1,
    .species = SPECIES_PONYTA,
    .ability = 0, // Reckless
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BLAZE_KICK, MOVE_WILD_CHARGE, MOVE_TAKE_DOWN, MOVE_DOUBLE_KICK
    },
    {
    .lvl = -1,
    .species = SPECIES_MIMIKYU,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_BULK_UP, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BULLDOZE, MOVE_WATER_PLEDGE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute119Mudkip[] = {
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Scrappy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Analytic
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_THUNDER, MOVE_ICE_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_WILD_CHARGE, MOVE_POISON_JAB
    },
    {
    .lvl = 0,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 0,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_MUD_SHOT
    },
    {
    .lvl = 2,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_SCEPTILITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FRENZY_PLANT, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_GRASSY_TERRAIN
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute119Treecko[] = {
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Scrappy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Analytic
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_THUNDER, MOVE_ICE_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_TSAREENA,
    .heldItem = ITEM_GRASS_GEM,
    .ability = 1, // Queenly Majesty
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_PLAY_ROUGH, MOVE_STRENGTH
    },
    {
    .lvl = 0,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 0,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_MUD_SHOT
    },
    {
    .lvl = 2,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLAZIKENITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_BLAST_BURN, MOVE_AURA_SPHERE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute119Torchic[] = {
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Scrappy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_BOOMBURST, MOVE_HEAT_WAVE, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_WILD_CHARGE, MOVE_POISON_JAB
    },
    {
    .lvl = 0,
    .species = SPECIES_TSAREENA,
    .heldItem = ITEM_GRASS_GEM,
    .ability = 1, // Queenly Majesty
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_PLAY_ROUGH, MOVE_STRENGTH
    },
    {
    .lvl = 0,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 0,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_MUD_SHOT
    }, 
    {
    .lvl = 2,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_SWAMPERTITE,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_HP_ATK_MIXED,
    .moves = MOVE_HYDRO_CANNON, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_RAIN_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayLilycoveMudkip[] = {
    {
    .lvl = 1,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB
    },
    {
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_REVERSAL, MOVE_PROTECT
    },
    {
    .lvl = 1,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Analytic
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_THUNDER, MOVE_ICE_BEAM
    },
    {
    .lvl = 1,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 0, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_WILD_CHARGE, MOVE_POISON_JAB
    },
    {
    .lvl = 1,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 3,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_SCEPTILITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_SOLAR_BEAM, MOVE_DRAGON_PULSE, MOVE_EARTHQUAKE, MOVE_GROWTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayLilycoveTreecko[] = {
    {
    .lvl = 1,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB
    },
    {
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_REVERSAL, MOVE_PROTECT
    },
    {
    .lvl = 1,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_WATER_GEM,
    .ability = 2, // Analytic
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_PSYSHOCK, MOVE_THUNDER, MOVE_ICE_BEAM
    },
    {
    .lvl = 1,
    .species = SPECIES_TSAREENA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Queenly Majesty
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_STRENGTH
    },
    {
    .lvl = 1,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
	{
    .lvl = 3,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLAZIKENITE,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_HIGH_JUMP_KICK, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayLilycoveTorchic[] = {
    {
    .lvl = 1,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB
    },
    {
    .lvl = 1,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_REVERSAL, MOVE_PROTECT
    },
    {
    .lvl = 1,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 0, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_WILD_CHARGE, MOVE_POISON_JAB
    },
    {
    .lvl = 1,
    .species = SPECIES_TSAREENA,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Queenly Majesty
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_STRENGTH
    },
    {
    .lvl = 1,
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = 3,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_SWAMPERTITE,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_RAIN_DANCE
    }
};

// Grunts start

static const struct TrainerMonItemCustomMoves sParty_Grunt14[] = { // Slateport Museum
    {
    .lvl = -2,
    .species = SPECIES_PALPITOAD,
    .ability = 2, // Water Absorb
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUBBLE_BEAM, MOVE_ACID, MOVE_MUD_SHOT, MOVE_ROUND
    },
    {
    .lvl = -2,
    .species = SPECIES_BASCULIN,
    .ability = 1, // Adaptability
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_REVENGE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt15[] = { // Slateport
    {
    .lvl = -3,
    .species = SPECIES_GOLBAT,
    .ability = 0, // Inner Focus
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_POISON_FANG, MOVE_CONFUSE_RAY, MOVE_SCREECH
    },
    {
    .lvl = -3,
    .species = SPECIES_CLAUNCHER,
    .ability = 0, // Mega Launcher
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUBBLE_BEAM, MOVE_AQUA_JET, MOVE_SMACK_DOWN, MOVE_VENOSHOCK
    },
    {
    .lvl = -3,
    .species = SPECIES_GRIMER_ALOLAN,
    .ability = 0, // Poison Touch
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_POISON_FANG, MOVE_BITE, MOVE_DISABLE, MOVE_MINIMIZE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt24[] = { // Mt. Chimney
    {
    .lvl = -2,
    .species = SPECIES_NUMEL,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_EARTH_POWER, MOVE_LAVA_PLUME, MOVE_ROCK_SLIDE, MOVE_YAWN
    },
    {
    .lvl = -3,
    .species = SPECIES_DUGTRIO,
    .ability = 1, // Arena Trap
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_ROCK_SLIDE, MOVE_GIGA_IMPACT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt30[] = { // Jagged Pass
    {
    .lvl = -2,
    .species = SPECIES_MIGHTYENA,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_POISON_FANG, MOVE_SUCKER_PUNCH, MOVE_SWAGGER, MOVE_ICE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_TURTONATOR,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_SHELL_SMASH, MOVE_BODY_SLAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt31[] = { // Mt. Chimney
    {
    .lvl = -2,
    .species = SPECIES_GOLBAT,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_POISON_FANG, MOVE_ACROBATICS, MOVE_CRUNCH, MOVE_HYPNOSIS
    },
    {
    .lvl = -2,
    .species = SPECIES_RHYDON,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_HAMMER_ARM, MOVE_SCARY_FACE
    },
};

// Aqua and Magma bosses

static const struct TrainerMonItemCustomMoves sParty_Archie1[] = { // Slateport
    {
    .lvl = 0,
    .species = SPECIES_MIGHTYENA,
    .ability = 0, // Intimidate
    .spread = SPREAD_ARCHIE_ONE_MON,
    .moves = MOVE_BITE, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_SCARY_FACE
    },
    {
    .lvl = 0,
    .species = SPECIES_CROBAT,
    .ability = 0, // Inner Focus
    .spread = SPREAD_ARCHIE_ONE_MON,
    .moves = MOVE_AIR_CUTTER, MOVE_VENOSHOCK, MOVE_GIGA_DRAIN, MOVE_SUPER_FANG
    },
    {
    .lvl = 1,
    .species = SPECIES_SHARPEDO,
    .ability = 2, // Speed Boost
    .spread = SPREAD_ARCHIE_ONE_MON,
    .moves = MOVE_POISON_FANG, MOVE_BITE, MOVE_AQUA_JET, MOVE_ICE_FANG
    }
};

// Route 102 Trainers

static const struct TrainerMonItemCustomMoves sParty_Calvin1[] = {
    {
    .lvl = -2,
    .species = SPECIES_POOCHYENA,
    .moves = MOVE_HOWL, MOVE_TACKLE
    },
    {
    .lvl = -2,
    .species = SPECIES_LILLIPUP,
    .moves = MOVE_LEER, MOVE_TACKLE, MOVE_ODOR_SLEUTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Calvin2[] = {
    {
    .lvl = -2,
    .species = SPECIES_MIGHTYENA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_HOWL, MOVE_ROAR, MOVE_FIRE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_STOUTLAND,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_ODOR_SLEUTH, MOVE_ICE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_ROOST, MOVE_DOUBLE_TEAM, MOVE_FOCUS_ENERGY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Calvin3[] = {
    {
    .lvl = -2,
    .species = SPECIES_MIGHTYENA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_HOWL, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_STOUTLAND,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_ODOR_SLEUTH, MOVE_ICE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_BOOMBURST, MOVE_WORK_UP
    },
    {
    .lvl = -2,
    .species = SPECIES_CHARJABUG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_X_SCISSOR, MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_ACROBATICS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Calvin4[] = {
    {
    .lvl = -2,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_DARK_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SUCKER_PUNCH, MOVE_IRON_TAIL, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_ICE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_BRAVE_BIRD, MOVE_HEAT_WAVE, MOVE_DOUBLE_EDGE, MOVE_WORK_UP
    },
    {
    .lvl = -2,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_POWER_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_BUG_BUZZ, MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_SOLAR_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_PRIMEAPE,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_NIGHT_SLASH, MOVE_OUTRAGE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Rick[] = {
    {
    .lvl = -4,
    .species = SPECIES_WURMPLE,
    .moves = MOVE_STRING_SHOT, MOVE_POISON_STING
    },
    {
    .lvl = -4,
    .species = SPECIES_SEWADDLE,
    .moves = MOVE_STRING_SHOT, MOVE_TACKLE
    },
    {
    .lvl = -4,
    .species = SPECIES_GRUBBIN,
    .moves = MOVE_STRING_SHOT, MOVE_VISE_GRIP
    }
    
};

static const struct TrainerMonItemCustomMoves sParty_Allen[] = {
    {
    .lvl = -4,
    .species = SPECIES_ZIGZAGOON,
    .moves = MOVE_TACKLE, MOVE_GROWL, MOVE_TAIL_WHIP
    },
    {
    .lvl = -4,
    .species = SPECIES_TAILLOW,
    .moves = MOVE_QUICK_ATTACK, MOVE_GROWL, MOVE_RAGE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tiana[] = {
    {
    .lvl = -3,
    .species = SPECIES_BUIZEL,
    .moves = MOVE_GROWL, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -3,
    .species = SPECIES_SHROOMISH,
    .moves = MOVE_TACKLE, MOVE_STUN_SPORE
    }
};

// Route 104 South

static const struct TrainerMonItemCustomMoves sParty_Billy[] = {
    {
    .lvl = -5,
    .species = SPECIES_LITLEO,
    .ability = 1, // Unnerve, Rivalry OP
    .moves = MOVE_TACKLE, MOVE_LEER, MOVE_EMBER
    },
    {
    .lvl = -3,
    .species = SPECIES_SEEDOT,
    .moves = MOVE_BIDE, MOVE_HARDEN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Darian[] = {
    {
    .lvl = 3,
    .species = SPECIES_MAGIKARP,
    .moves = MOVE_SPLASH, MOVE_TACKLE
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLDEEN,
    .moves = MOVE_HORN_ATTACK, MOVE_SUPERSONIC, MOVE_WATER_SPORT, MOVE_TAIL_WHIP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cindy1[] = {
    {
    .lvl = 0,
    .species = SPECIES_BUNEARY,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_ENDURE, MOVE_POUND, MOVE_DEFENSE_CURL, MOVE_BABY_DOLL_EYES
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cindy2[] = {
    {
    .lvl = -2,
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_JUMP_KICK, MOVE_RETURN, MOVE_QUICK_ATTACK, MOVE_BABY_DOLL_EYES
    },
    {
    .lvl = -2,
    .species = SPECIES_FURRET,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_COIL, MOVE_BODY_SLAM, MOVE_SUPER_FANG, MOVE_SUCKER_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cindy3[] = {
    {
    .lvl = -2,
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_RETURN, MOVE_QUICK_ATTACK, MOVE_BABY_DOLL_EYES
    },
    {
    .lvl = -2,
    .species = SPECIES_FURRET,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_COIL, MOVE_BODY_SLAM, MOVE_SUPER_FANG, MOVE_SUCKER_PUNCH
    },
    {
    .lvl = -2,
    .species = SPECIES_LIEPARD,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SEED_BOMB, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_HONE_CLAWS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cindy4[] = {
    {
    .lvl = -2,
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_NORMAL_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_RETURN, MOVE_QUICK_ATTACK, MOVE_U_TURN
    },
    {
    .lvl = -2,
    .species = SPECIES_FURRET,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_COIL, MOVE_BODY_SLAM, MOVE_SUPER_FANG, MOVE_SUCKER_PUNCH
    },
    {
    .lvl = -2,
    .species = SPECIES_LIEPARD,
    .heldItem = ITEM_SCOPE_LENS,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SEED_BOMB, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_HONE_CLAWS
    },
    {
    .lvl = -2,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_DEF_SPATK,
    .moves = MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_THUNDER, MOVE_SOFT_BOILED
    }
};

// Route 104 North

static const struct TrainerMonItemCustomMoves sParty_Winston1[] = {
    {
    .lvl = -4,
    .species = SPECIES_BIDOOF,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_HEADBUTT
    },
    {
    .lvl = -4,
    .species = SPECIES_PIDGEY,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winston2[] = {
    {
    .lvl = -2,
    .species = SPECIES_BIBAREL,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_HEADBUTT, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_ROOST, MOVE_QUICK_ATTACK, MOVE_FEATHER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winston3[] = {
    {
    .lvl = -2,
    .species = SPECIES_BIBAREL,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SWORDS_DANCE, MOVE_QUICK_ATTACK, MOVE_CRUNCH, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HURRICANE, MOVE_ROOST, MOVE_QUICK_ATTACK, MOVE_FEATHER_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_ICE_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winston4[] = {
    {
    .lvl = -2,
    .species = SPECIES_BIBAREL,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SWORDS_DANCE, MOVE_QUICK_ATTACK, MOVE_CRUNCH, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HURRICANE, MOVE_ROOST, MOVE_QUICK_ATTACK, MOVE_FEATHER_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_NUGGET,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_ICE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_PLAY_ROUGH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_CLOSE_COMBAT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Haley1[] = {
    {
    .lvl = -4,
    .species = SPECIES_GOTHITA,
    .moves = MOVE_CONFUSION, MOVE_FAKE_TEARS, MOVE_PLAY_NICE, MOVE_TICKLE
    },
    {
    .lvl = -4,
    .species = SPECIES_SKIDDO,
    .moves = MOVE_TACKLE, MOVE_GROWTH, MOVE_VINE_WHIP, MOVE_LEECH_SEED
    },
    {
    .lvl = -4,
    .species = SPECIES_STARLY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = MOVE_QUICK_ATTACK, MOVE_AERIAL_ACE, MOVE_GROWL, MOVE_DOUBLE_TEAM
    },
};

static const struct TrainerMonItemCustomMoves sParty_Haley2[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOTHITELLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FUTURE_SIGHT, MOVE_FAKE_TEARS, MOVE_PROTECT, MOVE_THUNDERBOLT
    },
    {
    .lvl = -2,
    .species = SPECIES_GOGOAT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HORN_LEECH, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_MILK_DRINK
    },
    {
    .lvl = -2,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_TEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Haley3[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FUTURE_SIGHT, MOVE_FAKE_TEARS, MOVE_PROTECT, MOVE_THUNDERBOLT
    },
    {
    .lvl = -2,
    .species = SPECIES_GOGOAT,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HORN_LEECH, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_MILK_DRINK
    },
    {
    .lvl = -2,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_QUICK_ATTACK, MOVE_WING_ATTACK, MOVE_CLOSE_COMBAT, MOVE_DOUBLE_TEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_FLOATZEL,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_JET, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Haley4[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_FUTURE_SIGHT, MOVE_NASTY_PLOT, MOVE_PROTECT, MOVE_THUNDERBOLT
    },
    {
    .lvl = -2,
    .species = SPECIES_GOGOAT,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HORN_LEECH, MOVE_EARTHQUAKE, MOVE_BULK_UP, MOVE_MILK_DRINK
    },
    {
    .lvl = -2,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_QUICK_ATTACK, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_STEEL_WING
    },
    {
    .lvl = -2,
    .species = SPECIES_FLOATZEL,
    .heldItem = ITEM_WATER_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_AQUA_JET, MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_ICE_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_CHOPLE_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_IRON_TAIL, MOVE_ZING_ZAP, MOVE_THUNDER_WAVE, MOVE_ZEN_HEADBUTT
    }
};

static const struct TrainerMonItemCustomMoves sParty_GinaAndMia1[] = {
    {
    .lvl = -3,
    .species = SPECIES_PETILIL,
    .moves = MOVE_FAIRY_WIND, MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_STUN_SPORE
    },
    {
    .lvl = -3,
    .species = SPECIES_COTTONEE,
    .moves = MOVE_FAIRY_WIND, MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_GROWTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ivan[] = {
    {
    .lvl = -3,
    .species = SPECIES_LUVDISC,
    .moves = MOVE_TACKLE, MOVE_CHARM, MOVE_WATER_GUN, MOVE_AGILITY
    },
    {
    .lvl = 0,
    .species = SPECIES_FEEBAS,
    .moves = MOVE_TACKLE, MOVE_SPLASH
    },
    {
    .lvl = -3,
    .species = SPECIES_TENTACOOL,
    .ability = 1, // Liquid Ooze
    .moves = MOVE_BUBBLE, MOVE_ACID, MOVE_CONSTRICT
    }
};

// Petalburg Woods

static const struct TrainerMonItemCustomMoves sParty_Lyle[] = {
    {
    .lvl = -3,
    .species = SPECIES_VENIPEDE,
    .moves = MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_POISON_STING, MOVE_SCREECH
    },
    {
    .lvl = -3,
    .species = SPECIES_SURSKIT,
    .moves = MOVE_BUBBLE, MOVE_QUICK_ATTACK, MOVE_SWEET_SCENT
    },
    {
    .lvl = -2,
    .species = SPECIES_CASCOON,
    .moves = MOVE_POISON_STING, MOVE_HARDEN
    },
    {
    .lvl = -2,
    .species = SPECIES_KAKUNA,
    .moves = MOVE_POISON_STING, MOVE_HARDEN
    },
};

static const struct TrainerMonItemCustomMoves sParty_James1[] = {
    {
    .lvl = -3,
    .species = SPECIES_NINCADA,
    .moves = MOVE_SAND_ATTACK, MOVE_ABSORB, MOVE_BUG_BITE
    },
    {
    .lvl = -3,
    .species = SPECIES_PARAS,
    .moves = MOVE_ABSORB, MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_SCRATCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_James2[] = {
    {
    .lvl = -2,
    .species = SPECIES_NINJASK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_LEECH_LIFE, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS
    },
    {
    .lvl = -2,
    .species = SPECIES_SHEDINJA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PHANTOM_FORCE, MOVE_X_SCISSOR, MOVE_SHADOW_SNEAK, MOVE_DIG
    },
    {
    .lvl = -2,
    .species = SPECIES_PARASECT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SEED_BOMB, MOVE_CROSS_POISON
    }
};

static const struct TrainerMonItemCustomMoves sParty_James3[] = {
    {
    .lvl = -2,
    .species = SPECIES_NINJASK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SWORDS_DANCE, MOVE_LEECH_LIFE, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS
    },
    {
    .lvl = -2,
    .species = SPECIES_SHEDINJA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PHANTOM_FORCE, MOVE_X_SCISSOR, MOVE_SHADOW_SNEAK, MOVE_DIG
    },
    {
    .lvl = -2,
    .species = SPECIES_VESPIQUEN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ATTACK_ORDER, MOVE_POWER_GEM, MOVE_ACROBATICS, MOVE_HEAL_ORDER
    },
    {
    .lvl = -2,
    .species = SPECIES_PARASECT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SEED_BOMB, MOVE_CROSS_POISON
    }
};

static const struct TrainerMonItemCustomMoves sParty_James4[] = {
    {
    .lvl = -2,
    .species = SPECIES_NINJASK,
    .heldItem = ITEM_LIECHI_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SWORDS_DANCE, MOVE_LEECH_LIFE, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS
    },
    {
    .lvl = -2,
    .species = SPECIES_SHEDINJA,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_PHANTOM_FORCE, MOVE_X_SCISSOR, MOVE_SHADOW_SNEAK, MOVE_DIG
    },
    {
    .lvl = -2,
    .species = SPECIES_VESPIQUEN,
    .heldItem = ITEM_FLYING_GEM,
    .spread = SPREAD_31_IV_HP_ATK_MIXED,
    .moves = MOVE_ATTACK_ORDER, MOVE_POWER_GEM, MOVE_ACROBATICS, MOVE_HEAL_ORDER
    },
    {
    .lvl = -2,
    .species = SPECIES_ARAQUANID,
    .heldItem = ITEM_CHESTO_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_LEECH_LIFE, MOVE_LIQUIDATION, MOVE_CURSE, MOVE_REST
    },
    {
    .lvl = -2,
    .species = SPECIES_PARASECT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SEED_BOMB, MOVE_SUBSTITUTE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt8[] = { // Aqua
    {
    .lvl = -3,
    .species = SPECIES_CARVANHA,
    .ability = 2, // Speed Boost
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BITE, MOVE_LEER, MOVE_AQUA_JET, MOVE_RAGE
    },
    {
    .lvl = -3,
    .species = SPECIES_SKRELP,
    .ability = 2, // Adaptability
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUBBLE, MOVE_TAIL_WHIP, MOVE_FEINT_ATTACK, MOVE_SMOKESCREEN
    }
};

// Route 116

static const struct TrainerMonItemCustomMoves sParty_Joey[] = { // Route 116
    {
    .lvl = -4,
    .species = SPECIES_MACHOP,
    .moves = MOVE_LOW_KICK, MOVE_LEER, MOVE_BIDE, MOVE_SEISMIC_TOSS
    },
    {
    .lvl = -4,
    .species = SPECIES_RATTATA,
    .moves = MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP, MOVE_BITE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jose[] = { // Route 116
    {
    .lvl = -4,
    .species = SPECIES_JOLTIK,
    .moves = MOVE_THUNDER_SHOCK, MOVE_FURY_CUTTER, MOVE_ABSORB, MOVE_SPIDER_WEB
    },
    {
    .lvl = -4,
    .species = SPECIES_CUTIEFLY,
    .moves = MOVE_STRUGGLE_BUG, MOVE_FAIRY_WIND, MOVE_ABSORB, MOVE_STUN_SPORE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Karen1[] = { // Route 116
    {
    .lvl = -5,
    .species = SPECIES_FOMANTIS,
    .moves = MOVE_LEAFAGE, MOVE_FURY_CUTTER
    },
    {
    .lvl = -5,
    .species = SPECIES_RIOLU,
    .moves = MOVE_COUNTER, MOVE_QUICK_ATTACK, MOVE_ENDURE
    },
    {
    .lvl = -5,
    .species = SPECIES_EEVEE,
    .moves = MOVE_COVET, MOVE_TAIL_WHIP, MOVE_BABY_DOLL_EYES, MOVE_SAND_ATTACK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Karen2[] = {
    {
    .lvl = -2,
    .species = SPECIES_LURANTIS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SOLAR_BLADE, MOVE_X_SCISSOR, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY
    },
    {
    .lvl = -2,
    .species = SPECIES_LUCARIO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_IRON_TAIL, MOVE_AURA_SPHERE, MOVE_CRUNCH, MOVE_EXTREME_SPEED
    },
    {
    .lvl = -2,
    .species = SPECIES_ESPEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MORNING_SUN, MOVE_WEATHER_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Karen3[] = {
    {
    .lvl = -2,
    .species = SPECIES_LURANTIS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SOLAR_BLADE, MOVE_X_SCISSOR, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY
    },
    {
    .lvl = -2,
    .species = SPECIES_LUCARIO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_IRON_TAIL, MOVE_AURA_SPHERE, MOVE_CRUNCH, MOVE_EXTREME_SPEED
    },
    {
    .lvl = -2,
    .species = SPECIES_VANILLISH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FREEZE_DRY, MOVE_WATER_PULSE, MOVE_ACID_ARMOR, MOVE_FLASH_CANNON
    },
    {
    .lvl = -2,
    .species = SPECIES_ESPEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MORNING_SUN, MOVE_WEATHER_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Karen4[] = {
    {
    .lvl = -2,
    .species = SPECIES_LURANTIS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Contrary
    .spread = SPREAD_HP_ICE_MODEST,
    .moves = MOVE_LEAF_STORM, MOVE_HIDDEN_POWER, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY
    },
    {
    .lvl = -2,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_NORMAL_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_IRON_TAIL, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_EXTREME_SPEED
    },
    {
    .lvl = -2,
    .species = SPECIES_VANILLUXE,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FREEZE_DRY, MOVE_WATER_PULSE, MOVE_ACID_ARMOR, MOVE_FLASH_CANNON
    },
    {
    .lvl = -2,
    .species = SPECIES_PYROAR,
    .heldItem = ITEM_POWER_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_BEAM, MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_DARK_PULSE
    },
    {
    .lvl = -2,
    .species = SPECIES_ESPEON,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MORNING_SUN, MOVE_WEATHER_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Clark[] = { // Route 116
    {
    .lvl = -5,
    .species = SPECIES_GEODUDE,
    .moves = MOVE_ROCK_THROW, MOVE_DEFENSE_CURL, MOVE_TACKLE
    },
    {
    .lvl = -5,
    .species = SPECIES_ROGGENROLA,
    .moves = MOVE_ROCK_THROW, MOVE_ROUND, MOVE_HARDEN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Devan[] = { // Route 116
    {
    .lvl = -5,
    .species = SPECIES_DRILBUR,
    .moves = MOVE_FURY_SWIPES, MOVE_MUD_SLAP, MOVE_RAPID_SPIN, MOVE_IRON_DEFENSE
    },
    {
    .lvl = -5,
    .species = SPECIES_WOOBAT,
    .moves = MOVE_HEART_STAMP, MOVE_ASSURANCE, MOVE_GUST, MOVE_ODOR_SLEUTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Johnson[] = { // Route 116
    {
    .lvl = -4,
    .species = SPECIES_SHINX,
    .moves = MOVE_BABY_DOLL_EYES, MOVE_TACKLE, MOVE_LEER, MOVE_CHARGE
    },
    {
    .lvl = -4,
    .species = SPECIES_PATRAT,
    .moves = MOVE_DETECT, MOVE_BIDE, MOVE_LEER, MOVE_BITE
    }
};

// Route 116: Requires Cut

static const struct TrainerMonItemCustomMoves sParty_Sarah[] = {
    {
    .lvl = -3,
    .species = SPECIES_LOMBRE,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_ASTONISH, MOVE_ABSORB, MOVE_BUBBLE, MOVE_FAKE_OUT
    },
    {
    .lvl = -3,
    .species = SPECIES_FURRET,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_AGILITY, MOVE_QUICK_ATTACK, MOVE_DEFENSE_CURL, MOVE_FURY_SWIPES
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dawson[] = { // Route 116
    {
    .lvl = -4,
    .species = SPECIES_BLITZLE,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -4,
    .species = SPECIES_PANSEAR,
    .moves = MOVE_INCINERATE, MOVE_BITE, MOVE_YAWN, MOVE_PLAY_NICE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jerry1[] = {
    {
    .lvl = -2,
    .species = SPECIES_RALTS,
    .moves = MOVE_CONFUSION, MOVE_DISARMING_VOICE, MOVE_DOUBLE_TEAM, MOVE_LUCKY_CHANT
    },
    {
    .lvl = -4,
    .species = SPECIES_SHUPPET,
    .moves = MOVE_SHADOW_SNEAK, MOVE_SCREECH, MOVE_KNOCK_OFF, MOVE_SPITE
    },
    {
    .lvl = -4,
    .species = SPECIES_PANCHAM,
    .moves = MOVE_KARATE_CHOP, MOVE_WORK_UP, MOVE_COMET_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jerry2[] = {
    {
    .lvl = -2,
    .species = SPECIES_GARDEVOIR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_CALM_MIND, MOVE_MAGICAL_LEAF
    },
    {
    .lvl = -2,
    .species = SPECIES_BANETTE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUSH_CLAW, MOVE_SHADOW_CLAW, MOVE_KNOCK_OFF, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = -2,
    .species = SPECIES_PANGORO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_KARATE_CHOP, MOVE_WORK_UP, MOVE_COMET_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jerry3[] = {
    {
    .lvl = -2,
    .species = SPECIES_GARDEVOIR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_CALM_MIND, MOVE_MAGICAL_LEAF
    },
    {
    .lvl = -2,
    .species = SPECIES_PANGORO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HAMMER_ARM, MOVE_CRUNCH, MOVE_BULLET_PUNCH, MOVE_PARTING_SHOT
    },
    {
    .lvl = -2,
    .species = SPECIES_BANETTE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUSH_CLAW, MOVE_SHADOW_CLAW, MOVE_KNOCK_OFF, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = -2,
    .species = SPECIES_SIMISAGE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LEAF_STORM, MOVE_ACROBATICS, MOVE_CRUNCH, MOVE_LOW_KICK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jerry4[] = {
    {
    .lvl = -2,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_CALM_MIND, MOVE_WILL_O_WISP
    },
    {
    .lvl = -2,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_GHOST_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RETURN, MOVE_SHADOW_CLAW, MOVE_KNOCK_OFF, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = -2,
    .species = SPECIES_SIMISAGE,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_LEAF_STORM, MOVE_FOCUS_BLAST, MOVE_HYPER_BEAM, MOVE_NASTY_PLOT
    },
    {
    .lvl = -2,
    .species = SPECIES_PANGORO,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_HAMMER_ARM, MOVE_CRUNCH, MOVE_BULLET_PUNCH, MOVE_PARTING_SHOT
    },
    {
    .lvl = -2,
    .species = SPECIES_BUTTERFREE,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Janice[] = { // Route 116
    {
    .lvl = -4,
    .species = SPECIES_MARILL,
    .moves = MOVE_AQUA_JET, MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_HELPING_HAND
    },
    {
    .lvl = -4,
    .species = SPECIES_BOUNSWEET,
    .moves = MOVE_RAZOR_LEAF, MOVE_RAPID_SPIN, MOVE_PLAY_NICE, MOVE_SPLASH
    }
};

// Rusturf Tunnel

static const struct TrainerMonItemCustomMoves sParty_Grunt10[] = { // Aqua
    {
    .lvl = -3,
    .species = SPECIES_CARVANHA,
    .ability = 2, // Speed Boost
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BITE, MOVE_LEER, MOVE_AQUA_JET, MOVE_PROTECT
    },
    {
    .lvl = -3,
    .species = SPECIES_SKRELP,
    .ability = 2, // Adaptability
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUBBLE, MOVE_ACID, MOVE_FEINT_ATTACK, MOVE_SMOKESCREEN
    },
    {
    .lvl = -3,
    .species = SPECIES_GRIMER,
    .ability = 2, // Poison Touch
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SHADOW_SNEAK, MOVE_VENOSHOCK, MOVE_POISON_GAS
    }
};
// From Verdanturf Side
static const struct TrainerMonItemCustomMoves sParty_Mike2[] = { // Actually the first and only Mike
    {
    .lvl = -1,
    .species = SPECIES_BOLDORE,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_POWER_GEM, MOVE_SHOCK_WAVE, MOVE_ROUND, MOVE_IRON_DEFENSE
    },
    {
    .lvl = -1,
    .species = SPECIES_GRAVELER,
    .ability = 1, // Sturdy
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BULLDOZE, MOVE_SMACK_DOWN, MOVE_SELF_DESTRUCT, MOVE_ROCK_POLISH
    },
    {
    .lvl = -1,
    .species = SPECIES_PRIMEAPE,
    .ability = 2, // Defiant
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_CROSS_CHOP, MOVE_ASSURANCE, MOVE_SWAGGER, MOVE_THRASH
    }
};

// Rustboro Gym

static const struct TrainerMonItemCustomMoves sParty_Josh[] = { // Rustboro Gym
    {
    .lvl = -4,
    .species = SPECIES_GEODUDE,
    .ability = 1, // Sturdy
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ROCK_TOMB, MOVE_FLAIL, MOVE_MAGNITUDE, MOVE_ROCK_POLISH   
    },
    {
    .lvl = -4,
    .species = SPECIES_DWEBBLE,
    .ability = 0, // Sturdy
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ROCK_TOMB, MOVE_FURY_CUTTER, MOVE_SAND_TOMB, MOVE_WITHDRAW
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tommy[] = { // Rustboro Gym
    {
    .lvl = -3,
    .species = SPECIES_KABUTO,
    .ability = 1, // Battle Armor
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ROCK_TOMB, MOVE_AQUA_JET, MOVE_ABSORB, MOVE_SCREECH 
    },
    {
    .lvl = -3,
    .species = SPECIES_ROCKRUFF,
    .ability = 1, // Vital Spirit
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ROCK_TOMB, MOVE_BITE, MOVE_HOWL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Marc[] = { // Rustboro Gym
    {
    .lvl = -3,
    .species = SPECIES_CRANIDOS,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ROCK_TOMB, MOVE_HEADBUTT, MOVE_PURSUIT
    },
    {
    .lvl = -3,
    .species = SPECIES_ARCHEN,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ROCK_TOMB, MOVE_BITE, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -3,
    .species = SPECIES_SHIELDON,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_TAUNT, MOVE_COUNTER, MOVE_ROCK_TOMB, MOVE_IRON_DEFENSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roxanne1[] = {
    {
    .lvl = -3,
    .species = SPECIES_ARON,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = 0, // Sturdy
    .spread = SPREAD_ROXANNE_ONE_MON,
    .moves = MOVE_ROCK_TOMB, MOVE_STEALTH_ROCK, MOVE_METAL_CLAW, MOVE_REST
    },
    {
    .lvl = -3,
    .species = SPECIES_TYRUNT,
    .heldItem = ITEM_RED_CARD,
    .ability = 2, // Sturdy
    .spread = SPREAD_ROXANNE_ONE_MON,
    .moves = MOVE_ROCK_TOMB, MOVE_BITE, MOVE_DRAGON_TAIL, MOVE_POISON_FANG
    },
    {
    .lvl = -3,
    .species = SPECIES_AMAURA,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = 0, // Refrigerate
    .spread = SPREAD_ROXANNE_ONE_MON,
    .moves = MOVE_ROCK_TOMB, MOVE_THUNDER_WAVE, MOVE_BULLDOZE, MOVE_ECHOED_VOICE
    },
    {
    .lvl = -3,
    .species = SPECIES_ANORITH,
    .heldItem = ITEM_WATER_GEM,
    .ability = 0, // Battle Armor
    .spread = SPREAD_ROXANNE_ONE_MON,
    .moves = MOVE_ROCK_TOMB, MOVE_CUT, MOVE_BUG_BITE, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 2, // Storm Drain
    .spread = SPREAD_ROXANNE_ONE_MON,
    .moves = MOVE_ROCK_TOMB, MOVE_MEGA_DRAIN, MOVE_INFESTATION, MOVE_PAIN_SPLIT
    },
    {
    .lvl = 0,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = 2, // Sand Force
    .spread = SPREAD_ROXANNE_NOSEPASS,
    .moves = MOVE_SANDSTORM, MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_FIRE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roxanne2[] = { // Singles
    {
    .lvl = 0,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_RED_CARD,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ROCK_TOMB, MOVE_STEALTH_ROCK, MOVE_CRUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_TYRANTRUM,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 2, // Rock Head
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HEAD_SMASH, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_AERODACTYLITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_STRENGTH, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL
    },
    {
    .lvl = 0,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Battle Armor
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LEECH_LIFE, MOVE_STONE_EDGE, MOVE_RAPID_SPIN, MOVE_IRON_TAIL
    },
    {
    .lvl = 0,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Storm Drain
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_INFESTATION, MOVE_RECOVER
    },
    {
    .lvl = 2,
    .species = SPECIES_PROBOPASS,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = 2, // Sand Force
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_THUNDERBOLT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roxanne3[] = { // Singles with Legendaries
    {
    .lvl = 0,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CUSTAP_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_CRUNCH, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 0,
    .species = SPECIES_NIHILEGO,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_POWER_GEM, MOVE_SLUDGE_WAVE
    },
    {
    .lvl = 0,
    .species = SPECIES_TERRAKION,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_STONE_EDGE, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_STRENGTH, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL
    },
    {
    .lvl = 0,
    .species = SPECIES_DIANCIE,
    .heldItem = ITEM_DIANCITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_POWER_GEM, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_EARTH_POWER
    },
    {
    .lvl = 2,
    .species = SPECIES_PROBOPASS,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = 2, // Sand Force
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_THUNDERBOLT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roxanne4[] = { // Doubles
    {
    .lvl = 0,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CHOPLE_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_THUNDER_WAVE, MOVE_COUNTER
    },
    {
    .lvl = 2,
    .species = SPECIES_PROBOPASS,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, // Magnet Pull
    .spread = SPREAD_HP_FIRE_MODEST_BULKY,
    .moves = MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_HIDDEN_POWER
    },
    {
    .lvl = 0,
    .species = SPECIES_AURORUS,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_FREEZE_DRY, MOVE_EARTH_POWER, MOVE_WATER_PULSE
    },
    {
    .lvl = 0,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_AERODACTYLITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_ROCK_SLIDE, MOVE_TAILWIND, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_LYCANROC,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Sand Rush
    .spread = SPREAD_LYCANROC_MIDDAY, // Outspeeds Jolly Excadrill
    .moves = MOVE_ROCK_SLIDE, MOVE_DRILL_RUN, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS
    },
    {
    .lvl = 0,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Storm Drain
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_GIGA_DRAIN, MOVE_TICKLE, MOVE_INFESTATION, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roxanne5[] = { // Doubles with Legendaries
    {
    .lvl = 0,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_ICE_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_STAKATAKA,
    .heldItem = ITEM_MENTAL_HERB,
    .spread = SPREAD_STAKATAKA,
    .moves = MOVE_TRICK_ROOM, MOVE_GYRO_BALL, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT
    },
    {
    .lvl = 0,
    .species = SPECIES_REGIROCK,
    .heldItem = ITEM_SHUCA_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_ROCK_SLIDE, MOVE_HAMMER_ARM, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_AGGRONITE,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_HEAVY_SLAM, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_HIGH_HORSEPOWER
    },
    {
    .lvl = 0,
    .species = SPECIES_DIANCIE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_POWER_GEM, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND
    },
    {
    .lvl = 2,
    .species = SPECIES_PROBOPASS,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = 2, // Sand Force
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_THUNDERBOLT
    }
};

// Route 106 (Dewford Town Access)

static const struct TrainerMonItemCustomMoves sParty_Ned[] = {
    {
    .lvl = -3,
    .species = SPECIES_STARYU,
    .moves = MOVE_SWIFT, MOVE_PSYWAVE, MOVE_WATER_GUN, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_FINNEON,
    .moves = MOVE_GUST, MOVE_ATTRACT, MOVE_WATER_GUN, MOVE_RAIN_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Elliot1[] = {
    {
    .lvl = -3,
    .species = SPECIES_WIMPOD,
    .moves = MOVE_STRUGGLE_BUG, MOVE_SAND_ATTACK, MOVE_AQUA_JET
    },
    {
    .lvl = -4,
    .species = SPECIES_FRILLISH,
    .moves = MOVE_BUBBLE_BEAM, MOVE_ABSORB, MOVE_NIGHT_SHADE, MOVE_WATER_SPORT
    },
    {
    .lvl = -4,
    .species = SPECIES_SHELLDER,
    .ability = 2, // Overcoat
    .moves = MOVE_ICICLE_SPEAR, MOVE_SUPERSONIC, MOVE_WATER_GUN, MOVE_WITHDRAW
    }
};

static const struct TrainerMonItemCustomMoves sParty_Elliot2[] = {
    {
    .lvl = -3,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FIRST_IMPRESSION, MOVE_RAZOR_SHELL, MOVE_DRILL_RUN, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_JELLICENT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_CLOYSTER,
    .spread = SPREAD_31_IV_80_EV,
    .ability = 1, // Skill Link
    .moves = MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_HYDRO_PUMP, MOVE_RAPID_SPIN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Elliot3[] = {
    {
    .lvl = -3,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FIRST_IMPRESSION, MOVE_RAZOR_SHELL, MOVE_DRILL_RUN, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_JELLICENT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_CLOYSTER,
    .spread = SPREAD_31_IV_80_EV,
    .ability = 1, // Skill Link
    .moves = MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_HYDRO_PUMP, MOVE_RAPID_SPIN
    },
    {
    .lvl = -3,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_80_EV,
    .ability = 2, // Moxie
    .moves = MOVE_WATERFALL, MOVE_BOUNCE, MOVE_CRUNCH, MOVE_DRAGON_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Elliot4[] = {
    {
    .lvl = -3,
    .species = SPECIES_GOLISOPOD,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_JELLICENT,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Skill Link
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_HYDRO_PUMP, MOVE_SHELL_SMASH
    },
    {
    .lvl = -3,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_POWER_HERB,
    .ability = 2, // Moxie
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WATERFALL, MOVE_BOUNCE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE
    },
    {
    .lvl = -3,
    .species = SPECIES_OCTILLERY,
    .ability = 2, // Moody
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_RECOVER, MOVE_SCALD
    }
};

// Dewford Gym

static const struct TrainerMonItemCustomMoves sParty_Jocelyn[] = {
    {
    .lvl = -3,
    .species = SPECIES_MEDITITE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FAKE_OUT, MOVE_DETECT, MOVE_MEDITATE, MOVE_LOW_SWEEP
    },
    {
    .lvl = -3,
    .species = SPECIES_MANKEY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_PURSUIT, MOVE_KARATE_CHOP, MOVE_LEER, MOVE_COVET
    }
};

static const struct TrainerMonItemCustomMoves sParty_Laura[] = {
    {
    .lvl = -4,
    .species = SPECIES_MIENFOO,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FAKE_OUT, MOVE_DETECT, MOVE_MEDITATE, MOVE_LOW_SWEEP
    },
    {
    .lvl = -4,
    .species = SPECIES_MAKUHITA,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FAKE_OUT, MOVE_FORCE_PALM, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK
    },
    {
    .lvl = -4,
    .species = SPECIES_CRABRAWLER,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_PURSUIT, MOVE_ROCK_SMASH, MOVE_LEER, MOVE_BUBBLE_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brenden[] = {
    {
    .lvl = -3,
    .species = SPECIES_TYROGUE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FAKE_OUT, MOVE_BULLET_PUNCH, MOVE_MACH_PUNCH, MOVE_MEDITATE
    },
    {
    .lvl = -3,
    .species = SPECIES_SCRAGGY,
    .ability = 1, // Moxie
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FEINT_ATTACK, MOVE_LOW_KICK, MOVE_HEADBUTT, MOVE_LEER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lilith[] = {
    {
    .lvl = -3,
    .species = SPECIES_MONFERNO,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FAKE_OUT, MOVE_MACH_PUNCH, MOVE_FLAME_WHEEL, MOVE_TORMENT
    },
    {
    .lvl = -3,
    .species = SPECIES_CROAGUNK,
    .ability = 1, // Dry Skin
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_FEINT_ATTACK, MOVE_VACUUM_WAVE
    },
    {
    .lvl = -3,
    .species = SPECIES_TIMBURR,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_LOW_KICK, MOVE_ROCK_THROW, MOVE_LEER, MOVE_MACH_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cristian[] = {
    {
    .lvl = 0,
    .species = SPECIES_PIGNITE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FLAME_CHARGE, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_ARM_THRUST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Takao[] = {
    {
    .lvl = -3,
    .species = SPECIES_MACHOP,
    .ability = 1, // No Guard
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_LOW_SWEEP, MOVE_LEER, MOVE_FORESIGHT, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_STUFFUL,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BRUTAL_SWING, MOVE_BIDE, MOVE_FORCE_PALM, MOVE_BULLDOZE
    },
    {
    .lvl = -3,
    .species = SPECIES_JANGMO_O,
    .ability = 1, // Soundproof
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_DRAGON_TAIL, MOVE_COUNTER, MOVE_BRICK_BREAK, MOVE_SHADOW_CLAW
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brawly1[] = {
{
    .lvl = -2,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 0, // Pure Power
    .spread = SPREAD_BRAWLY_ONE_MON,
    .moves = MOVE_DRAIN_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_ZEN_HEADBUTT
    },
    {
    .lvl = -2,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 1, // Poison Heal
    .spread = SPREAD_BRAWLY_ONE_MON,
    .moves = MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_BULLET_SEED, MOVE_SPORE
    },
    {
    .lvl = -2,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, // Steadfast
    .spread = SPREAD_BRAWLY_ONE_MON,
    .moves = MOVE_BULLET_PUNCH, MOVE_BULK_UP, MOVE_PAYBACK, MOVE_REVERSAL
    },
    {
    .lvl = -2,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_COBA_BERRY,
    .ability = 0, // Keen Eye
    .spread = SPREAD_BRAWLY_ONE_MON,
    .moves = MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH
    },
    {
    .lvl = -2,
    .species = SPECIES_DEWOTT,
    .heldItem = ITEM_EVIOLITE,
    .ability = 0, // Torrent
    .spread = SPREAD_BRAWLY_ONE_MON,
    .moves = MOVE_RAZOR_SHELL, MOVE_KARATE_CHOP, MOVE_X_SCISSOR, MOVE_AIR_SLASH
    },
    {
    .lvl = 0,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Guts
    .spread = SPREAD_BRAWLY_ONE_MON,
    .moves = MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_BULLDOZE, MOVE_BULK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brawly2[] = { // singles
{
    .lvl = 0,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_MEDICHAMITE,
    .ability = 0, // Pure Power
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_FAKE_OUT, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Shed Skin
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_REST, MOVE_KNOCK_OFF
    },
    {
    .lvl = 0,
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .moves = MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_CRABOMINABLE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Iron Fist
    .spread = SPREAD_BRAWLY_ONE_MON,
    .moves = MOVE_ICE_HAMMER, MOVE_HAMMER_ARM, MOVE_CRABHAMMER, MOVE_MACH_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_SAMUROTT,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 2, // Keen Edge
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_X_SCISSOR, MOVE_SHELL_SMASH
    },
    {
    .lvl = 2,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_FACADE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brawly3[] = { // singles with legendaries
{
    .lvl = 0,
    .species = SPECIES_COBALION,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_IRON_HEAD, MOVE_STEALTH_ROCK, MOVE_VOLT_SWITCH
    },
    {
    .lvl = 0,
    .species = SPECIES_MARSHADOW,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FOCUS_PUNCH, MOVE_SPECTRAL_THIEF, MOVE_SHADOW_SNEAK, MOVE_SUBSTITUTE
    },
    {
    .lvl = 2,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE
    },
    {
    .lvl = 0,
    .species = SPECIES_BUZZWOLE,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_DRAIN_PUNCH, MOVE_LEECH_LIFE, MOVE_BULK_UP, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_KELDEO,
    .heldItem = ITEM_CHOICE_SPECS,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_SECRET_SWORD, MOVE_ICY_WIND, MOVE_AIR_SLASH
    },
    {
    .lvl = 0,
    .species = SPECIES_MEWTWO,
    .heldItem = ITEM_MEWTWONITE_X,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSTRIKE, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, MOVE_NASTY_PLOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brawly4[] = { // doubles
{
    .lvl = 0,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_PERSIM_BERRY,
    .ability = 1, // Sheer Force
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_MACH_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Intimidate
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_DRAIN_PUNCH, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_SWAGGER
    },
    {
    .lvl = 0,
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .moves = MOVE_DRAIN_PUNCH, MOVE_FAKE_OUT, MOVE_GUNK_SHOT, MOVE_SUCKER_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_CHESNAUGHT,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 1, // Filter
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB, MOVE_REFLECT, MOVE_SPIKY_SHIELD
    },
    {
    .lvl = 0,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_FLYING_GEM,
    .ability = 1, // Unburden
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ACROBATICS, MOVE_CLOSE_COMBAT, MOVE_HELPING_HAND, MOVE_TAILWIND
    },
    {
    .lvl = 2,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_FACADE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brawly5[] = { // Doubles with legendaries
{
    .lvl = 0,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_ROCKY_HELMET,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FOLLOW_ME, MOVE_CLOSE_COMBAT, MOVE_IRON_TAIL, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 0,
    .species = SPECIES_MARSHADOW,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FOCUS_PUNCH, MOVE_SPECTRAL_THIEF, MOVE_SHADOW_SNEAK, MOVE_ICE_PUNCH
    },
    {
    .lvl = 2,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_WIDE_GUARD
    },
    {
    .lvl = 0,
    .species = SPECIES_BUZZWOLE,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_DRAIN_PUNCH, MOVE_LEECH_LIFE, MOVE_TAUNT, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_KELDEO,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MUDDY_WATER, MOVE_SECRET_SWORD, MOVE_ICY_WIND, MOVE_AIR_SLASH
    },
    {
    .lvl = 0,
    .species = SPECIES_MEWTWO,
    .heldItem = ITEM_MEWTWONITE_X,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSTRIKE, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, MOVE_NASTY_PLOT
    }
};

// Route 109 Beach

static const struct TrainerMonItemCustomMoves sParty_Huey[] = {
    {
    .lvl = -3,
    .species = SPECIES_WINGULL,
    .moves = MOVE_AERIAL_ACE, MOVE_BUBBLE_BEAM, MOVE_SUPERSONIC, MOVE_MIST
    },
    {
    .lvl = -3,
    .species = SPECIES_TIMBURR,
    .moves = MOVE_ROCK_THROW, MOVE_LOW_KICK, MOVE_BIDE, MOVE_LEER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edmond[] = {
    {
    .lvl = -3,
    .species = SPECIES_SLOWPOKE,
    .moves = MOVE_CONFUSION, MOVE_WATER_GUN, MOVE_YAWN, MOVE_GROWL
    },
    {
    .lvl = -3,
    .species = SPECIES_CUBCHOO,
    .moves = MOVE_ICY_WIND, MOVE_BIDE, MOVE_GROWL
    },
    {
    .lvl = -3,
    .species = SPECIES_STARAVIA,
    .moves = MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_GROWL, MOVE_DOUBLE_TEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Hailey[] = {
    {
    .lvl = -2,
    .species = SPECIES_MARILL,
    .moves = MOVE_WATER_PULSE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_HELPING_HAND
    },
    {
    .lvl = -3,
    .species = SPECIES_BIBAREL,
    .moves = MOVE_HEADBUTT, MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_AQUA_JET
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ricky1[] = {
    {
    .lvl = 0,
    .species = SPECIES_ZIGZAGOON,
    .moves = MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_PIN_MISSILE, MOVE_SURF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ricky2[] = {
    {
    .lvl = -1,
    .species = SPECIES_LINOONE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF
    },
    {
    .lvl = -1,
    .species = SPECIES_BIBAREL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BODY_SLAM, MOVE_SURF, MOVE_ROCK_SMASH, MOVE_ROCK_CLIMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ricky3[] = {
    {
    .lvl = -1,
    .species = SPECIES_LINOONE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF
    },
    {
    .lvl = -1,
    .species = SPECIES_BIBAREL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BODY_SLAM, MOVE_SURF, MOVE_ROCK_SMASH, MOVE_ROCK_CLIMB
    },
    {
    .lvl = -1,
    .species = SPECIES_RATICATE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_SURF
    },
    {
    .lvl = -1,
    .species = SPECIES_FURRET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BODY_SLAM, MOVE_SURF, MOVE_AGILITY, MOVE_ME_FIRST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ricky4[] = {
    {
    .lvl = -1,
    .species = SPECIES_LINOONE,
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .moves = MOVE_EXTREME_SPEED, MOVE_PIN_MISSILE, MOVE_SEED_BOMB, MOVE_SURF
    },
    {
    .lvl = -1,
    .species = SPECIES_BIBAREL,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_DOUBLE_EDGE, MOVE_WATERFALL, MOVE_QUICK_ATTACK, MOVE_CRUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_RATICATE,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_SUCKER_PUNCH, MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_SURF
    },
    {
    .lvl = -1,
    .species = SPECIES_DIGGERSBY,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_QUICK_ATTACK, MOVE_SURF
    },
    {
    .lvl = -1,
    .species = SPECIES_FURRET,
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .moves = MOVE_BODY_SLAM, MOVE_SURF, MOVE_AGILITY, MOVE_ME_FIRST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lola1[] = {
    {
    .lvl = -3,
    .species = SPECIES_AZURILL,
    .moves = MOVE_WATER_PULSE, MOVE_CHARM, MOVE_TAIL_WHIP, MOVE_BOUNCE
    },
    {
    .lvl = -3,
    .species = SPECIES_SPHEAL,
    .moves = MOVE_BRINE, MOVE_DEFENSE_CURL, MOVE_ICE_BALL, MOVE_ENCORE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lola2[] = {
    {
    .lvl = -1,
    .species = SPECIES_AZUMARILL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_BOUNCE
    },
    {
    .lvl = -1,
    .species = SPECIES_SEALEO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRINE, MOVE_DEFENSE_CURL, MOVE_ICE_BALL, MOVE_ROLLOUT
    },
    {
    .lvl = -1,
    .species = SPECIES_CORSOLA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRINE, MOVE_POWER_GEM, MOVE_INGRAIN, MOVE_RECOVER
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Lola3[] = {
    {
    .lvl = -1,
    .species = SPECIES_AZUMARILL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_BOUNCE
    },
    {
    .lvl = -1,
    .species = SPECIES_SEALEO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRINE, MOVE_DEFENSE_CURL, MOVE_ICE_BALL, MOVE_ROLLOUT
    },
    {
    .lvl = -1,
    .species = SPECIES_CORSOLA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRINE, MOVE_POWER_GEM, MOVE_INGRAIN, MOVE_RECOVER
    },
    {
    .lvl = -1,
    .species = SPECIES_MAREANIE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRINE, MOVE_POISON_JAB, MOVE_TOXIC, MOVE_RECOVER
    }   
};

static const struct TrainerMonItemCustomMoves sParty_Lola4[] = {
    {
    .lvl = -1,
    .species = SPECIES_AZUMARILL,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_KNOCK_OFF
    },
    {
    .lvl = 0,
    .species = SPECIES_WALREIN,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_AQUA_TAIL, MOVE_SHEER_COLD, MOVE_HAIL, MOVE_BLIZZARD
    },
    {
    .lvl = -1,
    .species = SPECIES_CORSOLA,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_BRINE, MOVE_POWER_GEM, MOVE_INGRAIN, MOVE_RECOVER
    },
    {
    .lvl = -1,
    .species = SPECIES_TOXAPEX,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_POISON_JAB, MOVE_TOXIC, MOVE_RECOVER
    }  
};

static const struct TrainerMonItemCustomMoves sParty_Chandler[] = {
    {
    .lvl = -2,
    .species = SPECIES_MAREANIE,
    .moves = MOVE_BITE, MOVE_PECK, MOVE_POISON_STING, MOVE_TOXIC_SPIKES
    },
    {
    .lvl = -1,
    .species = SPECIES_PANPOUR,
    .moves = MOVE_SCALD, MOVE_BITE, MOVE_LICK, MOVE_PLAY_NICE
    }
};

// Seashore House

static const struct TrainerMonItemCustomMoves sParty_Simon[] = {
    {
    .lvl = -3,
    .species = SPECIES_SEEL,
    .moves = MOVE_ICE_SHARD, MOVE_ENCORE, MOVE_HEADBUTT, MOVE_ICY_WIND
    },
    {
    .lvl = -3,
    .species = SPECIES_TOTODILE,
    .moves = MOVE_WATER_GUN, MOVE_BITE, MOVE_RAGE, MOVE_LEER
    },
    {
    .lvl = -3,
    .species = SPECIES_HERDIER,
    .moves = MOVE_TAKE_DOWN, MOVE_BITE, MOVE_ODOR_SLEUTH, MOVE_SURF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Johanna[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOLDEEN,
    .ability = 2, // Lightningrod
    .moves = MOVE_BUBBLE_BEAM, MOVE_PECK, MOVE_HORN_ATTACK, MOVE_SUPERSONIC
    },
    {
    .lvl = -3,
    .species = SPECIES_BRUXISH,
    .ability = 1, // Strong Jaw
    .moves = MOVE_AQUA_JET, MOVE_BITE, MOVE_CONFUSION, MOVE_ASTONISH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dwayne[] = {
    {
    .lvl = -3,
    .species = SPECIES_CORPHISH,
    .moves = MOVE_BUBBLE_BEAM, MOVE_VISE_GRIP, MOVE_LEER, MOVE_HARDEN
    },
    {
    .lvl = -3,
    .species = SPECIES_TENTACOOL,
    .moves = MOVE_BUBBLE_BEAM, MOVE_ACID, MOVE_CONSTRICT
    },
    {
    .lvl = -3,
    .species = SPECIES_MAKUHITA,
    .moves = MOVE_WHIRLWIND, MOVE_FORCE_PALM, MOVE_FAKE_OUT
    }
};

// Route 110 (player level ~28)

static const struct TrainerMonItemCustomMoves sParty_Isabel1[] = {
    {
    .lvl = -3,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_HELPING_HAND, MOVE_CHARM
    },
    {
    .lvl = -3,
    .species = SPECIES_PACHIRISU,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_SWIFT, MOVE_SWEET_KISS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isabel2[] = {
    {
    .lvl = -3,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_HELPING_HAND, MOVE_CHARM
    },
    {
    .lvl = -3,
    .species = SPECIES_PACHIRISU,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_SWIFT, MOVE_SWEET_KISS
    },
    {
    .lvl = -3,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_SWIFT, MOVE_SWEET_KISS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isabel3[] = {
    {
    .lvl = -3,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_HELPING_HAND, MOVE_CHARM
    },
    {
    .lvl = -3,
    .species = SPECIES_PACHIRISU,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_SWIFT, MOVE_SWEET_KISS
    },
    {
    .lvl = -3,
    .species = SPECIES_PACHIRISU,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_SWIFT, MOVE_SWEET_KISS
    },
    {
    .lvl = -3,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_SWIFT, MOVE_SWEET_KISS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isabel4[] = {
    {
    .lvl = -3,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_NUZZLE, MOVE_NASTY_PLOT, MOVE_AURORA_BEAM
    },
    {
    .lvl = -3,
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ZING_ZAP, MOVE_NUZZLE, MOVE_IRON_HEAD, MOVE_SPIKY_SHIELD
    },
    {
    .lvl = -3,
    .species = SPECIES_PACHIRISU,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_VOLT_SWITCH, MOVE_NUZZLE, MOVE_SUPER_FANG, MOVE_SWEET_KISS
    },
    {
    .lvl = -3,
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_FLYING_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_THUNDER, MOVE_NASTY_PLOT, MOVE_ENERGY_BALL
    },
    {
    .lvl = -3,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_FOCUS_BLAST, MOVE_SURF, MOVE_GRASS_KNOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kaleb[] = {
    {
    .lvl = -3,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_NUZZLE, MOVE_HELPING_HAND, MOVE_FAKE_TEARS
    },
    {
    .lvl = -3,
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_ORAN_BERRY,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_SHOCK_WAVE, MOVE_NUZZLE, MOVE_ACROBATICS, MOVE_NASTY_PLOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Timmy[] = {
    {
    .lvl = -2,
    .species = SPECIES_FERROSEED,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_INGRAIN, MOVE_IRON_HEAD, MOVE_PIN_MISSILE, MOVE_BULLET_SEED
    },
    {
    .lvl = -2,
    .species = SPECIES_ELECTRIKE,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_DISCHARGE, MOVE_BITE, MOVE_QUICK_ATTACK, MOVE_ODOR_SLEUTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edwin1[] = {
    {
    .lvl = -2,
    .species = SPECIES_LOMBRE,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_MEGA_DRAIN, MOVE_BUBBLE_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_NUZLEAF,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_FEINT_ATTACK, MOVE_LEAF_BLADE, MOVE_AIR_CUTTER, MOVE_GROWTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edwin2[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUDICOLO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_GIGA_DRAIN, MOVE_HYDRO_PUMP
    },
    {
    .lvl = -2,
    .species = SPECIES_SHIFTRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_KNOCK_OFF, MOVE_LEAF_BLADE, MOVE_HURRICANE, MOVE_GROWTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edwin3[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUDICOLO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_GIGA_DRAIN, MOVE_HYDRO_PUMP
    },
    {
    .lvl = -2,
    .species = SPECIES_SHIFTRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_KNOCK_OFF, MOVE_LEAF_BLADE, MOVE_HURRICANE, MOVE_GROWTH
    },
    {
    .lvl = -2,
    .species = SPECIES_HONCHKROW,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_NIGHT_SLASH, MOVE_DRILL_PECK, MOVE_HAZE, MOVE_STEEL_WING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edwin4[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUDICOLO,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FAKE_OUT, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_HYDRO_PUMP
    },
    {
    .lvl = -2,
    .species = SPECIES_SHIFTRY,
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_KNOCK_OFF, MOVE_LEAF_BLADE, MOVE_HEAT_WAVE, MOVE_GROWTH
    },
    {
    .lvl = -2,
    .species = SPECIES_HONCHKROW,
    .ability = 2, // Moxie
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_SUCKER_PUNCH, MOVE_BRAVE_BIRD, MOVE_HEAT_WAVE, MOVE_STEEL_WING
    },
    {
    .lvl = -2,
    .species = SPECIES_MISMAGIUS,
    .ability = 2, // Pixilate
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_POWER_GEM, MOVE_NASTY_PLOT
    },    
};

static const struct TrainerMonItemCustomMoves sParty_Joseph[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUXIO,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_BITE, MOVE_SPARK, MOVE_HOWL, MOVE_ROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_VOLTORB,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_SWIFT, MOVE_SELF_DESTRUCT, MOVE_LIGHT_SCREEN, MOVE_ELECTRO_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edward[] = {
    {
    .lvl = 1,
    .species = SPECIES_ABRA,
    .spread = SPREAD_HP_FIGHTING_TIMID,
    .moves = MOVE_HIDDEN_POWER, MOVE_SHOCK_WAVE, MOVE_SIGNAL_BEAM, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Alyssa[] = {
    {
    .lvl = -1,
    .species = SPECIES_MAGNEMITE,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_MIRROR_SHOT
    },
    {
    .lvl = -2,
    .species = SPECIES_KLINK,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_DISCHARGE, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_AUTOTOMIZE
    },
};

static const struct TrainerMonItemCustomMoves sParty_Dale[] = {
    {
    .lvl = -3,
    .species = SPECIES_TENTACOOL,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_WRAP, MOVE_ACID_SPRAY, MOVE_WATER_PULSE, MOVE_BARRIER
    },
    {
    .lvl = -2,
    .species = SPECIES_WAILMER,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_BRINE, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_WHIRLPOOL
    },
    {
    .lvl = -2,
    .species = SPECIES_BINACLE,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_ANCIENT_POWER, MOVE_CLAMP, MOVE_ROCK_POLISH, MOVE_SLASH
    },
    {
    .lvl = -3,
    .species = SPECIES_ALOMOMOLA,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_BUBBLE_BEAM, MOVE_WAKE_UP_SLAP, MOVE_PROTECT, MOVE_AQUA_RING
    }
};

// Route 103 East

static const struct TrainerMonItemCustomMoves sParty_Daisy[] = {
    {
    .lvl = -2,
    .species = SPECIES_CHERUBI,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_MORNING_SUN, MOVE_GROWTH, MOVE_SUNNY_DAY, MOVE_MAGICAL_LEAF
    },
    {
    .lvl = -3,
    .species = SPECIES_ROSELIA,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_GRASS_WHISTLE, MOVE_GIGA_DRAIN, MOVE_SWEET_SCENT, MOVE_LEECH_SEED
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv1[] = {
    {
    .lvl = -2,
    .species = SPECIES_JIGGLYPUFF,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_SING, MOVE_WAKE_UP_SLAP, MOVE_STOCKPILE, MOVE_ROUND
    },
    {
    .lvl = -2,
    .species = SPECIES_CLEFAIRY,
    .ability = 1, // Magic Guard
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_DISARMING_VOICE, MOVE_MINIMIZE, MOVE_STORED_POWER, MOVE_FOLLOW_ME
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv2[] = {
    {
    .lvl = -2,
    .species = SPECIES_WIGGLYTUFF,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_STOCKPILE, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_CLEFABLE,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MOONBLAST, MOVE_MINIMIZE, MOVE_STORED_POWER, MOVE_FOLLOW_ME
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv3[] = {
    {
    .lvl = -2,
    .species = SPECIES_WIGGLYTUFF,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_STOCKPILE, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_CLEFABLE,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MOONBLAST, MOVE_MINIMIZE, MOVE_STORED_POWER, MOVE_FOLLOW_ME
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv4[] = {
    {
    .lvl = -2,
    .species = SPECIES_WIGGLYTUFF,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_STOCKPILE, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_CLEFABLE,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_MOONBLAST, MOVE_MINIMIZE, MOVE_STORED_POWER, MOVE_FOLLOW_ME
    },
    {
    .lvl = -2,
    .species = SPECIES_LILLIGANT,
    .ability = 1, // Own Tempo
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DAZZLING_GLEAM, MOVE_PETAL_DANCE, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_WHIMSICOTT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MOONBLAST, MOVE_TAILWIND, MOVE_ENDEAVOR, MOVE_CHARM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Miguel1[] = {
    {
    .lvl = -2,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Normalize
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_WAKE_UP_SLAP, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_MEOWTH,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 1, // Technician
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_FEINT_ATTACK, MOVE_SLASH, MOVE_SCREECH, MOVE_GROWL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Miguel2[] = {
    {
    .lvl = -2,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Normalize
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_WAKE_UP_SLAP, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_PERSIAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FEINT_ATTACK, MOVE_SWIFT, MOVE_POWER_GEM, MOVE_NASTY_PLOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Miguel3[] = {
    {
    .lvl = -2,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Normalize
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_WAKE_UP_SLAP, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_PERSIAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FEINT_ATTACK, MOVE_SWIFT, MOVE_FAKE_OUT, MOVE_PLAY_ROUGH
    },
    {
    .lvl = -2,
    .species = SPECIES_PERSIAN_ALOLAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SNARL, MOVE_SHOCK_WAVE, MOVE_ICY_WIND, MOVE_NASTY_PLOT
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Miguel4[] = {
    {
    .lvl = -2,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Normalize
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FAKE_OUT, MOVE_RETURN, MOVE_ATTRACT, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_PERSIAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BITE, MOVE_RETURN, MOVE_FAKE_OUT, MOVE_PLAY_ROUGH
    },
    {
    .lvl = -2,
    .species = SPECIES_PERSIAN_ALOLAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SNARL, MOVE_SHOCK_WAVE, MOVE_ICY_WIND, MOVE_NASTY_PLOT
    }  
};

static const struct TrainerMonItemCustomMoves sParty_Andrew[] = {
    {
    .lvl = -2,
    .species = SPECIES_BARBOACH,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_MAGNITUDE, MOVE_AMNESIA, MOVE_MUD_SLAP
    },
    {
    .lvl = -2,
    .species = SPECIES_HORSEA,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_BUBBLE_BEAM, MOVE_TWISTER, MOVE_SMOKESCREEN, MOVE_NONE
    },
    {
    .lvl = -3,
    .species = SPECIES_QWILFISH,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_REVENGE, MOVE_BRINE, MOVE_STOCKPILE, MOVE_MINIMIZE
    },
};

static const struct TrainerMonItemCustomMoves sParty_Marcos[] = {
    {
    .lvl = -2,
    .species = SPECIES_ELEKID,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_THUNDER_PUNCH, MOVE_LOW_KICK, MOVE_SWIFT, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_KRICKETUNE,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_X_SCISSOR, MOVE_UPROAR, MOVE_AIR_SLASH, MOVE_SING
    },
};

static const struct TrainerMonItemCustomMoves sParty_Rhett[] = {
    {
    .lvl = -3,
    .species = SPECIES_SAWK,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_RETALIATE, MOVE_BULK_UP, MOVE_LOW_SWEEP, MOVE_BIDE
    }
};

// Route 103 Surfing
static const struct TrainerMonItemCustomMoves sParty_Pete[] = {
    {
    .lvl = -2,
    .species = SPECIES_BLASTOISE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WATER_PULSE, MOVE_SHELL_SMASH, MOVE_FLASH_CANNON, MOVE_SKULL_BASH
    },
    {
    .lvl = -2,
    .species = SPECIES_WISHIWASHI,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_SOAK, MOVE_DOUBLE_EDGE, MOVE_ENDEAVOR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isabelle[] = {
    {
    .lvl = -3,
    .species = SPECIES_TOXAPEX,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BANEFUL_BUNKER, MOVE_RECOVER, MOVE_POISON_JAB, MOVE_LIQUIDATION
    },
    {
    .lvl = -3,
    .species = SPECIES_LAPRAS,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FREEZE_DRY, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_SAFEGUARD
    },
    {
    .lvl = -3,
    .species = SPECIES_ALOMOMOLA,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WATERFALL, MOVE_WISH, MOVE_PROTECT, MOVE_AQUA_RING
    }
};

// Route 110 Cycling Road

static const struct TrainerMonItemCustomMoves sParty_Jaclyn[] = {
    {
    .lvl = -2,
    .species = SPECIES_SOLOSIS,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_HIDDEN_POWER, MOVE_PSYSHOCK, MOVE_REFLECT, MOVE_LIGHT_SCREEN
    },
    {
    .lvl = -2,
    .species = SPECIES_KADABRA,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_HIDDEN_POWER, MOVE_PSYBEAM, MOVE_MIRACLE_EYE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Abigail1[] = {
    {
    .lvl = 0,
    .species = SPECIES_JOLTEON,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SWIFT, MOVE_BITE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Abigail2[] = {
    {
    .lvl = -1,
    .species = SPECIES_JOLTEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DISCHARGE, MOVE_THUNDER_WAVE, MOVE_HYPER_VOICE, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -1,
    .species = SPECIES_MAGNETON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Abigail3[] = {
    {
    .lvl = -1,
    .species = SPECIES_JOLTEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DISCHARGE, MOVE_THUNDER_WAVE, MOVE_HYPER_VOICE, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -1,
    .species = SPECIES_MAGNETON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DISCHARGE, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND
    },
    {
    .lvl = -1,
    .species = SPECIES_BLAZIKEN,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BLAZE_KICK, MOVE_SKY_UPPERCUT, MOVE_BULK_UP, MOVE_QUICK_ATTACK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Abigail4[] = {
    {
    .lvl = -1,
    .species = SPECIES_JOLTEON,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_AURORA_BEAM, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -1,
    .species = SPECIES_MAGNEZONE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_AURORA_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_BLAZIKEN,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_HIGH_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_YANMEGA,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_DETECT
    }   
};

static const struct TrainerMonItemCustomMoves sParty_Anthony[] = {
    {
    .lvl = -2,
    .species = SPECIES_MAGNEMITE,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_MIRROR_SHOT, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_METAL_SOUND
    },
    {
    .lvl = -2,
    .species = SPECIES_CHARJABUG,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUG_BITE, MOVE_SPARK, MOVE_ACROBATICS, MOVE_STRING_SHOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Benjamin1[] = {
    {
    .lvl = -2,
    .species = SPECIES_PIKACHU,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_NUZZLE, MOVE_NASTY_PLOT, MOVE_SWEET_KISS
    },
    {
    .lvl = -2,
    .species = SPECIES_GEODUDE_ALOLAN,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_THUNDER_PUNCH, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT, MOVE_ROCK_POLISH
    },
    {
    .lvl = -2,
    .species = SPECIES_FLAAFFY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_COTTON_SPORE, MOVE_CHARGE, MOVE_TAKE_DOWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Benjamin2[] = {
    {
    .lvl = -2,
    .species = SPECIES_RAICHU,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_NUZZLE, MOVE_NASTY_PLOT, MOVE_SWEET_KISS
    },
    {
    .lvl = -2,
    .species = SPECIES_GRAVELER_ALOLAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE, MOVE_EXPLOSION, MOVE_ROCK_POLISH
    },
    {
    .lvl = -2,
    .species = SPECIES_AMPHAROS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DISCHARGE, MOVE_COTTON_SPORE, MOVE_DRAGON_BREATH, MOVE_SIGNAL_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Benjamin3[] = {
    {
    .lvl = -2,
    .species = SPECIES_RAICHU,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_NUZZLE, MOVE_NASTY_PLOT, MOVE_SWEET_KISS
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM_ALOLAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WILD_CHARGE, MOVE_STONE_EDGE, MOVE_EXPLOSION, MOVE_ROCK_POLISH
    },
    {
    .lvl = -2,
    .species = SPECIES_AMPHAROS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER, MOVE_AGILITY, MOVE_DRAGON_PULSE, MOVE_SIGNAL_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Benjamin4[] = {
    {
    .lvl = -2,
    .species = SPECIES_RAICHU,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_NUZZLE, MOVE_NASTY_PLOT, MOVE_SWEET_KISS
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM_ALOLAN,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_WILD_CHARGE, MOVE_STONE_EDGE, MOVE_EXPLOSION, MOVE_ROCK_POLISH
    },
    {
    .lvl = -2,
    .species = SPECIES_AMPHAROS,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_THUNDER, MOVE_AGILITY, MOVE_DRAGON_PULSE, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_ELECTIVIRE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLASMA_FISTS, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jacob[] = {
    {
    .lvl = -1,
    .species = SPECIES_GROWLITHE,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_FLAME_BURST, MOVE_TAKE_DOWN, MOVE_REVERSAL, MOVE_AGILITY
    },
    {
    .lvl = -1,
    .species = SPECIES_LYCANROC,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ACCELEROCK, MOVE_ROCK_TOMB, MOVE_BITE, MOVE_ROAR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jasmine[] = {
    {
    .lvl = -2,
    .species = SPECIES_STARAVIA,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_WING_ATTACK, MOVE_REVENGE, MOVE_ENDEAVOR, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -2,
    .species = SPECIES_KLINK,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_GEAR_GRIND, MOVE_SCREECH, MOVE_DISCHARGE, MOVE_VISE_GRIP
    },
    {
    .lvl = -2,
    .species = SPECIES_HELIOPTILE,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_PARABOLIC_CHARGE, MOVE_MUD_SLAP, MOVE_THUNDER_WAVE, MOVE_RAZOR_WIND
    }
};

// Trick House 1

static const struct TrainerMonItemCustomMoves sParty_Sally[] = {
    {
    .lvl = -2,
    .species = SPECIES_GLOOM,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_ACID, MOVE_LUCKY_CHANT
    },
    {
    .lvl = -2,
    .species = SPECIES_TORRACAT,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_FIRE_FANG, MOVE_BITE, MOVE_DOUBLE_KICK, MOVE_LICK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Robin[] = {
    {
    .lvl = -2,
    .species = SPECIES_FLETCHINDER,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_FLAME_CHARGE, MOVE_STEEL_WING, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_BRIONNE,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_SING, MOVE_ENCORE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Eddie[] = {
    {
    .lvl = -2,
    .species = SPECIES_DUCKLETT,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_AIR_SLASH, MOVE_BUBBLE_BEAM, MOVE_STEEL_WING, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_DARTRIX,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_RAZOR_LEAF, MOVE_PLUCK, MOVE_OMINOUS_WIND, MOVE_SYNTHESIS
    }
};


// Trick House 2: Dynamo Badge

static const struct TrainerMonItemCustomMoves sParty_Ted[] = {
    {
    .lvl = -2,
    .species = SPECIES_GARDEVOIR,
    .ability = 1, // Trace
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_HYPNOSIS
    },
    {
    .lvl = -2,
    .species = SPECIES_PERSIAN,
    .ability = 1, // Technician
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SWIFT, MOVE_POWER_GEM, MOVE_NASTY_PLOT, MOVE_CAPTIVATE
    },
};

static const struct TrainerMonItemCustomMoves sParty_Paul[] = {
    {
    .lvl = -3,
    .species = SPECIES_SALANDIT,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_VENOSHOCK, MOVE_NASTY_PLOT, MOVE_TOXIC
    },
    {
    .lvl = -3,
    .species = SPECIES_FOONGUS,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_CLEAR_SMOG, MOVE_SYNTHESIS, MOVE_TOXIC
    },
    {
    .lvl = -3,
    .species = SPECIES_SEADRA,
    .spread = SPREAD_31_IV_20_EV,
    .moves = MOVE_BRINE, MOVE_AGILITY, MOVE_FOCUS_ENERGY, MOVE_AURORA_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Georgia[] = {
    {
    .lvl = -2,
    .species = SPECIES_CLEFAIRY,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_MOONBLAST, MOVE_SOFT_BOILED, MOVE_COSMIC_POWER, MOVE_STORED_POWER
    },
    {
    .lvl = -2,
    .species = SPECIES_BEAUTIFLY,
    .spread = SPREAD_31_IV_20_EV,
    .moves = MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_AIR_CUTTER
    }
};

// Trick House 3: Heat Badge

static const struct TrainerMonItemCustomMoves sParty_Justin[] = {
    {
    .lvl = -3,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_40_EV,
    .ability = 2, // Protean
    .moves = MOVE_SUCKER_PUNCH, MOVE_RETURN, MOVE_FIRE_PUNCH, MOVE_TRICK_ROOM
    },
    {
    .lvl = -3,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_SURF, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_TRICK_ROOM
    },
    {
    .lvl = -3,
    .species = SPECIES_SANDSLASH_ALOLAN,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Martha[] = {
    {
    .lvl = -3,
    .species = SPECIES_MEOWSTIC_FEMALE,
    .heldItem = ITEM_EXPERT_BELT,
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SIGNAL_BEAM, MOVE_ENERGY_BALL
    },
    {
    .lvl = -3,
    .species = SPECIES_GOGOAT,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_HORN_LEECH, MOVE_ROCK_SLIDE, MOVE_BULK_UP, MOVE_MILK_DRINK
    },
    {
    .lvl = -3,
    .species = SPECIES_CLEFABLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_MOONBLAST, MOVE_SING, MOVE_CALM_MIND, MOVE_SOFT_BOILED
    }
};

static const struct TrainerMonItemCustomMoves sParty_Alan[] = {
    {
    .lvl = -3,
    .species = SPECIES_MAROWAK,
    .heldItem = ITEM_THICK_CLUB,
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = -3,
    .species = SPECIES_PROBOPASS,
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_TRI_ATTACK, MOVE_EARTH_POWER, MOVE_POWER_GEM, MOVE_SANDSTORM
    },
    {
    .lvl = -3,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_31_IV_40_EV,
    .ability = 1, // Rock Head
    .moves = MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_AUTOTOMIZE
    }
};

// Trick House 4: Balance Badge

static const struct TrainerMonItemCustomMoves sParty_Yuji[] = {
    {
    .lvl = -2,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .ability = 2, // Sheer Force
    .moves = MOVE_FORCE_PALM, MOVE_ROCK_SLIDE, MOVE_POISON_JAB, MOVE_WHIRLWIND
    },
    {
    .lvl = -2,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_PAYBACK, MOVE_DRAIN_PUNCH, MOVE_IRON_HEAD, MOVE_ZEN_HEADBUTT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cora[] = {
    {
    .lvl = -3,
    .species = SPECIES_MEDICHAM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_BULK_UP, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_FLYING_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_ACROBATICS, MOVE_HIGH_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_ROOST
    },
    {
    .lvl = -3,
    .species = SPECIES_TOXICROAK,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_FOCUS_BLAST, MOVE_SLUDGE_BOMB, MOVE_DARK_PULSE, MOVE_SUCKER_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Paula[] = {
    {
    .lvl = -3,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_TOXIC_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .ability = 1, // Poison Heal
    .moves = MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_SEED_BOMB
    },
    {
    .lvl = -3,
    .species = SPECIES_PANGORO,
    .heldItem = ITEM_ROSELI_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CRUNCH, MOVE_HAMMER_ARM, MOVE_POISON_JAB, MOVE_PARTING_SHOT
    },
    {
    .lvl = -3,
    .species = SPECIES_POLIWRATH,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FOCUS_BLAST, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_MIND_READER
    }
};

// Trick House 5: Feather Badge N/A

// Trick House 6: Mind Badge

static const struct TrainerMonItemCustomMoves sParty_Sebastian[] = {
    {
    .lvl = -2,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BULLET_PUNCH, MOVE_THIEF, MOVE_BUG_BITE, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_DONPHAN,
    .heldItem = ITEM_ROCKY_HELMET,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_EARTHQUAKE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_ICE_SHARD
    },
    {
    .lvl = -2,
    .species = SPECIES_DUNSPARCE,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_HEADBUTT, MOVE_COIL, MOVE_GLARE, MOVE_ROOST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sophia[] = {
    {
    .lvl = -2,
    .species = SPECIES_LURANTIS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Contrary
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_PETAL_BLIZZARD, MOVE_SUPERPOWER, MOVE_LEECH_LIFE, MOVE_SYNTHESIS
    },
    {
    .lvl = -2,
    .species = SPECIES_ORICORIO_POM_POM,
    .heldItem = ITEM_ELECTRIC_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_REVELATION_DANCE, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_QUIVER_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_MUDSDALE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_HIGH_HORSEPOWER, MOVE_STRENGTH, MOVE_COUNTER, MOVE_HEAVY_SLAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Benny[] = {
    {
    .lvl = -3,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_BOOMBURST, MOVE_U_TURN, MOVE_REVERSAL
    },
    {
    .lvl = -3,
    .species = SPECIES_XATU,
    .ability = 2, // Magic Bounce
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_MIRACLE_EYE
    },
    {
    .lvl = -3,
    .species = SPECIES_FARFETCHD,
    .heldItem = ITEM_LEEK,
    .ability = 0, // Super Luck
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF
    }
};

// Trick House 7: Rain Badge

static const struct TrainerMonItemCustomMoves sParty_Joshua[] = { // with Patricia
    {
    .lvl = -3,
    .species = SPECIES_ALAKAZAM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_AURA_SPHERE
    },
    {
    .lvl = -3,
    .species = SPECIES_MR_MIME,
    .ability = 1, // Filter
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT
    },
    {
    .lvl = -3,
    .species = SPECIES_DARMANITAN,
    .ability = 2, // Zen Mode
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_SUBSTITUTE, MOVE_GRASS_KNOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Patricia[] = { // with Joshua
    {
    .lvl = -3,
    .species = SPECIES_BANETTE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PHANTOM_FORCE, MOVE_RETURN, MOVE_WILL_O_WISP, MOVE_GUNK_SHOT
    },
    {
    .lvl = -3,
    .species = SPECIES_MISMAGIUS,
    .ability = 2, // Pixilate
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPER_VOICE, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_MYSTICAL_FIRE
    },
    {
    .lvl = -3,
    .species = SPECIES_GOTHITELLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_TAUNT, MOVE_TORMENT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Mariela[] = { // with Everett
    {
    .lvl = -3,
    .species = SPECIES_STARMIE,
    .ability = 2, // Analytic
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPOTLIGHT, MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_THUNDERBOLT
    },
    {
    .lvl = -3,
    .species = SPECIES_CHIMECHO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_DISABLE, MOVE_TORMENT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Everett[] = { // with Mariela
    {
    .lvl = -3,
    .species = SPECIES_WOBBUFFET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND
    },
    {
    .lvl = -3,
    .species = SPECIES_BEHEEYEM,
    .ability = 2, // Psychic Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_PROTECT, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Alexis[] = { // with Alvaro
    {
    .lvl = -3,
    .species = SPECIES_GARDEVOIR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_AURA_SPHERE, MOVE_ENCORE
    },
    {
    .lvl = -3,
    .species = SPECIES_ORANGURU,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FOUL_PLAY, MOVE_DREAM_EATER, MOVE_YAWN, MOVE_SUBSTITUTE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Alvaro[] = { // with Alexis
    {
    .lvl = -3,
    .species = SPECIES_GALLADE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHO_CUT, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_STONE_EDGE
    },
    {
    .lvl = -3,
    .species = SPECIES_GIRAFARIG,
    .ability = 1, // Contrary
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHO_BOOST, MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_DARK_PULSE
    }
};

// Trick House 8: Post Game

static const struct TrainerMonItemCustomMoves sParty_Vincent[] = {
    {
    .lvl = 0,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_IRON_BALL,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_WILL_O_WISP, MOVE_TRICK, MOVE_FOUL_PLAY, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_WATER_GEM,
    .ability = 0, // Competitive
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_QUIVER_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, // Poison Heal
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_TOXIC, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Reckless
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_MUD_SHOT
    },
    {
    .lvl = 0,
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_U_TURN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Leroy[] = {
    {
    .lvl = 0,
    .species = SPECIES_SLURPUFF,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 2, // Unburden
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_PLAY_ROUGH, MOVE_DRAIN_PUNCH, MOVE_FLAMETHROWER, MOVE_STICKY_WEB
    },
    {
    .lvl = 0,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_MAWILITE,
    .ability = 1, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_DRAGON_GEM,
    .ability = 2, // Moxie
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .moves = MOVE_OUTRAGE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST
    },
    {
    .lvl = 0,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Poison Heal
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_PORYGON_Z,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = 0, // Adaptability
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_TECHNO_BLAST, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_DARK_PULSE
    },
    {
    .lvl = 0,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Moxie
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_EARTHQUAKE, MOVE_STONE_EDGE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Keira[] = {
    {
    .lvl = 0,
    .species = SPECIES_GIGALITH,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = 1, // Sand Stream
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_EXPLOSION, MOVE_TOXIC, MOVE_STEALTH_ROCK, MOVE_NONE
    },
    {
    .lvl = -100,
    .species = SPECIES_ARON,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = 0, // Sturdy
    .spread = SPREAD_0_IV_EV,
    .moves = MOVE_ENDEAVOR, MOVE_SANDSTORM, MOVE_TOXIC, MOVE_NONE
    },
    {
    .lvl = -100,
    .species = SPECIES_MAGNEMITE,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = 1, // Sturdy
    .spread = SPREAD_0_IV_EV,
    .moves = MOVE_RECYCLE, MOVE_TOXIC, MOVE_PROTECT, MOVE_NONE
    },
    {
    .lvl = -100,
    .species = SPECIES_SWINUB,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_0_IV_EV,
    .moves = MOVE_ENDEAVOR, MOVE_ICE_SHARD, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = 0,
    .species = SPECIES_WHIMSICOTT,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = 0, // Prankster
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_PROTECT, MOVE_ENCORE
    },
    {
    .lvl = 0,
    .species = SPECIES_ROTOM_WASH,
    .heldItem = ITEM_LAGGING_TAIL,
    .spread = SPREAD_31_IV_HP_DEF_SPDEF_SASSY,
    .moves = MOVE_VOLT_SWITCH, MOVE_HYDRO_PUMP, MOVE_NONE, MOVE_NONE
    }
};

// Route 118

static const struct TrainerMonItemCustomMoves sParty_Rose1[] = {
    {
    .lvl = -2,
    .species = SPECIES_FLOETTE,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_MAGICAL_LEAF, MOVE_DRAINING_KISS, MOVE_WISH, MOVE_LEECH_SEED
    },
    {
    .lvl = -2,
    .species = SPECIES_IVYSAUR,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SEED_BOMB, MOVE_SLUDGE, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED
    },
    {
    .lvl = 0,
    .species = SPECIES_COMBEE,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_GUST, MOVE_SWEET_SCENT, MOVE_BUG_BITE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Rose2[] = {
    {
    .lvl = -2,
    .species = SPECIES_FLORGES,
    .ability = 1, // Misty Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PETAL_DANCE, MOVE_LEECH_SEED, MOVE_MOONBLAST, MOVE_PROTECT
    },
    {
    .lvl = -2,
    .species = SPECIES_VENUSAUR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PETAL_BLIZZARD, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED
    },
    {
    .lvl = -2,
    .species = SPECIES_VESPIQUEN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_POWER_GEM, MOVE_HEAL_ORDER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Rose3[] = {
    {
    .lvl = -2,
    .species = SPECIES_FLORGES,
    .ability = 1, // Misty Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PETAL_DANCE, MOVE_LEECH_SEED, MOVE_MOONBLAST, MOVE_PROTECT
    },
    {
    .lvl = -2,
    .species = SPECIES_VENUSAUR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED
    },
    {
    .lvl = -2,
    .species = SPECIES_VESPIQUEN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_POWER_GEM, MOVE_HEAL_ORDER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Rose4[] = {
    {
    .lvl = -2,
    .species = SPECIES_FLORGES,
    .ability = 1, // Misty Surge
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_CALM_MIND, MOVE_LEECH_SEED, MOVE_DRAINING_KISS, MOVE_EARTH_POWER
    },
    {
    .lvl = -2,
    .species = SPECIES_VENUSAUR,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_EARTH_POWER
    },
    {
    .lvl = -2,
    .species = SPECIES_VESPIQUEN,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_POWER_GEM, MOVE_HEAL_ORDER
    },
    {
    .lvl = -2,
    .species = SPECIES_MEGANIUM,
    .ability = 2, // Triage
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_SYNTHESIS, MOVE_LEECH_SEED
    }
};

static const struct TrainerMonItemCustomMoves sParty_Deandre[] = {
    {
    .lvl = -2,
    .species = SPECIES_DIGGERSBY,
    .ability = 2, // Huge Power
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_DOUBLE_KICK, MOVE_BULLDOZE, MOVE_SWORDS_DANCE, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -1,
    .species = SPECIES_LAIRON,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_TAKE_DOWN, MOVE_PROTECT
    },
    {
    .lvl = -2,
    .species = SPECIES_SIMISEAR,
    .ability = 2, // Blaze
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_FLAME_BURST, MOVE_YAWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wade[] = {
    {
    .lvl = -1,
    .species = SPECIES_GYARADOS,
    .ability = 2, // Moxie
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_THRASH, MOVE_WHIRLPOOL
    },
    {
    .lvl = -1,
    .species = SPECIES_CHINCHOU,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_DISCHARGE, MOVE_SIGNAL_BEAM, MOVE_WATER_PULSE, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dalton1[] = {
    {
    .lvl = 0,
    .species = SPECIES_NOIVERN,
    .spread = SPREAD_25_IV_0_EV,    
    .moves = MOVE_DRAGON_PULSE, MOVE_AIR_CUTTER, MOVE_MOONLIGHT, MOVE_SUPERSONIC
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dalton2[] = {
    {
    .lvl = -2,
    .species = SPECIES_NOIVERN,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONLIGHT, MOVE_DARK_PULSE
    },
    {
    .lvl = -2,
    .species = SPECIES_EXPLOUD,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_HYPER_VOICE, MOVE_EXTRASENSORY, MOVE_SURF, MOVE_CRUNCH
    },
/*     {
    .lvl = -2,
    .species = SPECIES_TOXEL,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_TEARFUL_LOOK, MOVE_NUZZLE, MOVE_ACID, MOVE_FLAIL
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Dalton3[] = {
    {
    .lvl = -2,
    .species = SPECIES_NOIVERN,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONLIGHT, MOVE_DARK_PULSE
    },
    {
    .lvl = -2,
    .species = SPECIES_EXPLOUD,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_HYPER_VOICE, MOVE_EXTRASENSORY, MOVE_SURF, MOVE_CRUNCH
    },
/*     {
    .lvl = -2,
    .species = SPECIES_TOXTRICITY,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_SLUDGE_BOMB, MOVE_SHIFT_GEAR
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Dalton4[] = {
    {
    .lvl = -2,
    .species = SPECIES_NOIVERN,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,    
    .moves = MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_FLAMETHROWER, MOVE_U_TURN
    },
    {
    .lvl = -2,
    .species = SPECIES_EXPLOUD,
    .ability = 2, // Scrappy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,    
    .moves = MOVE_BOOMBURST, MOVE_EXTRASENSORY, MOVE_SURF, MOVE_FIRE_BLAST
    },
    {
    .lvl = -2,
    .species = SPECIES_KRICKETUNE,
    .ability = 2, // Scrappy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,    
    .moves = MOVE_BOOMBURST, MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_SING
    },
/*     {
    .lvl = -2,
    .species = SPECIES_TOXTRICITY,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_SLUDGE_BOMB, MOVE_SHIFT_GEAR
    } */
};

// Route 117


static const struct TrainerMonItemCustomMoves sParty_Dylan1[] = {
    {
    .lvl = -1,
    .species = SPECIES_YANMA,
    .spread = SPREAD_25_IV_0_EV,    
    .moves = MOVE_SIGNAL_BEAM, MOVE_AIR_CUTTER, MOVE_ANCIENT_POWER, MOVE_UPROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_DODUO,
    .spread = SPREAD_25_IV_0_EV,    
    .moves = MOVE_QUICK_ATTACK, MOVE_DOUBLE_HIT, MOVE_PLUCK, MOVE_ACUPRESSURE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dylan2[] = {
    {
    .lvl = -2,
    .species = SPECIES_YANMEGA,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_UPROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_DODRIO,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_DRILL_PECK, MOVE_DOUBLE_HIT, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_DUGTRIO,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_SLASH, MOVE_ROCK_SLIDE
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Dylan3[] = {
    {
    .lvl = -2,
    .species = SPECIES_YANMEGA,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ANCIENT_POWER, MOVE_UPROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_DODRIO,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_DRILL_PECK, MOVE_DOUBLE_HIT, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_DUGTRIO,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_SLASH, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -2,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_WILD_CHARGE, MOVE_JUMP_KICK, MOVE_OVERHEAT, MOVE_THRASH
    }   
};

static const struct TrainerMonItemCustomMoves sParty_Dylan4[] = {
    {
    .lvl = -2,
    .species = SPECIES_YANMEGA,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,    
    .moves = MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC
    },
    {
    .lvl = -2,
    .species = SPECIES_DODRIO,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_DUGTRIO,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_RETURN, MOVE_STONE_EDGE
    },
    {
    .lvl = -2,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_WILD_CHARGE, MOVE_JUMP_KICK, MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE
    }   
};

static const struct TrainerMonItemCustomMoves sParty_Maria1[] = {
    {
    .lvl = -2,
    .species = SPECIES_TRANQUILL,
    .spread = SPREAD_15_IV_0_EV,    
    .moves = MOVE_QUICK_ATTACK, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_DETECT
    },
    {
    .lvl = -2,
    .species = SPECIES_HAWLUCHA,
    .ability = 2, // Mold Breaker
    .spread = SPREAD_15_IV_0_EV,    
    .moves = MOVE_BOUNCE, MOVE_SUBMISSION, MOVE_FEATHER_DANCE, MOVE_HONE_CLAWS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Maria2[] = {
    {
    .lvl = -2,
    .species = SPECIES_UNFEZANT,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_QUICK_ATTACK, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_SUBMISSION
    },
    {
    .lvl = -2,
    .species = SPECIES_HAWLUCHA,
    .ability = 2, // Mold Breaker
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_ACROBATICS, MOVE_FLYING_PRESS, MOVE_SWORDS_DANCE, MOVE_U_TURN
    },
    {
    .lvl = -2,
    .species = SPECIES_RIBOMBEE,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Maria3[] = {
    {
    .lvl = -2,
    .species = SPECIES_UNFEZANT,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_QUICK_ATTACK, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_SUBMISSION
    },
    {
    .lvl = -2,
    .species = SPECIES_HAWLUCHA,
    .ability = 2, // Mold Breaker
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_BRAVE_BIRD, MOVE_HIGH_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_POISON_JAB
    },
    {
    .lvl = -2,
    .species = SPECIES_RIBOMBEE,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_BUG_BUZZ, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Maria4[] = {
    {
    .lvl = -2,
    .species = SPECIES_UNFEZANT,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_QUICK_ATTACK, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_SUBMISSION
    },
    {
    .lvl = -2,
    .species = SPECIES_HAWLUCHA,
    .ability = 2, // Mold Breaker
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_BRAVE_BIRD, MOVE_HIGH_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_POISON_JAB
    },
    {
    .lvl = -2,
    .species = SPECIES_RIBOMBEE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,    
    .moves = MOVE_BUG_BUZZ, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_QUIVER_DANCE
    },
/*     {
    .lvl = -2,
    .species = SPECIES_BOLTUND,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_CRUNCH, MOVE_HOWL
    } */
};

static const struct TrainerMonItemCustomMoves sParty_AnnaAndMeg1[] = {
    {
    .lvl = 0,
    .species = SPECIES_MINCCINO,
    .ability = 2, // Skill Link
    .spread = SPREAD_25_IV_0_EV,    
    .moves = MOVE_TAIL_SLAP, MOVE_HELPING_HAND, MOVE_WAKE_UP_SLAP, MOVE_SING
    },
    {
    .lvl = 0,
    .species = SPECIES_GURDURR,
    .spread = SPREAD_25_IV_0_EV,    
    .moves = MOVE_ROCK_SLIDE, MOVE_WAKE_UP_SLAP, MOVE_CHIP_AWAY, MOVE_FOCUS_ENERGY
    }
};

static const struct TrainerMonItemCustomMoves sParty_AnnaAndMeg2[] = {
    {
    .lvl = 0,
    .species = SPECIES_CINCCINO,
    .ability = 2, // Skill Link
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_AQUA_TAIL
    },
    {
    .lvl = 0,
    .species = SPECIES_CONKELDURR,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_DRAIN_PUNCH, MOVE_PAYBACK, MOVE_MACH_PUNCH, MOVE_ROCK_SLIDE
    }
};

static const struct TrainerMonItemCustomMoves sParty_AnnaAndMeg3[] = {
    {
    .lvl = 0,
    .species = SPECIES_CINCCINO,
    .ability = 2, // Skill Link
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_AQUA_TAIL
    },
    {
    .lvl = 0,
    .species = SPECIES_CONKELDURR,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_DRAIN_PUNCH, MOVE_PAYBACK, MOVE_MACH_PUNCH, MOVE_ROCK_SLIDE
    },
/*     {
    .lvl = 0,
    .species = SPECIES_OBSTAGOON,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_CROSS_CHOP, MOVE_RETURN, MOVE_NIGHT_SLASH, MOVE_SCARY_FACE
    },
    {
    .lvl = 0,
    .species = SPECIES_HATTERENE,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_DRAINING_KISS, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_LIFE_DEW
    }   */
};

static const struct TrainerMonItemCustomMoves sParty_AnnaAndMeg4[] = {
    {
    .lvl = 0,
    .species = SPECIES_CINCCINO,
    .ability = 2, // Skill Link
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_AQUA_TAIL
    },
    {
    .lvl = 0,
    .species = SPECIES_CONKELDURR,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,    
    .moves = MOVE_DRAIN_PUNCH, MOVE_PAYBACK, MOVE_MACH_PUNCH, MOVE_ROCK_SLIDE
    },
/*     {
    .lvl = 0,
    .species = SPECIES_OBSTAGOON,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_CROSS_CHOP, MOVE_RETURN, MOVE_NIGHT_SLASH, MOVE_SCARY_FACE
    },
    {
    .lvl = 0,
    .species = SPECIES_HATTERENE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,    
    .moves = MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_LIFE_DEW
    }   */
};

static const struct TrainerMonItemCustomMoves sParty_Isaac1[] = {
    {
    .lvl = -5,
    .species = SPECIES_BONSLY,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_FEINT_ATTACK, MOVE_LOW_KICK
    },
    {
    .lvl = -5,
    .species = SPECIES_EEVEE,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_BATON_PASS, MOVE_YAWN, MOVE_WISH, MOVE_HYPER_VOICE
    },
    {
    .lvl = -5,
    .species = SPECIES_LITWICK,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_FLAME_BURST, MOVE_SHADOW_BALL, MOVE_ACID_ARMOR, MOVE_PAIN_SPLIT
    },
    {
    .lvl = -5,
    .species = SPECIES_MANTYKE,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_SIGNAL_BEAM, MOVE_TAILWIND, MOVE_HYDRO_PUMP, MOVE_CONFUSE_RAY
    },
    {
    .lvl = -5,
    .species = SPECIES_DEINO,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_DRAGON_PULSE, MOVE_SLAM
    },
    {
    .lvl = -5,
    .species = SPECIES_TANGELA,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_SLEEP_POWDER, MOVE_WAKE_UP_SLAP, MOVE_GIGA_DRAIN, MOVE_AMNESIA
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isaac2[] = {
    {
    .lvl = -5,
    .species = SPECIES_SUDOWOODO,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_HEAD_SMASH, MOVE_CURSE, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK
    },
    {
    .lvl = -5,
    .species = SPECIES_SYLVEON,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_BATON_PASS, MOVE_YAWN, MOVE_WISH, MOVE_HYPER_VOICE
    },
    {
    .lvl = -5,
    .species = SPECIES_LAMPENT,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_ACID_ARMOR, MOVE_PAIN_SPLIT
    },
    {
    .lvl = -5,
    .species = SPECIES_MANTINE,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_SIGNAL_BEAM, MOVE_TAILWIND, MOVE_HYDRO_PUMP, MOVE_ROOST
    },
    {
    .lvl = -5,
    .species = SPECIES_DEINO,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_DRAGON_PULSE, MOVE_SLAM
    },
    {
    .lvl = -5,
    .species = SPECIES_TANGROWTH,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_SLEEP_POWDER, MOVE_WAKE_UP_SLAP, MOVE_GIGA_DRAIN, MOVE_AMNESIA
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isaac3[] = {
    {
    .lvl = -3,
    .species = SPECIES_SUDOWOODO,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_HEAD_SMASH, MOVE_CURSE, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK
    },
    {
    .lvl = -3,
    .species = SPECIES_SYLVEON,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_BATON_PASS, MOVE_YAWN, MOVE_WISH, MOVE_HYPER_VOICE
    },
    {
    .lvl = -3,
    .species = SPECIES_CHANDELURE,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_ACID_ARMOR, MOVE_PAIN_SPLIT
    },
    {
    .lvl = -3,
    .species = SPECIES_MANTINE,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_HYDRO_PUMP, MOVE_ROOST
    },
    {
    .lvl = -3,
    .species = SPECIES_ZWEILOUS,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE
    },
    {
    .lvl = -3,
    .species = SPECIES_TANGROWTH,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_SLEEP_POWDER, MOVE_WAKE_UP_SLAP, MOVE_GIGA_DRAIN, MOVE_AMNESIA
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isaac4[] = {
    {
    .lvl = -1,
    .species = SPECIES_SUDOWOODO,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,    
    .moves = MOVE_HEAD_SMASH, MOVE_CURSE, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK
    },
    {
    .lvl = -1,
    .species = SPECIES_SYLVEON,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,    
    .moves = MOVE_BATON_PASS, MOVE_YAWN, MOVE_WISH, MOVE_HYPER_VOICE
    },
    {
    .lvl = -1,
    .species = SPECIES_CHANDELURE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,    
    .moves = MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_ACID_ARMOR, MOVE_PAIN_SPLIT
    },
    {
    .lvl = -1,
    .species = SPECIES_MANTINE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,    
    .moves = MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_HYDRO_PUMP, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_HYDREIGON,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,    
    .moves = MOVE_DARK_PULSE, MOVE_EARTH_POWER, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON
    },
    {
    .lvl = -1,
    .species = SPECIES_TANGROWTH,
    .spread = SPREAD_31_IV_HP_ATK_MIXED,    
    .moves = MOVE_SLEEP_POWDER, MOVE_WAKE_UP_SLAP, MOVE_GIGA_DRAIN, MOVE_AMNESIA
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lydia1[] = {
    {
    .lvl = -5,
    .species = SPECIES_FROAKIE,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_BUBBLE_BEAM, MOVE_SMACK_DOWN, MOVE_TOXIC_SPIKES, MOVE_CAMOUFLAGE
    },
    {
    .lvl = -5,
    .species = SPECIES_ELEKID,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP, MOVE_ICE_PUNCH
    },
    {
    .lvl = -5,
    .species = SPECIES_MAGBY,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP, MOVE_MACH_PUNCH
    },
    {
    .lvl = -5,
    .species = SPECIES_SMOOCHUM,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_FAKE_OUT, MOVE_NASTY_PLOT, MOVE_MIRACLE_EYE, MOVE_PSYSHOCK
    },
    {
    .lvl = -5,
    .species = SPECIES_HAPPINY,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_SEISMIC_TOSS, MOVE_AROMATHERAPY, MOVE_COUNTER, MOVE_SOFT_BOILED
    },
    {
    .lvl = -5,
    .species = SPECIES_DRATINI,
    .spread = SPREAD_31_IV_0_EV,    
    .moves = MOVE_EXTREME_SPEED, MOVE_AQUA_JET, MOVE_IRON_TAIL, MOVE_DRAGON_RUSH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lydia2[] = {
    {
    .lvl = -5,
    .species = SPECIES_GRENINJA,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_WATER_PLEDGE, MOVE_ICY_WIND, MOVE_TOXIC_SPIKES, MOVE_GRASS_KNOT
    },
    {
    .lvl = -5,
    .species = SPECIES_ELECTABUZZ,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP, MOVE_ICE_PUNCH
    },
    {
    .lvl = -5,
    .species = SPECIES_MAGMAR,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP, MOVE_MACH_PUNCH
    },
    {
    .lvl = -5,
    .species = SPECIES_JYNX,
    .ability = 2, // Dry Skin
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_FAKE_OUT, MOVE_NASTY_PLOT, MOVE_ICE_BEAM, MOVE_PSYSHOCK
    },
    {
    .lvl = -5,
    .species = SPECIES_CHANSEY,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_SEISMIC_TOSS, MOVE_AROMATHERAPY, MOVE_COUNTER, MOVE_SOFT_BOILED
    },
    {
    .lvl = -5,
    .species = SPECIES_DRAGONAIR,
    .ability = 2, // Marvel Scale
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_EXTREME_SPEED, MOVE_AQUA_JET, MOVE_IRON_TAIL, MOVE_DRAGON_RUSH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lydia3[] = {
    {
    .lvl = -3,
    .species = SPECIES_GRENINJA,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_WATER_PLEDGE, MOVE_ICY_WIND, MOVE_TOXIC_SPIKES, MOVE_GRASS_KNOT
    },
    {
    .lvl = -3,
    .species = SPECIES_ELECTIVIRE,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP, MOVE_ICE_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_MAGMORTAR,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP, MOVE_MACH_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_JYNX,
    .ability = 2, // Dry Skin
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_FAKE_OUT, MOVE_NASTY_PLOT, MOVE_ICE_BEAM, MOVE_PSYSHOCK
    },
    {
    .lvl = -3,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_SEISMIC_TOSS, MOVE_AROMATHERAPY, MOVE_COUNTER, MOVE_SOFT_BOILED
    },
    {
    .lvl = -3,
    .species = SPECIES_DRAGONAIR,
    .ability = 2, // Marvel Scale
    .spread = SPREAD_31_IV_80_EV,    
    .moves = MOVE_EXTREME_SPEED, MOVE_AQUA_JET, MOVE_IRON_TAIL, MOVE_OUTRAGE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lydia4[] = {
    {
    .lvl = -1,
    .species = SPECIES_GRENINJA,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,    
    .moves = MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_TOXIC_SPIKES, MOVE_EXTRASENSORY
    },
    {
    .lvl = -1,
    .species = SPECIES_ELECTIVIRE,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_PLASMA_FISTS, MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP, MOVE_ICE_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_MAGMORTAR,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,    
    .moves = MOVE_THUNDER_PUNCH, MOVE_FLARE_BLITZ, MOVE_CROSS_CHOP, MOVE_MACH_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_JYNX,
    .ability = 2, // Dry Skin
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FAKE_OUT, MOVE_NASTY_PLOT, MOVE_FREEZE_DRY, MOVE_PSYSHOCK
    },
    {
    .lvl = -1,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_CHANSEY,    
    .moves = MOVE_SEISMIC_TOSS, MOVE_AROMATHERAPY, MOVE_COUNTER, MOVE_SOFT_BOILED
    },
    {
    .lvl = -1,
    .species = SPECIES_DRAGONITE,
    .ability = 2, // Marvel Scale
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,    
    .moves = MOVE_EXTREME_SPEED, MOVE_WATERFALL, MOVE_IRON_TAIL, MOVE_OUTRAGE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Derek[] = {
    {
    .lvl = -2,
    .species = SPECIES_MOTHIM,
    .ability = 2, // Tinted Lens
    .spread = SPREAD_15_IV_0_EV,    
    .moves = MOVE_QUIVER_DANCE, MOVE_HIDDEN_POWER, MOVE_SILVER_WIND, MOVE_PSYBEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_WORMADAM_SANDY_CLOAK,
    .spread = SPREAD_15_IV_0_EV,    
    .moves = MOVE_QUIVER_DANCE, MOVE_PSYBEAM, MOVE_HIDDEN_POWER, MOVE_ROCK_BLAST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brandi[] = {
    {
    .lvl = -2,
    .species = SPECIES_ESPURR,
    .spread = SPREAD_15_IV_0_EV,    
    .moves = MOVE_PSYSHOCK, MOVE_DISARMING_VOICE, MOVE_FAKE_OUT, MOVE_LIGHT_SCREEN
    },
    {
    .lvl = -2,
    .species = SPECIES_MUNNA,
    .spread = SPREAD_15_IV_0_EV,    
    .moves = MOVE_YAWN, MOVE_NIGHTMARE, MOVE_CALM_MIND, MOVE_PSYBEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Melina[] = {
    {
    .lvl = -2,
    .species = SPECIES_PONYTA,
    .spread = SPREAD_15_IV_0_EV,    
    .moves = MOVE_BLAZE_KICK, MOVE_JUMP_KICK, MOVE_TAKE_DOWN, MOVE_INFERNO
    },
    {
    .lvl = -2,
    .species = SPECIES_SNEASEL,
    .spread = SPREAD_15_IV_0_EV,    
    .moves = MOVE_FEINT_ATTACK, MOVE_ICE_SHARD, MOVE_HONE_CLAWS, MOVE_QUICK_ATTACK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Aisha[] = {
    {
    .lvl = 0,
    .species = SPECIES_LUCARIO,
    .spread = SPREAD_25_IV_0_EV,    
    .moves = MOVE_BULLET_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_QUICK_ATTACK, MOVE_SCREECH
    }
};

// Winstrates

static const struct TrainerMonItemCustomMoves sParty_Victor[] = {
    {
    .lvl = -1,
    .species = SPECIES_STARAPTOR,
    .spread = SPREAD_25_IV_0_EV,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_WING_ATTACK, MOVE_TAKE_DOWN, MOVE_DOUBLE_TEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_GUMSHOOS,
    .ability = 1, // Strong Jaw
    .spread = SPREAD_25_IV_0_EV,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = MOVE_PSYCHIC_FANGS, MOVE_FIRE_FANG, MOVE_ICE_FANG, MOVE_THUNDER_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Victoria[] = {
    {
    .lvl = -1,
    .species = SPECIES_LILLIGANT,
    .ability = 1, // Own Tempo
    .spread = SPREAD_25_IV_0_EV,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER, MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN
    },
    {
    .lvl = -1,
    .species = SPECIES_WHIMSICOTT,
    .spread = SPREAD_25_IV_0_EV,
    .heldItem = ITEM_LEFTOVERS,
    .moves = MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_SUBSTITUTE, MOVE_GIGA_DRAIN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Vivi[] = {
    {
    .lvl = -1,
    .species = SPECIES_FLOATZEL,
    .ability = 2, // Water Veil
    .spread = SPREAD_25_IV_0_EV,
    .heldItem = ITEM_FLAME_ORB,
    .moves = MOVE_SWITCHEROO, MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_CRUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_SALAZZLE,
    .spread = SPREAD_25_IV_0_EV,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = MOVE_FLAME_BURST, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_DRAGON_PULSE
    },
    {
    .lvl = -1,
    .species = SPECIES_GOGOAT,
    .spread = SPREAD_25_IV_0_EV,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = MOVE_AERIAL_ACE, MOVE_SEED_BOMB, MOVE_BULLDOZE, MOVE_SYNTHESIS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Vicky[] = {
    {
    .lvl = 2,
    .species = SPECIES_HERACROSS,
    .ability = 2, // Moxie
    .spread = SPREAD_25_IV_0_EV,
    .heldItem = ITEM_LIFE_ORB,
    .moves = MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_NIGHT_SLASH, MOVE_BULLET_SEED
    }
};

// Route 111 South

static const struct TrainerMonItemCustomMoves sParty_Tyron[] = {
    {
    .lvl = -2,
    .species = SPECIES_SANDSLASH,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_CRUSH_CLAW, MOVE_DIG, MOVE_X_SCISSOR, MOVE_SAND_TOMB
    },
    {
    .lvl = -2,
    .species = SPECIES_SCYTHER,
    .ability = 1, // Technician
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_FURY_CUTTER, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_PURSUIT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Celina[] = {
    {
    .lvl = -2,
    .species = SPECIES_WEEPINBELL,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_POISON_JAB, MOVE_RAZOR_LEAF, MOVE_KNOCK_OFF, MOVE_GASTRO_ACID
    },
    {
    .lvl = -2,
    .species = SPECIES_JUMPLUFF,
    .ability = 2, // Infiltrator
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_STRENGTH_SAP, MOVE_ACROBATICS, MOVE_SEED_BOMB, MOVE_LEECH_SEED
    }
};

static const struct TrainerMonItemCustomMoves sParty_Bianca[] = {
    {
    .lvl = -2,
    .species = SPECIES_PUMPKABOO,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_MYSTICAL_FIRE, MOVE_TRICK_OR_TREAT
    },
    {
    .lvl = -2,
    .species = SPECIES_RATICATE,
    .ability = 2, // Hustle
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Hayden[] = {
    {
    .lvl = -2,
    .species = SPECIES_NUMEL,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_EARTH_POWER, MOVE_LAVA_PLUME, MOVE_FOCUS_ENERGY, MOVE_TAKE_DOWN
    },
    {
    .lvl = -2,
    .species = SPECIES_VAPOREON,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_WATER_PULSE, MOVE_AURORA_BEAM, MOVE_CHARM, MOVE_COPYCAT
    }
};

// Route 111 North of Rocks

static const struct TrainerMonItemCustomMoves sParty_GabbyAndTy1[] = {
    {
    .lvl = -1,
    .species = SPECIES_MAGNETON,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_MIRROR_SHOT, MOVE_CHARGE_BEAM, MOVE_METAL_SOUND, MOVE_TRI_ATTACK
    },
    {
    .lvl = -1,
    .species = SPECIES_LOUDRED,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_UPROAR, MOVE_EXTRASENSORY, MOVE_WORK_UP, MOVE_NONE
    }
};

// Route 118 Gabby
static const struct TrainerMonItemCustomMoves sParty_GabbyAndTy2[] = {
    {
    .lvl = 2,
    .species = SPECIES_MAGNEZONE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = 2,
    .species = SPECIES_EXPLOUD,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_EXTRASENSORY, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM
    }
};

// Route 120 Gabby
static const struct TrainerMonItemCustomMoves sParty_GabbyAndTy3[] = {
    {
    .lvl = 0,
    .species = SPECIES_MAGNEZONE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_EXPLOUD,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_EXTRASENSORY, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_PORYGON2,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_SYLVEON,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_YAWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_GabbyAndTy4[] = {
    {
    .lvl = 0,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_EXTRASENSORY, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_SYLVEON,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_YAWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_GabbyAndTy5[] = {
    {
    .lvl = 0,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_EXTRASENSORY, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_SYLVEON,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_YAWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_GabbyAndTy6[] = {
    {
    .lvl = 0,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_EXTRASENSORY, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_SYLVEON,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL, MOVE_YAWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Irene[] = {
    {
    .lvl = -2,
    .species = SPECIES_TREVENANT,
    .ability = 1, // Harvest
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_HORN_LEECH, MOVE_SHADOW_CLAW, MOVE_WILL_O_WISP, MOVE_FORESTS_CURSE
    },
    {
    .lvl = -2,
    .species = SPECIES_AZUMARILL,
    .ability = 2, // Sap Sipper
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_ROLLOUT, MOVE_DEFENSE_CURL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Travis[] = {
    {
    .lvl = -3,
    .species = SPECIES_GOLETT,
    .ability = 2, // No Guard
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_MAGNITUDE, MOVE_SHADOW_PUNCH, MOVE_DYNAMIC_PUNCH, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -3,
    .species = SPECIES_PIDGEOTTO,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_AIR_CUTTER, MOVE_UPROAR, MOVE_TAILWIND, MOVE_ROOST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wilton1[] = {
    {
    .lvl = -1,
    .species = SPECIES_DOUBLADE,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_IRON_HEAD, MOVE_PSYCHO_CUT, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = -1,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_SHOCK_WAVE, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_GABITE,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_DIG, MOVE_DUAL_CHOP, MOVE_POISON_JAB, MOVE_FLAMETHROWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wilton2[] = {
    {
    .lvl = -1,
    .species = SPECIES_DOUBLADE,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_IRON_HEAD, MOVE_PSYCHO_CUT, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = -1,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_THUNDER, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_GABITE,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_DUAL_CHOP, MOVE_POISON_JAB, MOVE_FLAMETHROWER
    },
    {
    .lvl = -1,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Reckless
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_U_TURN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wilton3[] = {
    {
    .lvl = -1,
    .species = SPECIES_DOUBLADE,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_IRON_HEAD, MOVE_PSYCHO_CUT, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = -1,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_THUNDER, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_GABITE,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_DUAL_CHOP, MOVE_POISON_JAB, MOVE_FLAMETHROWER
    },
    {
    .lvl = -1,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Reckless
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_RETURN, MOVE_CLOSE_COMBAT, MOVE_U_TURN
    },
/*     {
    .lvl = -1,
    .species = SPECIES_GRIMMSNARL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_SPIRIT_BREAK, MOVE_BULK_UP, MOVE_DRAIN_PUNCH
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Wilton4[] = {
/*     {
    .lvl = -1,
    .species = SPECIES_GRIMMSNARL,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 0, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_SPIRIT_BREAK, MOVE_LIGHT_SCREEN, MOVE_REFLECT
    }, */
    {
    .lvl = -1,
    .species = SPECIES_AEGISLASH,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_CLOSE_COMBAT, MOVE_KINGS_SHIELD
    },
    {
    .lvl = -1,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_CALM_MIND, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_POISON_JAB, MOVE_FIRE_BLAST
    },
    {
    .lvl = -1,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_CHOICE_SPECS,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, MOVE_THUNDER, MOVE_PSYCHIC
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brooke1[] = {
    {
    .lvl = -1,
    .species = SPECIES_GASTRODON,
    .heldItem = ITEM_RINDO_BERRY,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_MUDDY_WATER, MOVE_MUD_SHOT, MOVE_RECOVER, MOVE_ANCIENT_POWER
    },
    {
    .lvl = -1,
    .species = SPECIES_INFERNAPE,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FIRE_PUNCH, MOVE_GRASS_KNOT, MOVE_ROCK_TOMB
    },
    {
    .lvl = -1,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BIG_ROOT,
    .ability = 2, // Technician
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_MEGA_DRAIN, MOVE_EXTRASENSORY, MOVE_TOXIC, MOVE_VENOSHOCK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brooke2[] = {
    {
    .lvl = -1,
    .species = SPECIES_GASTRODON,
    .heldItem = ITEM_RINDO_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_RECOVER, MOVE_SLUDGE_WAVE
    },
    {
    .lvl = -1,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FIRE_PUNCH, MOVE_GRASS_KNOT, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -1,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BIG_ROOT,
    .ability = 2, // Technician
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MEGA_DRAIN, MOVE_EXTRASENSORY, MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB
    },
    {
    .lvl = -1,
    .species = SPECIES_HAXORUS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 1, // Mold Breaker
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_DRAGON_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brooke3[] = {
    {
    .lvl = -1,
    .species = SPECIES_GASTRODON,
    .heldItem = ITEM_RINDO_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_EARTH_POWER, MOVE_RECOVER, MOVE_TOXIC
    },
    {
    .lvl = -1,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_THUNDER_PUNCH, MOVE_STONE_EDGE
    },
    {
    .lvl = -1,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BIG_ROOT,
    .ability = 2, // Technician
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_MEGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB
    },
    {
    .lvl = -1,
    .species = SPECIES_HAXORUS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 1, // Mold Breaker
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_DRAGON_DANCE
    },
/*     {
    .lvl = -1,
    .species = SPECIES_FROSMOTH,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 2, // Ice Scales
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICE_BEAM, MOVE_BUG_BUZZ, MOVE_WATER_PULSE, MOVE_QUIVER_DANCE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Brooke4[] = {
    {
    .lvl = -1,
    .species = SPECIES_GASTRODON,
    .heldItem = ITEM_RINDO_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_EARTH_POWER, MOVE_RECOVER, MOVE_TOXIC
    },
    {
    .lvl = -1,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FLARE_BLITZ, MOVE_THUNDER_PUNCH, MOVE_STONE_EDGE
    },
    {
    .lvl = -1,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BIG_ROOT,
    .ability = 2, // Technician
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_MEGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB
    },
    {
    .lvl = -1,
    .species = SPECIES_HAXORUS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 1, // Mold Breaker
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_DRAGON_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BULLET_PUNCH, MOVE_SUPERPOWER, MOVE_U_TURN, MOVE_KNOCK_OFF
    },
/*     {
    .lvl = -1,
    .species = SPECIES_FROSMOTH,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 2, // Ice Scales
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICE_BEAM, MOVE_BUG_BUZZ, MOVE_WATER_PULSE, MOVE_QUIVER_DANCE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Daisuke[] = {
    {
    .lvl = 2,
    .species = SPECIES_CONKELDURR,
    .ability = 2, // Iron Fist
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_CHIP_AWAY, MOVE_BULK_UP
    }
};

// Route 111 Desert

static const struct TrainerMonItemCustomMoves sParty_Heidi[] = {
    {
    .lvl = -3,
    .species = SPECIES_MUDSDALE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_HEAVY_SLAM, MOVE_IRON_DEFENSE
    },
    {
    .lvl = -3,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_GRASSY_TERRAIN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Beau[] = {
    {
    .lvl = -3,
    .species = SPECIES_GASTRODON,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_EARTH_POWER, MOVE_MUDDY_WATER, MOVE_SLUDGE, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_AMBIPOM,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FAKE_OUT, MOVE_DOUBLE_HIT, MOVE_DUAL_CHOP, MOVE_BATON_PASS
    },
    {
    .lvl = -3,
    .species = SPECIES_MANDIBUZZ,
    .ability = 1, // Overcoat
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BONE_RUSH, MOVE_NASTY_PLOT, MOVE_AIR_SLASH, MOVE_DARK_PULSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Drew[] = {
    {
    .lvl = -3,
    .species = SPECIES_SANDSLASH,
    .ability = 2, // Sand Rush
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_CRUSH_CLAW, MOVE_SPIKY_SHIELD, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -3,
    .species = SPECIES_CACTURNE,
    .ability = 1, // Sand Rush
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_NEEDLE_ARM, MOVE_PIN_MISSILE, MOVE_SPIKY_SHIELD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Becky[] = {
    {
    .lvl = -3,
    .species = SPECIES_JUMPLUFF,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = 2, // Infiltrator
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_STRENGTH_SAP, MOVE_SEED_BOMB, MOVE_U_TURN, MOVE_COTTON_SPORE
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_ZEN_HEADBUTT, MOVE_DISABLE, MOVE_SCREECH
    },
    {
    .lvl = -3,
    .species = SPECIES_ABOMASNOW,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WOOD_HAMMER, MOVE_BLIZZARD, MOVE_ICE_PUNCH, MOVE_AURORA_VEIL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Celia[] = {
    {
    .lvl = -3,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FAKE_OUT, MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_WATER_PULSE
    },
    {
    .lvl = -3,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SLUDGE, MOVE_PETAL_DANCE, MOVE_STUN_SPORE, MOVE_TAKE_DOWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Bryan[] = {
    {
    .lvl = -3,
    .species = SPECIES_COFAGRIGUS,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHADOW_BALL, MOVE_MIRROR_SHOT, MOVE_WILL_O_WISP, MOVE_HAZE
    },
    {
    .lvl = -3,
    .species = SPECIES_TYRANTRUM,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_THUNDER_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Branden[] = {
    {
    .lvl = -3,
    .species = SPECIES_FARFETCHD,
    .heldItem = ITEM_LEEK,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_SACRED_SWORD, MOVE_WING_ATTACK, MOVE_LEAF_BLADE, MOVE_POISON_JAB
    },
    {
    .lvl = -3,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = 2, // Chlorophyll
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SUNNY_DAY, MOVE_SYNTHESIS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dusty1[] = {
    {
    .lvl = -3,
    .species = SPECIES_GOLURK,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_HIGH_HORSEPOWER, MOVE_SHADOW_PUNCH, MOVE_HEAVY_SLAM, MOVE_HAMMER_ARM
    },
    {
    .lvl = -3,
    .species = SPECIES_SIGILYPH,
    .ability = 1, // Magic Guard
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_COSMIC_POWER, MOVE_HYPNOSIS
    },
    {
    .lvl = -3,
    .species = SPECIES_BASTIODON,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_METAL_BURST, MOVE_SHORE_UP, MOVE_BLOCK, MOVE_SWAGGER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dusty2[] = {
    {
    .lvl = -3,
    .species = SPECIES_GOLURK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_HORSEPOWER, MOVE_SHADOW_PUNCH, MOVE_HEAVY_SLAM, MOVE_HAMMER_ARM
    },
    {
    .lvl = -3,
    .species = SPECIES_SIGILYPH,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_COSMIC_POWER, MOVE_HYPNOSIS
    },
    {
    .lvl = -3,
    .species = SPECIES_BASTIODON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_METAL_BURST, MOVE_SHORE_UP, MOVE_BLOCK, MOVE_SWAGGER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dusty3[] = {
    {
    .lvl = -3,
    .species = SPECIES_GOLURK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_HORSEPOWER, MOVE_SHADOW_PUNCH, MOVE_HEAVY_SLAM, MOVE_HAMMER_ARM
    },
    {
    .lvl = -3,
    .species = SPECIES_SIGILYPH,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_COSMIC_POWER, MOVE_HYPNOSIS
    },
    {
    .lvl = -3,
    .species = SPECIES_BASTIODON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_METAL_BURST, MOVE_SHORE_UP, MOVE_BLOCK, MOVE_SWAGGER
    },
    {
    .lvl = -3,
    .species = SPECIES_RAMPARDOS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEAD_SMASH, MOVE_ACCELEROCK, MOVE_CRUNCH, MOVE_EARTHQUAKE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dusty4[] = {
    {
    .lvl = -3,
    .species = SPECIES_GOLURK,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_HIGH_HORSEPOWER, MOVE_SHADOW_PUNCH, MOVE_HEAVY_SLAM, MOVE_HAMMER_ARM
    },
    {
    .lvl = -3,
    .species = SPECIES_SIGILYPH,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_ROOST, MOVE_AIR_SLASH, MOVE_COSMIC_POWER, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -3,
    .species = SPECIES_BASTIODON,
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_METAL_BURST, MOVE_SHORE_UP, MOVE_BLOCK, MOVE_TOXIC
    },
/*     {
    .lvl = -3,
    .species = SPECIES_DARMANITAN_GALARIAN,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_U_TURN
    }, */
    {
    .lvl = -3,
    .species = SPECIES_RAMPARDOS,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HEAD_SMASH, MOVE_ACCELEROCK, MOVE_CRUNCH, MOVE_EARTHQUAKE
    }
};

// Mauville Gym

static const struct TrainerMonItemCustomMoves sParty_Vivian[] = {
    {
    .lvl = -1,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_CROSS_CHOP, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_LIECHI_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_THUNDER_PUNCH, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_ROCK_SLIDE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kirk[] = {
    {
    .lvl = -1,
    .species = SPECIES_EELEKTRIK,
    .heldItem = ITEM_FLYING_GEM,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_DISCHARGE, MOVE_CRUNCH, MOVE_ACID_SPRAY, MOVE_ACROBATICS
    },
    {
    .lvl = -1,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_CHARGE_BEAM, MOVE_LIGHT_SCREEN, MOVE_SIGNAL_BEAM, MOVE_MAGNET_RISE
    },
    {
    .lvl = -1,
    .species = SPECIES_ZEBSTRIKA,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BLAZE_KICK, MOVE_WILD_CHARGE, MOVE_DOUBLE_KICK, MOVE_PURSUIT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ben[] = {
    {
    .lvl = -1,
    .species = SPECIES_ROTOM,
    .heldItem = ITEM_COLBUR_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_HEX, MOVE_THUNDER_WAVE, MOVE_PAIN_SPLIT
    },
    {
    .lvl = -1,
    .species = SPECIES_STUNFISK,
    .heldItem = ITEM_SHUCA_BERRY,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_MUDDY_WATER, MOVE_SUCKER_PUNCH, MOVE_MUD_SHOT, MOVE_SHOCK_WAVE
    },
    {
    .lvl = -1,
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 2, // Sturdy
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_ZING_ZAP, MOVE_MAGNET_RISE, MOVE_PIN_MISSILE, MOVE_IRON_HEAD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Angelo[] = {
    {
    .lvl = -1,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_MAGNET,
    .ability = 2, // Prankster
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHOCK_WAVE, MOVE_DAZZLING_GLEAM, MOVE_CHARM, MOVE_STRUGGLE_BUG
    },
    {
    .lvl = -1,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_SILVER_POWDER,
    .ability = 2, // Prankster
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_STRUGGLE_BUG
    },
};

static const struct TrainerMonItemCustomMoves sParty_Shawn[] = {
    {
    .lvl = -1,
    .species = SPECIES_HELIOLISK,
    .ability = 2, // Solar Power
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SUNNY_DAY, MOVE_SWIFT, MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE
    },
    {
    .lvl = -1,
    .species = SPECIES_RAICHU,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_SIGNAL_BEAM, MOVE_QUICK_ATTACK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wattson1[] = {
    {
    .lvl = 0,
    .species = SPECIES_GALVANTULA,
    .ability = 2, // Swarm
    .heldItem = ITEM_GRASS_GEM,
    .spread = SPREAD_WATTSON_SPECIAL,
    .moves = MOVE_STICKY_WEB, MOVE_VOLT_SWITCH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN
    },
    {
    .lvl = 0,
    .species = SPECIES_LANTURN,
    .ability = 2, // Water Absorb
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_WATTSON_SPECIAL,
    .moves = MOVE_VOLT_SWITCH, MOVE_SURF, MOVE_ICY_WIND, MOVE_DAZZLING_GLEAM
    },
    {
    .lvl = 0,
    .species = SPECIES_MAGNETON,
    .ability = 1, // Sturdy
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_WATTSON_SPECIAL,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_THUNDER_WAVE, MOVE_ELECTRIC_TERRAIN
    },
    {
    .lvl = 0,
    .species = SPECIES_ROTOM_MOW,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_WATTSON_SPECIAL,
    .moves = MOVE_VOLT_SWITCH, MOVE_LEAF_STORM, MOVE_TOXIC, MOVE_HEX
    },
    {
    .lvl = 0,
    .species = SPECIES_RAICHU_ALOLAN,
    .heldItem = ITEM_SHUCA_BERRY,
    .spread = SPREAD_WATTSON_SPECIAL,
    .moves = MOVE_VOLT_SWITCH, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_SURF
    },
    {
    .lvl = 2,
    .species = SPECIES_MANECTRIC,
    .ability = 1, // Lightning Rod
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_AURORA_BEAM, MOVE_SIGNAL_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wattson2[] = { // singles
    {
    .lvl = 0,
    .species = SPECIES_ELECTRODE,
    .ability = 2, // Electric Surge
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_ELECTRO_BALL, MOVE_FOUL_PLAY
    },
    {
    .lvl = 0,
    .species = SPECIES_GALVANTULA,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_ENERGY_BALL, MOVE_BUG_BUZZ, MOVE_THUNDER, MOVE_STICKY_WEB
    },
    {
    .lvl = 0,
    .species = SPECIES_MAGNEZONE,
    .ability = 2, // Analytic
    .heldItem = ITEM_CHOICE_SPECS,
    .spread = SPREAD_HP_FIRE_MODEST_BULKY,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_ELECTRIC_TERRAIN
    },
    {
    .lvl = 0,
    .species = SPECIES_ROTOM_WASH,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_VOLT_SWITCH, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_TRICK
    },
    {
    .lvl = 0,
    .species = SPECIES_RAICHU_ALOLAN,
    .heldItem = ITEM_LIGHT_BALL,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_SURF
    },
    {
    .lvl = 2,
    .species = SPECIES_MANECTRIC,
    .ability = 1, // Lightning Rod
    .heldItem = ITEM_MANECTITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_AURORA_BEAM, MOVE_THUNDER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wattson3[] = { //Legendaries
    {
    .lvl = 0,
    .species = SPECIES_TAPU_KOKO,
    .ability = 1, // Electric Surge
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_THUNDER, MOVE_GRASS_KNOT
    },
    {
    .lvl = 0,
    .species = SPECIES_ZEKROM,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BOLT_STRIKE, MOVE_OUTRAGE, MOVE_ROOST, MOVE_DRAGON_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_MAGNEZONE,
    .ability = 2, // Analytic
    .heldItem = ITEM_CHOICE_SPECS,
    .spread = SPREAD_HP_FIRE_MODEST_BULKY,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_ELECTRIC_TERRAIN
    },
    {
    .lvl = 0,
    .species = SPECIES_ROTOM_WASH,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_VOLT_SWITCH, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_TRICK
    },
    {
    .lvl = 0,
    .species = SPECIES_ZAPDOS,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_RAIN_DANCE
    },
    {
    .lvl = 2,
    .species = SPECIES_MANECTRIC,
    .ability = 1, // Lightning Rod
    .heldItem = ITEM_MANECTITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_AURORA_BEAM, MOVE_THUNDER
    }
};


static const struct TrainerMonItemCustomMoves sParty_Wattson4[] = { // Doubles
    {
    .lvl = 0,
    .species = SPECIES_ELECTRODE,
    .ability = 2, // Electric Surge
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_ELECTRO_BALL, MOVE_FOUL_PLAY
    },
    {
    .lvl = 0,
    .species = SPECIES_ROTOM_FROST,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_VOLT_SWITCH, MOVE_FREEZE_DRY, MOVE_THUNDERBOLT, MOVE_TRICK
    },
    {
    .lvl = 0,
    .species = SPECIES_MAGNEZONE,
    .ability = 2, // Analytic
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_HP_FIRE_MODEST_BULKY,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 0,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_DEF_SPATK,
    .moves = MOVE_VOLT_SWITCH, MOVE_MUDDY_WATER, MOVE_THUNDERBOLT, MOVE_SOAK
    },
    {
    .lvl = 0,
    .species = SPECIES_RAICHU_ALOLAN,
    .heldItem = ITEM_LIGHT_BALL,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_VOLT_SWITCH, MOVE_PSYCHIC, MOVE_GRASS_KNOT, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 2,
    .species = SPECIES_MANECTRIC,
    .ability = 1, // Lightning Rod
    .heldItem = ITEM_MANECTITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_AURORA_BEAM, MOVE_THUNDER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wattson5[] = { // Doubles
    {
    .lvl = 0,
    .species = SPECIES_TAPU_KOKO,
    .ability = 1, // Electric Surge
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_REFLECT, MOVE_LIGHT_SCREEN
    },
    {
    .lvl = 0,
    .species = SPECIES_ZEKROM,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BOLT_STRIKE, MOVE_DRAGON_CLAW, MOVE_ROOST, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_MAGNEZONE,
    .ability = 2, // Analytic
    .heldItem = ITEM_CHOICE_SPECS,
    .spread = SPREAD_HP_FIRE_MODEST_BULKY,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER, MOVE_ELECTRIC_TERRAIN
    },
    {
    .lvl = 0,
    .species = SPECIES_ROTOM_WASH,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_VOLT_SWITCH, MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_TRICK
    },
    {
    .lvl = 0,
    .species = SPECIES_RAIKOU,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_SCALD, MOVE_AURA_SPHERE, MOVE_AURORA_BEAM
    },
    {
    .lvl = 2,
    .species = SPECIES_MANECTRIC,
    .ability = 1, // Lightning Rod
    .heldItem = ITEM_MANECTITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_AURORA_BEAM, MOVE_THUNDER
    }
};

// Route 112

static const struct TrainerMonItemCustomMoves sParty_Larry[] = {
    {
    .lvl = -2,
    .species = SPECIES_VICTREEBEL,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_LEAF_TORNADO, MOVE_POISON_JAB, MOVE_GROWTH, MOVE_SLEEP_POWDER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Carol[] = {
    {
    .lvl = -3,
    .species = SPECIES_NOCTOWL,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_AIR_SLASH, MOVE_REFLECT
    },
    {
    .lvl = -3,
    .species = SPECIES_VILEPLUME,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_MOONBLAST, MOVE_TOXIC, MOVE_MOONLIGHT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brice[] = {
    {
    .lvl = -2,
    .species = SPECIES_EXCADRILL,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_HORN_DRILL, MOVE_RAPID_SPIN
    },
    {
    .lvl = -2,
    .species = SPECIES_CRUSTLE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_X_SCISSOR, MOVE_ROCK_BLAST, MOVE_WITHDRAW, MOVE_SLASH
    }
};

// Quality team design right here
static const struct TrainerMonItemCustomMoves sParty_Trent1[] = {
    {
    .lvl = -3,
    .species = SPECIES_GRAVELER,
    .ability = 1, // Sturdy
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -3,
    .species = SPECIES_GRAVELER,
    .ability = 1, // Sturdy
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -3,
    .species = SPECIES_GRAVELER,
    .ability = 1, // Sturdy
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -3,
    .species = SPECIES_GRAVELER_ALOLAN,
    .ability = 2, // Galvanize
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Trent2[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM_ALOLAN,
    .ability = 2, // Galvanize
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Trent3[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM_ALOLAN,
    .ability = 2, // Galvanize
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM_ALOLAN,
    .ability = 2, // Galvanize
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Trent4[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM_ALOLAN,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Galvanize
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM_ALOLAN,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Galvanize
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE, MOVE_NONE
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Bryant[] = {
    {
    .lvl = -2,
    .species = SPECIES_MAGCARGO,
    .ability = 2, // Weak Armor
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SHELL_SMASH, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER, MOVE_FLAME_BURST
    },
    {
    .lvl = -2,
    .species = SPECIES_TYPHLOSION,
    .ability = 2, // Flash Fire
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_SWIFT, MOVE_QUICK_ATTACK, MOVE_SMOKESCREEN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Shayla[] = {
    {
    .lvl = -2,
    .species = SPECIES_CHERRIM,
    .heldItem = ITEM_HEAT_ROCK,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_HELPING_HAND
    },
    {
    .lvl = -2,
    .species = SPECIES_MEGANIUM,
    .ability = 1, // Flower Veil
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_PETAL_DANCE, MOVE_REFLECT, MOVE_SYNTHESIS, MOVE_POISON_POWDER
    }
};

// Route 113

static const struct TrainerMonItemCustomMoves sParty_Jaylen[] = {
    {
    .lvl = -3,
    .species = SPECIES_VIBRAVA,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_EARTH_POWER, MOVE_BUG_BUZZ, MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM
    },
    {
    .lvl = -3,
    .species = SPECIES_DARUMAKA,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_FLARE_BLITZ, MOVE_HEADBUTT, MOVE_BITE, MOVE_WORK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dillon[] = {
    {
    .lvl = -3,
    .species = SPECIES_LAIRON,
    .ability = 1, // Rock Head
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_TAKE_DOWN, MOVE_IRON_DEFENSE
    },
    {
    .lvl = -3,
    .species = SPECIES_STOUTLAND,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_RETALIATE, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_ROAR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lawrence[] = {
    {
    .lvl = -3,
    .species = SPECIES_BALTOY,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_EARTH_POWER, MOVE_EXTRASENSORY, MOVE_SANDSTORM, MOVE_ANCIENT_POWER
    },
    {
    .lvl = -3,
    .species = SPECIES_HIPPOPOTAS,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_YAWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lung[] = {
    {
    .lvl = -3,
    .species = SPECIES_WEEZING,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_DOUBLE_HIT, MOVE_HEAT_WAVE
    },
    {
    .lvl = -3,
    .species = SPECIES_NINJASK,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_FURY_CUTTER, MOVE_DIG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lao1[] = {
    {
    .lvl = -3,
    .species = SPECIES_ACCELGOR,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_WATER_SHURIKEN, MOVE_STRUGGLE_BUG, MOVE_GIGA_DRAIN, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_GRENINJA,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_WATER_SHURIKEN, MOVE_NIGHT_SLASH, MOVE_SHADOW_SNEAK, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_KOFFING,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_SELF_DESTRUCT, MOVE_GYRO_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lao2[] = {
    {
    .lvl = -3,
    .species = SPECIES_ACCELGOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SHURIKEN, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_GRENINJA,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SHURIKEN, MOVE_NIGHT_SLASH, MOVE_SHADOW_SNEAK, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_WEEZING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_EXPLOSION, MOVE_HEAT_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lao3[] = {
    {
    .lvl = -3,
    .species = SPECIES_ACCELGOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SHURIKEN, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_GRENINJA,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SHURIKEN, MOVE_NIGHT_SLASH, MOVE_SHADOW_SNEAK, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_WEEZING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_EXPLOSION, MOVE_HEAT_WAVE
    },
    {
    .lvl = -3,
    .species = SPECIES_DRAPION,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_NIGHT_SLASH, MOVE_CROSS_POISON, MOVE_ICE_FANG, MOVE_X_SCISSOR
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Lao4[] = {
    {
    .lvl = -2,
    .species = SPECIES_ACCELGOR,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_WATER_SHURIKEN, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST
    },
    {
    .lvl = -2,
    .species = SPECIES_GRENINJA,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WATERFALL, MOVE_GUNK_SHOT, MOVE_TOXIC_SPIKES, MOVE_U_TURN
    },
    {
    .lvl = -2,
    .species = SPECIES_WEEZING,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_EXPLOSION, MOVE_HEAT_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_ARBOK,
    .ability = 1, // Shed Skin
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_GUNK_SHOT, MOVE_EARTHQUAKE, MOVE_COIL, MOVE_REST
    },
    {
    .lvl = -2,
    .species = SPECIES_DRAPION,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE
    }  
};

static const struct TrainerMonItemCustomMoves sParty_Madeline1[] = {
    {
    .lvl = -3,
    .species = SPECIES_NUMEL,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_EARTH_POWER, MOVE_LAVA_PLUME, MOVE_ROCK_SLIDE, MOVE_SUNNY_DAY
    },
    {
    .lvl = -3,
    .species = SPECIES_TROPIUS,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_LEAF_TORNADO, MOVE_AIR_SLASH, MOVE_BODY_SLAM, MOVE_WHIRLWIND
    },
    {
    .lvl = -3,
    .species = SPECIES_SEALEO,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_BRINE, MOVE_AURORA_BEAM, MOVE_HAIL, MOVE_SWAGGER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Madeline2[] = {
    {
    .lvl = -2,
    .species = SPECIES_CAMERUPT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_LAVA_PLUME, MOVE_ROCK_SLIDE, MOVE_SUNNY_DAY
    },
    {
    .lvl = -3,
    .species = SPECIES_TROPIUS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LEAF_BLADE, MOVE_AIR_SLASH, MOVE_DRAGON_HAMMER, MOVE_WHIRLWIND
    },
    {
    .lvl = -3,
    .species = SPECIES_WALREIN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_HAIL, MOVE_CRUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Madeline3[] = {
    {
    .lvl = -2,
    .species = SPECIES_CAMERUPT,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_SUNNY_DAY
    },
    {
    .lvl = -2,
    .species = SPECIES_TROPIUS,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .ability = 1, // Aerilate
    .moves = MOVE_SOLAR_BLADE, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, MOVE_SYNTHESIS
    },
    {
    .lvl = -2,
    .species = SPECIES_WALREIN,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SURF, MOVE_BLIZZARD, MOVE_CRUNCH, MOVE_SLACK_OFF
    },
    {
    .lvl = -2,
    .species = SPECIES_COMFEY,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .ability = 1, // Triage
    .moves = MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SYNTHESIS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Madeline4[] = {
    {
    .lvl = -2,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_HEAT_ROCK,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_SUNNY_DAY
    },
    {
    .lvl = -2,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .ability = 1, // Aerilate
    .moves = MOVE_SOLAR_BLADE, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, MOVE_SYNTHESIS
    },
    {
    .lvl = -2,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_CRUNCH, MOVE_SLACK_OFF
    },
    {
    .lvl = -2,
    .species = SPECIES_COMFEY,
    .heldItem = ITEM_BIG_ROOT,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .ability = 1, // Triage
    .moves = MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SYNTHESIS
    },
    {
    .lvl = -2,
    .species = SPECIES_SAWSBUCK_AUTUMN,
    .heldItem = ITEM_GRASS_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HORN_LEECH, MOVE_DOUBLE_EDGE, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE
    }   
};

static const struct TrainerMonItemCustomMoves sParty_ToriAndTia[] = {
    {
    .lvl = -1,
    .species = SPECIES_SPINDA,
    .ability = 2, // Contrary
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER
    },
    {
    .lvl = -1,
    .species = SPECIES_SPINDA,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_HYPNOSIS, MOVE_DIZZY_PUNCH, MOVE_PSYCH_UP, MOVE_SUCKER_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wyatt[] = {
    {
    .lvl = -2,
    .species = SPECIES_CHARIZARD,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_WING_ATTACK, MOVE_SHADOW_CLAW, MOVE_DRAGON_CLAW, MOVE_FIRE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_NIDOKING,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_POISON_FANG, MOVE_EARTH_POWER, MOVE_THRASH, MOVE_THUNDER_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sophie[] = {
    {
    .lvl = -3,
    .species = SPECIES_SUDOWOODO,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_ROCK_SLIDE, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK, MOVE_MIMIC
    },
    {
    .lvl = -3,
    .species = SPECIES_SLURPUFF,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_DRAINING_KISS, MOVE_ENERGY_BALL, MOVE_COTTON_GUARD, MOVE_ATTRACT
    },
    {
    .lvl = -3,
    .species = SPECIES_SANDSLASH_ALOLAN,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_ICICLE_SPEAR, MOVE_IRON_HEAD, MOVE_METAL_BURST, MOVE_SLASH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Coby[] = {
    {
    .lvl = -3,
    .species = SPECIES_SKARMORY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_SLASH, MOVE_METAL_SOUND
    },
    {
    .lvl = -3,
    .species = SPECIES_TOUCANNON,
    .ability = 1, // Skill Link
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_BEAK_BLAST, MOVE_ROCK_BLAST, MOVE_BULLET_SEED, MOVE_ROOST
    }
};

// Route 114

static const struct TrainerMonItemCustomMoves sParty_MagikarpGuy[] = {
    {
    .lvl = -1,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = -1,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = 0,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = 0,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = 1,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = 2,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_HYDRO_PUMP, MOVE_TACKLE, MOVE_BOUNCE, MOVE_REVERSAL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nolan[] = {
    {
    .lvl = -3,
    .species = SPECIES_WISHIWASHI,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_DOUBLE_EDGE, MOVE_AQUA_TAIL, MOVE_BEAT_UP, MOVE_AQUA_RING
    },
    {
    .lvl = -3,
    .species = SPECIES_SEAKING,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_AQUA_RING, MOVE_AGILITY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Charlotte[] = {
    {
    .lvl = -1,
    .species = SPECIES_TANGROWTH,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_STUN_SPORE, MOVE_KNOCK_OFF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kai[] = {
    {
    .lvl = -1,
    .species = SPECIES_WHISCASH,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_TICKLE, MOVE_ZEN_HEADBUTT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Claude[] = {
    {
    .lvl = -3,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_LEER
    },
    {
    .lvl = -3,
    .species = SPECIES_DRATINI,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_DRAGON_RUSH, MOVE_THUNDER_WAVE, MOVE_WRAP
    },
    {
    .lvl = -3,
    .species = SPECIES_QWILFISH,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_POISON_JAB, MOVE_REVENGE, MOVE_STOCKPILE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nancy[] = {
    {
    .lvl = -3,
    .species = SPECIES_AROMATISSE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_MOONBLAST, MOVE_CHARM, MOVE_ATTRACT, MOVE_MISTY_TERRAIN
    },
    {
    .lvl = -3,
    .species = SPECIES_TORTERRA,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_SEED_BOMB, MOVE_CURSE, MOVE_LEECH_SEED
    }
};

static const struct TrainerMonItemCustomMoves sParty_TyraAndIvy[] = {
    {
    .lvl = -1,
    .species = SPECIES_EELEKTROSS,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_DISCHARGE, MOVE_ACID_SPRAY, MOVE_CRUNCH, MOVE_GRASS_KNOT
    },
    {
    .lvl = -1,
    .species = SPECIES_DONPHAN,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_ASSURANCE, MOVE_FIRE_FANG, MOVE_SCARY_FACE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Shane[] = {
    {
    .lvl = -3,
    .species = SPECIES_ZANGOOSE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_CRUSH_CLAW, MOVE_X_SCISSOR, MOVE_REVENGE, MOVE_PURSUIT
    },
    {
    .lvl = -3,
    .species = SPECIES_ESCAVALIER,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_HEADBUTT
    },
    {
    .lvl = -3,
    .species = SPECIES_ARBOK,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_GLARE, MOVE_ICE_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Steve1[] = {
    {
    .lvl = -3,
    .species = SPECIES_RHYHORN,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_DRILL_RUN, MOVE_ROCK_BLAST, MOVE_TAKE_DOWN, MOVE_SCARY_FACE
    },
    {
    .lvl = -3,
    .species = SPECIES_DRUDDIGON,
    .ability = 1, // Sheer Force
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_DRAGON_RUSH, MOVE_CRUNCH, MOVE_REVENGE, MOVE_HONE_CLAWS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Steve2[] = {
    {
    .lvl = -3,
    .species = SPECIES_RHYDON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_TAKE_DOWN, MOVE_SCARY_FACE
    },
    {
    .lvl = -3,
    .species = SPECIES_AGGRON,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_DOUBLE_EDGE, MOVE_ROCK_POLISH
    },
    {
    .lvl = -3,
    .species = SPECIES_DRUDDIGON,
    .ability = 1, // Sheer Force
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRAGON_RUSH, MOVE_CRUNCH, MOVE_FIRE_PUNCH, MOVE_HONE_CLAWS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Steve3[] = {
    {
    .lvl = -3,
    .species = SPECIES_RHYPERIOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_HAMMER_ARM, MOVE_MEGAHORN
    },
/*     {
    .lvl = -3,
    .species = SPECIES_SLOWBRO_GALARIAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SHELL_SIDE_ARM, MOVE_PSYCHIC, MOVE_SLACK_OFF, MOVE_SURF
    }, */
    {
    .lvl = -3,
    .species = SPECIES_AGGRON,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_IRON_HEAD, MOVE_HEAD_SMASH, MOVE_ICE_PUNCH, MOVE_ROCK_POLISH
    },
    {
    .lvl = -3,
    .species = SPECIES_DRUDDIGON,
    .ability = 1, // Sheer Force
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRAGON_RUSH, MOVE_CRUNCH, MOVE_FIRE_PUNCH, MOVE_HONE_CLAWS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Steve4[] = {
    {
    .lvl = -3,
    .species = SPECIES_RHYPERIOR,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_HAMMER_ARM, MOVE_MEGAHORN
    },
/*     {
    .lvl = -3,
    .species = SPECIES_SLOWBRO_GALARIAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SHELL_SIDE_ARM, MOVE_PSYCHIC, MOVE_SLACK_OFF, MOVE_SURF
    }, */
    {
    .lvl = -3,
    .species = SPECIES_AGGRON,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_IRON_TAIL, MOVE_HEAD_SMASH, MOVE_ICE_PUNCH, MOVE_ROCK_POLISH
    },
    {
    .lvl = -3,
    .species = SPECIES_DRUDDIGON,
    .ability = 1, // Sheer Force
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_DRAGON_RUSH, MOVE_CRUNCH, MOVE_FIRE_PUNCH, MOVE_GUNK_SHOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Bernie1[] = {
    {
    .lvl = -3,
    .species = SPECIES_LARVESTA,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_FLARE_BLITZ, MOVE_BUG_BITE, MOVE_DOUBLE_EDGE, MOVE_STRING_SHOT
    },
    {
    .lvl = -3,
    .species = SPECIES_SIMIPOUR,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SCALD, MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_WORK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Bernie2[] = {
    {
    .lvl = -3,
    .species = SPECIES_LARVESTA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLARE_BLITZ, MOVE_LEECH_LIFE, MOVE_DOUBLE_EDGE, MOVE_ZEN_HEADBUTT
    },
    {
    .lvl = -3,
    .species = SPECIES_SIMIPOUR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_GRASS_KNOT
    },
/*     {
    .lvl = -3,
    .species = SPECIES_COALOSSAL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_TAR_SHOT, MOVE_HEAT_CRASH, MOVE_ROCK_SLIDE, MOVE_SCORCHING_SANDS
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Bernie3[] = {
    {
    .lvl = -3,
    .species = SPECIES_VOLCARONA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MYSTICAL_FIRE, MOVE_SIGNAL_BEAM, MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN
    },
    {
    .lvl = -3,
    .species = SPECIES_SIMIPOUR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_FOCUS_BLAST, MOVE_ACROBATICS, MOVE_GRASS_KNOT
    },
    {
    .lvl = -3,
    .species = SPECIES_COALOSSAL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_TAR_SHOT, MOVE_HEAT_CRASH, MOVE_ROCK_SLIDE, MOVE_SCORCHING_SANDS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Bernie4[] = {
    {
    .lvl = -3,
    .species = SPECIES_VOLCARONA,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN
    },
    {
    .lvl = -3,
    .species = SPECIES_SIMIPOUR,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_FOCUS_BLAST, MOVE_NASTY_PLOT, MOVE_GRASS_KNOT
    },
/*     {
    .lvl = -3,
    .species = SPECIES_COALOSSAL,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_TAR_SHOT, MOVE_FIRE_BLAST, MOVE_STONE_EDGE, MOVE_SCORCHING_SANDS
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Lucas[] = {
    {
    .lvl = -3,
    .species = SPECIES_MINIOR,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_POWER_GEM, MOVE_COSMIC_POWER, MOVE_AUTOTOMIZE, MOVE_CONFUSE_RAY
    },
    {
    .lvl = -3,
    .species = SPECIES_FERROTHORN,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_POWER_WHIP, MOVE_IRON_HEAD, MOVE_CURSE, MOVE_INGRAIN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Angelina[] = {
    {
    .lvl = -3,
    .species = SPECIES_EMPOLEON,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_WATER_PULSE, MOVE_FLASH_CANNON, MOVE_SWAGGER, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_RIBOMBEE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_POLLEN_PUFF, MOVE_DAZZLING_GLEAM, MOVE_STUN_SPORE, MOVE_AROMATHERAPY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lenny[] = {
    {
    .lvl = -3,
    .species = SPECIES_STEELIX,
    .ability = 1, // Sturdy
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_IRON_TAIL, MOVE_DIG, MOVE_SMACK_DOWN, MOVE_CRUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_PILOSWINE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_ICE_FANG, MOVE_ICE_SHARD, MOVE_AMNESIA, MOVE_MUD_BOMB
    }
};

// Meteor Falls Multibattle

static const struct TrainerMonItemCustomMoves sParty_GruntMeteorFalls[] = {
    {
    .lvl = 0, 
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 2, // Mold Breaker
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRILL_RUN, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR
    },
    {
    .lvl = 0, 
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Levitate
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WILL_O_WISP, MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_THUNDERBOLT
    },
    {
    .lvl = 0, 
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = 0, // Chlorophyll
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ENERGY_BALL, MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_SUNNY_DAY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Courtney_MeteorFalls[] = {
    {
    .lvl = 0, 
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_PASSHO_BERRY,
    .ability = 2, // Drought
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MYSTICAL_FIRE, MOVE_HYPNOSIS, MOVE_SOLAR_BEAM, MOVE_CALM_MIND
    },
    {
    .lvl = 0, 
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_FIRE_FANG, MOVE_THUNDER_FANG
    },
    {
    .lvl = 0, 
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_GRASS_GEM,
    .ability = 1, // Flash Fire
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayTreeckoMeteorFalls[] = {
    {
    .lvl = 0, 
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Blaze
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BLAZE_KICK, MOVE_SKY_UPPERCUT, MOVE_SHADOW_CLAW, MOVE_QUICK_ATTACK
    },
    {
    .lvl = 0, 
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Analytic
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_WATER_PULSE, MOVE_PSYCHIC, MOVE_AURORA_BEAM, MOVE_POWER_GEM
    },
    {
    .lvl = 0, 
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayTorchicMeteorFalls[] = {
    {
    .lvl = 0, 
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, // Torrent
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_WATER_PLEDGE, MOVE_DIG, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH
    },
    {
    .lvl = 0, 
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BLAZE_KICK, MOVE_JUMP_KICK, MOVE_WILD_CHARGE, MOVE_POISON_JAB
    },
    {
    .lvl = 0, 
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayMudkipMeteorFalls[] = {
    {
    .lvl = 0, 
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Overgrow
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_GRASS_PLEDGE, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = 0, 
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BLAZE_KICK, MOVE_JUMP_KICK, MOVE_WILD_CHARGE, MOVE_POISON_JAB
    },
    {
    .lvl = 0, 
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanTreeckoMeteorFalls[] = {
    {
    .lvl = 0, 
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Blaze
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BLAZE_KICK, MOVE_SKY_UPPERCUT, MOVE_SHADOW_CLAW, MOVE_QUICK_ATTACK
    },
    {
    .lvl = 0, 
    .species = SPECIES_ARAQUANID,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Water Bubble
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_ICE_FANG, MOVE_AQUA_RING
    },
    {
    .lvl = 0, 
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanTorchicMeteorFalls[] = {
    {
    .lvl = 0, 
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, // Torrent
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_WATER_PLEDGE, MOVE_DIG, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH
    },
    {
    .lvl = 0, 
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = 0, 
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanMudkipMeteorFalls[] = {
    {
    .lvl = 0, 
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Overgrow
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_GRASS_PLEDGE, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = 0, 
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_WILD_CHARGE, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = 0, 
    .species = SPECIES_MIMIKYU,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK
    }
};
// Route 115 South

static const struct TrainerMonItemCustomMoves sParty_Nob1[] = {
    {
    .lvl = 2,
    .species = SPECIES_MACHAMP,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_DUAL_CHOP, MOVE_SUBMISSION, MOVE_KNOCK_OFF, MOVE_STRENGTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nob2[] = {
    {
    .lvl = 4,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_FLAME_ORB,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DUAL_CHOP, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_STRENGTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nob3[] = {
    {
    .lvl = 6,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_FLAME_ORB,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ICE_PUNCH, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STRENGTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nob4[] = {
    {
    .lvl = 10,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_FLAME_ORB,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ICE_PUNCH, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_CROSS_POISON
    }
};

static const struct TrainerMonItemCustomMoves sParty_Hector[] = {
    {
    .lvl = -3, 
    .species = SPECIES_ZANGOOSE,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_CRUSH_CLAW, MOVE_REVENGE, MOVE_SWORDS_DANCE, MOVE_X_SCISSOR
    },
    {
    .lvl = -3, 
    .species = SPECIES_SEVIPER,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_GLARE, MOVE_SCREECH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Marlene[] = {
    {
    .lvl = -3, 
    .species = SPECIES_MEDICHAM,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3, 
    .species = SPECIES_GRUMPIG,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_PSYSHOCK, MOVE_POWER_GEM, MOVE_TEETER_DANCE, MOVE_PAYBACK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cyndy1[] = {
    {
    .lvl = -3,
    .species = SPECIES_SAMUROTT,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_X_SCISSOR, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_HAKAMO_O,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_SKY_UPPERCUT, MOVE_DRAGON_CLAW, MOVE_DRAGON_DANCE, MOVE_NOBLE_ROAR
    },
    {
    .lvl = -3,
    .species = SPECIES_BEWEAR,
    .spread = SPREAD_25_IV_0_EV,
    .moves = MOVE_HAMMER_ARM, MOVE_THRASH, MOVE_PAYBACK, MOVE_BIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cyndy2[] = {
    {
    .lvl = -3,
    .species = SPECIES_SAMUROTT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_X_SCISSOR, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_KOMMO_O,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SKY_UPPERCUT, MOVE_CLANGING_SCALES, MOVE_DRAGON_DANCE, MOVE_NOBLE_ROAR
    },
    {
    .lvl = -3,
    .species = SPECIES_BEWEAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HAMMER_ARM, MOVE_THRASH, MOVE_PAYBACK, MOVE_BULK_UP
    },
    {
    .lvl = -3,
    .species = SPECIES_MEDICHAM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_PSYCHO_CUT, MOVE_FAKE_OUT, MOVE_ICE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cyndy3[] = {
    {
    .lvl = -3,
    .species = SPECIES_SAMUROTT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_SACRED_SWORD, MOVE_X_SCISSOR, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_KOMMO_O,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_CLANGING_SCALES, MOVE_DRAGON_DANCE, MOVE_NOBLE_ROAR
    },
    {
    .lvl = -3,
    .species = SPECIES_BEWEAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_DOUBLE_EDGE, MOVE_PAYBACK, MOVE_BULK_UP
    },
    {
    .lvl = -3,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_MEDICHAMITE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_FAKE_OUT, MOVE_ICE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cyndy4[] = {
    {
    .lvl = -3,
    .species = SPECIES_SAMUROTT,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_SECRET_SWORD, MOVE_ICE_BEAM, MOVE_SHELL_SMASH
    },
    {
    .lvl = -2,
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_AURA_SPHERE, MOVE_CLANGING_SCALES, MOVE_SHELL_SMASH, MOVE_FLAMETHROWER
    },
    {
    .lvl = -3,
    .species = SPECIES_BEWEAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_DRAIN_PUNCH, MOVE_DOUBLE_EDGE, MOVE_PAYBACK, MOVE_BULK_UP
    },
/*     {
    .lvl = -3,
    .species = SPECIES_GRAPPLOCT,
    .heldItem = ITEM_PAYAPA_BERRY,
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_DRAIN_PUNCH, MOVE_LIQUIDATION, MOVE_PAYBACK, MOVE_BULK_UP
    }, */
    {
    .lvl = -3,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_MEDICHAMITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_FAKE_OUT, MOVE_ICE_PUNCH
    }
};

// Route 115 North (Requires Surf)

static const struct TrainerMonItemCustomMoves sParty_Jaiden[] = {
    {
    .lvl = -3,
    .species = SPECIES_NINJASK,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_LEECH_LIFE, MOVE_DOUBLE_TEAM, MOVE_PROTECT, MOVE_BATON_PASS
    },
    {
    .lvl = -2,
    .species = SPECIES_SWALOT,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_WATER_PULSE, MOVE_TOXIC, MOVE_STOCKPILE
    },
    {
    .lvl = -3,
    .species = SPECIES_SKUNTANK,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_FLAMETHROWER, MOVE_SMOKESCREEN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Timothy1[] = { // Double with Kyra or Jaiden
    {
    .lvl = -1,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, MOVE_KNOCK_OFF
    },
    {
    .lvl = -1,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_INFESTATION, MOVE_TOXIC, MOVE_PROTECT, MOVE_NIGHT_SHADE
    },
    {
    .lvl = -1,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Magic Guard
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Timothy2[] = {
    {
    .lvl = -1,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, MOVE_KNOCK_OFF
    },
    {
    .lvl = -1,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_INFESTATION, MOVE_TOXIC, MOVE_PROTECT, MOVE_NIGHT_SHADE
    },
    {
    .lvl = -1,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Magic Guard
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL
    },
/*     {
    .lvl = -1,
    .species = SPECIES_COPPERAJAH,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_ROCK_SLIDE, MOVE_POWER_WHIP
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Timothy3[] = {
    {
    .lvl = -1,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, MOVE_KNOCK_OFF
    },
    {
    .lvl = -1,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_INFESTATION, MOVE_TOXIC, MOVE_PROTECT, MOVE_NIGHT_SHADE
    },
    {
    .lvl = -1,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_ALAKAZITE,
    .ability = 2, // Magic Guard
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL
    },
/*     {
    .lvl = -1,
    .species = SPECIES_COPPERAJAH,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_ROCK_SLIDE, MOVE_POWER_WHIP
    }, */
    {
    .lvl = -1,
    .species = SPECIES_BOUFFALANT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Sap Sipper
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HEAD_CHARGE, MOVE_WILD_CHARGE, MOVE_MEGAHORN, MOVE_COTTON_GUARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Timothy4[] = {
    {
    .lvl = -1,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, MOVE_KNOCK_OFF
    },
    {
    .lvl = -1,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_INFESTATION, MOVE_TOXIC, MOVE_PROTECT, MOVE_NIGHT_SHADE
    },
    {
    .lvl = -1,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_ALAKAZITE,
    .ability = 2, // Magic Guard
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL
    },
/*     {
    .lvl = -1,
    .species = SPECIES_COPPERAJAH,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_ROCK_SLIDE, MOVE_POWER_WHIP
    }, */
    {
    .lvl = -1,
    .species = SPECIES_BOUFFALANT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Sap Sipper
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HEAD_CHARGE, MOVE_WILD_CHARGE, MOVE_MEGAHORN, MOVE_COTTON_GUARD
    },
    {
    .lvl = -1,
    .species = SPECIES_TORNADUS_THERIAN,
    .heldItem = ITEM_FLYING_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_HURRICANE, MOVE_FOCUS_BLAST, MOVE_U_TURN, MOVE_HEAT_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kyra[] = {
    {
    .lvl = -3,
    .species = SPECIES_DODRIO,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_DRILL_PECK, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE, MOVE_DOUBLE_HIT
    },
    {
    .lvl = -3,
    .species = SPECIES_FLAREON,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK, MOVE_SUPERPOWER
    },
    {
    .lvl = -3,
    .species = SPECIES_SCOLIPEDE,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_IRON_DEFENSE, MOVE_PROTECT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Koichi[] = { // Double with Kyra
    {
    .lvl = -3,
    .species = SPECIES_LUCARIO,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_METEOR_MASH, MOVE_EXTREME_SPEED, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE
    },
    {
    .lvl = -3,
    .species = SPECIES_PASSIMIAN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_GIGA_IMPACT, MOVE_BULK_UP, MOVE_SEED_BOMB
    },
    {
    .lvl = -3,
    .species = SPECIES_PANGORO,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SKY_UPPERCUT, MOVE_CRUNCH, MOVE_BODY_SLAM, MOVE_BULLET_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Helene[] = { // Double with Alix
    {
    .lvl = -2,
    .species = SPECIES_MEDICHAM,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -2,
    .species = SPECIES_TSAREENA,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_POWER_WHIP, MOVE_PLAY_ROUGH, MOVE_PUNISHMENT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Alix[] = {
    {
    .lvl = -2,
    .species = SPECIES_MUSHARNA,
    .ability = 2, // Psychic Surge
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MOONLIGHT, MOVE_YAWN
    },
    {
    .lvl = -2,
    .species = SPECIES_JYNX,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_LOVELY_KISS, MOVE_DREAM_EATER, MOVE_FREEZE_DRY, MOVE_NASTY_PLOT
    }
};
// Mt. Chimney

static const struct TrainerMonItemCustomMoves sParty_TabithaMtChimney[] = {
    {
    .lvl = 0,
    .species = SPECIES_GIGALITH,
    .ability = 1, // Sand Stream
    .heldItem = ITEM_PASSHO_BERRY,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_DISCHARGE
    },
    {
    .lvl = 0,
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Sheer Force
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_BITE
    },
    {
    .lvl = 1,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COIL
    },
    {
    .lvl = 0,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, // Poison Heal
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_WING_ATTACK, MOVE_DIG, MOVE_TOXIC, MOVE_PROTECT
    }
};

static const struct TrainerMonItemCustomMoves sParty_MaxieMtChimney[] = {
    {
    .lvl = 1,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Infiltrator
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_CRUNCH, MOVE_U_TURN
    },
    {
    .lvl = 1,
    .species = SPECIES_ZWEILOUS,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_OUTRAGE, MOVE_CRUNCH, MOVE_HEAD_SMASH, MOVE_SUPERPOWER
    },
    {
    .lvl = 1,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 0, // Levitate
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_VENOSHOCK, MOVE_THUNDERBOLT, MOVE_TOXIC, MOVE_HEAT_WAVE
    },
    {
    .lvl = 1,
    .species = SPECIES_VICTREEBEL,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = 0, // Chlorophyll
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_SLEEP_POWDER
    },
    {
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_POWER_HERB,
    .ability = 0, // Sheer Force
    .spread = SPREAD_31_IV_HP_SPATK_MIXED,
    .moves = MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_SOLAR_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sheila[] = {
    {
    .lvl = -2,
    .species = SPECIES_TSAREENA,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_TROP_KICK, MOVE_JUMP_KICK, MOVE_STOMP, MOVE_PUNISHMENT
    },
    {
    .lvl = -2,
    .species = SPECIES_CINCCINO,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_TAIL_SLAP, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_TICKLE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Shirley[] = {
    {
    .lvl = -2,
    .species = SPECIES_PERSIAN,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_POWER_GEM, MOVE_SWIFT, MOVE_SHOCK_WAVE, MOVE_NIGHT_SLASH
    },
    {
    .lvl = -2,
    .species = SPECIES_ORICORIO,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_REVELATION_DANCE, MOVE_AIR_SLASH, MOVE_TEETER_DANCE, MOVE_ROOST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Melissa[] = {
    {
    .lvl = -3,
    .species = SPECIES_GRANBULL,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_PLAY_ROUGH, MOVE_HEADBUTT, MOVE_FIRE_FANG, MOVE_BITE
    },
    {
    .lvl = -3,
    .species = SPECIES_TOGETIC,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_AIR_CUTTER, MOVE_ANCIENT_POWER, MOVE_SOFT_BOILED, MOVE_MAGICAL_LEAF
    },
    {
    .lvl = -3,
    .species = SPECIES_FURFROU,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_HEADBUTT, MOVE_COTTON_GUARD, MOVE_CHARM, MOVE_BITE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sawyer1[] = {
    {
    .lvl = -2,
    .species = SPECIES_LYCANROC_MIDNIGHT,
    .ability = 2, // No Guard
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_COUNTER
    },
    {
    .lvl = -2,
    .species = SPECIES_CARBINK,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_REFLECT, MOVE_MAGNET_RISE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sawyer2[] = {
    {
    .lvl = -2,
    .species = SPECIES_LYCANROC_MIDNIGHT,
    .ability = 2, // No Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_COUNTER
    },
    {
    .lvl = -2,
    .species = SPECIES_CARBINK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_REFLECT, MOVE_MAGNET_RISE
    },
/*     {
    .lvl = -2,
    .species = SPECIES_STONJOURNER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Sawyer3[] = {
    {
    .lvl = -2,
    .species = SPECIES_CARBINK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXPLOSION, MOVE_MOONBLAST, MOVE_REFLECT, MOVE_LIGHT_SCREEN
    },
    {
    .lvl = -2,
    .species = SPECIES_LYCANROC_MIDNIGHT,
    .ability = 2, // No Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_CLOSE_COMBAT, MOVE_COUNTER
    },
    {
    .lvl = -2,
    .species = SPECIES_ABOMASNOW,
    .ability = 2, // Soundproof
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICE_SHARD, MOVE_WOOD_HAMMER, MOVE_EARTH_POWER, MOVE_AVALANCHE
    },
/*     {
    .lvl = -2,
    .species = SPECIES_STONJOURNER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Sawyer4[] = {
    {
    .lvl = -2,
    .species = SPECIES_CARBINK,
    .heldItem = ITEM_LIGHT_CLAY,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_EXPLOSION, MOVE_MOONBLAST, MOVE_REFLECT, MOVE_LIGHT_SCREEN
    },
    {
    .lvl = -2,
    .species = SPECIES_LYCANROC_MIDNIGHT,
    .heldItem = ITEM_ROCK_GEM,
    .ability = 2, // No Guard
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS
    },
    {
    .lvl = -2,
    .species = SPECIES_ABOMASNOW,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 2, // Soundproof
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_ICE_SHARD, MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_FREEZE_DRY
    },
    {
    .lvl = -2,
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Thick Fat
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ICE_SHARD, MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF
    },
/*     {
    .lvl = -2,
    .species = SPECIES_STONJOURNER,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_HEAT_CRASH, MOVE_EARTHQUAKE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Shelby1[] = {
    {
    .lvl = 0,
    .species = SPECIES_MIENSHAO,
    .ability = 2, // Reckless
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_JUMP_KICK, MOVE_U_TURN, MOVE_BOUNCE, MOVE_FAKE_OUT
    },
    {
    .lvl = 0,
    .species = SPECIES_WOBBUFFET,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Shelby2[] = {
    {
    .lvl = 0,
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Regenerator
    .spread = SPREAD_HP_ICE_TIMID,
    .moves = MOVE_AURA_SPHERE, MOVE_GRASS_KNOT, MOVE_HIDDEN_POWER, MOVE_CALM_MIND
    },
    {
    .lvl = 0,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_CUSTAP_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND
    },
    {
    .lvl = 0,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_PSYSHOCK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Shelby3[] = {
    {
    .lvl = 0,
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Regenerator
    .spread = SPREAD_HP_ICE_TIMID,
    .moves = MOVE_AURA_SPHERE, MOVE_GRASS_KNOT, MOVE_HIDDEN_POWER, MOVE_CALM_MIND
    },
    {
    .lvl = 0,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_CUSTAP_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND
    },
    {
    .lvl = 0,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_PSYSHOCK
    },
    {
    .lvl = 0,
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_FOCUS_BLAST, MOVE_EARTHQUAKE
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Shelby4[] = {
    {
    .lvl = 0,
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Regenerator
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_CUSTAP_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND
    },
    {
    .lvl = 0,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_PSYSHOCK
    },
    {
    .lvl = 0,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MANECTITE,
    .spread = SPREAD_HP_GRASS_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_AURORA_BEAM, MOVE_HIDDEN_POWER
    },
    {
    .lvl = 0,
    .species = SPECIES_VENOMOTH,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_FOCUS_BLAST, MOVE_EARTHQUAKE
    }    
};

// Jagged Pass
static const struct TrainerMonItemCustomMoves sParty_Eric[] = {
    {
    .lvl = -2,
    .species = SPECIES_PUPITAR,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_PAYBACK, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SCREECH
    },
    {
    .lvl = -2,
    .species = SPECIES_METANG,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_BULLET_PUNCH, MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_MIRACLE_EYE
    },
    {
    .lvl = -2,
    .species = SPECIES_HAKAMO_O,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_OUTRAGE, MOVE_DRAGON_DANCE, MOVE_NOBLE_ROAR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Autumn[] = {
    {
    .lvl = -2,
    .species = SPECIES_PYROAR,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_CRUNCH, MOVE_NONE
    },
    {
    .lvl = -2,
    .species = SPECIES_SERPERIOR,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_LEAF_BLADE, MOVE_DRAGON_RUSH, MOVE_COIL, MOVE_LEECH_SEED
    }
};

static const struct TrainerMonItemCustomMoves sParty_Julio[] = {
    {
    .lvl = -2,
    .species = SPECIES_MAGNETON,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_FLASH_CANNON, MOVE_DISCHARGE, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_LUXRAY,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_THUNDER_FANG, MOVE_NIGHT_SLASH, MOVE_FIRE_FANG, MOVE_ICE_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Diana1[] = {
    {
    .lvl = -3,
    .species = SPECIES_CHESNAUGHT,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_SPIKY_SHIELD, MOVE_HAMMER_ARM, MOVE_SEED_BOMB, MOVE_PIN_MISSILE
    },
    {
    .lvl = -3,
    .species = SPECIES_PIDGEOT,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_AIR_SLASH, MOVE_FEATHER_DANCE, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_AMPHAROS,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_THUNDER_WAVE, MOVE_DRAGON_BREATH, MOVE_DISCHARGE, MOVE_COTTON_GUARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Diana2[] = {
    {
    .lvl = -3,
    .species = SPECIES_CHESNAUGHT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPIKY_SHIELD, MOVE_DRAIN_PUNCH, MOVE_WOOD_HAMMER, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_PIDGEOT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_HYPER_VOICE, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_AMPHAROS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER_WAVE, MOVE_DRAGON_PULSE, MOVE_PARABOLIC_CHARGE, MOVE_COTTON_GUARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Diana3[] = {
    {
    .lvl = -3,
    .species = SPECIES_CHESNAUGHT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPIKY_SHIELD, MOVE_DRAIN_PUNCH, MOVE_WOOD_HAMMER, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_PIDGEOT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_HYPER_VOICE, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_ARCANINE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED, MOVE_CRUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_AMPHAROS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER_WAVE, MOVE_DRAGON_PULSE, MOVE_PARABOLIC_CHARGE, MOVE_COTTON_GUARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Diana4[] = {
    {
    .lvl = -3,
    .species = SPECIES_CHESNAUGHT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPIKY_SHIELD, MOVE_DRAIN_PUNCH, MOVE_WOOD_HAMMER, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_PIDGEOT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HURRICANE, MOVE_HYPER_VOICE, MOVE_FOCUS_BLAST, MOVE_U_TURN
    },
    {
    .lvl = -3,
    .species = SPECIES_ARCANINE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED, MOVE_STRENGTH
    },
/*     {
    .lvl = -3,
    .species = SPECIES_DUBWOOL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DOUBLE_EDGE, MOVE_ZEN_HEADBUTT, MOVE_BODY_PRESS, MOVE_COTTON_GUARD
    }, */
    {
    .lvl = -3,
    .species = SPECIES_AMPHAROS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER_WAVE, MOVE_DRAGON_PULSE, MOVE_PARABOLIC_CHARGE, MOVE_COTTON_GUARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ethan1[] = {
    {
    .lvl = -3,
    .species = SPECIES_BRAVIARY,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_WING_ATTACK, MOVE_CRUSH_CLAW, MOVE_SUPERPOWER, MOVE_TAILWIND
    },
    {
    .lvl = -3,
    .species = SPECIES_SANDSLASH,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_SPIKY_SHIELD, MOVE_DIG, MOVE_SWORDS_DANCE, MOVE_GYRO_BALL
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLDUCK,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_PSYSHOCK, MOVE_AQUA_TAIL, MOVE_DISABLE, MOVE_SCREECH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ethan2[] = {
    {
    .lvl = -3,
    .species = SPECIES_BRAVIARY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WING_ATTACK, MOVE_CRUSH_CLAW, MOVE_SUPERPOWER, MOVE_TAILWIND
    },
    {
    .lvl = -3,
    .species = SPECIES_SANDSLASH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPIKY_SHIELD, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLDUCK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ZEN_HEADBUTT, MOVE_AQUA_TAIL, MOVE_CROSS_CHOP, MOVE_HONE_CLAWS
    },
/*     {
    .lvl = -3,
    .species = SPECIES_BOLTUND,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_CRUNCH, MOVE_PLAY_ROUGH
    }  */   
};

static const struct TrainerMonItemCustomMoves sParty_Ethan3[] = {
    {
    .lvl = -3,
    .species = SPECIES_BRAVIARY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_TAILWIND
    },
    {
    .lvl = -3,
    .species = SPECIES_SANDSLASH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPIKY_SHIELD, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLDUCK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ZEN_HEADBUTT, MOVE_AQUA_TAIL, MOVE_CROSS_CHOP, MOVE_HONE_CLAWS
    },
    {
    .lvl = -3,
    .species = SPECIES_JUMPLUFF,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SEED_BOMB, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_SLEEP_POWDER
    },
/*     {
    .lvl = -3,
    .species = SPECIES_BOLTUND,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_CRUNCH, MOVE_PLAY_ROUGH
    }   */
};

static const struct TrainerMonItemCustomMoves sParty_Ethan4[] = {
    {
    .lvl = -3,
    .species = SPECIES_BRAVIARY,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_TAILWIND
    },
    {
    .lvl = -3,
    .species = SPECIES_SANDSLASH,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SPIKY_SHIELD, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLDUCK,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ZEN_HEADBUTT, MOVE_AQUA_TAIL, MOVE_CROSS_CHOP, MOVE_HONE_CLAWS
    },
    {
    .lvl = -3,
    .species = SPECIES_JUMPLUFF,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_SEED_BOMB, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_SLEEP_POWDER
    },
/*     {
    .lvl = -3,
    .species = SPECIES_BOLTUND,
    .spread = SPREAD_31_IV_ATTACK_SPEED_JOLLY,
    .moves = MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_CRUNCH, MOVE_PLAY_ROUGH
    }   */
};

// Lavaridge Gym

static const struct TrainerMonItemCustomMoves sParty_Cole[] = {
    {
    .lvl = -1,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, // Solid Rock
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_EARTH_POWER, MOVE_ROCK_SLIDE, MOVE_FLASH_CANNON, MOVE_FLAME_BURST
    },
    {
    .lvl = -1,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Lightningrod
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_FIRE_PUNCH, MOVE_SHADOW_BONE, MOVE_BONEMERANG, MOVE_IRON_HEAD
    },
    {
    .lvl = -1,
    .species = SPECIES_SIMISEAR,
    .heldItem = ITEM_PETAYA_BERRY,
    .ability = 2, // Blaze
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_GRASS_KNOT, MOVE_ACROBATICS, MOVE_SUBSTITUTE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Gerald[] = { // double with Cole
    {
    .lvl = -1,
    .species = SPECIES_KECLEON,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_FIRE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_AQUA_TAIL, MOVE_RECOVER
    },
    {
    .lvl = -1,
    .species = SPECIES_INCINEROAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Intimidate
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_FIRE_PUNCH, MOVE_DARKEST_LARIAT, MOVE_LEECH_LIFE, MOVE_WILL_O_WISP
    },
    {
    .lvl = -1,
    .species = SPECIES_OCTILLERY,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 2, // Moody
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_WATER_PULSE, MOVE_AURORA_BEAM, MOVE_PROTECT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jeff[] = {
    {
    .lvl = -1,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Simple
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_SHELL_SMASH, MOVE_LAVA_PLUME, MOVE_ROCK_SLIDE, MOVE_EARTH_POWER
    },
    {
    .lvl = -1,
    .species = SPECIES_DELPHOX,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Magic Guard
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_MYSTICAL_FIRE, MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_WILL_O_WISP
    },
    {
    .lvl = -1,
    .species = SPECIES_GOURGEIST,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Flare Boost
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL, MOVE_TRICK_OR_TREAT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Axle[] = {
    {
    .lvl = -1,
    .species = SPECIES_MAGMORTAR,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 0, // Flame Body
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_CROSS_CHOP, MOVE_PSYCHIC
    },
    {
    .lvl = -1,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Reckless
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_BLAZE_KICK, MOVE_WILD_CHARGE, MOVE_JUMP_KICK, MOVE_POISON_JAB
    },
    {
    .lvl = -1,
    .species = SPECIES_ROTOM_HEAT,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_OVERHEAT, MOVE_DISCHARGE, MOVE_PAIN_SPLIT, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jace[] = { // double with Eli
    {
    .lvl = -1,
    .species = SPECIES_EMBOAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Blaze
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_YAWN, MOVE_HEAT_CRASH, MOVE_SUCKER_PUNCH, MOVE_HAMMER_ARM
    },
    {
    .lvl = -1,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, // Guts
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_BLAZE_KICK, MOVE_FACADE, MOVE_QUICK_ATTACK, MOVE_DIG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Eli[] = {
    {
    .lvl = -1,
    .species = SPECIES_HEATMOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Tough Claws
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_FIRE_LASH, MOVE_IRON_TAIL, MOVE_THROAT_CHOP, MOVE_STOMPING_TANTRUM
    },
    {
    .lvl = 0,
    .species = SPECIES_LAMPENT,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Flame Body
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_OVERHEAT, MOVE_HEX, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP
    }
};
static const struct TrainerMonItemCustomMoves sParty_Keegan[] = {
    {
    .lvl = 3,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 2, // Drought
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER, MOVE_GROWTH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Danielle[] = {
    {
    .lvl = -1,
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_BLACK_BELT,
    .ability = 1, // Scrappy
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_JUMP_KICK, MOVE_RETURN, MOVE_FIRE_PUNCH, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_FLYING_GEM,
    .ability = 0, // Blaze
    .spread = SPREAD_31_IV_40_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_OVERHEAT, MOVE_THUNDER_PUNCH, MOVE_GRASS_KNOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flannery1[] = {
    {
    .lvl = 3,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Drought
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_OVERHEAT, MOVE_STEALTH_ROCK, MOVE_CLEAR_SMOG, MOVE_RAPID_SPIN
    },
    {
    .lvl = 0,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 1, // Flash Fire
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_OVERHEAT, MOVE_DARK_PULSE, MOVE_SOLAR_BEAM, MOVE_SUCKER_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_OVERHEAT, MOVE_REVERSAL, MOVE_THUNDER_PUNCH, MOVE_ENDURE
    },
    {
    .lvl = 0,
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = 0, // Flame Body
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_FIERY_DANCE, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 2, // Gale Wings
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .moves = MOVE_OVERHEAT, MOVE_BRAVE_BIRD, MOVE_DEFOG, MOVE_U_TURN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flannery2[] = { // singles
    {
    .lvl = 3,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Drought
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_OVERHEAT, MOVE_STEALTH_ROCK, MOVE_YAWN, MOVE_ATTRACT
    },
    {
    .lvl = 0,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Flash Fire
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_SOLAR_BEAM, MOVE_NASTY_PLOT
    },
    {
    .lvl = 0,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLAZIKENITE,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_CHANDELURE,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 1, // Flame Body
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_OVERHEAT, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_WILL_O_WISP
    },
    {
    .lvl = 0,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Gale Wings
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_FLARE_BLITZ, MOVE_BRAVE_BIRD, MOVE_BULK_UP, MOVE_ROOST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flannery3[] = { // singles with legendaries
    {
    .lvl = 3,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Drought
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_OVERHEAT, MOVE_STEALTH_ROCK, MOVE_YAWN, MOVE_EXPLOSION
    },
    {
    .lvl = 0,
    .species = SPECIES_RESHIRAM,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLUE_FLARE, MOVE_DRAGON_PULSE, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER
    },
    {
    .lvl = 0,
    .species = SPECIES_HO_OH,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Regenerator
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_SACRED_FIRE, MOVE_EARTHQUAKE, MOVE_DEFOG
    },
    {
    .lvl = 0,
    .species = SPECIES_VOLCANION,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_STEAM_ERUPTION, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB
    },
    {
    .lvl = 0,
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Flame Body
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_FIERY_DANCE, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLAZIKENITE,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flannery4[] = { // Doubles with legendaries
    {
    .lvl = 3,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Drought
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_OVERHEAT, MOVE_FISSURE, MOVE_YAWN, MOVE_EXPLOSION
    },
    {
    .lvl = 0,
    .species = SPECIES_RESHIRAM,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLUE_FLARE, MOVE_DRAGON_PULSE, MOVE_SOLAR_BEAM, MOVE_EARTH_POWER
    },
    {
    .lvl = 0,
    .species = SPECIES_HO_OH,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 2, // Regenerator
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_SACRED_FIRE, MOVE_IRON_HEAD, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_VOLCANION,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_STEAM_ERUPTION, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB
    },
    {
    .lvl = 0,
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Flame Body
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_HEAT_WAVE, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLAZIKENITE,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_PROTECT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flannery5[] = { // doubles
    {
    .lvl = 3,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 1, // Drought
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HEAT_WAVE, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_ATTRACT
    },
    {
    .lvl = 0,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = 1, // Flash Fire
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_QUIVER_DANCE, MOVE_RAGE_POWDER
    },
    {
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLAZIKENITE,
    .ability = 2, // Speed Boost
    .spread = SPREAD_HP_ICE_MODEST,
    .moves = MOVE_HEAT_WAVE, MOVE_AURA_SPHERE, MOVE_HIDDEN_POWER, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_CHANDELURE,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 1, // Flame Body
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_WILL_O_WISP
    },
    {
    .lvl = 0,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 2, // Gale Wings
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .moves = MOVE_OVERHEAT, MOVE_BRAVE_BIRD, MOVE_SOLAR_BEAM, MOVE_ROOST
    }
};
// Ashen Woods

static const struct TrainerMonItemCustomMoves sParty_Elmer[] = {
    {
    .lvl = -2,
    .species = SPECIES_SCYTHER,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_X_SCISSOR, MOVE_QUICK_ATTACK, MOVE_NIGHT_SLASH
    },
    {
    .lvl = -2,
    .species = SPECIES_PINSIR,
    .ability = 1, // Mold Breaker
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_THRASH, MOVE_X_SCISSOR, MOVE_SUBMISSION, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_HERACROSS,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_BULLET_SEED, MOVE_NIGHT_SLASH
    },
};

static const struct TrainerMonItemCustomMoves sParty_Roman[] = {
    {
    .lvl = -2,
    .species = SPECIES_BRONZONG,
    .ability = 0, // Levitate
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_GYRO_BALL, MOVE_EXTRASENSORY, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLEM,
    .spread = SPREAD_31_IV_0_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_STEAMROLLER, MOVE_EXPLOSION
    }
};

static const struct TrainerMonItemCustomMoves sParty_Martin[] = {
    {
    .lvl = -1,
    .species = SPECIES_MUK_ALOLAN,
    .ability = 0, // Poison Touch
    .spread = SPREAD_31_IV_20_EV,
    .moves = MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_ACID_SPRAY, MOVE_DISABLE
    },
    {
    .lvl = -1,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_20_EV,
    .moves = MOVE_RAZOR_SHELL, MOVE_FIRST_IMPRESSION, MOVE_SUCKER_PUNCH, MOVE_DRILL_RUN
    },
    {
    .lvl = -1,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_31_IV_20_EV,
    .moves = MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED, MOVE_TOXIC, MOVE_HEAL_PULSE
    }   
};

static const struct TrainerMonItemCustomMoves sParty_Alannah[] = {
    {
    .lvl = -1,
    .species = SPECIES_PRIMARINA,
    .ability = 1, // Berserk
    .spread = SPREAD_31_IV_20_EV,
    .moves = MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_SING
    },
    {
    .lvl = -1,
    .species = SPECIES_DURANT,
    .ability = 1, // Hustle
    .spread = SPREAD_31_IV_20_EV,
    .moves = MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_THUNDER_FANG
    },
    {
    .lvl = -1,
    .species = SPECIES_DUSCLOPS,
    .spread = SPREAD_31_IV_20_EV,
    .moves = MOVE_NIGHT_SHADE, MOVE_CURSE, MOVE_PROTECT, MOVE_INFESTATION
    }  
};

// Petalburg Gym

static const struct TrainerMonItemCustomMoves sParty_Randall[] = { // Speed Room
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_QUICK_ATTACK, MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_QUICK_ATTACK, MOVE_JUMP_KICK, MOVE_RETURN, MOVE_ICE_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_SAWSBUCK,
    .heldItem = ITEM_HEAT_ROCK,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SUNNY_DAY, MOVE_JUMP_KICK, MOVE_RETURN, MOVE_HORN_LEECH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Mary[] = { // Accuracy Room
    {
    .lvl = 0,
    .species = SPECIES_BRAVIARY,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HONE_CLAWS, MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER
    },
    {
    .lvl = 0,
    .species = SPECIES_RATICATE_ALOLAN,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 1, // Hustle
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_QUICK_ATTACK, MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_HONE_CLAWS
    },
    {
    .lvl = 0,
    .species = SPECIES_DRAMPA,
    .heldItem = ITEM_DAMP_ROCK,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_HURRICANE, MOVE_WORK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Parker[] = { // Confusion Room
    {
    .lvl = 0,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 2, // Contrary
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_TEETER_DANCE, MOVE_SUPERPOWER, MOVE_DIZZY_PUNCH, MOVE_ATTRACT
    },
    {
    .lvl = 0,
    .species = SPECIES_STANTLER,
    .heldItem = ITEM_PERSIM_BERRY,
    .ability = 2, // Sap Sipper
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SWAGGER, MOVE_DISABLE, MOVE_PROTECT, MOVE_THRASH
    },
    {
    .lvl = 0,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 1, // Contrary
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_SWAGGER, MOVE_FOUL_PLAY, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Alexia[] = { // Defense Room
    {
    .lvl = 0,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Thick Fat
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_BODY_SLAM, MOVE_CURSE, MOVE_REST, MOVE_SLEEP_TALK
    },
    {
    .lvl = 0,
    .species = SPECIES_FURFROU,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_THUNDER_WAVE, MOVE_HEADBUTT, MOVE_COTTON_GUARD, MOVE_BITE
    },
    {
    .lvl = 0,
    .species = SPECIES_MILTANK,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Scrappy
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_BODY_SLAM, MOVE_MILK_DRINK
    }
};

static const struct TrainerMonItemCustomMoves sParty_George[] = { // Recovery Room
    {
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_CHANSEY,
    .moves = MOVE_MINIMIZE, MOVE_SOFT_BOILED, MOVE_SEISMIC_TOSS, MOVE_AROMATHERAPY
    },
    {
    .lvl = 0,
    .species = SPECIES_DUNSPARCE,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_COIL, MOVE_HEADBUTT, MOVE_THUNDER_WAVE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_EVIOLITE,
    .ability = 2, // Analytic
    .spread = SPREAD_CHANSEY,
    .moves = MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jody[] = { // Strength Room
    {
    .lvl = 0,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, // Toxic Boost
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_SWORDS_DANCE, MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF
    },
    {
    .lvl = 0,
    .species = SPECIES_BOUFFALANT,
    .heldItem = ITEM_LIECHI_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_SWORDS_DANCE, MOVE_HEAD_CHARGE, MOVE_MEGAHORN, MOVE_EARTHQUAKE
    },
    {
    .lvl = 0,
    .species = SPECIES_PORYGON_Z,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Download
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_TRI_ATTACK, MOVE_NASTY_PLOT, MOVE_ICE_BEAM, MOVE_SHADOW_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Berke[] = { // OHKO Room
    {
    .lvl = 0,
    .species = SPECIES_LICKILICKY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BELLY_DRUM, MOVE_EXPLOSION, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = 0,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = 1, // Thick Fat
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FISSURE, MOVE_SELF_DESTRUCT, MOVE_NONE, MOVE_NONE
    },
    {
    .lvl = 0,
    .species = SPECIES_URSARING,
    .heldItem = ITEM_FLAME_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_PROTECT, MOVE_GIGA_IMPACT, MOVE_NONE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Norman1[] = {
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_REVERSAL, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_THROAT_CHOP, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = 0,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_FIGY_BERRY,
    .ability = 1, // Gluttony
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_SHADOW_CLAW, MOVE_SEED_BOMB
    },
    {
    .lvl = 0,
    .species = SPECIES_EXPLOUD,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 2, // Scrappy
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_BOOMBURST, MOVE_FIRE_BLAST, MOVE_SURF, MOVE_EXTRASENSORY
    },
    {
    .lvl = 2,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_GIGA_IMPACT, MOVE_YAWN, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE
    },
    {
    .lvl = 0,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_KANGASKHANITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FACADE, MOVE_CRUNCH, MOVE_SEISMIC_TOSS, MOVE_EARTHQUAKE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Norman2[] = { // singles
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_REVERSAL, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_THROAT_CHOP, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = 0,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_FIGY_BERRY,
    .ability = 1, // Gluttony
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EXTREME_SPEED, MOVE_BELLY_DRUM, MOVE_THROAT_CHOP, MOVE_SEED_BOMB
    },
    {
    .lvl = 0,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_PSYCHIC_GEM,
    .ability = 1, // Contrary
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHO_BOOST, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_THUNDERBOLT
    },
    {
    .lvl = 2,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Stall
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BODY_SLAM, MOVE_SLACK_OFF, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE
    },
    {
    .lvl = 0,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_KANGASKHANITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RETURN, MOVE_CRUNCH, MOVE_SEISMIC_TOSS, MOVE_EARTHQUAKE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Norman3[] = { // Doubles
    {
    .lvl = 2,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BODY_SLAM, MOVE_SLACK_OFF, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE
    },
    {
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_CHANSEY,
    .moves = MOVE_SEISMIC_TOSS, MOVE_SKILL_SWAP, MOVE_HEAL_PULSE, MOVE_ICY_WIND
    },
    {
    .lvl = 0,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = 0,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = 2, // Gluttony
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_ZEN_HEADBUTT, MOVE_SLACK_OFF
    },
    {
    .lvl = 0,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_KANGASKHANITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RETURN, MOVE_CRUNCH, MOVE_SEISMIC_TOSS, MOVE_FAKE_OUT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Norman4[] = { // Singles with legendaries
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FACADE, MOVE_REVERSAL, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_REGIGIGAS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Clear Body
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_POWER_UP_PUNCH, MOVE_FIRE_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_ARCEUS,
    .heldItem = ITEM_POWER_HERB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EXTREME_SPEED, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_SHADOW_FORCE
    },
    {
    .lvl = 0,
    .species = SPECIES_MELOETTA,
    .heldItem = ITEM_SHELL_BELL,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_QUIVER_DANCE
    },
    {
    .lvl = 2,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Slow Start
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .moves = MOVE_BODY_SLAM, MOVE_SLACK_OFF, MOVE_NIGHT_SLASH, MOVE_BULK_UP
    },
    {
    .lvl = 0,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_KANGASKHANITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RETURN, MOVE_SUCKER_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_CRUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Norman5[] = { // doubles with legendaries
    {
    .lvl = 2,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BODY_SLAM, MOVE_SLACK_OFF, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE
    },
    {
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_EVIOLITE,
    .spread = SPREAD_CHANSEY,
    .moves = MOVE_SEISMIC_TOSS, MOVE_SKILL_SWAP, MOVE_HEAL_PULSE, MOVE_ICY_WIND
    },
    {
    .lvl = 0,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = 0,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_ARCEUS,
    .heldItem = ITEM_POWER_HERB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EXTREME_SPEED, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_SHADOW_FORCE
    },
    {
    .lvl = 0,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_KANGASKHANITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RETURN, MOVE_CRUNCH, MOVE_SEISMIC_TOSS, MOVE_FAKE_OUT
    }
};

// Route 105

static const struct TrainerMonItemCustomMoves sParty_Imani[] = {
    {
    .lvl = -3,
    .species = SPECIES_AZUMARILL,
    .ability = 1, // Huge Power
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_SUPERPOWER, MOVE_AQUA_RING
    },
    {
    .lvl = -3,
    .species = SPECIES_DEWGONG,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_ENCORE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dominik[] = {
    {
    .lvl = -3,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_LEER
    },
    {
    .lvl = -3,
    .species = SPECIES_BRUXISH,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Foster[] = {
    {
    .lvl = -2,
    .species = SPECIES_OMASTAR,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SURF, MOVE_ROCK_SLIDE, MOVE_SHELL_SMASH, MOVE_MUD_SHOT
    },
    {
    .lvl = -2,
    .species = SPECIES_BRONZONG,
    .ability = 1, // Heat Proof
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_EXTRASENSORY, MOVE_FLASH_CANNON
    }/* ,
    {
    .lvl = -2,
    .species = SPECIES_UNOWN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Beverly[] = {
    {
    .lvl = -3,
    .species = SPECIES_WAILORD,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SURF, MOVE_BOUNCE, MOVE_BODY_SLAM, MOVE_NOBLE_ROAR
    },
    {
    .lvl = -3,
    .species = SPECIES_PELIPPER,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AIR_SLASH, MOVE_HYDRO_PUMP, MOVE_STOCKPILE, MOVE_ROOST
    },
    {
    .lvl = -3,
    .species = SPECIES_TOXAPEX,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BANEFUL_BUNKER, MOVE_LIQUIDATION, MOVE_POISON_JAB, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Josue[] = { // Double with Andres
    {
    .lvl = -2,
    .species = SPECIES_UNFEZANT,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_DRILL_PECK, MOVE_RETURN, MOVE_SUBMISSION, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_DELIBIRD,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FLY, MOVE_EXTREME_SPEED, MOVE_SEED_BOMB, MOVE_GUNK_SHOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Luis[] = {
    {
    .lvl = -3,
    .species = SPECIES_SHARPEDO,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_POISON_FANG, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_SLURPUFF,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SURF, MOVE_ENERGY_BALL, MOVE_PLAY_ROUGH, MOVE_FAKE_TEARS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Andres1[] = {
    {
    .lvl = -2,
    .species = SPECIES_ARCHEOPS,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_ACROBATICS, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_ENDEAVOR
    },
    {
    .lvl = -2,
    .species = SPECIES_AURORUS,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HYPER_VOICE, MOVE_POWER_GEM, MOVE_DISCHARGE, MOVE_ROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_PROBOPASS,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_ZAP_CANNON
    }
};

static const struct TrainerMonItemCustomMoves sParty_Andres2[] = {
    {
    .lvl = -2,
    .species = SPECIES_ARCHEOPS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ACROBATICS, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_ENDEAVOR
    },
    {
    .lvl = -2,
    .species = SPECIES_AURORUS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPER_VOICE, MOVE_POWER_GEM, MOVE_DISCHARGE, MOVE_ROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_PROBOPASS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_ZAP_CANNON
    },
/*     {
    .lvl = -2,
    .species = SPECIES_ARCTOVISH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_FISHIOUS_REND, MOVE_SUPER_FANG, MOVE_CRUNCH
    }    */
};

static const struct TrainerMonItemCustomMoves sParty_Andres3[] = {
    {
    .lvl = -2,
    .species = SPECIES_ARCHEOPS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ACROBATICS, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW, MOVE_ENDEAVOR
    },
    {
    .lvl = -2,
    .species = SPECIES_AURORUS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPER_VOICE, MOVE_POWER_GEM, MOVE_DISCHARGE, MOVE_ROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_PROBOPASS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_ZAP_CANNON
    },
/*     {
    .lvl = -2,
    .species = SPECIES_ARCTOVISH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_FISHIOUS_REND, MOVE_SUPER_FANG, MOVE_CRUNCH
    }  */ 
};

static const struct TrainerMonItemCustomMoves sParty_Andres4[] = {
    {
    .lvl = -2,
    .species = SPECIES_ARCHEOPS,
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .moves = MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_HEAT_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_AURORUS,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_POWER_GEM, MOVE_DISCHARGE, MOVE_ROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_PROBOPASS,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_ZAP_CANNON
    },
/*    {
    .lvl = -2,
    .species = SPECIES_RUNERIGUS,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_REVENGE, MOVE_CURSE
    },
    {
    .lvl = -2,
    .species = SPECIES_ARCTOVISH,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_ICICLE_CRASH, MOVE_FISHIOUS_REND, MOVE_SUPER_FANG, MOVE_CRUNCH
    }   */
};

// Route 106 Surfing

static const struct TrainerMonItemCustomMoves sParty_Kyla[] = {
    {
    .lvl = -3,
    .species = SPECIES_NIDOQUEEN,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_SUPERPOWER, MOVE_CRUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLDUCK,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_ZEN_HEADBUTT, MOVE_CROSS_CHOP, MOVE_SOAK
    },
    {
    .lvl = -3,
    .species = SPECIES_JELLICENT,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WATER_SPOUT, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_ACID_ARMOR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Douglas[] = {
    {
    .lvl = -3,
    .species = SPECIES_LAPRAS,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FREEZE_DRY, MOVE_WATER_PULSE, MOVE_PERISH_SONG, MOVE_SING
    },
    {
    .lvl = -3,
    .species = SPECIES_TENTACRUEL,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_HYDRO_PUMP, MOVE_HEX, MOVE_REFLECT_TYPE
    }
};

// Route 107

static const struct TrainerMonItemCustomMoves sParty_Denise[] = {
    {
    .lvl = -2,
    .species = SPECIES_SWANNA,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_RAIN_DANCE, MOVE_SURF, MOVE_HURRICANE, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_SEAKING,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_DRILL_RUN, MOVE_POISON_JAB
    }
};

static const struct TrainerMonItemCustomMoves sParty_LisaAndRay[] = {
    {
    .lvl = -3,
    .species = SPECIES_CLAWITZER,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE
    },
    {
    .lvl = -3,
    .species = SPECIES_DRAGALGE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_DRAGON_PULSE, MOVE_SLUDGE_BOMB, MOVE_HYDRO_PUMP, MOVE_SMOKESCREEN
    },
    {
    .lvl = -3,
    .species = SPECIES_BASCULIN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_DOUBLE_EDGE, MOVE_HEAD_SMASH
    },
    {
    .lvl = -3,
    .species = SPECIES_ALOMOMOLA,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HEAL_PULSE, MOVE_WHIRLPOOL, MOVE_HELPING_HAND, MOVE_AQUA_RING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Darrin[] = {
    {
    .lvl = -2,
    .species = SPECIES_TENTACOOL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_WATER_PULSE, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES, MOVE_SUPERSONIC
    },
    {
    .lvl = -2,
    .species = SPECIES_WINGULL,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 1, // Hydration
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_WATER_PULSE, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_REST
    },
    {
    .lvl = -2,
    .species = SPECIES_TENTACOOL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 2, // Rain Dish
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_SCREECH, MOVE_KNOCK_OFF
    },
    {
    .lvl = -2,
    .species = SPECIES_WINGULL,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 2, // Rain Dish
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_WATER_PULSE, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_SUPERSONIC
    },
    {
    .lvl = -2,
    .species = SPECIES_TENTACOOL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 2, // Rain Dish
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_WATER_PULSE, MOVE_SLUDGE_BOMB, MOVE_TOXIC_SPIKES, MOVE_SUPERSONIC
    },
    {
    .lvl = -2,
    .species = SPECIES_WINGULL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Rain Dish
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_WATER_PULSE, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_AGILITY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Beth[] = { // Double with Camron
    {
    .lvl = 0,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MUD_SHOT, MOVE_HYDRO_PUMP, MOVE_HYPNOSIS, MOVE_HYPER_VOICE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Camron[] = { // Double with Beth
    {
    .lvl = 0,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Natural Cure
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_POWER_GEM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tony1[] = {
    {
    .lvl = -2,
    .species = SPECIES_SHARPEDO,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SURF, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_LEECH_LIFE, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_ROCK_SLIDE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tony2[] = {
    {
    .lvl = -2,
    .species = SPECIES_SHARPEDO,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LEECH_LIFE, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_ROCK_SLIDE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tony3[] = {
    {
    .lvl = -2,
    .species = SPECIES_SHARPEDO,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LEECH_LIFE, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_ROCK_SLIDE
    },
/*     {
    .lvl = -2,
    .species = SPECIES_BARRASKEWDA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Tony4[] = {
    {
    .lvl = -2,
    .species = SPECIES_SHARPEDO,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_PROTECT
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LEECH_LIFE, MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_ROCK_SLIDE
    },
/*     {
    .lvl = -2,
    .species = SPECIES_BARRASKEWDA,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN
    } */
};

// Route 108

static const struct TrainerMonItemCustomMoves sParty_Tara[] = {
    {
    .lvl = -3,
    .species = SPECIES_SEADRA,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = 2, // Sniper
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SURF, MOVE_DRAGON_PULSE, MOVE_FOCUS_ENERGY, MOVE_AGILITY
    },
    {
    .lvl = -3,
    .species = SPECIES_FERALIGATR,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_ICE_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_AUDINO,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SURF, MOVE_HYPER_VOICE, MOVE_MOONBLAST, MOVE_ATTRACT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Missy[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOREBYSS,
    .ability = 2, // Hydration
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRAINING_KISS, MOVE_PSYCHIC, MOVE_SHELL_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_PYUKUMUKU,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_RECOVER, MOVE_COUNTER, MOVE_SOAK, MOVE_TOXIC
    }
};

static const struct TrainerMonItemCustomMoves sParty_Matthew[] = {
    {
    .lvl = -2,
    .species = SPECIES_MANTINE,
    .ability = 1, // Water Absorb
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AIR_SLASH, MOVE_AQUA_RING, MOVE_AGILITY, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_RAICHU,
    .ability = 2, // Lightningrod
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_THUNDER, MOVE_SURF, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Carolina[] = { // Ace, double with Cory
    {
    .lvl = -1,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_AURORA_BEAM, MOVE_HYPER_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_ELECTRIC_SEED,
    .ability = 1, // Unburden
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_ACROBATICS, MOVE_DRAIN_PUNCH, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -1,
    .species = SPECIES_SAWSBUCK,
    .heldItem = ITEM_ELECTRIC_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_WILD_CHARGE, MOVE_JUMP_KICK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jerome[] = {
    {
    .lvl = -2,
    .species = SPECIES_BARBARACLE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_RAZOR_SHELL, MOVE_STRENGTH, MOVE_NIGHT_SLASH, MOVE_CROSS_CHOP
    },
    {
    .lvl = -2,
    .species = SPECIES_BEARTIC,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_THRASH, MOVE_CHARM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cory1[] = {
    {
    .lvl = -2,
    .species = SPECIES_STUNFISK,
    .ability = 2, // Electric Surge
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_CHARGE
    },
    {
    .lvl = -2,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_ELECTRIC_SEED,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WATERFALL, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cory2[] = {
    {
    .lvl = -2,
    .species = SPECIES_STUNFISK,
    .ability = 2, // Electric Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_CHARGE
    },
    {
    .lvl = -2,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_ELECTRIC_SEED,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS
    },
    {
    .lvl = -2,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_HEAVY_SLAM, MOVE_RAIN_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cory3[] = {
    {
    .lvl = -2,
    .species = SPECIES_STUNFISK,
    .ability = 2, // Electric Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_CHARGE
    },
    {
    .lvl = -2,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_ELECTRIC_SEED,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS
    },
    {
    .lvl = -2,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_HEAVY_SLAM, MOVE_RAIN_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_VOLT_SWITCH, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_DISCHARGE
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Cory4[] = {
    {
    .lvl = -2,
    .species = SPECIES_STUNFISK,
    .ability = 2, // Electric Surge
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_THUNDERBOLT, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_CHARGE
    },
    {
    .lvl = -2,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_ELECTRIC_SEED,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_WATERFALL, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_HYPNOSIS
    },
    {
    .lvl = -2,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_YAWN, MOVE_RAIN_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_VOLT_SWITCH, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_DISCHARGE
    }   
};

// Route 109 Surfing

static const struct TrainerMonItemCustomMoves sParty_Austina[] = {
    {
    .lvl = -2,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .ability = 1, // Storm Drain
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_RAIN_DANCE, MOVE_RECOVER
    },
    {
    .lvl = -2,
    .species = SPECIES_BIBAREL,
    .ability = 0, // Simple
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_JET, MOVE_QUICK_ATTACK, MOVE_CRUNCH, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Gwen[] = {
    {
    .lvl = -3,
    .species = SPECIES_FLOATZEL,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_LUVDISC,
    .ability = 1, // Soul-Heart
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRAINING_KISS, MOVE_LOVELY_KISS, MOVE_CHARM
    },
    {
    .lvl = -3,
    .species = SPECIES_QUAGSIRE,
    .ability = 1, // Water Absorb
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_TOXIC, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_David[] = {
    {
    .lvl = -2,
    .species = SPECIES_CRAWDAUNT,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_SWORDS_DANCE, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_PALOSSAND,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_HYPNOSIS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Alice[] = {
    {
    .lvl = -3,
    .species = SPECIES_CORSOLA,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_BRINE, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_CLOYSTER,
    .ability = 1, // Skill Link
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_HYDRO_PUMP, MOVE_SHELL_SMASH
    },
    {
    .lvl = -3,
    .species = SPECIES_KANGASKHAN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SURF, MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_MEGA_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Carter[] = { // Double with Elijah
    {
    .lvl = -2,
    .species = SPECIES_TENTACRUEL,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SLUDGE_WAVE, MOVE_HYDRO_PUMP, MOVE_ACID_ARMOR, MOVE_SCREECH
    },
    {
    .lvl = -2,
    .species = SPECIES_LANTURN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_CHARGE_BEAM, MOVE_SIGNAL_BEAM, MOVE_HYDRO_PUMP, MOVE_CONFUSE_RAY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Elijah[] = { // Double with Carter
    {
    .lvl = -2,
    .species = SPECIES_SKARMORY,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_SWORDS_DANCE, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_HONCHKROW,
    .ability = 1, // Super Luck
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_ROOST, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_MelAndPaul[] = {
    {
    .lvl = -2,
    .species = SPECIES_DUSTOX,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE, MOVE_TOXIC, MOVE_PROTECT
    },
    {
    .lvl = -2,
    .species = SPECIES_BEAUTIFLY,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HURRICANE, MOVE_GIGA_DRAIN, MOVE_ATTRACT, MOVE_QUIVER_DANCE
    }
};

// Abandoned Ship

static const struct TrainerMonItemCustomMoves sParty_Demetrius[] = { // Double with Thalia
    {
    .lvl = -2,
    .species = SPECIES_LUXRAY,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_SCARY_FACE
    },
    {
    .lvl = -2,
    .species = SPECIES_STOUTLAND,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_RETALIATE, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_WORK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Duncan[] = {
    {
    .lvl = -3,
    .species = SPECIES_MACHAMP,
    .ability = 1, // No Guard
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_DYNAMIC_PUNCH, MOVE_STRENGTH, MOVE_DUAL_CHOP, MOVE_KNOCK_OFF
    },
    {
    .lvl = -3,
    .species = SPECIES_WALREIN,
    .ability = 1, // Ice Body
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BLIZZARD, MOVE_SLACK_OFF, MOVE_AQUA_TAIL, MOVE_HAIL
    },
    {
    .lvl = -3,
    .species = SPECIES_DHELMISE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_ANCHOR_SHOT, MOVE_PHANTOM_FORCE, MOVE_POWER_WHIP, MOVE_WHIRLPOOL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Charlie[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUMINEON,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE, MOVE_SOAK
    },
    {
    .lvl = -2,
    .species = SPECIES_OCTILLERY,
    .ability = 1, // Sniper
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_OCTAZOOKA, MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_FOCUS_ENERGY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Garrison[] = { // Double with Jani
    {
    .lvl = -3,
    .species = SPECIES_CARRACOSTA,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_SHELL_SMASH
    },
    {
    .lvl = -3,
    .species = SPECIES_STEELIX,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_FIRE_FANG, MOVE_SCREECH
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLEM_ALOLAN,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_THUNDER_PUNCH, MOVE_CURSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jani[] = { // Double with Garrison
    {
    .lvl = -3,
    .species = SPECIES_DRAGONAIR,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_DRAGON_RUSH, MOVE_THUNDER_WAVE, MOVE_SAFEGUARD
    },
    {
    .lvl = -3,
    .species = SPECIES_SIMIPOUR,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SCALD, MOVE_ACROBATICS, MOVE_CRUNCH, MOVE_PLAY_NICE
    },
    {
    .lvl = -3,
    .species = SPECIES_FURRET,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_COIL, MOVE_SLAM, MOVE_SUCKER_PUNCH, MOVE_AMNESIA
    }
};

static const struct TrainerMonItemCustomMoves sParty_Thalia1[] = { // Double with Demetrius
    {
    .lvl = -2,
    .species = SPECIES_FLORGES,
    .ability = 1, // Misty Surge
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_MOONBLAST, MOVE_PETAL_DANCE, MOVE_LEECH_SEED, MOVE_WISH
    },
    {
    .lvl = -2,
    .species = SPECIES_GARDEVOIR,
    .ability = 1, // Trace
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Thalia2[] = {
    {
    .lvl = -2,
    .species = SPECIES_FLORGES,
    .ability = 1, // Misty Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MOONBLAST, MOVE_PETAL_DANCE, MOVE_LEECH_SEED, MOVE_WISH
    },
    {
    .lvl = -2,
    .species = SPECIES_GARDEVOIR,
    .ability = 1, // Trace
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND
    },
    {
    .lvl = -2,
    .species = SPECIES_LUVDISC,
    .ability = 1, // Soul-Heart
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRAINING_KISS, MOVE_LOVELY_KISS, MOVE_ICE_BEAM
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Thalia3[] = {
    {
    .lvl = -2,
    .species = SPECIES_FLORGES,
    .ability = 1, // Misty Surge
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_EARTH_POWER, MOVE_CALM_MIND
    },
    {
    .lvl = -2,
    .species = SPECIES_GARDEVOIR,
    .ability = 1, // Trace
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND
    },
    {
    .lvl = -2,
    .species = SPECIES_LUVDISC,
    .ability = 1, // Soul-Heart
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRAINING_KISS, MOVE_LOVELY_KISS, MOVE_ICE_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Thalia4[] = {
    {
    .lvl = -2,
    .species = SPECIES_FLORGES,
    .ability = 1, // Misty Surge
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_EARTH_POWER, MOVE_CALM_MIND
    },
    {
    .lvl = -2,
    .species = SPECIES_GARDEVOIR,
    .ability = 1, // Trace
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND
    },
    {
    .lvl = -2,
    .species = SPECIES_LUVDISC,
    .ability = 1, // Soul-Heart
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRAINING_KISS, MOVE_LOVELY_KISS, MOVE_ICE_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_LUVDISC,
    .ability = 1, // Soul-Heart
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRAINING_KISS, MOVE_LOVELY_KISS, MOVE_ICE_BEAM
    }    
};

static const struct TrainerMonItemCustomMoves sParty_KiraAndDan1[] = {
    {
    .lvl = -2,
    .species = SPECIES_VOLBEAT,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_TAIL_GLOW, MOVE_BUG_BUZZ, MOVE_THUNDER_WAVE, MOVE_PROTECT
    },
    {
    .lvl = -2,
    .species = SPECIES_ILLUMISE,
    .ability = 1, // Tinted Lens
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_STRUGGLE_BUG, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_ENCORE
    }
};

static const struct TrainerMonItemCustomMoves sParty_KiraAndDan2[] = {
    {
    .lvl = 0,
    .species = SPECIES_VOLBEAT,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_TAIL_GLOW, MOVE_BUG_BUZZ, MOVE_THUNDER_WAVE, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_ILLUMISE,
    .ability = 1, // Tinted Lens
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_ENCORE
    }
};

static const struct TrainerMonItemCustomMoves sParty_KiraAndDan3[] = {
    {
    .lvl = 0,
    .species = SPECIES_VOLBEAT,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_TAIL_GLOW, MOVE_BUG_BUZZ, MOVE_THUNDER_WAVE, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_ILLUMISE,
    .ability = 1, // Tinted Lens
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_ENCORE
    },
    {
    .lvl = 0,
    .species = SPECIES_FROSLASS,
    .ability = 1, // Cursed Body
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_DRAINING_KISS
    },
    {
    .lvl = 0,
    .species = SPECIES_GLALIE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD, MOVE_PROTECT
    }
};

static const struct TrainerMonItemCustomMoves sParty_KiraAndDan4[] = {
    {
    .lvl = 0,
    .species = SPECIES_VOLBEAT,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_TAIL_GLOW, MOVE_BUG_BUZZ, MOVE_THUNDER_WAVE, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_ILLUMISE,
    .ability = 1, // Tinted Lens
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_ENCORE
    },
    {
    .lvl = 0,
    .species = SPECIES_FROSLASS,
    .ability = 1, // Cursed Body
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT
    },
    {
    .lvl = 0,
    .species = SPECIES_GLALIE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD, MOVE_PROTECT
    }
};

// Route 118 East

static const struct TrainerMonItemCustomMoves sParty_Barny[] = {
    {
    .lvl = -3,
    .species = SPECIES_TENTACRUEL,
    .ability = 1, // Liquid Ooze
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_WRING_OUT, MOVE_BARRIER
    },
    {
    .lvl = -3,
    .species = SPECIES_SHARPEDO,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_BARBARACLE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_RAZOR_SHELL, MOVE_STONE_EDGE, MOVE_CROSS_CHOP, MOVE_NIGHT_SLASH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Chester[] = {
    {
    .lvl = -2,
    .species = SPECIES_TALONFLAME,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_STEEL_WING, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_MANDIBUZZ,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FOUL_PLAY, MOVE_ROOST, MOVE_IRON_DEFENSE, MOVE_WHIRLWIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Perry[] = {
    {
    .lvl = -3,
    .species = SPECIES_TOUCANNON,
    .ability = 1, // Skill Link
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_ROOST
    },
    {
    .lvl = -3,
    .species = SPECIES_UNFEZANT,
    .ability = 1, // Super Luck
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_DRILL_PECK, MOVE_SUBMISSION, MOVE_TAUNT, MOVE_DETECT
    },
    {
    .lvl = -3,
    .species = SPECIES_DECIDUEYE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SPIRIT_SHACKLE, MOVE_LEAF_BLADE, MOVE_JUMP_KICK, MOVE_SUCKER_PUNCH
    }
};
// Also Gabby and Ty

// Route 123: Route 118 access

static const struct TrainerMonItemCustomMoves sParty_Davis[] = {
    {
    .lvl = -2,
    .species = SPECIES_PINSIR,
    .ability = 1, // Mold Breaker
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_X_SCISSOR, MOVE_THRASH, MOVE_SUPERPOWER, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_SCOLIPEDE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_POISON_JAB, MOVE_X_SCISSOR, MOVE_DOUBLE_EDGE, MOVE_PURSUIT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jazmyn[] = {
    {
    .lvl = -1,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = 1, // Super Luck
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_NIGHT_SLASH, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_MEGAHORN
    },
    {
    .lvl = -1,
    .species = SPECIES_GOODRA,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_DRAGON_PULSE, MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT
    },
    {
    .lvl = -1,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_BULLET_PUNCH, MOVE_BUG_BITE, MOVE_CURSE, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_EXPERT_BELT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_AURORA_BEAM, MOVE_SIGNAL_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Violet[] = {
    {
    .lvl = -2,
    .species = SPECIES_ROSERADE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED
    },
    {
    .lvl = -2,
    .species = SPECIES_TROPIUS,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_LEAF_BLADE, MOVE_AIR_SLASH, MOVE_BODY_SLAM, MOVE_SYNTHESIS
    },
};

static const struct TrainerMonItemCustomMoves sParty_MiuAndYuki[] = {
    {
    .lvl = -3,
    .species = SPECIES_NINETALES,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_HYPNOSIS, MOVE_HEX, MOVE_DREAM_EATER
    },
    {
    .lvl = -3,
    .species = SPECIES_NINETALES_ALOLAN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FREEZE_DRY, MOVE_HYPNOSIS, MOVE_HEX, MOVE_DREAM_EATER
    }
};

// Route 119
// Bug Catchers/Maniacs
static const struct TrainerMonItemCustomMoves sParty_Kent[] = {
    {
    .lvl = -2,
    .species = SPECIES_NINJASK,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_LEECH_LIFE, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS
    },
    {
    .lvl = -2,
    .species = SPECIES_SHEDINJA,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_DIG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Donald[] = {
    {
    .lvl = -3,
    .species = SPECIES_LEAVANNY,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_STICKY_WEB, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -3,
    .species = SPECIES_BUTTERFREE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = -3,
    .species = SPECIES_GALVANTULA,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_SUCKER_PUNCH, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Greg[] = {
    {
    .lvl = -3,
    .species = SPECIES_LEDIAN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_DOUBLE_EDGE, MOVE_LEECH_LIFE, MOVE_CLOSE_COMBAT, MOVE_REFLECT
    },
    {
    .lvl = -3,
    .species = SPECIES_BEEDRILL,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_DRILL_PECK, MOVE_ENDEAVOR
    },
    {
    .lvl = -3,
    .species = SPECIES_ESCAVALIER,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_RAZOR_SHELL, MOVE_REVERSAL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Taylor[] = {
    {
    .lvl = -3,
    .species = SPECIES_RIBOMBEE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_POLLEN_PUFF, MOVE_DAZZLING_GLEAM, MOVE_QUIVER_DANCE, MOVE_AROMATHERAPY
    },
    {
    .lvl = -3,
    .species = SPECIES_ARAQUANID,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_LIQUIDATION, MOVE_LUNGE, MOVE_ICE_FANG, MOVE_MIRROR_COAT
    },
    {
    .lvl = -3,
    .species = SPECIES_VIVILLON,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HURRICANE, MOVE_BUG_BUZZ, MOVE_SLEEP_POWDER, MOVE_POWDER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Doug[] = {
    {
    .lvl = -3,
    .species = SPECIES_MASQUERAIN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE, MOVE_HYDRO_PUMP
    },
    {
    .lvl = -3,
    .species = SPECIES_ARIADOS,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_POISON_JAB, MOVE_LEECH_LIFE, MOVE_SUCKER_PUNCH, MOVE_PSYCHIC_FANGS
    },
    {
    .lvl = -3,
    .species = SPECIES_KRICKETUNE,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BOOMBURST, MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_PERISH_SONG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brent[] = {
    {
    .lvl = 0,
    .species = SPECIES_VOLCARONA,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Chris[] = {
    {
    .lvl = -4,
    .species = SPECIES_SHARPEDO,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WATERFALL, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_SCREECH
    },
    {
    .lvl = -4,
    .species = SPECIES_BASCULIN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_HEAD_SMASH, MOVE_THRASH, MOVE_AQUA_TAIL, MOVE_CRUNCH
    },
    {
    .lvl = -4,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_HURRICANE, MOVE_CRUNCH, MOVE_WHIRLPOOL
    },
    {
    .lvl = -4,
    .species = SPECIES_WHISCASH,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_SPARK, MOVE_ZEN_HEADBUTT
    }
};
// Rangers
static const struct TrainerMonItemCustomMoves sParty_Catherine1[] = {
    {
    .lvl = -2,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_MIRACLE_SEED,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_QUIVER_DANCE, MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER
    },
    {
    .lvl = -2,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_PETAYA_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HURRICANE, MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_BOOMBURST
    },
    {
    .lvl = -2,
    .species = SPECIES_BEARTIC,
    .heldItem = ITEM_WATER_GEM,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_THROAT_CHOP, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_SEISMITOAD,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_POWER_WHIP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Catherine2[] = {
    {
    .lvl = -2,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_MIRACLE_SEED,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_QUIVER_DANCE, MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER
    },
    {
    .lvl = -2,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_PETAYA_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HURRICANE, MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_BOOMBURST
    },
    {
    .lvl = -2,
    .species = SPECIES_BEARTIC,
    .heldItem = ITEM_WATER_GEM,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_THROAT_CHOP, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_SEISMITOAD,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_POWER_WHIP
    },
    {
    .lvl = -2,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Rain Dish
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SCALD, MOVE_PROTECT, MOVE_YAWN, MOVE_AQUA_RING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Catherine3[] = {
    {
    .lvl = -2,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_QUIVER_DANCE, MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER
    },
    {
    .lvl = -2,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_PETAYA_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_BOOMBURST
    },
    {
    .lvl = -2,
    .species = SPECIES_BEARTIC,
    .heldItem = ITEM_WATER_GEM,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_THROAT_CHOP, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = -2,
    .species = SPECIES_SEISMITOAD,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_EARTH_POWER, MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_POWER_WHIP
    },
    {
    .lvl = -2,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Rain Dish
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_SCALD, MOVE_PROTECT, MOVE_YAWN, MOVE_AQUA_RING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Catherine4[] = {
    {
    .lvl = 0,
    .species = SPECIES_BELLOSSOM,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_QUIVER_DANCE, MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER
    },
    {
    .lvl = 0,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_PETAYA_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_WATER_PULSE, MOVE_DRAGON_PULSE, MOVE_BOOMBURST
    },
    {
    .lvl = 0,
    .species = SPECIES_BEARTIC,
    .heldItem = ITEM_WATER_GEM,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_THROAT_CHOP, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = 0,
    .species = SPECIES_SEISMITOAD,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_EARTH_POWER, MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_POWER_WHIP
    },
    {
    .lvl = 0,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Rain Dish
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_SCALD, MOVE_PROTECT, MOVE_YAWN, MOVE_AQUA_RING
    },
    {
    .lvl = 0,
    .species = SPECIES_AUDINO,
    .heldItem = ITEM_AUDINITE,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DRAINING_KISS, MOVE_THUNDER, MOVE_CALM_MIND, MOVE_SURF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jackson1[] = {
    {
    .lvl = -2,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_MYSTIC_WATER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_SIGNAL_BEAM, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_ROTOM_FAN,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HURRICANE, MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT
    },
    {
    .lvl = -2,
    .species = SPECIES_PARASECT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_LEECH_LIFE
    },
    {
    .lvl = -2,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Hydration
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_DRILL_RUN, MOVE_CURSE, MOVE_REST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jackson2[] = {
    {
    .lvl = -2,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_MYSTIC_WATER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_SIGNAL_BEAM, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_ROTOM_FAN,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HURRICANE, MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT
    },
    {
    .lvl = -2,
    .species = SPECIES_PARASECT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_LEECH_LIFE
    },
    {
    .lvl = -2,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Hydration
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_DRILL_RUN, MOVE_CURSE, MOVE_REST
    },
    {
    .lvl = -2,
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_BULK_UP, MOVE_PROTECT
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Jackson3[] = {
    {
    .lvl = -1,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_MYSTIC_WATER,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_ROTOM_FAN,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HURRICANE, MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT
    },
    {
    .lvl = -1,
    .species = SPECIES_PARASECT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_LEECH_LIFE
    },
    {
    .lvl = -1,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Hydration
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_LIQUIDATION, MOVE_ICICLE_CRASH, MOVE_CURSE, MOVE_REST
    },
    {
    .lvl = -1,
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_BULK_UP, MOVE_PROTECT
    }   
};

static const struct TrainerMonItemCustomMoves sParty_Jackson4[] = {
    {
    .lvl = -1,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_MYSTIC_WATER,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_ROTOM_FAN,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HURRICANE, MOVE_THUNDER, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT
    },
    {
    .lvl = -1,
    .species = SPECIES_PARASECT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_LEECH_LIFE
    },
    {
    .lvl = -1,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Hydration
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_LIQUIDATION, MOVE_ICICLE_CRASH, MOVE_CURSE, MOVE_REST
    },
    {
    .lvl = -1,
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_BULK_UP, MOVE_PROTECT
    },
    {
    .lvl = -1,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_EARTHQUAKE
    }    
};

// Other
static const struct TrainerMonItemCustomMoves sParty_Rachel[] = { // with Phil
    {
    .lvl = -2,
    .species = SPECIES_LUDICOLO,
    .ability = 1, // Rain Dish
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_HYDRO_PUMP, MOVE_ZEN_HEADBUTT, MOVE_FAKE_OUT
    },
    {
    .lvl = -2,
    .species = SPECIES_HELIOLISK,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_HYPER_VOICE, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Phil[] = {
    {
    .lvl = -2,
    .species = SPECIES_STARAPTOR,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_QUICK_ATTACK, MOVE_AGILITY
    },
    {
    .lvl = -2,
    .species = SPECIES_FARFETCHD,
    .heldItem = ITEM_LEEK,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_LEAF_BLADE, MOVE_POISON_JAB
    }
};

static const struct TrainerMonItemCustomMoves sParty_Takashi[] = { // with Dayton
    {
    .lvl = -2,
    .species = SPECIES_ACCELGOR,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_WATER_SHURIKEN, MOVE_SLUDGE_BOMB
    },
    {
    .lvl = -2,
    .species = SPECIES_WEEZING,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_TOXIC, MOVE_EXPLOSION
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dayton[] = {
    {
    .lvl = -2,
    .species = SPECIES_MAGCARGO,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_STONE_EDGE, MOVE_EARTH_POWER, MOVE_SHELL_SMASH
    },
    {
    .lvl = -2,
    .species = SPECIES_DARMANITAN,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_FLARE_BLITZ, MOVE_SUPERPOWER, MOVE_THRASH, MOVE_ROCK_SLIDE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Hugh[] = {
    {
    .lvl = -3,
    .species = SPECIES_NOCTOWL,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BOOMBURST, MOVE_AIR_SLASH, MOVE_HYPNOSIS, MOVE_ROOST
    },
    {
    .lvl = -3,
    .species = SPECIES_FEAROW,
    .ability = 2, // Sniper
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY, MOVE_NONE
    },
    {
    .lvl = -3,
    .species = SPECIES_TROPIUS,
    .ability = 1, // Aerilate
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BODY_SLAM, MOVE_DRAGON_HAMMER, MOVE_LEAF_BLADE, MOVE_DRAGON_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Fabian[] = {
    {
    .lvl = -2,
    .species = SPECIES_MANECTRIC,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_THUNDER, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_FLAMETHROWER
    },
    {
    .lvl = -3,
    .species = SPECIES_CHATOT,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_BOOMBURST, MOVE_CHATTER, MOVE_NASTY_PLOT, MOVE_FEATHER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Yasu[] = {
    {
    .lvl = -3,
    .species = SPECIES_GRENINJA,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WATER_SHURIKEN, MOVE_DARK_PULSE, MOVE_EXTRASENSORY, MOVE_SMOKESCREEN
    },
    {
    .lvl = -3,
    .species = SPECIES_CROBAT,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_CRUNCH, MOVE_SCREECH
    },
    {
    .lvl = -3,
    .species = SPECIES_DRAPION,
    .ability = 1, // Sniper
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_NIGHT_SLASH, MOVE_CROSS_POISON, MOVE_SCARY_FACE, MOVE_PURSUIT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Hideo[] = {
    {
    .lvl = -2,
    .species = SPECIES_BISHARP,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_NIGHT_SLASH, MOVE_IRON_HEAD, MOVE_LASER_FOCUS, MOVE_TORMENT
    },
    {
    .lvl = -2,
    .species = SPECIES_MUK,
    .spread = SPREAD_31_IV_60_EV,
    .moves = MOVE_GUNK_SHOT, MOVE_SCREECH, MOVE_SHADOW_SNEAK, MOVE_ACID_ARMOR
    }
};

// Weather Institute

static const struct TrainerMonItemCustomMoves sParty_ShellyWeatherInstitute[] = {
    {
    .lvl = 0,
    .species = SPECIES_NINETALES_ALOLAN,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 2, // Snow Warning
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_WATER_PULSE, MOVE_AURORA_VEIL
    },
    {
    .lvl = 0,
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_PETAYA_BERRY,
    .ability = 1, // Slush Rush
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_FLASH_CANNON, MOVE_GRASS_KNOT
    },
    {
    .lvl = 1,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_ICE_GEM,
    .ability = 2, // Adaptability
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_DRAGON_DANCE, MOVE_BLIZZARD
    },
    {
    .lvl = 0,
    .species = SPECIES_CLEFABLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_FLAMETHROWER, MOVE_BLIZZARD, MOVE_CALM_MIND, MOVE_SOFT_BOILED
    },
    {
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = 1, // Swift Swim
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_BLIZZARD
    },
    {
    .lvl = 2,
    .species = SPECIES_BEEDRILL,
    .heldItem = ITEM_BEEDRILLITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_DRILL_PECK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt11[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOLBAT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ACROBATICS, MOVE_LEECH_LIFE, MOVE_CONFUSE_RAY, MOVE_HYPNOSIS
    },
    {
    .lvl = -2,
    .species = SPECIES_DRAGALGE,
    .ability = 2, // Adaptability
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_DRAGON_PULSE, MOVE_HYDRO_PUMP, MOVE_TOXIC
    },
    {
    .lvl = -2,
    .species = SPECIES_LIEPARD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_SWAGGER, MOVE_IRON_TAIL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt12[] = { // with 37
    {
    .lvl = -1,
    .species = SPECIES_PELIPPER,
    .ability = 1, // Drizzle
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_FERROTHORN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POWER_WHIP, MOVE_IRON_HEAD, MOVE_PAYBACK, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt37[] = { // with 11
    {
    .lvl = -1,
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH, MOVE_PROTECT
    },
    {
    .lvl = -1,
    .species = SPECIES_EELEKTROSS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER, MOVE_AQUA_TAIL, MOVE_GIGA_DRAIN, MOVE_IRON_TAIL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt13[] = {
    {
    .lvl = -2,
    .species = SPECIES_MIGHTYENA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG, MOVE_ICE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FIRST_IMPRESSION, MOVE_LIQUIDATION, MOVE_SUCKER_PUNCH, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = -2,
    .species = SPECIES_MUK_ALOLAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_FIRE_BLAST, MOVE_SCREECH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt20[] = {
    {
    .lvl = -2,
    .species = SPECIES_WALREIN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICE_BEAM, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_AQUA_RING
    },
    {
    .lvl = -2,
    .species = SPECIES_FLOATZEL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_FOCUS_BLAST
    },
    {
    .lvl = -2,
    .species = SPECIES_MALAMAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THROAT_CHOP, MOVE_PSYCHO_CUT, MOVE_SUPERPOWER, MOVE_TOPSY_TURVY
    }
};

// Route 120

static const struct TrainerMonItemCustomMoves sParty_Clarissa[] = {
    {
    .lvl = -3,
    .species = SPECIES_TANGROWTH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POWER_WHIP, MOVE_ANCIENT_POWER, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED
    },
    {
    .lvl = -2,
    .species = SPECIES_WAILORD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SPOUT, MOVE_HEAVY_SLAM, MOVE_BOUNCE, MOVE_AQUA_RING
    },
    {
    .lvl = -3,
    .species = SPECIES_PYROAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_NOBLE_ROAR, MOVE_WORK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Robert1[] = {
    {
    .lvl = -2,
    .species = SPECIES_FEAROW,
    .ability = 2, // Sniper
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
    },
    {
    .lvl = -2,
    .species = SPECIES_STARAPTOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_RETURN, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_WORK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Robert2[] = {
    {
    .lvl = -2,
    .species = SPECIES_FEAROW,
    .ability = 2, // Sniper
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
    },
    {
    .lvl = -2,
    .species = SPECIES_STARAPTOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_RETURN, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_WORK_UP
    },
/*     {
    .lvl = -2,
    .species = SPECIES_CORVIKNIGHT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_BODY_PRESS, MOVE_BULK_UP
    }     */
};

static const struct TrainerMonItemCustomMoves sParty_Robert3[] = {
    {
    .lvl = -2,
    .species = SPECIES_FEAROW,
    .ability = 2, // Sniper
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
    },
    {
    .lvl = -2,
    .species = SPECIES_STARAPTOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_RETURN, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_WORK_UP
    },
/*     {
    .lvl = -2,
    .species = SPECIES_CORVIKNIGHT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_BODY_PRESS, MOVE_BULK_UP
    }, */
    {
    .lvl = -2,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_POWER_HERB,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_STEEL_WING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Robert4[] = {
    {
    .lvl = -2,
    .species = SPECIES_FEAROW,
    .ability = 2, // Sniper
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
    },
    {
    .lvl = -2,
    .species = SPECIES_STARAPTOR,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RETURN, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_WORK_UP
    },
/*     {
    .lvl = -2,
    .species = SPECIES_CORVIKNIGHT,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_BRAVE_BIRD, MOVE_STEEL_WING, MOVE_BODY_PRESS, MOVE_BULK_UP
    }, */
    {
    .lvl = -2,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_POWER_HERB,
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .moves = MOVE_BRAVE_BIRD, MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_STEEL_WING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Colin[] = {
    {
    .lvl = -3,
    .species = SPECIES_DODRIO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_RETURN, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -3,
    .species = SPECIES_XATU,
    .ability = 2, // Magic Bounce
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_NIGHT_SHADE
    },
    {
    .lvl = -3,
    .species = SPECIES_ORICORIO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HURRICANE, MOVE_REVELATION_DANCE, MOVE_ROOST, MOVE_AGILITY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Leonel[] = {
    {
    .lvl = -1,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_ELECTRIC_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_MUD_SHOT
    },
    {
    .lvl = -1,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_WIDE_LENS,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_SLEEP_POWDER
    },
    {
    .lvl = -1,
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_MYSTIC_WATER,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Angelica[] = {
    {
    .lvl = -2,
    .species = SPECIES_MEOWSTIC,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_PSYCHIC, MOVE_SHADOW_BALL
    },
    {
    .lvl = -2,
    .species = SPECIES_CASTFORM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER, MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_ICE_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_PETAYA_BERRY,
    .ability = 1, // Lightning Rod
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER, MOVE_HURRICANE, MOVE_AGILITY, MOVE_NUZZLE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Riley[] = {
    {
    .lvl = -2,
    .species = SPECIES_SKUNTANK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_POISON_JAB, MOVE_PLAY_ROUGH, MOVE_EXPLOSION
    },
    {
    .lvl = -2,
    .species = SPECIES_MOTHIM,
    .ability = 2, // Tinted Lens
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE, MOVE_HIDDEN_POWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Callie[] = {
    {
    .lvl = -2,
    .species = SPECIES_MEDICHAM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_RECOVER, MOVE_BULK_UP
    },
    {
    .lvl = -2,
    .species = SPECIES_LOPUNNY,
    .ability = 1, // Scrappy
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_RETURN, MOVE_U_TURN, MOVE_BOUNCE
    },
    {
    .lvl = -2,
    .species = SPECIES_MIENSHAO,
    .ability = 1, // Regenerator
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_STONE_EDGE, MOVE_U_TURN, MOVE_KNOCK_OFF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jennifer[] = {
    {
    .lvl = -1,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_WILL_O_WISP, MOVE_CALM_MIND, MOVE_DARK_PULSE, MOVE_RECOVER
    },
    {
    .lvl = -2,
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_OUTRAGE, MOVE_POISON_JAB, MOVE_DRAGON_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_WHIMSICOTT,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_STUN_SPORE, MOVE_PSYCHIC
    },
    {
    .lvl = -1,
    .species = SPECIES_BOUFFALANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_HEAD_CHARGE, MOVE_MEGAHORN, MOVE_REVENGE, MOVE_HEAD_SMASH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jenna[] = {
    {
    .lvl = -2,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_LUM_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_LOW_KICK, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_SEVIPER,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_COIL
    },
    {
    .lvl = -2,
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_SHUCA_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_ICE_PUNCH, MOVE_MEGAHORN
    },
    {
    .lvl = -2,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Skill Link
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_RAZOR_SHELL, MOVE_SHELL_SMASH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lorenzo[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_DAMP_ROCK,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_RAIN_DANCE, MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST
    },
    {
    .lvl = -2,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, // Toxic Boost
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_QUICK_ATTACK, MOVE_NIGHT_SLASH, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_NIDOQUEEN,
    .heldItem = ITEM_SHUCA_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_ICE_PUNCH, MOVE_SUPERPOWER
    },
    {
    .lvl = -2,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Analytic
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SURF, MOVE_PSYSHOCK, MOVE_POWER_GEM, MOVE_GRASS_KNOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jeffrey1[] = {
    {
    .lvl = -3,
    .species = SPECIES_DURANT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_HONE_CLAWS
    },
    {
    .lvl = -3,
    .species = SPECIES_VESPIQUEN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ATTACK_ORDER, MOVE_DEFEND_ORDER, MOVE_HEAL_ORDER, MOVE_ACROBATICS
    },
    {
    .lvl = -3,
    .species = SPECIES_MASQUERAIN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE, MOVE_STUN_SPORE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jeffrey2[] = {
    {
    .lvl = -3,
    .species = SPECIES_DURANT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_HONE_CLAWS
    },
    {
    .lvl = -3,
    .species = SPECIES_VESPIQUEN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ATTACK_ORDER, MOVE_DEFEND_ORDER, MOVE_HEAL_ORDER, MOVE_ACROBATICS
    },
    {
    .lvl = -3,
    .species = SPECIES_MASQUERAIN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_QUIVER_DANCE, MOVE_STUN_SPORE
    },
/*     {
    .lvl = -3,
    .species = SPECIES_CENTISKORCH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LEECH_LIFE, MOVE_FLARE_BLITZ, MOVE_COIL, MOVE_POWER_WHIP
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Jeffrey3[] = {
    {
    .lvl = -3,
    .species = SPECIES_DURANT,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_HONE_CLAWS
    },
    {
    .lvl = -3,
    .species = SPECIES_VESPIQUEN,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ATTACK_ORDER, MOVE_DEFEND_ORDER, MOVE_HEAL_ORDER, MOVE_ACROBATICS
    },
    {
    .lvl = -3,
    .species = SPECIES_MASQUERAIN,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_STUN_SPORE
    },
/*     {
    .lvl = -3,
    .species = SPECIES_CENTISKORCH,
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_LEECH_LIFE, MOVE_FLARE_BLITZ, MOVE_COIL, MOVE_POWER_WHIP
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Jeffrey4[] = {
    {
    .lvl = -3,
    .species = SPECIES_DURANT,
    .heldItem = ITEM_STEEL_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_HONE_CLAWS
    },
    {
    .lvl = -3,
    .species = SPECIES_VESPIQUEN,
    .heldItem = ITEM_FLYING_GEM,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ATTACK_ORDER, MOVE_DEFEND_ORDER, MOVE_HEAL_ORDER, MOVE_ACROBATICS
    },
    {
    .lvl = -3,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_STUN_SPORE
    },
/*     {
    .lvl = -3,
    .species = SPECIES_CENTISKORCH,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_LEECH_LIFE, MOVE_FLARE_BLITZ, MOVE_COIL, MOVE_POWER_WHIP
    } */
};


static const struct TrainerMonItemCustomMoves sParty_Keigo[] = {
    {
    .lvl = -3,
    .species = SPECIES_GRENINJA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_GUNK_SHOT, MOVE_WATERFALL, MOVE_NIGHT_SLASH, MOVE_ICE_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_WEEZING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_EXPLOSION, MOVE_TOXIC
    },
    {
    .lvl = -3,
    .species = SPECIES_BISHARP,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_IRON_HEAD, MOVE_NIGHT_SLASH, MOVE_THUNDER_WAVE, MOVE_LOW_KICK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Chip[] = {
    {
    .lvl = -3,
    .species = SPECIES_CRUSTLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_X_SCISSOR, MOVE_ROCK_WRECKER, MOVE_NIGHT_SLASH, MOVE_SHELL_SMASH
    },
    {
    .lvl = -3,
    .species = SPECIES_CLAYDOL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXTRASENSORY, MOVE_EARTH_POWER, MOVE_HYPER_BEAM, MOVE_COSMIC_POWER
    },
    {
    .lvl = -3,
    .species = SPECIES_AERODACTYL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG
    }
};

// Fortree Gym

static const struct TrainerMonItemCustomMoves sParty_Jared[] = { // With Ashley
    {
    .lvl = 0,
    .species = SPECIES_SWOOBAT,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 2, // Simple
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_AIR_SLASH, MOVE_PSYSHOCK, MOVE_ENERGY_BALL, MOVE_NASTY_PLOT
    },
    {
    .lvl = 0,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Tinted Lens
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST, MOVE_NASTY_PLOT
    },
    {
    .lvl = 0,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Infiltrator
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DRACO_METEOR, MOVE_HURRICANE, MOVE_FLAMETHROWER, MOVE_WATER_PULSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ashley[] = {// With Jared
    {
    .lvl = 0,
    .species = SPECIES_BRAVIARY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Defiant
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_ASSURANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = 1, // No Guard
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_BEAM, MOVE_HURRICANE, MOVE_FOCUS_BLAST, MOVE_HEAT_WAVE
    },
    {
    .lvl = 0,
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Hydration
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_LIQUIDATION, MOVE_STEEL_WING, MOVE_AQUA_JET
    }
};

static const struct TrainerMonItemCustomMoves sParty_Humberto[] = {
    {
    .lvl = 0,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_FLYING_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ACROBATICS, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_MANDIBUZZ,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Overcoat
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_FOUL_PLAY, MOVE_SWAGGER, MOVE_ROOST, MOVE_SUBSTITUTE
    },
    {
    .lvl = 0,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Unburden
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_MINIOR,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ACROBATICS, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_SHELL_SMASH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flint[] = { // with Edwardo
    {
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_PROTECT, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_YANMEGA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Speed Boost
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_BUG_BUZZ, MOVE_HURRICANE, MOVE_PSYCHIC, MOVE_DETECT
    },
    {
    .lvl = 0,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Water Absorb
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SCALD, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_ROOST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edwardo[] = { // with Flint
    {
    .lvl = 0,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_HONCHKROW,
    .heldItem = ITEM_DARK_GEM,
    .ability = 2, // Moxie
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_BRAVE_BIRD, MOVE_SUCKER_PUNCH, MOVE_ICY_WIND, MOVE_HEAT_WAVE
    },
    {
    .lvl = 0,
    .species = SPECIES_DRIFBLIM,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 2, // Flare Boost
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_HYPNOSIS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Darius[] = {
    {
    .lvl = 0,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Harvest
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SUNNY_DAY, MOVE_AIR_SLASH, MOVE_LEECH_SEED, MOVE_SUBSTITUTE
    },
    {
    .lvl = 0,
    .species = SPECIES_DODRIO,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = 0, // Moxie
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_QUICK_ATTACK
    },
    {
    .lvl = 0,
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_FLYING_GEM,
    .ability = 0, // Static
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ACROBATICS, MOVE_WILD_CHARGE, MOVE_U_TURN, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 0,
    .species = SPECIES_ARCHEOPS,
    .heldItem = ITEM_FLYING_GEM,
    .ability = 0, // Defeatist
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ACROBATICS, MOVE_STONE_EDGE, MOVE_DRAGON_CLAW, MOVE_CRUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winona1[] = {
{
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_POWER_WHIP
    },
    {
    .lvl = 1,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_FLYING_GEM,
    .ability = 1, // Unburden
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_ROCK_SLIDE, MOVE_ENCORE
    },
    {
    .lvl = 1,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_WING_ATTACK, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 1,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Rock Head
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ROCK_SLIDE, MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD
    },
    {
    .lvl = 1,
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 1, // Lightning Rod
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_ELECTROWEB, MOVE_TICKLE, MOVE_HELPING_HAND
    },
    {
    .lvl = 3,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .ability = 2, // Cloud Nine
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_DRAGON_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winona2[] = { // singles
    {
    .lvl = 0,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_STEEL_WING, MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_WHIRLWIND
    },
    {
    .lvl = 0,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 0,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE, MOVE_DRAGON_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 1, // Serene Grace
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_FIRE_BLAST, MOVE_AURA_SPHERE
    },
    {
    .lvl = 0,
    .species = SPECIES_SIGILYPH,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_STORED_POWER, MOVE_COSMIC_POWER, MOVE_ROOST, MOVE_PSYCHO_SHIFT
    },
    {
    .lvl = 2,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .ability = 2, // Cloud Nine
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_DRAGON_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winona3[] = { // Doubles
{
    .lvl = 1,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_POWER_WHIP
    },
    {
    .lvl = 1,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_FLYING_GEM,
    .ability = 1, // Unburden
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_ROCK_SLIDE, MOVE_ENCORE
    },
    {
    .lvl = 1,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_WING_ATTACK, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 1,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Rock Head
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ROCK_SLIDE, MOVE_BRAVE_BIRD, MOVE_EARTHQUAKE, MOVE_WIDE_GUARD
    },
    {
    .lvl = 1,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, // Poison Heal
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .moves = MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_WING_ATTACK, MOVE_KNOCK_OFF
    },
    {
    .lvl = 3,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .ability = 2, // Cloud Nine
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_FIRE_BLAST, MOVE_ROOST, MOVE_ICE_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winona4[] = { // Legendaries
    {
    .lvl = 0,
    .species = SPECIES_LANDORUS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_PSYCHIC, MOVE_STEALTH_ROCK
    },
    {
    .lvl = 0,
    .species = SPECIES_SHAYMIN_SKY,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_PSYCHIC
    },
    {
    .lvl = 0,
    .species = SPECIES_YVELTAL,
    .heldItem = ITEM_SHELL_BELL,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_SUCKER_PUNCH, MOVE_OBLIVION_WING, MOVE_DARK_PULSE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_ZAPDOS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Static
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_HURRICANE, MOVE_DISCHARGE, MOVE_U_TURN, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_CELESTEELA,
    .heldItem = ITEM_BIG_ROOT,
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_LEECH_SEED, MOVE_FLASH_CANNON, MOVE_GIGA_DRAIN, MOVE_PROTECT
    },
    {
    .lvl = 2,
    .species = SPECIES_RAYQUAZA,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAGON_ASCENT, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winona5[] = { // Doubles with legendaries
    {
    .lvl = 0,
    .species = SPECIES_LANDORUS_THERIAN,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_KNOCK_OFF
    },
    {
    .lvl = 0,
    .species = SPECIES_SHAYMIN_SKY,
    .heldItem = ITEM_GRASS_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SEED_FLARE, MOVE_AIR_SLASH, MOVE_EARTH_POWER, MOVE_PSYCHIC
    },
    {
    .lvl = 0,
    .species = SPECIES_YVELTAL,
    .heldItem = ITEM_SHELL_BELL,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_SUCKER_PUNCH, MOVE_OBLIVION_WING, MOVE_DARK_PULSE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_LUGIA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_AEROBLAST, MOVE_PSYCHIC, MOVE_TAILWIND, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_CELESTEELA,
    .heldItem = ITEM_BIG_ROOT,
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_LEECH_SEED, MOVE_FLASH_CANNON, MOVE_GIGA_DRAIN, MOVE_PROTECT
    },
    {
    .lvl = 2,
    .species = SPECIES_RAYQUAZA,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAGON_ASCENT, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED, MOVE_V_CREATE
    }
};

// Route 121

static const struct TrainerMonItemCustomMoves sParty_Cale[] = {
    {
    .lvl = -3,
    .species = SPECIES_WORMADAM_TRASH_CLOAK,
    .ability = 2, // Overcoat
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_FLASH_CANNON, MOVE_PSYCHIC
    },
    {
    .lvl = -3,
    .species = SPECIES_WORMADAM_SANDY_CLOAK,
    .ability = 2, // Overcoat
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_EARTH_POWER, MOVE_PSYCHIC
    },
    {
    .lvl = -3,
    .species = SPECIES_WORMADAM,
    .ability = 2, // Overcoat
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_LEAF_STORM, MOVE_PSYCHIC
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tammy[] = {
    {
    .lvl = -2,
    .species = SPECIES_BANETTE,
    .ability = 1, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SHADOW_CLAW, MOVE_CRUSH_CLAW, MOVE_WILL_O_WISP, MOVE_CURSE
    },
    {
    .lvl = -2,
    .species = SPECIES_MISMAGIUS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_MYSTICAL_FIRE, MOVE_PAIN_SPLIT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jessica1[] = {
    {
    .lvl = -3,
    .species = SPECIES_KROOKODILE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_SCARY_FACE
    },
    {
    .lvl = -3,
    .species = SPECIES_ARBOK,
    .ability = 1, // Shed Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_COIL, MOVE_GUNK_SHOT, MOVE_REST, MOVE_CRUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_KECLEON,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUBSTITUTE, MOVE_RECOVER, MOVE_SUCKER_PUNCH, MOVE_DRAIN_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jessica2[] = {
    {
    .lvl = -3,
    .species = SPECIES_KROOKODILE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_SCARY_FACE
    },
    {
    .lvl = -3,
    .species = SPECIES_ARBOK,
    .ability = 1, // Shed Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_COIL, MOVE_GUNK_SHOT, MOVE_REST, MOVE_CRUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_KECLEON,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUBSTITUTE, MOVE_RECOVER, MOVE_SUCKER_PUNCH, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_HATTERENE,
    .ability = 2, // Magic Bounce
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PLAY_ROUGH, MOVE_POWER_WHIP, MOVE_PSYCHO_CUT, MOVE_MYSTICAL_FIRE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jessica3[] = {
    {
    .lvl = -3,
    .species = SPECIES_KROOKODILE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = -3,
    .species = SPECIES_ARBOK,
    .ability = 1, // Shed Skin
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_COIL, MOVE_GUNK_SHOT, MOVE_REST, MOVE_CRUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_KECLEON,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SUBSTITUTE, MOVE_RECOVER, MOVE_SUCKER_PUNCH, MOVE_DRAIN_PUNCH
    },
/*     {
    .lvl = -3,
    .species = SPECIES_HATTERENE,
    .ability = 2, // Magic Bounce
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_PLAY_ROUGH, MOVE_POWER_WHIP, MOVE_PSYCHO_CUT, MOVE_MYSTICAL_FIRE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Jessica4[] = {
    {
    .lvl = -3,
    .species = SPECIES_KROOKODILE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_OUTRAGE, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = -3,
    .species = SPECIES_ARBOK,
    .ability = 1, // Shed Skin
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_COIL, MOVE_GUNK_SHOT, MOVE_REST, MOVE_CRUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_KECLEON,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SUBSTITUTE, MOVE_RECOVER, MOVE_SUCKER_PUNCH, MOVE_DRAIN_PUNCH
    },
/*     {
    .lvl = -3,
    .species = SPECIES_HATTERENE,
    .ability = 2, // Magic Bounce
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_PLAY_ROUGH, MOVE_POWER_WHIP, MOVE_PSYCHO_CUT, MOVE_MYSTICAL_FIRE
    }, */
    {
    .lvl = -3,
    .species = SPECIES_WEAVILE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_PSYCHO_CUT, MOVE_LOW_KICK
    }
};

static const struct TrainerMonItemCustomMoves sParty_KateAndJoy[] = {
    {
    .lvl = 0,
    .species = SPECIES_SWOOBAT,
    .ability = 2, // Simple
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SKILL_SWAP, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_AIR_SLASH
    },
    {
    .lvl = 0,
    .species = SPECIES_SLAKING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BULK_UP, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_SLACK_OFF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Myles[] = {
    {
    .lvl = -4,
    .species = SPECIES_LUCARIO,
    .ability = 1, // Who cares they both suck
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_CRUNCH, MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -4,
    .species = SPECIES_TOGEKISS,
    .ability = 1, // Serene Grace
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_NASTY_PLOT, MOVE_EXTRASENSORY, MOVE_AIR_SLASH, MOVE_AURA_SPHERE
    },
    {
    .lvl = -4,
    .species = SPECIES_MAGMORTAR,
    .ability = 2, // Vital Spirit
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CROSS_CHOP, MOVE_FLARE_BLITZ, MOVE_IRON_TAIL, MOVE_SCREECH
    },
    {
    .lvl = -4,
    .species = SPECIES_SERPERIOR,
    .ability = 2, // Contrary
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LEAF_STORM, MOVE_DRAGON_PULSE, MOVE_GLARE, MOVE_GRASSY_TERRAIN
    },
    {
    .lvl = -5,
    .species = SPECIES_WHISCASH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_SPARK
    },
    {
    .lvl = -4,
    .species = SPECIES_MILTANK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CURSE, MOVE_HAMMER_ARM, MOVE_DOUBLE_EDGE, MOVE_MILK_DRINK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Pat[] = {
    {
    .lvl = -4,
    .species = SPECIES_SWAMPERT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AVALANCHE, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_YAWN
    },
    {
    .lvl = -4,
    .species = SPECIES_BOUFFALANT,
    .ability = 1, // Sap Sipper
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_COTTON_GUARD, MOVE_AMNESIA, MOVE_IRON_HEAD, MOVE_BODY_SLAM
    },
    {
    .lvl = -4,
    .species = SPECIES_ELECTIVIRE,
    .ability = 2, // Vital Spirit
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH
    },
    {
    .lvl = -4,
    .species = SPECIES_TROPIUS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRAGON_HAMMER, MOVE_LEAF_BLADE, MOVE_SYNTHESIS, MOVE_LEECH_SEED
    },
    {
    .lvl = -4,
    .species = SPECIES_SIMISEAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEAT_WAVE, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_NASTY_PLOT
    },
    {
    .lvl = -4,
    .species = SPECIES_LYCANROC_DUSK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THRASH, MOVE_SUCKER_PUNCH, MOVE_STONE_EDGE, MOVE_FIRE_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Walter1[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUXRAY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_WILD_CHARGE, MOVE_PLAY_ROUGH, MOVE_ROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_LINOONE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SEED_BOMB
    },
    {
    .lvl = -2,
    .species = SPECIES_SLOWKING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_RAIN_DANCE, MOVE_SURF, MOVE_PSYCHIC, MOVE_SLACK_OFF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Walter2[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUXRAY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CRUNCH, MOVE_WILD_CHARGE, MOVE_PLAY_ROUGH, MOVE_ROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_LINOONE,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SEED_BOMB
    },
    {
    .lvl = -2,
    .species = SPECIES_SLOWKING,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_RAIN_DANCE, MOVE_SURF, MOVE_PSYCHIC, MOVE_SLACK_OFF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Walter3[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUXRAY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CRUNCH, MOVE_WILD_CHARGE, MOVE_PLAY_ROUGH, MOVE_ROAR
    },
    {
    .lvl = -2,
    .species = SPECIES_LINOONE,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SEED_BOMB
    },
    {
    .lvl = -2,
    .species = SPECIES_SLOWKING,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_RAIN_DANCE, MOVE_SURF, MOVE_PSYCHIC, MOVE_SLACK_OFF
    },
/*     {
    .lvl = -2,
    .species = SPECIES_INDEEDEE,
    .ability = 2, // Psychic Surge
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Walter4[] = {
    {
    .lvl = -2,
    .species = SPECIES_LUXRAY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CRUNCH, MOVE_VOLT_TACKLE, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_LINOONE,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW, MOVE_SEED_BOMB
    },
    {
    .lvl = -2,
    .species = SPECIES_SLOWKING,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_RAIN_DANCE, MOVE_SURF, MOVE_PSYCHIC, MOVE_SLACK_OFF
    },
/*     {
    .lvl = -2,
    .species = SPECIES_INDEEDEE,
    .ability = 2, // Psychic Surge
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_HYPER_VOICE, MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Vanessa[] = {
    {
    .lvl = -2,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_TOGEDEMARU,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ZING_ZAP, MOVE_IRON_TAIL, MOVE_FELL_STINGER, MOVE_ELECTRIC_TERRAIN
    },
    {
    .lvl = -2,
    .species = SPECIES_GRANBULL,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_ROAR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Marcel[] = { // With Cristin
    {
    .lvl = 0,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_ENERGY_BALL, MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_HEAT_WAVE
    },
    {
    .lvl = 0,
    .species = SPECIES_ZEBSTRIKA,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 2, // Sap Sipper
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WILD_CHARGE, MOVE_FLARE_BLITZ, MOVE_QUICK_ATTACK, MOVE_JUMP_KICK
    },
    {
    .lvl = 0,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RETURN, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_WORK_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cristin1[] = {
    {
    .lvl = 0,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_GRASS_GEM,
    .ability = 2, // Drought
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_WILL_O_WISP
    },
    {
    .lvl = 0,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER
    },
    {
    .lvl = 0,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_YACHE_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cristin2[] = {
    {
    .lvl = 0,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_GRASS_GEM,
    .ability = 2, // Drought
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_WILL_O_WISP
    },
    {
    .lvl = 0,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER
    },
    {
    .lvl = 0,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_YACHE_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_GROWTH
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Cristin3[] = {
    {
    .lvl = 0,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_GRASS_GEM,
    .ability = 2, // Drought
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_WILL_O_WISP
    },
    {
    .lvl = 0,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_FLAMETHROWER
    },
    {
    .lvl = 0,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_YACHE_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_GROWTH
    },
    {
    .lvl = 0,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HEAD_SMASH, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cristin4[] = {
    {
    .lvl = 0,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_GRASS_GEM,
    .ability = 2, // Drought
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_WILL_O_WISP
    },
    {
    .lvl = 0,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST
    },
    {
    .lvl = 0,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_YACHE_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_WEATHER_BALL, MOVE_GROWTH
    },
    {
    .lvl = 0,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HEAD_SMASH, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB
    }
};

// Mt. Pyre Interior

static const struct TrainerMonItemCustomMoves sParty_Mark[] = { // with Leah
    {
    .lvl = -3,
    .species = SPECIES_RHYPERIOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ROCK_WRECKER, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_ICE_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_HAXORUS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_OUTRAGE, MOVE_CLOSE_COMBAT, MOVE_FIRST_IMPRESSION, MOVE_CRUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_LICKILICKY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BODY_SLAM, MOVE_POWER_WHIP, MOVE_FIRE_BLAST, MOVE_THUNDER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Leah[] = {
    {
    .lvl = -3,
    .species = SPECIES_GENGAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEX, MOVE_SLUDGE_BOMB, MOVE_HYPNOSIS, MOVE_ICY_WIND
    },
    {
    .lvl = -3,
    .species = SPECIES_GRUMPIG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_MAGIC_COAT
    },
    {
    .lvl = -3,
    .species = SPECIES_JYNX,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FREEZE_DRY, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_NASTY_PLOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Zander[] = { // with Leah
    {
    .lvl = -3,
    .species = SPECIES_HARIYAMA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_KNOCK_OFF, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT
    },
    {
    .lvl = -3,
    .species = SPECIES_HITMONLEE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_BLAZE_KICK, MOVE_FAKE_OUT
    },
    {
    .lvl = -3,
    .species = SPECIES_EMBOAR,
    .ability = 2, // Reckless
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HAMMER_ARM, MOVE_HEAT_CRASH, MOVE_WILD_CHARGE, MOVE_HEAD_SMASH
    }
};

static const struct TrainerMonItemCustomMoves sParty_DezAndLuke[] = {
    {
    .lvl = -1,
    .species = SPECIES_CLOYSTER,
    .ability = 1, // Skill Link
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_LIQUIDATION, MOVE_PROTECT
    },
    {
    .lvl = -1,
    .species = SPECIES_STEELIX,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEAVY_SLAM, MOVE_DIG, MOVE_ROCK_SLIDE, MOVE_SCREECH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kayla[] = { // with Gabrielle
    {
    .lvl = -3,
    .species = SPECIES_WOBBUFFET,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND
    },
    {
    .lvl = -3,
    .species = SPECIES_ALAKAZAM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_HYPNO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Gabrielle1[] = {
    {
    .lvl = -4,
    .species = SPECIES_AVALUGG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AVALANCHE, MOVE_HIGH_HORSEPOWER, MOVE_RECOVER, MOVE_MIRROR_COAT
    },
    {
    .lvl = -4,
    .species = SPECIES_MEGANIUM,
    .ability = 2, // Triage
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_GRASSY_TERRAIN, MOVE_ANCIENT_POWER
    },
    {
    .lvl = -4,
    .species = SPECIES_RAICHU_ALOLAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ELECTRIC_TERRAIN, MOVE_FAKE_OUT
    },
    {
    .lvl = -4,
    .species = SPECIES_DONPHAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_PLAY_ROUGH, MOVE_HEAD_SMASH
    },
    {
    .lvl = -4,
    .species = SPECIES_GOREBYSS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MUDDY_WATER, MOVE_DRAINING_KISS, MOVE_ICE_BEAM, MOVE_SHELL_SMASH
    },
    {
    .lvl = -4,
    .species = SPECIES_KOMMO_O,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Gabrielle2[] = {
    {
    .lvl = -4,
    .species = SPECIES_AVALUGG,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_AVALANCHE, MOVE_HIGH_HORSEPOWER, MOVE_RECOVER, MOVE_MIRROR_COAT
    },
    {
    .lvl = -4,
    .species = SPECIES_MEGANIUM,
    .ability = 2, // Triage
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_GRASSY_TERRAIN, MOVE_ANCIENT_POWER
    },
    {
    .lvl = -4,
    .species = SPECIES_RAICHU_ALOLAN,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ELECTRIC_TERRAIN, MOVE_FAKE_OUT
    },
    {
    .lvl = -4,
    .species = SPECIES_DONPHAN,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_PLAY_ROUGH, MOVE_HEAD_SMASH
    },
    {
    .lvl = -4,
    .species = SPECIES_GOREBYSS,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_DRAINING_KISS, MOVE_ICE_BEAM, MOVE_SHELL_SMASH
    },
    {
    .lvl = -4,
    .species = SPECIES_KOMMO_O,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Gabrielle3[] = {
    {
    .lvl = -3,
    .species = SPECIES_AVALUGG,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_AVALANCHE, MOVE_HIGH_HORSEPOWER, MOVE_RECOVER, MOVE_MIRROR_COAT
    },
    {
    .lvl = -3,
    .species = SPECIES_MEGANIUM,
    .ability = 2, // Triage
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_GRASSY_TERRAIN, MOVE_ANCIENT_POWER
    },
    {
    .lvl = -3,
    .species = SPECIES_RAICHU_ALOLAN,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ELECTRIC_TERRAIN, MOVE_FAKE_OUT
    },
    {
    .lvl = -3,
    .species = SPECIES_DONPHAN,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_PLAY_ROUGH, MOVE_HEAD_SMASH
    },
    {
    .lvl = -3,
    .species = SPECIES_GOREBYSS,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_DRAINING_KISS, MOVE_ICE_BEAM, MOVE_SHELL_SMASH
    },
    {
    .lvl = -3,
    .species = SPECIES_KOMMO_O,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Gabrielle4[] = {
    {
    .lvl = -1,
    .species = SPECIES_AVALUGG,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_AVALANCHE, MOVE_HIGH_HORSEPOWER, MOVE_RECOVER, MOVE_MIRROR_COAT
    },
    {
    .lvl = -1,
    .species = SPECIES_MEGANIUM,
    .ability = 2, // Triage
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_GRASSY_TERRAIN, MOVE_ANCIENT_POWER
    },
    {
    .lvl = -1,
    .species = SPECIES_RAICHU_ALOLAN,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ELECTRIC_TERRAIN, MOVE_FAKE_OUT
    },
    {
    .lvl = -1,
    .species = SPECIES_DONPHAN,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_PLAY_ROUGH, MOVE_HEAD_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_GOREBYSS,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_DRAINING_KISS, MOVE_ICE_BEAM, MOVE_SHELL_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_KOMMO_O,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_FLAMETHROWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_William[] = { // with Gabrielle
    {
    .lvl = -3,
    .species = SPECIES_BEHEEYEM,
    .ability = 2, // Psychic Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_TRICK_ROOM, MOVE_NASTY_PLOT
    },
    {
    .lvl = -3,
    .species = SPECIES_GARDEVOIR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND
    },
    {
    .lvl = -3,
    .species = SPECIES_GALLADE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_PSYCHO_CUT, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tasha[] = {
    {
    .lvl = -3,
    .species = SPECIES_CHANDELURE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_PSYCHIC
    },
    {
    .lvl = -3,
    .species = SPECIES_BANETTE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PHANTOM_FORCE, MOVE_CRUSH_CLAW, MOVE_WILL_O_WISP, MOVE_THUNDERBOLT
    },
    {
    .lvl = -3,
    .species = SPECIES_TREVENANT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HORN_LEECH, MOVE_SHADOW_CLAW, MOVE_WILL_O_WISP, MOVE_LEECH_SEED
    }
};

static const struct TrainerMonItemCustomMoves sParty_Atsushi[] = {
    {
    .lvl = -3,
    .species = SPECIES_SAMUROTT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SACRED_SWORD, MOVE_X_SCISSOR, MOVE_AQUA_TAIL, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_MACHAMP,
    .ability = 1, // No Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DYNAMIC_PUNCH, MOVE_DUAL_CHOP, MOVE_KNOCK_OFF, MOVE_STONE_EDGE
    },
    {
    .lvl = -3,
    .species = SPECIES_AGGRON,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEAD_SMASH, MOVE_ICE_PUNCH, MOVE_IRON_HEAD, MOVE_METAL_BURST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Valerie1[] = {
    {
    .lvl = -3,
    .species = SPECIES_SABLEYE,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_RECOVER, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY
    },
    {
    .lvl = -3,
    .species = SPECIES_DUSKNOIR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PHANTOM_FORCE, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_SPIRITOMB,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_DARK_PULSE, MOVE_CALM_MIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Valerie2[] = {
    {
    .lvl = -3,
    .species = SPECIES_SABLEYE,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_RECOVER, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY
    },
    {
    .lvl = -3,
    .species = SPECIES_DUSKNOIR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PHANTOM_FORCE, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_SPIRITOMB,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_DARK_PULSE, MOVE_CALM_MIND
    },
    {
    .lvl = -3,
    .species = SPECIES_GRUMPIG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_TOXIC, MOVE_BOUNCE, MOVE_PROTECT, MOVE_EXTRASENSORY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Valerie3[] = {
    {
    .lvl = -3,
    .species = SPECIES_SABLEYE,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_RECOVER, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY
    },
    {
    .lvl = -3,
    .species = SPECIES_DUSKNOIR,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_80_EV, 
    .moves = MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_SPIRITOMB,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_DARK_PULSE, MOVE_CALM_MIND
    },
    {
    .lvl = -3,
    .species = SPECIES_GRUMPIG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_TOXIC, MOVE_BOUNCE, MOVE_PROTECT, MOVE_EXTRASENSORY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Valerie4[] = {
    {
    .lvl = -3,
    .species = SPECIES_SABLEYE,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_FAKE_OUT, MOVE_RECOVER, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY
    },
    {
    .lvl = -3,
    .species = SPECIES_DUSKNOIR,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT, 
    .moves = MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_SPIRITOMB,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_DARK_PULSE, MOVE_CALM_MIND
    },
    {
    .lvl = -3,
    .species = SPECIES_GRUMPIG,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_TOXIC, MOVE_BOUNCE, MOVE_PROTECT, MOVE_EXTRASENSORY
    },
/*     {
    .lvl = -3,
    .species = SPECIES_POLTEAGEIST,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_STORED_POWER, MOVE_SHELL_SMASH
    }    */ 
};

static const struct TrainerMonItemCustomMoves sParty_Cedric[] = { // with Valerie
    {
    .lvl = -3,
    .species = SPECIES_BRONZONG,
    .ability = 1, // Heatproof
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLASH_CANNON, MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_CALM_MIND
    },
    {
    .lvl = -3,
    .species = SPECIES_REUNICLUS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_THUNDER, MOVE_RECOVER, MOVE_ACID_ARMOR
    },
    {
    .lvl = -3,
    .species = SPECIES_MEOWSTIC_FEMALE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_DARK_PULSE, MOVE_ENERGY_BALL, MOVE_SIGNAL_BEAM
    }
};
// Mt. Pyre Summit

static const struct TrainerMonItemCustomMoves sParty_Grunt17[] = {
    {
    .lvl = -2,
    .species = SPECIES_MUK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FIRE_BLAST, MOVE_ACID_SPRAY, MOVE_GIGA_DRAIN, MOVE_TOXIC
    },
    {
    .lvl = -2,
    .species = SPECIES_RATICATE_ALOLAN,
    .ability = 1, // Hustle
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_QUICK_ATTACK, MOVE_ZEN_HEADBUTT
    },
    {
    .lvl = -2,
    .species = SPECIES_TENTACRUEL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SCALD, MOVE_SLUDGE_BOMB, MOVE_MIRROR_COAT, MOVE_HEX
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt18[] = {
    {
    .lvl = -2,
    .species = SPECIES_BRUXISH,
    .ability = 1, // Strong Jaw
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_WEAVILE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_NIGHT_SLASH, MOVE_ICICLE_CRASH, MOVE_PSYCHO_CUT, MOVE_ICE_SHARD
    },
    {
    .lvl = -2,
    .species = SPECIES_WAILORD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SCALD, MOVE_ICE_BEAM, MOVE_BODY_SLAM, MOVE_NOBLE_ROAR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt19[] = {
    {
    .lvl = -2,
    .species = SPECIES_JELLICENT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_RAIN_DANCE, MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_PSYCHIC
    },
    {
    .lvl = -2,
    .species = SPECIES_AMOONGUSS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS
    },
    {
    .lvl = -2,
    .species = SPECIES_LANTURN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SCALD, MOVE_THUNDER, MOVE_CONFUSE_RAY, MOVE_SPOTLIGHT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt29[] = {
    {
    .lvl = -2,
    .species = SPECIES_CARRACOSTA,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_SHELL_SMASH, MOVE_ZEN_HEADBUTT
    },
    {
    .lvl = -2,
    .species = SPECIES_LIEPARD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_U_TURN, MOVE_ENCORE
    },
    {
    .lvl = -2,
    .species = SPECIES_QWILFISH,
    .ability = 2, // Intimidate
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_PAYBACK, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_MattMtPyre[] = {
{
    .lvl = 0,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, // Drizzle
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_HURRICANE, MOVE_SCALD, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_DHELMISE,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_POWER_WHIP, MOVE_PHANTOM_FORCE, MOVE_LIQUIDATION, MOVE_ANCHOR_SHOT
    },
    {
    .lvl = 0,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Dry Skin
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_WEATHER_BALL, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT
    },
    {
    .lvl = 0,
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_BULK_UP, MOVE_SUCKER_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_SEISMITOAD,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_ICE_PUNCH
    },
    {
    .lvl = 2,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_GYARADOSITE,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WATERFALL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE
    }
};

// Route 123

static const struct TrainerMonItemCustomMoves sParty_Kindra[] = { // with Ed
    {
    .lvl = -2,
    .species = SPECIES_COFAGRIGUS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEX, MOVE_FLASH_CANNON, MOVE_WILL_O_WISP, MOVE_TOXIC_SPIKES
    },
    {
    .lvl = -2,
    .species = SPECIES_MAROWAK_ALOLAN,
    .ability = 2, // Rock Head
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_BONEMERANG, MOVE_RETALIATE
    },
    {
    .lvl = -2,
    .species = SPECIES_ROTOM_FROST,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FREEZE_DRY, MOVE_THUNDERBOLT, MOVE_HEX, MOVE_NASTY_PLOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ed[] = { // with Kindra
    {
    .lvl = -2,
    .species = SPECIES_SEVIPER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_VENOSHOCK, MOVE_FLAMETHROWER, MOVE_GIGA_DRAIN, MOVE_TOXIC
    },
    {
    .lvl = -2,
    .species = SPECIES_ZANGOOSE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_X_SCISSOR, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -2,
    .species = SPECIES_GLACEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FREEZE_DRY, MOVE_SHADOW_BALL, MOVE_YAWN, MOVE_ICE_SHARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wendy[] = {
    {
    .lvl = -1,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_MAWILITE,
    .ability = 1, // Intimidate
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG, MOVE_SUCKER_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_BIG_ROOT,
    .ability = 2, // Technician
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_MEGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_SLUDGE_BOMB, MOVE_QUIVER_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_WIDE_LENS,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_AIR_SLASH, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_EXPERT_BELT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER, MOVE_FIRE_BLAST
    },
    {
    .lvl = -1,
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_BLAZE_KICK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Braxton[] = {
    {
    .lvl = -1,
    .species = SPECIES_BRAVIARY,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Defiant
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_FIRE_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAGON_RUSH, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_FIRE_FANG
    },
    {
    .lvl = -1,
    .species = SPECIES_SCOLIPEDE,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PROTECT, MOVE_IRON_DEFENSE, MOVE_POISON_JAB, MOVE_BATON_PASS
    },
    {
    .lvl = -1,
    .species = SPECIES_MAGNEZONE,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 2, // Analytic
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_BLASTOISINITE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_ICE_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Fernando1[] = { // with Alberto
    {
    .lvl = -2,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WILD_CHARGE, MOVE_PURSUIT, MOVE_OVERHEAT, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -2,
    .species = SPECIES_CHATOT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPER_VOICE, MOVE_CHATTER, MOVE_NASTY_PLOT, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_KRICKETUNE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPER_VOICE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_SING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Fernando2[] = {
    {
    .lvl = -2,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WILD_CHARGE, MOVE_PURSUIT, MOVE_OVERHEAT, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -2,
    .species = SPECIES_CHATOT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BOOMBURST, MOVE_CHATTER, MOVE_NASTY_PLOT, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_KRICKETUNE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BOOMBURST, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_SING
    },
/*     {
    .lvl = -2,
    .species = SPECIES_RILLABOOOM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRUM_BEATING, MOVE_HIGH_HORSEPOWER, MOVE_U_TURN, MOVE_BOOMBURST
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Fernando3[] = {
    {
    .lvl = -2,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WILD_CHARGE, MOVE_JUMP_KICK, MOVE_OVERHEAT, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -2,
    .species = SPECIES_CHATOT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BOOMBURST, MOVE_CHATTER, MOVE_NASTY_PLOT, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_KRICKETUNE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BOOMBURST, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_SING
    },
/*     {
    .lvl = -2,
    .species = SPECIES_RILLABOOOM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRUM_BEATING, MOVE_HIGH_HORSEPOWER, MOVE_U_TURN, MOVE_BOOMBURST
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Fernando4[] = {
    {
    .lvl = -2,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_VOLT_TACKLE, MOVE_JUMP_KICK, MOVE_FLARE_BLITZ, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -2,
    .species = SPECIES_CHATOT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BOOMBURST, MOVE_HURRICANE, MOVE_NASTY_PLOT, MOVE_HEAT_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_KRICKETUNE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BOOMBURST, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_SING
    },
/*     {
    .lvl = -2,
    .species = SPECIES_RILLABOOOM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRUM_BEATING, MOVE_HIGH_HORSEPOWER, MOVE_U_TURN, MOVE_BOOMBURST
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Alberto[] = { // with Fernando
    {
    .lvl = -2,
    .species = SPECIES_PELIPPER,
    .ability = 2, // Rain Dish
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_RAIN_DANCE, MOVE_HURRICANE, MOVE_BRINE, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_ALTARIA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_DRAGON_CLAW, MOVE_ICE_BEAM, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_XATU,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jacki1[] = { // with Fredrick
    {
    .lvl = -2,
    .species = SPECIES_MUSHARNA,
    .ability = 2, // Psychic Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DREAM_EATER, MOVE_YAWN, MOVE_MOONBLAST, MOVE_MOONLIGHT
    },
    {
    .lvl = -2,
    .species = SPECIES_GIRAFARIG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_ESPEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT, MOVE_DAZZLING_GLEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jacki2[] = {
    {
    .lvl = -2,
    .species = SPECIES_MUSHARNA,
    .ability = 2, // Psychic Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DREAM_EATER, MOVE_YAWN, MOVE_MOONBLAST, MOVE_MOONLIGHT
    },
    {
    .lvl = -2,
    .species = SPECIES_GIRAFARIG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_ESPEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT, MOVE_DAZZLING_GLEAM
    },
/*     {
    .lvl = -2,
    .species = SPECIES_ORBEETLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_CALM_MIND, MOVE_RECOVER
    }   */
};

static const struct TrainerMonItemCustomMoves sParty_Jacki3[] = {
    {
    .lvl = -2,
    .species = SPECIES_MUSHARNA,
    .ability = 2, // Psychic Surge
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DREAM_EATER, MOVE_YAWN, MOVE_MOONBLAST, MOVE_MOONLIGHT
    },
    {
    .lvl = -2,
    .species = SPECIES_GIRAFARIG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_ESPEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT, MOVE_DAZZLING_GLEAM
    },
/*     {
    .lvl = -2,
    .species = SPECIES_ORBEETLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_CALM_MIND, MOVE_RECOVER
    }   */
};

static const struct TrainerMonItemCustomMoves sParty_Jacki4[] = {
    {
    .lvl = -2,
    .species = SPECIES_MUSHARNA,
    .ability = 2, // Psychic Surge
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DREAM_EATER, MOVE_YAWN, MOVE_MOONBLAST, MOVE_CALM_MIND
    },
    {
    .lvl = -2,
    .species = SPECIES_GIRAFARIG,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_ESPEON,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT, MOVE_DAZZLING_GLEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_MEOWSTIC_FEMALE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM
    },
/*     {
    .lvl = -2,
    .species = SPECIES_ORBEETLE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_CALM_MIND, MOVE_RECOVER
    }   */
};

static const struct TrainerMonItemCustomMoves sParty_Fredrick[] = { // With Jacki
    {
    .lvl = -1,
    .species = SPECIES_AEGISLASH,
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_IRON_HEAD, MOVE_SHADOW_BALL, MOVE_HEAD_SMASH, MOVE_KINGS_SHIELD
    },
    {
    .lvl = -1,
    .species = SPECIES_COMFEY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // No Triage due to psychic terrain from ally
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_CALM_MIND, MOVE_CHARM
    },
    {
    .lvl = -1,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_WATER_GEM,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_ICE_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cameron1[] = {
    {
    .lvl = -2,
    .species = SPECIES_SOLROCK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STONE_EDGE, MOVE_SUNNY_DAY, MOVE_ZEN_HEADBUTT, MOVE_EXPLOSION
    },
    {
    .lvl = -2,
    .species = SPECIES_EXEGGUTOR_ALOLAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SOLAR_BEAM, MOVE_DRAGON_HAMMER, MOVE_FLAMETHROWER, MOVE_PSYCHIC
    },
    {
    .lvl = -2,
    .species = SPECIES_DELPHOX,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_WILL_O_WISP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cameron2[] = {
    {
    .lvl = -2,
    .species = SPECIES_SOLROCK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STONE_EDGE, MOVE_SUNNY_DAY, MOVE_ZEN_HEADBUTT, MOVE_EXPLOSION
    },
    {
    .lvl = -2,
    .species = SPECIES_EXEGGUTOR_ALOLAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SOLAR_BEAM, MOVE_DRAGON_HAMMER, MOVE_FLAMETHROWER, MOVE_PSYCHIC
    },
    {
    .lvl = -2,
    .species = SPECIES_DELPHOX,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_WILL_O_WISP
    },
    {
    .lvl = -2,
    .species = SPECIES_LUNATONE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_MOONLIGHT
    }    
};

static const struct TrainerMonItemCustomMoves sParty_Cameron3[] = {
    {
    .lvl = -2,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_HEAT_ROCK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STONE_EDGE, MOVE_SUNNY_DAY, MOVE_ZEN_HEADBUTT, MOVE_EXPLOSION
    },
    {
    .lvl = -2,
    .species = SPECIES_EXEGGUTOR_ALOLAN,
    .heldItem = ITEM_GRASS_GEM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SOLAR_BEAM, MOVE_DRAGON_HAMMER, MOVE_FLAMETHROWER, MOVE_PSYCHIC
    },
    {
    .lvl = -2,
    .species = SPECIES_DELPHOX,
    .heldItem = ITEM_KASIB_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_MYSTICAL_FIRE, MOVE_WILL_O_WISP
    },
    {
    .lvl = -2,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_MOONLIGHT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cameron4[] = {
    {
    .lvl = -1,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_HEAT_ROCK,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_STONE_EDGE, MOVE_SUNNY_DAY, MOVE_ZEN_HEADBUTT, MOVE_EXPLOSION
    },
    {
    .lvl = -1,
    .species = SPECIES_EXEGGUTOR_ALOLAN,
    .heldItem = ITEM_GRASS_GEM,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SOLAR_BEAM, MOVE_DRACO_METEOR, MOVE_FLAMETHROWER, MOVE_PSYCHIC
    },
    {
    .lvl = -1,
    .species = SPECIES_DELPHOX,
    .heldItem = ITEM_KASIB_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT
    },
    {
    .lvl = -1,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_MOONLIGHT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jonas[] = { // with Kayley
    {
    .lvl = -1,
    .species = SPECIES_WEEZING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEAT_WAVE, MOVE_TOXIC, MOVE_VENOM_DRENCH, MOVE_THUNDERBOLT
    },
    {
    .lvl = -1,
    .species = SPECIES_SALAZZLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kayley[] = {
    {
    .lvl = -1,
    .species = SPECIES_CASTFORM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_ICE_BEAM, MOVE_SOLAR_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_SAWSBUCK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_JUMP_KICK, MOVE_MEGAHORN
    }
};

// Magma Hideout

static const struct TrainerMonItemCustomMoves sParty_Grunt38[] = {
    {
    .lvl = -1,
    .species = SPECIES_SWALOT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_TOXIC
    },
    {
    .lvl = -1,
    .species = SPECIES_CAMERUPT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_LAVA_PLUME, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD
    },
    {
    .lvl = -1,
    .species = SPECIES_PERSIAN_ALOLAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DARK_PULSE, MOVE_THUNDERBOLT, MOVE_POWER_GEM, MOVE_NASTY_PLOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt39[] = {
    {
    .lvl = -1,
    .species = SPECIES_HIPPOWDON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_ICE_FANG, MOVE_SLACK_OFF, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -1,
    .species = SPECIES_SANDSLASH,
    .ability = 2, // Sand Rush
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_GASTRODON,
    .ability = 2, // Sand Force
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_SCALD, MOVE_SLUDGE_WAVE, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt40[] = {
    {
    .lvl = -1,
    .species = SPECIES_CLAYDOL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_EXPLOSION
    },
    {
    .lvl = -1,
    .species = SPECIES_GARBODOR,
    .ability = 1, // Weak Armor
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_GUNK_SHOT, MOVE_METEOR_MASH, MOVE_SEED_BOMB, MOVE_EXPLOSION
    },
    {
    .lvl = -1,
    .species = SPECIES_UMBREON,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PAYBACK, MOVE_CURSE, MOVE_MOONLIGHT, MOVE_TOXIC
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt41[] = {
    {
    .lvl = -1,
    .species = SPECIES_SCRAFTY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_HEAD_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_NIDOKING,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_MEGAHORN, MOVE_SHADOW_BALL
    },
    {
    .lvl = -1,
    .species = SPECIES_MAGCARGO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FIRE_BLAST, MOVE_STONE_EDGE, MOVE_EARTH_POWER, MOVE_SHELL_SMASH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt42[] = {
    {
    .lvl = -1,
    .species = SPECIES_TALONFLAME,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_ROOST, MOVE_STEEL_WING
    },
    {
    .lvl = -1,
    .species = SPECIES_BISHARP,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_IRON_HEAD, MOVE_KNOCK_OFF, MOVE_SUCKER_PUNCH, MOVE_PSYCHO_CUT
    },
    {
    .lvl = -1,
    .species = SPECIES_VENOMOTH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt43[] = {
    {
    .lvl = -1,
    .species = SPECIES_ARIADOS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STICKY_WEB, MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_TOXIC_THREAD
    },
    {
    .lvl = -1,
    .species = SPECIES_TURTONATOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_FOCUS_BLAST
    },
    {
    .lvl = -1,
    .species = SPECIES_GOLURK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_SHADOW_PUNCH, MOVE_HEAVY_SLAM, MOVE_CLOSE_COMBAT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt44[] = {
    {
    .lvl = -1,
    .species = SPECIES_GOLEM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_STONE_EDGE, MOVE_EXPLOSION
    },
    {
    .lvl = -1,
    .species = SPECIES_SKUNTANK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_PLAY_ROUGH
    },
    {
    .lvl = -1,
    .species = SPECIES_WEEZING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_PROTECT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt45[] = {
    {
    .lvl = -1,
    .species = SPECIES_MIGHTYENA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL, MOVE_HOWL
    },
    {
    .lvl = -1,
    .species = SPECIES_FLYGON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW
    },
    {
    .lvl = -1,
    .species = SPECIES_DRAPION,
    .ability = 1, // Sniper
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_EARTHQUAKE, MOVE_FOCUS_ENERGY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt46[] = {
    {
    .lvl = -1,
    .species = SPECIES_CAMERUPT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_DOUBLE_EDGE, MOVE_GROWTH
    },
    {
    .lvl = -1,
    .species = SPECIES_CROBAT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLY, MOVE_TOXIC, MOVE_ROOST, MOVE_PROTECT
    },
    {
    .lvl = -1,
    .species = SPECIES_SHIFTRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUNNY_DAY, MOVE_SOLAR_BLADE, MOVE_HEAT_WAVE, MOVE_DARK_PULSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt47[] = {
    {
    .lvl = -1,
    .species = SPECIES_CACTURNE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_NEEDLE_ARM, MOVE_SUCKER_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FOCUS_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_PYROAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPER_BEAM, MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_WILD_CHARGE
    },
    {
    .lvl = -1,
    .species = SPECIES_PALOSSAND,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_SHORE_UP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt48[] = {
    {
    .lvl = -1,
    .species = SPECIES_MAMOSWINE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_STONE_EDGE
    },
    {
    .lvl = -1,
    .species = SPECIES_MANDIBUZZ,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FOUL_PLAY, MOVE_SWAGGER, MOVE_ROOST, MOVE_PROTECT
    },
    {
    .lvl = -1,
    .species = SPECIES_SCOLIPEDE,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_ROCK_CLIMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt49[] = {
    {
    .lvl = -1,
    .species = SPECIES_SABLEYE,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WILL_O_WISP, MOVE_KNOCK_OFF, MOVE_TAUNT, MOVE_METAL_BURST
    },
    {
    .lvl = -1,
    .species = SPECIES_TORKOAL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_LAVA_PLUME, MOVE_SHELL_SMASH, MOVE_CLEAR_SMOG
    },
    {
    .lvl = -1,
    .species = SPECIES_EXCADRILL,
    .ability = 2, // Mold Breaker
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_ROCK_CLIMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt50[] = {
    {
    .lvl = -1,
    .species = SPECIES_RHYPERIOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_ROCK_WRECKER, MOVE_MEGAHORN, MOVE_METAL_BURST
    },
    {
    .lvl = -1,
    .species = SPECIES_AMOONGUSS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPORE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_FOUL_PLAY
    },
    {
    .lvl = -1,
    .species = SPECIES_PANGORO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_GUNK_SHOT, MOVE_ZEN_HEADBUTT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt51[] = {
    {
    .lvl = -1,
    .species = SPECIES_LIEPARD,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_KNOCK_OFF, MOVE_THUNDER_WAVE, MOVE_U_TURN, MOVE_CHARM
    },
    {
    .lvl = -1,
    .species = SPECIES_SALAZZLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_DRAGON_PULSE, MOVE_NASTY_PLOT
    },
    {
    .lvl = -1,
    .species = SPECIES_NIDOQUEEN,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_FLAMETHROWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt52[] = {
    {
    .lvl = -1,
    .species = SPECIES_KROOKODILE,
    .ability = 1, // Moxie
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_OUTRAGE
    },
    {
    .lvl = -1,
    .species = SPECIES_VICTREEBEL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LEAF_BLADE, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_CRUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_INCINEROAR,
    .ability = 2, // Intimidate
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DARKEST_LARIAT, MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt53[] = {
    {
    .lvl = -1,
    .species = SPECIES_GLISCOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_ACROBATICS, MOVE_CROSS_POISON
    },
    {
    .lvl = -1,
    .species = SPECIES_DUSTOX,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_INFESTATION, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_MAGMORTAR,
    .ability = 1, // Mega Launcher
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FIRE_BLAST, MOVE_AURA_SPHERE, MOVE_DARK_PULSE, MOVE_PSYCHIC
    }
};

static const struct TrainerMonItemCustomMoves sParty_TabithaMagmaHideout[] = {
    {
    .lvl = 1,
    .species = SPECIES_GIGALITH,
    .ability = 2, // Solar Power
    .heldItem = ITEM_ROCKY_HELMET,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_WEATHER_BALL, MOVE_THUNDERBOLT
    },
    {
    .lvl = 1,
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Sheer Force
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD
    },
    {
    .lvl = 2,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_STEELIXITE,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_GYRO_BALL, MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_FIRE_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_CourtneyMagmaHideout[] = {
    {
    .lvl = 1, 
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 2, // Drought
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HEAT_WAVE, MOVE_MOONBLAST, MOVE_SOLAR_BEAM, MOVE_HYPNOSIS
    },
    {
    .lvl = 1, 
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CRUNCH, MOVE_HIGH_HORSEPOWER, MOVE_STONE_EDGE, MOVE_THUNDER_FANG
    },
    {
    .lvl = 2, 
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .ability = 1, // Flash Fire
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_MaxieMagmaHideout[] = {
    {
    .lvl = 0, 
    .species = SPECIES_GROUDON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, // Drought
    .spread = SPREAD_ROCK_POLISH_GROUDON,
    .moves = MOVE_PRECIPICE_BLADES, MOVE_HEAT_CRASH, MOVE_STONE_EDGE, MOVE_ROCK_POLISH
    },
    {
    .lvl = 1, 
    .species = SPECIES_LYCANROC_DUSK,
    .heldItem = ITEM_ROCK_GEM,
    .ability = 1, // Tough Claws
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_STRENGTH, MOVE_CLOSE_COMBAT, MOVE_PSYCHIC_FANGS, MOVE_ACCELEROCK
    },
    {
    .lvl = 1, 
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 1, 
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 2, // Infiltrator
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_SUPER_FANG, MOVE_HYPNOSIS
    },
    {
    .lvl = 1, 
    .species = SPECIES_VICTREEBEL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Chlorophyll
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_SOLAR_BLADE, MOVE_POISON_JAB, MOVE_WEATHER_BALL, MOVE_SLEEP_POWDER
    },
    {
    .lvl = 2, 
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_CAMERUPTITE,
    .ability = 2, // Anger Point (for Trace)
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_EARTH_POWER, MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_FLASH_CANNON
    }
};

// Aqua Hideout
static const struct TrainerMonItemCustomMoves sParty_Grunt1[] = {
    {
    .lvl = -1,
    .species = SPECIES_TENTACRUEL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_KNOCK_OFF, MOVE_SCALD, MOVE_SLUDGE_BOMB, MOVE_MIRROR_COAT
    },  
    {
    .lvl = -1,
    .species = SPECIES_DHELMISE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ANCHOR_SHOT, MOVE_SHADOW_CLAW, MOVE_POWER_WHIP, MOVE_SYNTHESIS
    },
    {
    .lvl = -1,
    .species = SPECIES_MIGHTYENA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_SWAGGER, MOVE_FIRE_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt2[] = {
    {
    .lvl = -1,
    .species = SPECIES_SHARPEDO,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_SCREECH, MOVE_AQUA_JET, MOVE_PROTECT
    },
    {
    .lvl = -1,
    .species = SPECIES_DRAGALGE,
    .ability = 2, // Adaptability
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_DRAGON_PULSE, MOVE_SMOKESCREEN
    },
    {
    .lvl = -1,
    .species = SPECIES_MUK,
    .ability = 2, // Poison Touch
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SHADOW_SNEAK, MOVE_GUNK_SHOT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt3[] = {
    {
    .lvl = -1,
    .species = SPECIES_SEISMITOAD,
    .ability = 2, // Water Absorb
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_TOXIC
    },
    {
    .lvl = -1,
    .species = SPECIES_BASCULIN,
    .ability = 1, // Adaptability
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_HEAD_SMASH, MOVE_AQUA_TAIL
    },
    {
    .lvl = -1,
    .species = SPECIES_SCRAFTY,
    .ability = 0, // Shed Skin
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_REST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt4[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOLBAT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_EFFECT_TOXIC, MOVE_CONFUSE_RAY, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_CLAWITZER,
    .ability = 0, // Mega Launcher
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_PULSE, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE, MOVE_DARK_PULSE
    },
    {
    .lvl = -2,
    .species = SPECIES_MUK_ALOLAN,
    .ability = 0, // Poison Touch
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_DISABLE, MOVE_MINIMIZE
    },
    {
    .lvl = -2,
    .species = SPECIES_EELEKTROSS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_AQUA_TAIL, MOVE_DRAGON_CLAW
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt21[] = {
    {
    .lvl = -1,
    .species = SPECIES_WALREIN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FREEZE_DRY, MOVE_SURF, MOVE_CRUNCH, MOVE_AQUA_RING
    },
    {
    .lvl = -1,
    .species = SPECIES_FLOATZEL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_AQUA_JET 
    },
    {
    .lvl = -1,
    .species = SPECIES_MALAMAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THROAT_CHOP, MOVE_PSYCHO_CUT, MOVE_SUPERPOWER, MOVE_TOPSY_TURVY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt22[] = {
    {
    .lvl = -1,
    .species = SPECIES_TOXICROAK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST, MOVE_DARK_PULSE, MOVE_NASTY_PLOT
    },
    {
    .lvl = -1,
    .species = SPECIES_TOXAPEX,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BANEFUL_BUNKER, MOVE_SCALD, MOVE_RECOVER, MOVE_SLUDGE_BOMB
    },
    {
    .lvl = -1,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_THUNDER, MOVE_RAIN_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt25[] = {
    {
    .lvl = -1,
    .species = SPECIES_CLOYSTER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_SHELL_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_KINGLER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRABHAMMER, MOVE_HAMMER_ARM, MOVE_X_SCISSOR, MOVE_HIGH_HORSEPOWER
    },
    {
    .lvl = -1,
    .species = SPECIES_SKUNTANK,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_SUCKER_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt26[] = {
    {
    .lvl = -1,
    .species = SPECIES_RELICANTH,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DIVE, MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_TOXIC
    },
    {
    .lvl = -1,
    .species = SPECIES_PANGORO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_POISON_JAB, MOVE_OUTRAGE
    },
    {
    .lvl = -1,
    .species = SPECIES_VILEPLUME,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Matt[] = {
{
    .lvl = 0,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Drizzle
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_HURRICANE, MOVE_SCALD, MOVE_ROOST, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_DHELMISE,
    .heldItem = ITEM_STEEL_GEM,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ANCHOR_SHOT, MOVE_SHADOW_CLAW, MOVE_LIQUIDATION, MOVE_ROCK_SLIDE
    },
    {
    .lvl = 0,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Dry Skin
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_WEATHER_BALL, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT
    },
    {
    .lvl = 0,
    .species = SPECIES_TOXICROAK,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 1, // Dry Skin
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAIN_PUNCH, MOVE_GUNK_SHOT, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_SEISMITOAD,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_ICE_PUNCH
    },
    {
    .lvl = 2,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_GYARADOSITE,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WATERFALL, MOVE_CRUNCH, MOVE_POWER_WHIP, MOVE_DRAGON_DANCE
    }
};

// Route 124

static const struct TrainerMonItemCustomMoves sParty_Grace[] = { // with Declan
    {
    .lvl = -2,
    .species = SPECIES_LANTURN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOREBYSS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRAINING_KISS, MOVE_PSYCHIC, MOVE_SHELL_SMASH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Declan[] = {
    {
    .lvl = -2,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_CRUNCH, MOVE_BOUNCE, MOVE_OUTRAGE
    },
    {
    .lvl = -2,
    .species = SPECIES_DEWGONG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICE_BEAM, MOVE_AQUA_TAIL, MOVE_FAKE_OUT, MOVE_ENCORE
    }
};

static const struct TrainerMonItemCustomMoves sParty_LilaAndRoy1[] = {
    {
    .lvl = 0,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_LANTURN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_DISCHARGE, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_LilaAndRoy2[] = {
    {
    .lvl = 0,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_LANTURN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_DISCHARGE, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_LilaAndRoy3[] = {
    {
    .lvl = 0,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_LANTURN,
    .ability = 2, // Water Absorb
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_THUNDERBOLT, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_LEAF_STORM, MOVE_KNOCK_OFF, MOVE_ZEN_HEADBUTT
    },
    {
    .lvl = 0,
    .species = SPECIES_LUMINEON,
    .ability = 1, // Storm Drain
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_DAZZLING_GLEAM, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_LilaAndRoy4[] = {
    {
    .lvl = 0,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SURF, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_LANTURN,
    .ability = 2, // Water Absorb
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SURF, MOVE_THUNDERBOLT, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_ABSORB_BULB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_SURF, MOVE_LEAF_STORM, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 0,
    .species = SPECIES_LUMINEON,
    .ability = 1, // Storm Drain
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_SURF, MOVE_DAZZLING_GLEAM, MOVE_BUG_BUZZ, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Spencer[] = {
    {
    .lvl = -2,
    .species = SPECIES_TENTACRUEL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_POISON_JAB, MOVE_MIRROR_COAT, MOVE_KNOCK_OFF
    },
    {
    .lvl = -2,
    .species = SPECIES_PELIPPER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_HYDRO_PUMP, MOVE_SHOCK_WAVE, MOVE_TAILWIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jenny1[] = {
    {
    .lvl = -3,
    .species = SPECIES_WAILORD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SPOUT, MOVE_BOUNCE, MOVE_HEAVY_SLAM, MOVE_YAWN
    },
    {
    .lvl = -3,
    .species = SPECIES_STARMIE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_POWER_GEM, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_PRIMARINA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_HYPER_VOICE, MOVE_ICY_WIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jenny2[] = {
    {
    .lvl = -2,
    .species = SPECIES_WAILORD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SPOUT, MOVE_BOUNCE, MOVE_HEAVY_SLAM, MOVE_YAWN
    },
    {
    .lvl = -2,
    .species = SPECIES_STARMIE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_POWER_GEM, MOVE_RECOVER
    },
    {
    .lvl = -2,
    .species = SPECIES_PRIMARINA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_HYPER_VOICE, MOVE_ICY_WIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jenny3[] = {
    {
    .lvl = -2,
    .species = SPECIES_WAILORD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SPOUT, MOVE_BOUNCE, MOVE_HEAVY_SLAM, MOVE_YAWN
    },
    {
    .lvl = -2,
    .species = SPECIES_STARMIE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_POWER_GEM, MOVE_RECOVER
    },
    {
    .lvl = -2,
    .species = SPECIES_PRIMARINA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_HYPER_VOICE, MOVE_ICY_WIND
    },
    {
    .lvl = -2,
    .species = SPECIES_DEWGONG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FREEZE_DRY, MOVE_SURF, MOVE_ENCORE, MOVE_PERISH_SONG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jenny4[] = {
    {
    .lvl = -1,
    .species = SPECIES_WAILORD,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_HEAVY_SLAM, MOVE_YAWN
    },
    {
    .lvl = -1,
    .species = SPECIES_STARMIE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_POWER_GEM, MOVE_RECOVER
    },
    {
    .lvl = -1,
    .species = SPECIES_PRIMARINA,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_PSYCHIC
    },
    {
    .lvl = -1,
    .species = SPECIES_DEWGONG,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FREEZE_DRY, MOVE_SURF, MOVE_ENCORE, MOVE_PERISH_SONG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Chad[] = {
    {
    .lvl = -3,
    .species = SPECIES_STOUTLAND,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_PLAY_ROUGH
    },
    {
    .lvl = -3,
    .species = SPECIES_JELLICENT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SPOUT, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_RECOVER
    },
    {
    .lvl = -3,
    .species = SPECIES_LUMINEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_AIR_SLASH, MOVE_SIGNAL_BEAM, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isabella[] = { // with Roland
    {
    .lvl = -2,
    .species = SPECIES_MANTINE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_SCALD, MOVE_SIGNAL_BEAM, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_AZUMARILL,
    .ability = 1, // Huge Power
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_SUPERPOWER, MOVE_AQUA_JET
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roland[] = {
    {
    .lvl = -2,
    .species = SPECIES_OCTILLERY,
    .ability = 2, // Moody
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_OCTAZOOKA, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_RECOVER
    },
    {
    .lvl = -2,
    .species = SPECIES_CLAWITZER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_AQUA_JET
    }
};

// Route 125

static const struct TrainerMonItemCustomMoves sParty_Ernest1[] = {
    {
    .lvl = -3,
    .species = SPECIES_CONKELDURR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HAMMER_ARM, MOVE_PAYBACK, MOVE_STONE_EDGE, MOVE_MACH_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_KANGASKHAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUSH_CLAW, MOVE_SUCKER_PUNCH, MOVE_HAMMER_ARM, MOVE_FIRE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ernest2[] = {
    {
    .lvl = -3,
    .species = SPECIES_CONKELDURR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HAMMER_ARM, MOVE_PAYBACK, MOVE_STONE_EDGE, MOVE_MACH_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_KANGASKHAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUSH_CLAW, MOVE_SUCKER_PUNCH, MOVE_HAMMER_ARM, MOVE_FIRE_PUNCH
    },
/*     {
    .lvl = -3,
    .species = SPECIES_CRAMORANT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_THRASH
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Ernest3[] = {
    {
    .lvl = -3,
    .species = SPECIES_CONKELDURR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HAMMER_ARM, MOVE_PAYBACK, MOVE_STONE_EDGE, MOVE_MACH_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET
    },
    {
    .lvl = -3,
    .species = SPECIES_KANGASKHAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUSH_CLAW, MOVE_SUCKER_PUNCH, MOVE_HAMMER_ARM, MOVE_FIRE_PUNCH
    },
/*     {
    .lvl = -3,
    .species = SPECIES_CRAMORANT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_AIR_SLASH, MOVE_ICE_BEAM, MOVE_THRASH
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Ernest4[] = {
    {
    .lvl = -2,
    .species = SPECIES_CONKELDURR,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_STONE_EDGE, MOVE_BULK_UP
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLISOPOD,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_FIRST_IMPRESSION, MOVE_CLOSE_COMBAT, MOVE_AQUA_JET
    },
    {
    .lvl = -2,
    .species = SPECIES_KANGASKHAN,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_SUCKER_PUNCH, MOVE_HAMMER_ARM, MOVE_FIRE_PUNCH
    },
    {
    .lvl = -2,
    .species = SPECIES_CRAMORANT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SURF, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_FEATHER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nolen[] = {
    {
    .lvl = -3,
    .species = SPECIES_POLIWRATH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRAIN_PUNCH, MOVE_HYDRO_PUMP, MOVE_HYPNOSIS, MOVE_ICE_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_WISHIWASHI,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_DOUBLE_EDGE, MOVE_AQUA_RING, MOVE_ENDEAVOR
    },
    {
    .lvl = -3,
    .species = SPECIES_RAICHU,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_SURF, MOVE_EXTREME_SPEED, MOVE_NUZZLE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sharon[] = {
    {
    .lvl = -2,
    .species = SPECIES_SEAKING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_DRILL_RUN, MOVE_MEGAHORN, MOVE_POISON_JAB
    },
    {
    .lvl = -2,
    .species = SPECIES_SLOWBRO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_PSYCHIC, MOVE_SLACK_OFF, MOVE_YAWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tanya[] = {
    {
    .lvl = -3,
    .species = SPECIES_LUVDISC,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRAINING_KISS, MOVE_RAIN_DANCE, MOVE_LOVELY_KISS
    },
    {
    .lvl = -3,
    .species = SPECIES_ALOMOMOLA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_WISH, MOVE_PROTECT, MOVE_TOXIC
    },
    {
    .lvl = -3,
    .species = SPECIES_VAPOREON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_ICE_BEAM, MOVE_YAWN, MOVE_WISH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Presley[] = { // With Auron
    {
    .lvl = -2,
    .species = SPECIES_STARAPTOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN
    },
    {
    .lvl = -2,
    .species = SPECIES_GLISCOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ROCK_SLIDE, MOVE_WING_ATTACK, MOVE_TOXIC, MOVE_ROOST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Auron[] = { // With Presley
    {
    .lvl = -1,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Lightningrod
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_AURORA_BEAM, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_DARK_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_DARK_PULSE, MOVE_VACUUM_WAVE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Stan[] = {
    {
    .lvl = -2,
    .species = SPECIES_KINGDRA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_OUTRAGE, MOVE_IRON_HEAD, MOVE_RAIN_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_BIBAREL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_STRENGTH, MOVE_ROCK_CLIMB, MOVE_CUT
    }
};

static const struct TrainerMonItemCustomMoves sParty_KimAndIris[] = {
    {
    .lvl = -2,
    .species = SPECIES_ALTARIA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_DRAGON_RUSH, MOVE_SING, MOVE_ICE_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_RHYPERIOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_FIRE_PUNCH
    },
    {
    .lvl = -2,
    .species = SPECIES_CRYOGONAL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICE_BEAM, MOVE_POWER_GEM, MOVE_WATER_PULSE, MOVE_CONFUSE_RAY
    },
    {
    .lvl = -2,
    .species = SPECIES_ROTOM_WASH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL
    }
};

// Route 126
static const struct TrainerMonItemCustomMoves sParty_Leonardo[] = {
    {
    .lvl = -2,
    .species = SPECIES_FLOATZEL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_ICE_PUNCH, MOVE_CRUNCH, MOVE_IRON_TAIL
    },
    {
    .lvl = -2,
    .species = SPECIES_BARBARACLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_NIGHT_SLASH, MOVE_CROSS_CHOP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isobel[] = {
    {
    .lvl = -2,
    .species = SPECIES_BEARTIC,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH, MOVE_SURF
    },
    {
    .lvl = -2,
    .species = SPECIES_SWANNA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_HYDRO_PUMP, MOVE_STEEL_WING, MOVE_ROOST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dean[] = {
    {
    .lvl = -2,
    .species = SPECIES_HAXORUS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_OUTRAGE, MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_SURF
    },
    {
    .lvl = -2,
    .species = SPECIES_LUDICOLO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_RAIN_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_QUAGSIRE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_RECOVER, MOVE_TOXIC
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nikki[] = {
    {
    .lvl = -2,
    .species = SPECIES_LAPRAS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_FREEZE_DRY, MOVE_PSYCHIC, MOVE_SING
    },
    {
    .lvl = -2,
    .species = SPECIES_AUDINO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPER_VOICE, MOVE_SURF, MOVE_WISH, MOVE_THUNDERBOLT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Barry[] = {
    {
    .lvl = -2,
    .species = SPECIES_SWAMPERT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_AVALANCHE, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOGOAT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_HORN_LEECH, MOVE_EARTHQUAKE, MOVE_MILK_DRINK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sienna[] = { // with Pablo
    {
    .lvl = -2,
    .species = SPECIES_HUNTAIL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_SHELL_SMASH
    },
    {
    .lvl = -2,
    .species = SPECIES_WHISCASH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_POLITOED,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_HYPER_VOICE, MOVE_SING, MOVE_MUD_SHOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Pablo1[] = { // With Sienna
    {
    .lvl = -3,
    .species = SPECIES_KABUTOPS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_LEECH_LIFE, MOVE_RAIN_DANCE
    },
    {
    .lvl = -3,
    .species = SPECIES_GOLDUCK,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_ZEN_HEADBUTT, MOVE_CROSS_CHOP, MOVE_HONE_CLAWS
    },
    {
    .lvl = -3,
    .species = SPECIES_QWILFISH,
    .ability = 1, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_SWORDS_DANCE, MOVE_EXPLOSION
    }
};

static const struct TrainerMonItemCustomMoves sParty_Pablo2[] = {
    {
    .lvl = -2,
    .species = SPECIES_KABUTOPS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_LEECH_LIFE, MOVE_RAIN_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLDUCK,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_ZEN_HEADBUTT, MOVE_CROSS_CHOP, MOVE_HONE_CLAWS
    },
    {
    .lvl = -2,
    .species = SPECIES_QWILFISH,
    .ability = 1, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_SWORDS_DANCE, MOVE_EXPLOSION
    }
};

static const struct TrainerMonItemCustomMoves sParty_Pablo3[] = {
    {
    .lvl = -2,
    .species = SPECIES_KABUTOPS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_LEECH_LIFE, MOVE_RAIN_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLDUCK,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_ZEN_HEADBUTT, MOVE_CROSS_CHOP, MOVE_HONE_CLAWS
    },
    {
    .lvl = -2,
    .species = SPECIES_QWILFISH,
    .ability = 1, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_SWORDS_DANCE, MOVE_EXPLOSION
    },
/*     {
    .lvl = -2,
    .species = SPECIES_DREDNAW,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_HEAD_SMASH, MOVE_CRUNCH, MOVE_MEGAHORN
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Pablo4[] = {
    {
    .lvl = -2,
    .species = SPECIES_KABUTOPS,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_LEECH_LIFE, MOVE_RAIN_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_GOLDUCK,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_AQUA_TAIL, MOVE_ZEN_HEADBUTT, MOVE_CROSS_CHOP, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_QWILFISH,
    .ability = 1, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_SWORDS_DANCE, MOVE_EXPLOSION
    },
/*     {
    .lvl = -2,
    .species = SPECIES_DREDNAW,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_HEAD_SMASH, MOVE_CRUNCH, MOVE_MEGAHORN
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Brenda[] = {
    {
    .lvl = -3,
    .species = SPECIES_SEAKING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_SOAK, MOVE_MEGAHORN
    },
    {
    .lvl = -3,
    .species = SPECIES_RAICHU,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDERBOLT, MOVE_SURF, MOVE_NUZZLE, MOVE_CHARM
    },
};

// Route 127

static const struct TrainerMonItemCustomMoves sParty_Aidan[] = { // with Athena
    {
    .lvl = -2,
    .species = SPECIES_PIDGEOT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPER_VOICE, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_WORK_UP
    },
    {
    .lvl = -2,
    .species = SPECIES_TALONFLAME,
    .ability = 2, // Gale Wings
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Athena[] = { // with Aiden
    {
    .lvl = -2,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_STONE_EDGE
    },
    {
    .lvl = -2,
    .species = SPECIES_ACCELGOR,
    .heldItem = ITEM_POISON_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BUG_BUZZ, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL, MOVE_SLUDGE_BOMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jonah[] = {
    {
    .lvl = -2,
    .species = SPECIES_CORSOLA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_RECOVER, MOVE_MIRROR_COAT, MOVE_POWER_GEM, MOVE_SCALD
    },
    {
    .lvl = -2,
    .species = SPECIES_TOXAPEX,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_TOXIC, MOVE_VENOSHOCK, MOVE_RECOVER, MOVE_VENOM_DRENCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roger[] = {
    {
    .lvl = -2,
    .species = SPECIES_CRAWDAUNT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_DOUBLE_EDGE
    },
    {
    .lvl = -2,
    .species = SPECIES_PYUKUMUKU,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_TOXIC, MOVE_COUNTER, MOVE_RECOVER, MOVE_TAUNT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Henry[] = {
    {
    .lvl = -2,
    .species = SPECIES_TENTACRUEL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WHIRLPOOL, MOVE_TOXIC, MOVE_PROTECT, MOVE_DIVE
    },
    {
    .lvl = -2,
    .species = SPECIES_JELLICENT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ACID_ARMOR, MOVE_STRENGTH_SAP, MOVE_SCALD, MOVE_GIGA_DRAIN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Camden[] = {
    {
    .lvl = -3,
    .species = SPECIES_KLINKLANG,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_DOUBLE_EDGE, MOVE_SHIFT_GEAR
    },
    {
    .lvl = -3,
    .species = SPECIES_GRENINJA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATER_SHURIKEN, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_GRASS_KNOT
    },
    {
    .lvl = -3,
    .species = SPECIES_EMOLGA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ACROBATICS, MOVE_DISCHARGE, MOVE_ENERGY_BALL, MOVE_EERIE_IMPULSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Koji1[] = {
    {
    .lvl = -2,
    .species = SPECIES_HARIYAMA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_KNOCK_OFF
    },
    {
    .lvl = -2,
    .species = SPECIES_AGGRON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STONE_EDGE, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW
    }
};

static const struct TrainerMonItemCustomMoves sParty_Koji2[] = {
    {
    .lvl = -1,
    .species = SPECIES_HARIYAMA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_KNOCK_OFF
    },
    {
    .lvl = -1,
    .species = SPECIES_AGGRON,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEAD_SMASH, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Koji3[] = {
    {
    .lvl = -1,
    .species = SPECIES_HARIYAMA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_KNOCK_OFF
    },
    {
    .lvl = -1,
    .species = SPECIES_AGGRON,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEAD_SMASH, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH
    },
/*  {
    .lvl = -1,
    .species = SPECIES_SIRFETCHD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_METEOR_ASSAULT, MOVE_BRAVE_BIRD, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF
    }   */
};

static const struct TrainerMonItemCustomMoves sParty_Koji4[] = {
    {
    .lvl = 0,
    .species = SPECIES_HARIYAMA,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_STONE_EDGE, MOVE_KNOCK_OFF
    },
    {
    .lvl = 0,
    .species = SPECIES_AGGRON,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HEAD_SMASH, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH
    },
/*     {
    .lvl = 0,
    .species = SPECIES_SIRFETCHD,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_METEOR_ASSAULT, MOVE_BRAVE_BIRD, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF
    }   */
};

static const struct TrainerMonItemCustomMoves sParty_Donny[] = {
    {
    .lvl = -2,
    .species = SPECIES_YANMEGA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_DETECT
    },
    {
    .lvl = -2,
    .species = SPECIES_BLASTOISE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_AURA_SPHERE, MOVE_RAPID_SPIN
    }
};

// Route 128

static const struct TrainerMonItemCustomMoves sParty_Alexa[] = { // Ace
    {
    .lvl = -1,
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_DRAGON_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_THICK_CLUB,
    .ability = 1, // Lightningrod
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_BONEMERANG, MOVE_SHADOW_SNEAK
    },
    {
    .lvl = -1,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_METAL_COAT,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BULLET_PUNCH, MOVE_U_TURN, MOVE_SUPERPOWER, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_GRASS_GEM,
    .ability = 1, // Chloroplast
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_SYNTHESIS, MOVE_TRICK_ROOM
    },
    {
    .lvl = 0,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_AMPHAROSITE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_VOLT_SWITCH, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_POWER_GEM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ruben[] = { // Ace
    {
    .lvl = -1,
    .species = SPECIES_HEATMOR,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 0, // Tough Claws
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_IRON_HEAD, MOVE_POWER_WHIP, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Triage
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_CALM_MIND, MOVE_SYNTHESIS
    },
    {
    .lvl = -1,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_EXTREME_SPEED
    },
    {
    .lvl = 0,
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_LOPUNNITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_DOUBLE_EDGE, MOVE_KNOCK_OFF, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_HYPNOSIS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wayne[] = {
    {
    .lvl = -2,
    .species = SPECIES_WAILORD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_EARTHQUAKE, MOVE_AMNESIA, MOVE_REST
    },
    {
    .lvl = -2,
    .species = SPECIES_DHELMISE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_RAPID_SPIN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isaiah1[] = {
    {
    .lvl = -2,
    .species = SPECIES_DODRIO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_KNOCK_OFF
    },
    {
    .lvl = -2,
    .species = SPECIES_JOLTEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_AURORA_BEAM, MOVE_SHADOW_BALL, MOVE_AGILITY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isaiah2[] = {
    {
    .lvl = -2,
    .species = SPECIES_DODRIO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_KNOCK_OFF
    },
    {
    .lvl = -2,
    .species = SPECIES_JOLTEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ELECTRO_BALL, MOVE_AURORA_BEAM, MOVE_SHADOW_BALL, MOVE_AGILITY
    },
    {
    .lvl = -2,
    .species = SPECIES_KINGDRA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_AGILITY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isaiah3[] = {
    {
    .lvl = -1,
    .species = SPECIES_DODRIO,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_KNOCK_OFF
    },
    {
    .lvl = -1,
    .species = SPECIES_JOLTEON,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_ELECTRO_BALL, MOVE_AURORA_BEAM, MOVE_SHADOW_BALL, MOVE_AGILITY
    },
    {
    .lvl = -1,
    .species = SPECIES_KINGDRA,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_SURF, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_AGILITY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isaiah4[] = {
    {
    .lvl = 0,
    .species = SPECIES_DODRIO,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_KNOCK_OFF
    },
    {
    .lvl = 0,
    .species = SPECIES_JOLTEON,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_ELECTRO_BALL, MOVE_AURORA_BEAM, MOVE_SHADOW_BALL, MOVE_AGILITY
    },
    {
    .lvl = 0,
    .species = SPECIES_KINGDRA,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRACO_METEOR, MOVE_FLASH_CANNON, MOVE_AGILITY
    },
    {
    .lvl = 0,
    .species = SPECIES_FLOATZEL,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_CRUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Katelyn1[] = {
    {
    .lvl = -2,
    .species = SPECIES_FEAROW,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY
    },
    {
    .lvl = -2,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_VOLT_TACKLE, MOVE_BLAZE_KICK, MOVE_JUMP_KICK, MOVE_AGILITY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Katelyn2[] = {
    {
    .lvl = -2,
    .species = SPECIES_FEAROW,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY
    },
    {
    .lvl = -2,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_VOLT_TACKLE, MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_AGILITY
    },
/*     {
    .lvl = -2,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Katelyn3[] = {
    {
    .lvl = -1,
    .species = SPECIES_FEAROW,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY
    },
    {
    .lvl = -1,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_VOLT_TACKLE, MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_AGILITY
    },
/*     {
    .lvl = -1,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Katelyn4[] = {
    {
    .lvl = -1,
    .species = SPECIES_FEAROW,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_DRILL_RUN, MOVE_FOCUS_ENERGY
    },
    {
    .lvl = -1,
    .species = SPECIES_ZEBSTRIKA,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_VOLT_TACKLE, MOVE_FLARE_BLITZ, MOVE_JUMP_KICK, MOVE_AGILITY
    },
    {
    .lvl = -1,
    .species = SPECIES_SCOLIPEDE,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_PROTECT, MOVE_BATON_PASS
    },
/*     {
    .lvl = -1,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PLAY_ROUGH, MOVE_ZEN_HEADBUTT, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Carlee[] = {
    {
    .lvl = -2,
    .species = SPECIES_SEAKING,
    .ability = 2, // Lightningrod
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DRILL_RUN, MOVE_MEGAHORN
    },
    {
    .lvl = -2,
    .species = SPECIES_DRAMPA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_HYPER_VOICE, MOVE_DRAGON_PULSE, MOVE_ENERGY_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Harrison[] = {
    {
    .lvl = -2,
    .species = SPECIES_LICKILICKY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_POWER_WHIP
    },
    {
    .lvl = -2,
    .species = SPECIES_OMASTAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_RAIN_DANCE
    }
};

// Route 129

static const struct TrainerMonItemCustomMoves sParty_Reed[] = {
    {
    .lvl = -2,
    .species = SPECIES_WALREIN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_ICE_BEAM, MOVE_CRUNCH, MOVE_YAWN
    },
    {
    .lvl = -2,
    .species = SPECIES_SHARPEDO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_PSYCHIC_FANGS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Chase[] = {
    {
    .lvl = -2,
    .species = SPECIES_STARMIE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_COSMIC_POWER
    },
    {
    .lvl = -2,
    .species = SPECIES_BRAVIARY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Allison[] = {
    {
    .lvl = -2,
    .species = SPECIES_UNFEZANT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_ROOST, MOVE_FOCUS_ENERGY
    },
    {
    .lvl = -2,
    .species = SPECIES_GALVANTULA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_SUCKER_PUNCH, MOVE_POISON_JAB
    }
};

static const struct TrainerMonItemCustomMoves sParty_Clarence[] = {
    {
    .lvl = -2,
    .species = SPECIES_DIGGERSBY,
    .ability = 2, // Huge Power
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_U_TURN, MOVE_SURF
    },
    {
    .lvl = -2,
    .species = SPECIES_EMPOLEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_FLASH_CANNON, MOVE_DRILL_PECK, MOVE_AQUA_JET
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tisha[] = {
    {
    .lvl = -2,
    .species = SPECIES_LANTURN,
    .ability = 2, // Water Absorb
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DISCHARGE, MOVE_CONFUSE_RAY, MOVE_ICE_BEAM, MOVE_AQUA_RING
    },
    {
    .lvl = -2,
    .species = SPECIES_SLURPUFF,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_PLAY_ROUGH, MOVE_ENERGY_BALL, MOVE_FLAMETHROWER
    }
};

// Route 130

static const struct TrainerMonItemCustomMoves sParty_Rodney[] = {
    {
    .lvl = -2,
    .species = SPECIES_GYARADOS,
    .ability = 2, // Moxie
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_OUTRAGE, MOVE_GIGA_IMPACT, MOVE_ICE_FANG, MOVE_BOUNCE
    },
    {
    .lvl = -2,
    .species = SPECIES_WISHIWASHI,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_AQUA_RING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Katie[] = {
    {
    .lvl = -2,
    .species = SPECIES_SEAKING,
    .ability = 2, // Lightningrod
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DIVE, MOVE_ACUPRESSURE, MOVE_TOXIC, MOVE_BOUNCE
    },
    {
    .lvl = -2,
    .species = SPECIES_BEARTIC,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Santiago[] = {
    {
    .lvl = -2,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .ability = 1, // Storm Drain
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DIVE, MOVE_DIG, MOVE_TOXIC, MOVE_RECOVER
    },
    {
    .lvl = -2,
    .species = SPECIES_POLIWRATH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_DIVE, MOVE_THROAT_CHOP, MOVE_EARTH_POWER
    }
};

// Route 131

static const struct TrainerMonItemCustomMoves sParty_Kevin[] = {
    {
    .lvl = -2,
    .species = SPECIES_SNORLAX,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_REST, MOVE_SLEEP_TALK
    },
    {
    .lvl = -2,
    .species = SPECIES_QUAGSIRE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_STOCKPILE, MOVE_RECOVER, MOVE_SCALD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Talia[] = {
    {
    .lvl = -2,
    .species = SPECIES_SCYTHER,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AERIAL_ACE, MOVE_BUG_BITE, MOVE_THIEF, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -2,
    .species = SPECIES_DEDENNE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_GRASS_KNOT, MOVE_SUPER_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Richard[] = {
    {
    .lvl = -2,
    .species = SPECIES_TAUROS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_GIGA_IMPACT, MOVE_CLOSE_COMBAT, MOVE_MEGAHORN, MOVE_SURF
    },
    {
    .lvl = -2,
    .species = SPECIES_SLOWKING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POWER_GEM, MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SLACK_OFF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kara[] = {
    {
    .lvl = -2,
    .species = SPECIES_MILTANK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BODY_SLAM, MOVE_SURF, MOVE_MILK_DRINK, MOVE_PLAY_ROUGH
    },
    {
    .lvl = -2,
    .species = SPECIES_AZUMARILL,
    .ability = 1, // Huge Power
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_PLAY_ROUGH, MOVE_ICE_PUNCH, MOVE_AQUA_JET, MOVE_BULLDOZE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Herman[] = { // Ace, with Susie
    {
    .lvl = 0,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_HERACRONITE,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_PIN_MISSILE, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_CLOSE_COMBAT
    },
    {
    .lvl = -1,
    .species = SPECIES_FLORGES,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Misty Surge
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_CALM_MIND
    },
    {
    .lvl = -1,
    .species = SPECIES_LYCANROC,
    .heldItem = ITEM_ROCK_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_ACCELEROCK
    },
    {
    .lvl = -1,
    .species = SPECIES_BRONZONG,
    .heldItem = ITEM_OCCA_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_GYRO_BALL, MOVE_PAYBACK, MOVE_CURSE, MOVE_ZEN_HEADBUTT
    },
    {
    .lvl = -1,
    .species = SPECIES_GOURGEIST,
    .heldItem = ITEM_FLAME_ORB,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_PSYCHIC
    }
};

static const struct TrainerMonItemCustomMoves sParty_Susie[] = { // Ace, with Herman
    {
    .lvl = 0,
    .species = SPECIES_PIDGEOT,
    .heldItem = ITEM_PIDGEOTITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_FOCUS_BLAST, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_PROBOPASS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, 
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_EARTH_POWER
    },
    {
    .lvl = -1,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 2, // Chloroplast
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SOLAR_BEAM, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST, MOVE_SYNTHESIS
    },
    {
    .lvl = -1,
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_FIERY_DANCE, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_EXPERT_BELT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_WILL_O_WISP
    }
};

static const struct TrainerMonItemCustomMoves sParty_ReliAndIan[] = {
    {
    .lvl = -2,
    .species = SPECIES_PELIPPER,
    .ability = 1, // Drizzle
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SOAK, MOVE_TAILWIND, MOVE_WEATHER_BALL, MOVE_WIDE_GUARD
    },
    {
    .lvl = -2,
    .species = SPECIES_RELICANTH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE
    }
};

// Route 132

static const struct TrainerMonItemCustomMoves sParty_Gilbert[] = {
    {
    .lvl = -2,
    .species = SPECIES_NIDOKING,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_MEGAHORN
    },
    {
    .lvl = -2,
    .species = SPECIES_SHARPEDO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_DOUBLE_EDGE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dana[] = {
    {
    .lvl = -2,
    .species = SPECIES_NIDOQUEEN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SUPERPOWER
    },
    {
    .lvl = -2,
    .species = SPECIES_PRIMARINA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPARKLING_ARIA, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_SING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ronald[] = {
    {
    .lvl = -4,
    .species = SPECIES_MAGIKARP,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_REVERSAL, MOVE_BOUNCE, MOVE_SPLASH
    },
    {
    .lvl = -4,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_RAIN_DANCE, MOVE_THUNDER
    },
    {
    .lvl = -4,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_BOUNCE, MOVE_CRUNCH, MOVE_LEER
    },
    {
    .lvl = -4,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_BOUNCE, MOVE_DRAGON_DANCE, MOVE_ICE_FANG
    },
    {
    .lvl = -4,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ICE_FANG
    },
    {
    .lvl = -4,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPLASH, MOVE_THRASH, MOVE_OUTRAGE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kiyo[] = {
    {
    .lvl = -3,
    .species = SPECIES_HAWLUCHA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_FLYING_PRESS
    },
    {
    .lvl = -3,
    .species = SPECIES_PRIMEAPE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_THRASH, MOVE_OUTRAGE, MOVE_NIGHT_SLASH
    },
    {
    .lvl = -3,
    .species = SPECIES_THROH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_STORM_THROW, MOVE_PAYBACK, MOVE_BULK_UP, MOVE_BODY_SLAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Paxton[] = { // with Darcy
    {
    .lvl = -1,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 1, // Poison Heal
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SPORE, MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_STONE_EDGE
    },
    {
    .lvl = -1,
    .species = SPECIES_URSARING,
    .heldItem = ITEM_FLAME_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FACADE, MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_EXPERT_BELT,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_THUNDER_FANG, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_ICE_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Darcy[] = { // with Paxton
    {
    .lvl = 0,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_CHARIZARDITE_X,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAGON_CLAW, MOVE_FLARE_BLITZ, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK
    },
    {
    .lvl = -1,
    .species = SPECIES_LILLIGANT,
    .heldItem = ITEM_GRASS_GEM,
    .ability = 1, // Own Tempo
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PETAL_DANCE, MOVE_MOONBLAST, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_PORYGON_Z,
    .heldItem = ITEM_SILK_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_TECHNO_BLAST, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_DARK_PULSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Makayla[] = { // with Jonathon
    {
    .lvl = -1,
    .species = SPECIES_AMOONGUSS,
    .heldItem = ITEM_BLACK_SLUDGE,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SPORE, MOVE_RAGE_POWDER, MOVE_FOUL_PLAY, MOVE_GIGA_DRAIN
    },
    {
    .lvl = -1,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_BULLET_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_FACADE, MOVE_SUPERPOWER, MOVE_PROTECT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jonathan[] = { // with Makayla
    {
    .lvl = -1,
    .species = SPECIES_RAMPARDOS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_CRUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_CHARIZARDITE_Y,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_SOLAR_BEAM, MOVE_DRAGON_PULSE
    },
    {
    .lvl = -1,
    .species = SPECIES_SAWSBUCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HORN_LEECH, MOVE_DOUBLE_EDGE, MOVE_WILD_CHARGE, MOVE_JUMP_KICK
    }
};

// Route 133

static const struct TrainerMonItemCustomMoves sParty_Linda[] = {
    {
    .lvl = -3,
    .species = SPECIES_KINGDRA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_DRAGON_PULSE, MOVE_AGILITY, MOVE_BODY_SLAM
    },
    {
    .lvl = -3,
    .species = SPECIES_LUMINEON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_ICE_BEAM, MOVE_QUIVER_DANCE, MOVE_RAIN_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Beck[] = {
    {
    .lvl = -3,
    .species = SPECIES_HONCHKROW,
    .ability = 1, // Super Luck
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_HEAT_WAVE, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -3,
    .species = SPECIES_ALTARIA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_OUTRAGE, MOVE_COTTON_GUARD, MOVE_DRAGON_DANCE, MOVE_ROOST
    },
    {
    .lvl = -3,
    .species = SPECIES_NOCTOWL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BOOMBURST, MOVE_HURRICANE, MOVE_HYPNOSIS, MOVE_NASTY_PLOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Conor[] = { // with Mollie
    {
    .lvl = -1,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FAKE_OUT, MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -1,
    .species = SPECIES_FERROTHORN,
    .heldItem = ITEM_ROCKY_HELMET,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_POWER_WHIP, MOVE_IRON_HEAD, MOVE_THUNDER_WAVE, MOVE_LEECH_SEED
    },
    {
    .lvl = -1,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_PSYCHIC, MOVE_DARK_PULSE, MOVE_THUNDERBOLT, MOVE_FAKE_OUT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Mollie[] = { // with Conor
    {
    .lvl = -1,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_SPELL_TAG,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_ICY_WIND, MOVE_HYPNOSIS
    },
    {
    .lvl = -1,
    .species = SPECIES_CARRACOSTA,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT, MOVE_KNOCK_OFF
    },
    {
    .lvl = -1,
    .species = SPECIES_AROMATISSE,
    .heldItem = ITEM_FAIRY_GEM,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_MOONBLAST, MOVE_DISABLE, MOVE_HEAL_PULSE, MOVE_CHARM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Warren[] = { // Ace
    {
    .lvl = -1,
    .species = SPECIES_GOLEM_ALOLAN,
    .heldItem = ITEM_ELECTRIC_GEM,
    .ability = 2, // Galvanize
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_EXPLOSION, MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_FIRE_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_MUSHARNA,
    .ability = 2, // Psychic Surge
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_YAWN, MOVE_TRICK_ROOM
    },
    {
    .lvl = -1,
    .species = SPECIES_TORTERRA,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_CRUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_COFAGRIGUS,
    .heldItem = ITEM_AIR_BALLOON,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SHADOW_BALL, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT, MOVE_TRICK_ROOM
    },
    {
    .lvl = 0,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_AGGRONITE,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_AQUA_TAIL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Debra[] = { // with Franklin
    {
    .lvl = -3,
    .species = SPECIES_QWILFISH,
    .ability = 2, // Intimidate
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_POISON_JAB, MOVE_REVENGE, MOVE_EXPLOSION
    },
    {
    .lvl = -3,
    .species = SPECIES_SEISMITOAD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_DRAIN_PUNCH, MOVE_EARTH_POWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Franklin[] = { // with Debra
    {
    .lvl = -3,
    .species = SPECIES_WALREIN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AQUA_TAIL, MOVE_AVALANCHE, MOVE_CRUNCH, MOVE_SLACK_OFF
    },
    {
    .lvl = -3,
    .species = SPECIES_VAPOREON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MUDDY_WATER, MOVE_WISH, MOVE_ICE_BEAM, MOVE_YAWN
    }
};

// Route 134

static const struct TrainerMonItemCustomMoves sParty_Laurel[] = {
    {
    .lvl = -3,
    .species = SPECIES_LUVDISC,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LOVELY_KISS, MOVE_SURF, MOVE_DRAINING_KISS, MOVE_ICE_BEAM
    },
    {
    .lvl = -3,
    .species = SPECIES_ALOMOMOLA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_WISH, MOVE_WAKE_UP_SLAP, MOVE_AQUA_RING
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jack[] = {
    {
    .lvl = -3,
    .species = SPECIES_LINOONE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EXTREME_SPEED, MOVE_SURF, MOVE_SEED_BOMB, MOVE_SHADOW_CLAW
    },
    {
    .lvl = -3,
    .species = SPECIES_SIMIPOUR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SURF, MOVE_GRASS_KNOT, MOVE_ACROBATICS, MOVE_FOCUS_BLAST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Hitoshi[] = {
    {
    .lvl = -3,
    .species = SPECIES_HITMONCHAN,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BULLET_PUNCH, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -3,
    .species = SPECIES_MACHAMP,
    .ability = 1, // No Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DYNAMIC_PUNCH, MOVE_GRASS_KNOT, MOVE_ACROBATICS, MOVE_FOCUS_BLAST
    },
    {
    .lvl = -3,
    .species = SPECIES_CRABOMINABLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICE_HAMMER, MOVE_CLOSE_COMBAT, MOVE_CRABHAMMER, MOVE_ICE_SHARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Reyna[] = {
    {
    .lvl = -3,
    .species = SPECIES_BEWEAR,
    .ability = 2, // Defiant
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DARKEST_LARIAT, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_IRON_HEAD
    },
    {
    .lvl = -3,
    .species = SPECIES_PASSIMIAN,
    .ability = 1, // No Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_ACROBATICS, MOVE_GUNK_SHOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Hudson[] = {
    {
    .lvl = -3,
    .species = SPECIES_POLIWRATH,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DARKEST_LARIAT, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_LIQUIDATION
    },
    {
    .lvl = -3,
    .species = SPECIES_RATICATE,
    .ability = 2, // Hustle
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK, MOVE_CRUNCH, MOVE_CLOSE_COMBAT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Aaron[] = { // with Marley
    {
    .lvl = -1,
    .species = SPECIES_DRUDDIGON,
    .ability = 1, // Sheer Force
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_DRAGON_RUSH, MOVE_CRUNCH, MOVE_FIRE_PUNCH, MOVE_GUNK_SHOT
    },
    {
    .lvl = -1,
    .species = SPECIES_TYRANTRUM,
    .ability = 2, // Rock Head
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HEAD_SMASH, MOVE_HIGH_HORSEPOWER, MOVE_OUTRAGE, MOVE_DRAGON_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_NOIVERN,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_WATER_PULSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Marley[] = { // with Aaron
    {
    .lvl = 0,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_VENUSAURITE,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS
    },
    {
    .lvl = -1,
    .species = SPECIES_ESCAVALIER,
    .heldItem = ITEM_OCCA_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_MEGAHORN, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_RAZOR_SHELL
    },
    {
    .lvl = -1,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NORMAL_GEM,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_EXTREME_SPEED, MOVE_PLAY_ROUGH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Alex[] = { // with Kelvin
    {
    .lvl = -3,
    .species = SPECIES_SWELLOW,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_U_TURN, MOVE_ROOST
    },
    {
    .lvl = -3,
    .species = SPECIES_TOGEKISS,
    .ability = 1, // Serene Grace
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_ANCIENT_POWER, MOVE_BODY_SLAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kelvin[] = { // with Alex
    {
    .lvl = -3,
    .species = SPECIES_MACHAMP,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_DUAL_CHOP, MOVE_BULLET_PUNCH, MOVE_STRENGTH
    },
    {
    .lvl = -3,
    .species = SPECIES_DHELMISE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ANCHOR_SHOT, MOVE_SHADOW_CLAW, MOVE_LIQUIDATION, MOVE_BRICK_BREAK
    }
};

// Mossdeep Gym

static const struct TrainerMonItemCustomMoves sParty_TateAndLiza1[] = { // Inverse Battle!
    {
    .lvl = 2,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_SLOWBRONITE,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_CALM_MIND
    },
    {
    .lvl = 2,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_ABSORB_BULB,
    .spread = SPREAD_31_IV_HP_DEF_SPDEF_SASSY,
    .moves = MOVE_EARTH_POWER, MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_TRICK_ROOM
    },
    {
    .lvl = 2,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 1, // Chloroplast
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SOLAR_BEAM, MOVE_TRICK_ROOM
    },
    {
    .lvl = 2,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_THUNDER, MOVE_CALM_MIND
    },
    {
    .lvl = 3,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_GHOST_GEM,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_POWER_GEM, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT, MOVE_CALM_MIND
    },
    {
    .lvl = 3,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_ROCK_POLISH
    }
};

static const struct TrainerMonItemCustomMoves sParty_TateAndLiza2[] = { // no legendaries
    {
    .lvl = 2,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_SLOWBRONITE,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_CALM_MIND
    },
    {
    .lvl = 2,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_ABSORB_BULB,
    .spread = SPREAD_31_IV_HP_DEF_SPDEF_SASSY,
    .moves = MOVE_EARTH_POWER, MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_TRICK_ROOM
    },
    {
    .lvl = 2,
    .species = SPECIES_EXEGGUTOR,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 1, // Chloroplast
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SOLAR_BEAM, MOVE_TRICK_ROOM
    },
    {
    .lvl = 2,
    .species = SPECIES_REUNICLUS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_THUNDER, MOVE_CALM_MIND
    },
    {
    .lvl = 3,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_GHOST_GEM,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_POWER_GEM, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT, MOVE_CALM_MIND
    },
    {
    .lvl = 3,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_ZEN_HEADBUTT, MOVE_ROCK_POLISH
    }
};

static const struct TrainerMonItemCustomMoves sParty_TateAndLiza3[] = { // legendaries
    {
    .lvl = 2,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_SLOWBRONITE,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_MUDDY_WATER, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_CALM_MIND
    },
    {
    .lvl = 2,
    .species = SPECIES_LUNALA,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_MOONGEIST_BEAM, MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_TRICK_ROOM
    },
    {
    .lvl = 2,
    .species = SPECIES_TAPU_LELE,
    .heldItem = ITEM_PSYCHIC_SEED,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_FOCUS_BLAST, MOVE_ENERGY_BALL
    },
    {
    .lvl = 2,
    .species = SPECIES_CRESSELIA,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PSYSHOCK, MOVE_MOONBLAST, MOVE_MOONLIGHT, MOVE_CALM_MIND
    },
    {
    .lvl = 3,
    .species = SPECIES_VICTINI,
    .heldItem = ITEM_FIRE_GEM,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_V_CREATE, MOVE_ZEN_HEADBUTT, MOVE_BOLT_STRIKE, MOVE_U_TURN
    },
    {
    .lvl = 3,
    .species = SPECIES_CALYREX_ICE_RIDER,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_GLACIAL_LANCE, MOVE_ZEN_HEADBUTT, MOVE_MEGAHORN, MOVE_TRICK_ROOM
    }
};

static const struct TrainerMonItemCustomMoves sParty_TateAndLiza4[] = { // unused for now
    {
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMonItemCustomMoves sParty_TateAndLiza5[] = { // unused for now
    {
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Preston[] = { // with Maura
    {
    .lvl = -2,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_FIRE_BLAST
    },
    {
    .lvl = -2,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Magic Guard
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_AURA_SPHERE, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Maura[] = { // with Preston
    {
    .lvl = -1,
    .species = SPECIES_BEHEEYEM,
    .ability = 2, // Psychic Surge
    .heldItem = ITEM_PSYCHIC_SEED,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_DARK_PULSE, MOVE_NASTY_PLOT
    },
    {
    .lvl = -1,
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_FAIRY_GEM,
    .ability = 2, // Magic Bounce
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Samantha[] = { // with Blake
    {
    .lvl = -2,
    .species = SPECIES_XATU,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 2, // Magic Bounce
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_SHADOW_BALL
    },
    {
    .lvl = -2,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 1, // Trace
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Blake[] = { // with Samantha
    {
    .lvl = -2,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_HYPER_FANG, MOVE_ICE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_MEOWSTIC_FEMALE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ENERGY_BALL, MOVE_SIGNAL_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Macey[] = { // with Clifford
    {
    .lvl = -2,
    .species = SPECIES_JYNX,
    .heldItem = ITEM_ICE_GEM,
    .ability = 2, // Dry Skin
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_FREEZE_DRY, MOVE_LOVELY_KISS, MOVE_NASTY_PLOT
    },
    {
    .lvl = -2,
    .species = SPECIES_DELPHOX,
    .heldItem = ITEM_POWER_HERB,
    .ability = 1, // Pyromancy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_AURA_SPHERE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Clifford[] = { // with Macey or Kathleen
    {
    .lvl = -2,
    .species = SPECIES_RAICHU_ALOLAN,
    .heldItem = ITEM_ELECTRIC_SEED,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_ELECTRIC_TERRAIN
    },
    {
    .lvl = -2,
    .species = SPECIES_MR_MIME,
    .heldItem = ITEM_LIGHT_CLAY,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_REFLECT, MOVE_LIGHT_SCREEN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kathleen[] = { // with Clifford or Nicholas
    {
    .lvl = -2,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_ELECTRIC_SEED,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FUTURE_SIGHT, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_FOCUS_BLAST
    },
    {
    .lvl = -2,
    .species = SPECIES_SWOOBAT,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 2, // Simple
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_HEAT_WAVE, MOVE_ENDURE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nicholas[] = { // with Kathleen
    {
    .lvl = -2,
    .species = SPECIES_MUSHARNA,
    .ability = 2, // Psychic Surge
    .heldItem = ITEM_PSYCHIC_SEED,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FUTURE_SIGHT, MOVE_HYPNOSIS, MOVE_REFLECT, MOVE_LIGHT_SCREEN
    },
    {
    .lvl = -2,
    .species = SPECIES_WOBBUFFET,
    .heldItem = ITEM_ROCKY_HELMET,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nate[] = { // with Virgil
    {
    .lvl = -2,
    .species = SPECIES_GRUMPIG,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_EXTRASENSORY, MOVE_ENERGY_BALL, MOVE_FOCUS_BLAST, MOVE_CHARGE_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_ROCKY_HELMET,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PSYCHIC, MOVE_SCALD, MOVE_RECOVER, MOVE_COSMIC_POWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Virgil[] = { // with Nate or Sylvia
    {
    .lvl = -2,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_ROCK_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_FAKE_OUT, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -2,
    .species = SPECIES_BRONZONG,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 2, // Heavy Metal
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_HEAVY_SLAM, MOVE_PAYBACK, MOVE_HYPNOSIS, MOVE_ROCK_SLIDE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sylvia[] = { // with Virgil or Hannah
    {
    .lvl = -2,
    .species = SPECIES_ORANGURU,
    .heldItem = ITEM_DARK_GEM,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FOUL_PLAY, MOVE_HYPER_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Shadow Tag
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CHARM, MOVE_CALM_MIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Hannah[] = { // with Sylvia
    {
    .lvl = -2,
    .species = SPECIES_BRUXISH,
    .heldItem = ITEM_POISON_GEM,
    .ability = 1, // Strong Jaw
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_PSYCHIC_FANGS, MOVE_POISON_FANG, MOVE_ICE_FANG
    },
    {
    .lvl = -2,
    .species = SPECIES_MALAMAR,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_SUPERPOWER, MOVE_THROAT_CHOP, MOVE_PSYCHO_CUT, MOVE_ROCK_SLIDE
    }
};

// Mossdeep Space Center

static const struct TrainerMonItemCustomMoves sParty_Grunt16[] = {
    {
    .lvl = -1,
    .species = SPECIES_MIGHTYENA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_IRON_TAIL, MOVE_HOWL
    },
    {
    .lvl = -1,
    .species = SPECIES_CAMERUPT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_LAVA_PLUME, MOVE_DOUBLE_EDGE, MOVE_GROWTH
    },
    {
    .lvl = -1,
    .species = SPECIES_SHIFTRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SUNNY_DAY, MOVE_SOLAR_BLADE, MOVE_HEAT_WAVE, MOVE_KNOCK_OFF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt23[] = {
    {
    .lvl = -1,
    .species = SPECIES_FLYGON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_U_TURN, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW
    },
    {
    .lvl = -1,
    .species = SPECIES_CROBAT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FLY, MOVE_TOXIC, MOVE_ROOST, MOVE_SUPER_FANG
    },
    {
    .lvl = -1,
    .species = SPECIES_DRAPION,
    .ability = 1, // Sniper
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_ICE_FANG, MOVE_FOCUS_ENERGY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt32[] = {
    {
    .lvl = -1,
    .species = SPECIES_SALAZZLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SLUDGE_BOMB, MOVE_FIRE_BLAST, MOVE_FAKE_OUT, MOVE_DRAGON_PULSE
    },
    {
    .lvl = -1,
    .species = SPECIES_PALOSSAND,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_SHORE_UP
    },
    {
    .lvl = -1,
    .species = SPECIES_AMOONGUSS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_SPORE, MOVE_INGRAIN, MOVE_SLUDGE_BOMB, MOVE_FOUL_PLAY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt33[] = {
    {
    .lvl = -1,
    .species = SPECIES_TORKOAL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_LAVA_PLUME, MOVE_SHELL_SMASH, MOVE_CLEAR_SMOG
    },
    {
    .lvl = -1,
    .species = SPECIES_CLAYDOL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_ANCIENT_POWER
    },
    {
    .lvl = -1,
    .species = SPECIES_RHYPERIOR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_CRUNCH, MOVE_ICE_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt34[] = { // Three in a row
    {
    .lvl = -1,
    .species = SPECIES_PYROAR,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYPER_BEAM, MOVE_FIRE_BLAST, MOVE_DARK_PULSE, MOVE_WILD_CHARGE
    },
    {
    .lvl = -1,
    .species = SPECIES_PANGORO,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_GUNK_SHOT, MOVE_ZEN_HEADBUTT
    },
    {
    .lvl = -1,
    .species = SPECIES_NIDOKING,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTH_POWER, MOVE_ICE_PUNCH, MOVE_SLUDGE_WAVE, MOVE_FIRE_BLAST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt35[] = {
    {
    .lvl = -1,
    .species = SPECIES_HIPPOWDON,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_YAWN, MOVE_FIRE_FANG
    },
    {
    .lvl = -1,
    .species = SPECIES_SANDSLASH,
    .ability = 2, // Sand Rush
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt36[] = {
    {
    .lvl = -1,
    .species = SPECIES_LIEPARD,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ASSIST, MOVE_THUNDER_WAVE, MOVE_U_TURN, MOVE_CHARM
    }, 
    {
    .lvl = -1,
    .species = SPECIES_INCINEROAR,
    .ability = 2, // Intimidate
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DARKEST_LARIAT, MOVE_FLARE_BLITZ, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_MAMOSWINE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_SUPERPOWER
    }
};

static const struct TrainerMonItemCustomMoves sParty_TabithaMossdeep[] = {
    {
    .lvl = 0,
    .species = SPECIES_GIGALITH,
    .ability = 1, // Sand Stream
    .heldItem = ITEM_PASSHO_BERRY,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_WEATHER_BALL, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_THUNDERBOLT
    },
    {
    .lvl = 0,
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 0, // Sheer Force
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_FLARE_BLITZ, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE
    },
    {
    .lvl = 2,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_STEELIXITE,
    .ability = 0, // Strong Jaw -> Sand Force
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_GYRO_BALL, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_SHORE_UP
    },
    {
    .lvl = 0,
    .species = SPECIES_GLISCOR,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, // Poison Heal
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_EARTHQUAKE, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 0, // Sand Rush
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_GASTRODON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Storm Drain
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_EARTH_POWER, MOVE_SCALD, MOVE_TOXIC, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_CourtneyMossdeep[] = {
    {
    .lvl = 0, 
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 2, // Drought
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HEAT_WAVE, MOVE_MOONBLAST, MOVE_SOLAR_BEAM, MOVE_WILL_O_WISP
    },
    {
    .lvl = 0, 
    .species = SPECIES_KROOKODILE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_KNOCK_OFF, MOVE_HIGH_HORSEPOWER, MOVE_STONE_EDGE, MOVE_IRON_TAIL
    },
    {
    .lvl = 1, 
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .ability = 1, // Flash Fire -> Solar Power
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB
    }
};

static const struct TrainerMonItemCustomMoves sParty_MaxieMossdeep[] = {
    {
    .lvl = 1,
    .species = SPECIES_VICTREEBEL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Chlorophyll
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_SOLAR_BLADE, MOVE_POISON_JAB, MOVE_WEATHER_BALL, MOVE_SLEEP_POWDER
    },
    {
    .lvl = 1,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_FLYING_GEM,
    .ability = 2, // Infiltrator
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_HYPNOSIS, MOVE_SUPER_FANG
    },
    {
    .lvl = 2,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_CAMERUPTITE,
    .ability = 2, // Anger Point (for Trace) -> Sheer Force
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_EARTH_POWER, MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_FLASH_CANNON
    }
};

static const struct TrainerMonItemCustomMoves sParty_StevenMossdeep[] = {
    {
    .lvl = 1,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_BIG_ROOT,
    .ability = 2, // Storm Drain
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_GIGA_DRAIN, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_RECOVER
    },
    {
    .lvl = 1,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Rock Head
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_TAILWIND
    },
    {
    .lvl = 2,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_METAGROSSITE,
    .ability = 0, // Clear Body -> Tough Claws
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_HAMMER_ARM, MOVE_BULLET_PUNCH
    }
};

// Seafloor Cavern

static const struct TrainerMonItemCustomMoves sParty_ShellySeafloorCavern[] = {
{
    .lvl = 0,
    .species = SPECIES_NINETALES_ALOLAN,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 2, // Snow Warning
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_AURORA_VEIL
    },
    {
    .lvl = 0,
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_PETAYA_BERRY,
    .ability = 1, // Slush Rush
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_FLASH_CANNON, MOVE_GRASS_KNOT
    },
    {
    .lvl = 1,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Adaptability
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT, MOVE_DRAGON_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_CLEFABLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_MYSTICAL_FIRE, MOVE_DRAINING_KISS, MOVE_STORED_POWER, MOVE_CALM_MIND
    },
    {
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .ability = 1, // Swift Swim
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_BLIZZARD
    },
    {
    .lvl = 2,
    .species = SPECIES_BEEDRILL,
    .heldItem = ITEM_BEEDRILLITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_KNOCK_OFF
    }
};

static const struct TrainerMonItemCustomMoves sParty_Archie[] = {
    {
    .lvl = 1,
    .species = SPECIES_KYOGRE,
    .heldItem = ITEM_NONE,
    .ability = 0, // Drizzle
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_CALM_MIND
    },
    {
    .lvl = 1,
    .species = SPECIES_GOODRA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Hydration
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_DRAGON_RUSH, MOVE_AQUA_TAIL, MOVE_REST, MOVE_CURSE
    },
    {
    .lvl = 1,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 2, // Rain Dish
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WATERFALL, MOVE_POISON_JAB, MOVE_SWORDS_DANCE, MOVE_PROTECT
    },
    {
    .lvl = 1,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_WATERFALL, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_HYPNOSIS
    },
    {
    .lvl = 1,
    .species = SPECIES_EELEKTROSS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_THUNDER, MOVE_GRASS_KNOT, MOVE_FLASH_CANNON, MOVE_ACID_SPRAY
    },
    {
    .lvl = 2,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SHARPEDONITE,
    .ability = 2, // Speed Boost-> Strong Jaw
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_CLOSE_COMBAT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt5[] = {
    {
    .lvl = -1,
    .species = SPECIES_MIGHTYENA,
    .ability = 2, // Moxie
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_ICE_FANG, MOVE_DOUBLE_EDGE
    },
    {
    .lvl = -1,
    .species = SPECIES_CROBAT,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ACROBATICS, MOVE_SLUDGE_BOMB, MOVE_CRUNCH, MOVE_GIGA_DRAIN
    },
    {
    .lvl = -1,
    .species = SPECIES_SHARPEDO,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_EARTHQUAKE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt6[] = {
    {
    .lvl = -1,
    .species = SPECIES_HUNTAIL,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_CRUNCH, MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_SHELL_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_MUK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_GUNK_SHOT, MOVE_FIRE_BLAST, MOVE_TOXIC, MOVE_MINIMIZE
    },
    {
    .lvl = -1,
    .species = SPECIES_SCRAFTY,
    .ability = 2, // Intimidate
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DRAIN_PUNCH, MOVE_CRUNCH, MOVE_HEAD_SMASH, MOVE_EARTHQUAKE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt7[] = {
    {
    .lvl = -1,
    .species = SPECIES_WAILORD,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DIVE, MOVE_BOUNCE, MOVE_DOUBLE_EDGE, MOVE_AQUA_RING
    },
    {
    .lvl = -1,
    .species = SPECIES_SKUNTANK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_TOXIC, MOVE_PROTECT
    },
    {
    .lvl = -1,
    .species = SPECIES_SEAKING,
    .ability = 2, // Lightningrod
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt9[] = {
    {
    .lvl = -1,
    .species = SPECIES_GOREBYSS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SHELL_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_PURUGLY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FAKE_OUT, MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_TOXAPEX,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_TOXIC, MOVE_BANEFUL_BUNKER, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Grunt27[] = {
    {
    .lvl = -1,
    .species = SPECIES_MANDIBUZZ,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_KNOCK_OFF, MOVE_BRAVE_BIRD, MOVE_BONE_RUSH, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_GYARADOS,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BOUNCE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST
    },
    {
    .lvl = -1,
    .species = SPECIES_ARBOK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_COIL, MOVE_SEED_BOMB
    }
};

// Sootopolis Gym

static const struct TrainerMonItemCustomMoves sParty_Connie[] = {
    {
    .lvl = -1,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 2, // Lightningrod
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 2, // Analytic
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_LUMINEON,
    .heldItem = ITEM_WATER_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SURF, MOVE_ICE_BEAM, MOVE_DAZZLING_GLEAM, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Andrea[] = {
    {
    .lvl = -1,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Skill Link
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_SHELL_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_FLOATZEL,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 2, // Water Veil
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_DRAIN_PUNCH, MOVE_BULK_UP
    },
    {
    .lvl = -1,
    .species = SPECIES_JELLICENT,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_HEX, MOVE_STRENGTH_SAP, MOVE_WILL_O_WISP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Daphne[] = {
    {
    .lvl = -1,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Soul Heart
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_ATTRACT
    },
    {
    .lvl = -1,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_GROUND_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WATERFALL, MOVE_ICICLE_CRASH, MOVE_DRILL_RUN, MOVE_DRAGON_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_SAMUROTT,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Keen Edge
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH, MOVE_X_SCISSOR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Annika[] = {
    {
    .lvl = -1,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_FLAME_ORB,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_AQUA_RING
    },
    {
    .lvl = -1,
    .species = SPECIES_PRIMARINA,
    .heldItem = ITEM_FAIRY_GEM,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_PSYCHIC
    },
    {
    .lvl = -1,
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_SCOPE_LENS,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_AQUA_TAIL, MOVE_ZEN_HEADBUTT, MOVE_CROSS_CHOP, MOVE_AQUA_JET
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tiffany[] = {
    {
    .lvl = -1,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT
    },
    {
    .lvl = -1,
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_DRAGON_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 1, // Storm Drain
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Crissy[] = {
    {
    .lvl = -1,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_DAMP_ROCK,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_SOAK
    },
    {
    .lvl = -1,
    .species = SPECIES_GOLISOPOD,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Shell Armor
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_DRILL_RUN, MOVE_BULK_UP
    },
    {
    .lvl = -1,
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_FLYING_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_SCALD, MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_TAILWIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Bethany[] = { // with Olivia
    {
    .lvl = -1,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_TRICK_ROOM, MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_ICE_BEAM
    },
    {
    .lvl = -1,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_PLAY_ROUGH, MOVE_BELLY_DRUM
    },
    {
    .lvl = -1,
    .species = SPECIES_RELICANTH,
    .heldItem = ITEM_ROCK_GEM,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_LIQUIDATION, MOVE_HEAD_SMASH, MOVE_ZEN_HEADBUTT, MOVE_YAWN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Olivia[] = { // with Bethany
    {
    .lvl = -1,
    .species = SPECIES_CARRACOSTA,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_STRENGTH, MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_AQUA_JET
    },
    {
    .lvl = -1,
    .species = SPECIES_ARAQUANID,
    .heldItem = ITEM_MYSTIC_WATER,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_MIRROR_COAT, MOVE_WIDE_GUARD
    },
    {
    .lvl = -1,
    .species = SPECIES_WISHIWASHI,
    .heldItem = ITEM_ICE_GEM,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_AQUA_TAIL, MOVE_ICE_BEAM, MOVE_U_TURN, MOVE_RETURN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brianna[] = {
    {
    .lvl = -1,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_WATER_SHURIKEN, MOVE_ICE_BEAM, MOVE_EXTRASENSORY, MOVE_LOW_KICK
    },
    {
    .lvl = -1,
    .species = SPECIES_DEWGONG,
    .heldItem = ITEM_MYSTIC_WATER,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FREEZE_DRY, MOVE_WATER_PULSE, MOVE_ENCORE, MOVE_FAKE_OUT
    },
    {
    .lvl = -1,
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_RECOVER, MOVE_HAZE, MOVE_ICY_WIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Bridget[] = {
    {
    .lvl = -1,
    .species = SPECIES_GOREBYSS,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_SHELL_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_WATER_GEM,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_SHELL_SMASH
    },
    {
    .lvl = -1,
    .species = SPECIES_TOXAPEX,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_LIQUIDATION, MOVE_TOXIC, MOVE_POISON_JAB, MOVE_PAYBACK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Juan1[] = {
    {
    .lvl = 1,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SCALD, MOVE_BOOMBURST, MOVE_EARTH_POWER, MOVE_PERISH_SONG   
    },
    {
    .lvl = 1,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_GIGA_DRAIN, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 1,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 1,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Hydration
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, MOVE_THUNDER, MOVE_PSYCHIC
    },
    {
    .lvl = 1,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_SUPERPOWER
    },
    {
    .lvl = 2,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_KINGDRANITE,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_DRACO_METEOR, MOVE_FLASH_CANNON  
    }
};

static const struct TrainerMonItemCustomMoves sParty_Juan2[] = { // singles
    {
    .lvl = 0,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SCALD, MOVE_BOOMBURST, MOVE_EARTH_POWER, MOVE_PERISH_SONG   
    },
    {
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_LEAF_STORM, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 0,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Hydration
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_FREEZE_DRY, MOVE_THUNDER, MOVE_PSYCHIC
    },
    {
    .lvl = 0,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_SUPERPOWER
    },
    {
    .lvl = 0,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_KINGDRANITE,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_DRACO_METEOR, MOVE_FLASH_CANNON  
    }
};

static const struct TrainerMonItemCustomMoves sParty_Juan3[] = { // Doubles
    {
    .lvl = 0,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SURF, MOVE_PROTECT, MOVE_EARTH_POWER, MOVE_PSYCHIC   
    },
    {
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_ABSORB_BULB,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_LEAF_STORM, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 0,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 1, // Storm Drain
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SURF, MOVE_FREEZE_DRY, MOVE_THUNDER, MOVE_PSYCHIC
    },
    {
    .lvl = 0,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_GROUND_GEM,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_HIGH_HORSEPOWER, MOVE_ICE_PUNCH, MOVE_SUPERPOWER
    },
    {
    .lvl = 0,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_KINGDRANITE,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_HURRICANE, MOVE_DRACO_METEOR, MOVE_FLASH_CANNON  
    }
};

static const struct TrainerMonItemCustomMoves sParty_Juan4[] = { // singles legendaries
    {
    .lvl = 0,
    .species = SPECIES_KYOGRE,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_ORIGIN_PULSE  
    },
    {
    .lvl = 0,
    .species = SPECIES_MANAPHY,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_CALM_MIND, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_REST
    },
    {
    .lvl = 0,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_STONE_EDGE, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_PALKIA,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_EARTH_POWER
    },
    {
    .lvl = 0,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_BULK_UP
    },
    {
    .lvl = 0,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_KINGDRANITE,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_DRACO_METEOR, MOVE_FLASH_CANNON  
    }
};

static const struct TrainerMonItemCustomMoves sParty_Juan5[] = { // doubles legendaries
    {
    .lvl = 0,
    .species = SPECIES_KYOGRE,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_ORIGIN_PULSE  
    },
    {
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_LEAF_STORM, MOVE_MUDDY_WATER, MOVE_ICE_BEAM, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 0,
    .species = SPECIES_GASTRODON_EAST_SEA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 1, // Storm Drain
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_MUDDY_WATER, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_PALKIA,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_MUDDY_WATER, MOVE_SPACIAL_REND, MOVE_THUNDER, MOVE_EARTH_POWER
    },
    {
    .lvl = 0,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_ICE_GEM,
    .ability = 2, // Swift Swim
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_LIQUIDATION, MOVE_HIGH_HORSEPOWER, MOVE_ICE_PUNCH, MOVE_SUPERPOWER
    },
    {
    .lvl = 0,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_KINGDRANITE,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_HURRICANE, MOVE_DRACO_METEOR, MOVE_FLASH_CANNON  
    }
};

// Meteor Falls

static const struct TrainerMonItemCustomMoves sParty_JohnAndJay1[] = {
    {
    .lvl = -2,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -2,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_PSYCHIC_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -2,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .moves = MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_MACH_PUNCH
    },
    {
    .lvl = -2,
    .species = SPECIES_CRABOMINABLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ICE_HAMMER, MOVE_HAMMER_ARM, MOVE_PROTECT, MOVE_CRABHAMMER
    }
};

static const struct TrainerMonItemCustomMoves sParty_JohnAndJay2[] = {
    {
    .lvl = -1,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -1,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_PSYCHIC_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .moves = MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_MACH_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_CRABOMINABLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ICE_HAMMER, MOVE_HAMMER_ARM, MOVE_PROTECT, MOVE_CRABHAMMER
    }
};

static const struct TrainerMonItemCustomMoves sParty_JohnAndJay3[] = {
    {
    .lvl = 0,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE
    },
    {
    .lvl = 0,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_PSYCHIC_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .moves = MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_MACH_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_CRABOMINABLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ICE_HAMMER, MOVE_HAMMER_ARM, MOVE_PROTECT, MOVE_CRABHAMMER
    }
};

static const struct TrainerMonItemCustomMoves sParty_JohnAndJay4[] = {
    {
    .lvl = 0,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE
    },
    {
    .lvl = 0,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_MEDICHAMITE,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .moves = MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_ROCK_SLIDE, MOVE_MACH_PUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_CRABOMINABLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ICE_HAMMER, MOVE_HAMMER_ARM, MOVE_PROTECT, MOVE_CRABHAMMER
    },
    {
    .lvl = 0,
    .species = SPECIES_TERRAKION,
    .heldItem = ITEM_ROCK_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ROCK_SLIDE, MOVE_CLOSE_COMBAT, MOVE_X_SCISSOR, MOVE_PROTECT
    },
    {
    .lvl = 0,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_FAKE_OUT, MOVE_HEAT_WAVE, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT
    }
};


static const struct TrainerMonItemCustomMoves sParty_Nicolas1[] = {
    {
    .lvl = -2,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_EXPERT_BELT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_BOOMBURST
    },
    {
    .lvl = -2,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, // Iron Barbs
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_TOXIC, MOVE_FIRE_SPIN, MOVE_IRON_DEFENSE, MOVE_ATTRACT
    },
    {
    .lvl = -2,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HURRICANE, MOVE_FIRE_BLAST, MOVE_COTTON_GUARD, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_HYDRO_PUMP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nicolas2[] = {
    {
    .lvl = -1,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_EXPERT_BELT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_BOOMBURST
    },
    {
    .lvl = -1,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, // Iron Barbs
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_TOXIC, MOVE_FIRE_SPIN, MOVE_IRON_DEFENSE, MOVE_ATTRACT
    },
    {
    .lvl = -1,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HURRICANE, MOVE_FIRE_BLAST, MOVE_COTTON_GUARD, MOVE_ROOST
    },
    {
    .lvl = -1,
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_HYDRO_PUMP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nicolas3[] = {
    {
    .lvl = 0,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_EXPERT_BELT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_WATER_PULSE, MOVE_FLAMETHROWER, MOVE_BOOMBURST
    },
    {
    .lvl = 0,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, // Iron Barbs
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_TOXIC, MOVE_FIRE_SPIN, MOVE_IRON_DEFENSE, MOVE_ATTRACT
    },
    {
    .lvl = 0,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_FIRE_BLAST, MOVE_COTTON_GUARD, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_HYDRO_PUMP
    },
    {
    .lvl = 0,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_OUTRAGE, MOVE_IRON_TAIL, MOVE_FIRE_PUNCH, MOVE_DRAGON_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nicolas4[] = {
    {
    .lvl = 0,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_EXPERT_BELT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_WATER_PULSE, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 0,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, // Iron Barbs
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_TOXIC, MOVE_FIRE_SPIN, MOVE_IRON_DEFENSE, MOVE_ATTRACT
    },
    {
    .lvl = 0,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_HYPER_VOICE, MOVE_FIRE_BLAST, MOVE_COTTON_GUARD, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_FOCUS_BLAST, MOVE_HYDRO_PUMP
    },
    {
    .lvl = 0,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_OUTRAGE, MOVE_IRON_TAIL, MOVE_FIRE_PUNCH, MOVE_DRAGON_DANCE
    },
/*     {
    .lvl = 0,
    .species = SPECIES_DURALUDON,
    .heldItem = ITEM_SALAC_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_DRACO_METEOR, MOVE_THUNDER, MOVE_BODY_PRESS
    } */
};

static const struct TrainerMonItemCustomMoves sParty_Steven[] = {
    {
    .lvl = 3,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Sturdy
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_DRILL_PECK, MOVE_TOXIC, MOVE_SPIKES, MOVE_ROOST
    },
    {
    .lvl = 3,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Rock Head
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_STRENGTH, MOVE_EARTHQUAKE, MOVE_HONE_CLAWS
    },
    {
    .lvl = 3,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_BIG_ROOT,
    .ability = 2, // Storm Drain
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_RECOVER, MOVE_ACID_SPRAY
    },
    {
    .lvl = 3,
    .species = SPECIES_MELMETAL,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Iron Fist
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .moves = MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH
    },
    {
    .lvl = 3,
    .species = SPECIES_HEATRAN,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 0, // Flash Fire
    .spread = SPREAD_HP_ICE_TIMID,
    .moves = MOVE_ERUPTION, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER
    },
    {
    .lvl = 5,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_METAGROSSITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_GRASS_KNOT, MOVE_EARTHQUAKE
    }
};

// Victory Road

static const struct TrainerMonItemCustomMoves sParty_Albert[] = {
    {
    .lvl = -1,
    .species = SPECIES_RHYPERIOR,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 1, // Solid Rock
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_METAL_BURST, MOVE_STEALTH_ROCK
    },
    {
    .lvl = -1,
    .species = SPECIES_SIGILYPH,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_STORED_POWER, MOVE_COSMIC_POWER, MOVE_ROOST, MOVE_PSYCHO_SHIFT
    },
    {
    .lvl = 0,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_SABLENITE,
    .ability = 2, // Prankster
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DARK_PULSE, MOVE_WILL_O_WISP, MOVE_CALM_MIND, MOVE_RECOVER
    },
    {
    .lvl = -1,
    .species = SPECIES_WEAVILE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_KNOCK_OFF, MOVE_ICICLE_CRASH, MOVE_LOW_KICK, MOVE_POISON_JAB
    },
    {
    .lvl = -1,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_FACADE, MOVE_MACH_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Hope[] = {
    {
    .lvl = -1,
    .species = SPECIES_FORRETRESS,
    .heldItem = ITEM_CUSTAP_BERRY,
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_STEALTH_ROCK, MOVE_SPIKES, MOVE_TOXIC_SPIKES, MOVE_EXPLOSION
    },
    {
    .lvl = -1,
    .species = SPECIES_LILLIGANT,
    .heldItem = ITEM_BIG_ROOT,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_GIGA_DRAIN, MOVE_DRAINING_KISS, MOVE_EARTH_POWER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_SALAZZLE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_HP_GRASS_TIMID,
    .moves = MOVE_SLUDGE_BOMB, MOVE_FIRE_BLAST, MOVE_HIDDEN_POWER, MOVE_NASTY_PLOT
    },
    {
    .lvl = 0,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_AERODACTYLITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_STRENGTH, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL
    },
    {
    .lvl = -1,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Water Absorb
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_WISH, MOVE_BATON_PASS, MOVE_TOXIC
    }
};

static const struct TrainerMonItemCustomMoves sParty_Shannon[] = {
    {
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_BLAZIKENITE,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_PROTECT, MOVE_BATON_PASS
    },
    {
    .lvl = -1,
    .species = SPECIES_ESCAVALIER,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_LEECH_LIFE, MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_DRILL_RUN
    },
    {
    .lvl = -1,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_OUTRAGE, MOVE_WING_ATTACK, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED
    },
    {
    .lvl = -1,
    .species = SPECIES_SAWSBUCK,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_HORN_LEECH, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_RIBOMBEE,
    .heldItem = ITEM_PSYCHIC_GEM,
    .ability = 1, // Shield Dust
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BUG_BUZZ, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Samuel[] = {
    {
    .lvl = -1,
    .species = SPECIES_GALVANTULA,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL, MOVE_STICKY_WEB
    },
    {
    .lvl = -1,
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_EARTH_POWER, MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_THUNDER
    },
    {
    .lvl = -1,
    .species = SPECIES_PORYGON_Z,
    .heldItem = ITEM_SILK_SCARF,
    .ability = 0, // Adaptability
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_TECHNO_BLAST, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT
    },
    {
    .lvl = 0,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_GENGARITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_AURA_SPHERE, MOVE_ENERGY_BALL
    },
    {
    .lvl = -1,
    .species = SPECIES_DRUDDIGON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Sheer Force
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAGON_RUSH, MOVE_GUNK_SHOT, MOVE_FIRE_PUNCH, MOVE_CRUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Julie[] = {
    {
    .lvl = -1,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Drought
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_STEALTH_ROCK, MOVE_RAPID_SPIN
    },
    {
    .lvl = -1,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Chlorophyll
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SLUDGE_BOMB
    },
    {
    .lvl = -1,
    .species = SPECIES_HELIOLISK,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 2, // Solar Power
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_WEATHER_BALL, MOVE_DARK_PULSE
    },
    {
    .lvl = -1,
    .species = SPECIES_LYCANROC,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_STRENGTH, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, MOVE_ACCELEROCK
    },
    {
    .lvl = 0,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_ALAKAZITE,
    .ability = 2, // Magic Guard
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT
    },
    {
    .lvl = 0,
    .species = SPECIES_TYRANTRUM,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 0, // Strong Jaw
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_STRENGTH, MOVE_OUTRAGE, MOVE_FIRE_FANG, MOVE_POISON_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_Owen[] = {
    {
    .lvl = -1,
    .species = SPECIES_TORTERRA,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, // Solid Rock
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_WOOD_HAMMER, MOVE_ROAR
    },
    {
    .lvl = -1,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Reckless
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_U_TURN
    },
    {
    .lvl = -1,
    .species = SPECIES_SYLVEON,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND
    },
    {
    .lvl = 0,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_LUCARIONITE,
    .ability = 2, // Justified
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_METEOR_MASH, MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_BULLET_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Clear Body
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dianne[] = { // with Felix
    {
    .lvl = 0,
    .species = SPECIES_ABOMASNOW,
    .heldItem = ITEM_ABOMASITE,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_ICE_SHARD
    },
    {
    .lvl = -1,
    .species = SPECIES_MAGMORTAR,
    .heldItem = ITEM_ICE_GEM,
    .ability = 1, // Mega Launcher
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HEAT_WAVE, MOVE_THUNDERBOLT, MOVE_WEATHER_BALL, MOVE_AURA_SPHERE
    },
    {
    .lvl = -1,
    .species = SPECIES_RAMPARDOS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_ROCK_SLIDE, MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_ZEN_HEADBUTT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Felix[] = { // with Dianne
    {
    .lvl = -1,
    .species = SPECIES_JYNX,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 2, // Dry Skin
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYCHIC, MOVE_BLIZZARD, MOVE_LOVELY_KISS, MOVE_AURORA_VEIL
    },
    {
    .lvl = 0,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_SCEPTILITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SOLAR_BEAM, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_SYNTHESIS
    },
    {
    .lvl = -1,
    .species = SPECIES_AVALUGG,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Ice Body
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_AVALANCHE, MOVE_TOXIC, MOVE_PROTECT, MOVE_IRON_DEFENSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Caroline[] = {
    {
    .lvl = 0,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_TYRANITARITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_LEAVANNY,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 2, // Overcoat
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_STICKY_WEB
    },
    {
    .lvl = -1,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Sand Rush
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_PLAY_ROUGH, MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS
    },
    {
    .lvl = -1,
    .species = SPECIES_SANDSLASH,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Sand Rush
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_DUGTRIO_ALOLAN,
    .heldItem = ITEM_STEEL_GEM,
    .ability = 2, // Sand Force
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Vito[] = {
    {
    .lvl = -1,
    .species = SPECIES_BISHARP,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_METAL_BURST, MOVE_SUCKER_PUNCH, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -1,
    .species = SPECIES_DELPHOX,
    .heldItem = ITEM_POWER_HERB,
    .ability = 1, // Pyromancy
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FIRE_BLAST, MOVE_PSYCHIC, MOVE_SOLAR_BEAM, MOVE_NASTY_PLOT
    },
    {
    .lvl = -1,
    .species = SPECIES_DODRIO,
    .heldItem = ITEM_FIGHTING_GEM,
    .ability = 0, // Moxie
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_ELECTIVIRE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Motor Drive
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_VOLT_TACKLE, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_LURANTIS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Contrary
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_LEAF_STORM, MOVE_SUPERPOWER, MOVE_LEECH_LIFE, MOVE_KNOCK_OFF
    },
    {
    .lvl = 0,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_FLYGONITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BOOMBURST, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_QUIVER_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Michelle[] = {
    {
    .lvl = -1,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_EVIOLITE,
    .ability = 0, // Natural Cure
    .spread = SPREAD_CHANSEY,
    .moves = MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_SOFT_BOILED, MOVE_STEALTH_ROCK
    },
    {
    .lvl = -1,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Triage
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_EARTH_POWER, MOVE_CALM_MIND
    },
    {
    .lvl = -1,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, // Guts
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_STRENGTH, MOVE_FACADE, MOVE_KNOCK_OFF
    },
    {
    .lvl = -1,
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_PULSE, MOVE_FIRE_BLAST, MOVE_FLASH_CANNON, MOVE_NASTY_PLOT
    },
    {
    .lvl = -1,
    .species = SPECIES_PROBOPASS,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 1, // Magnet Pull
    .spread = SPREAD_HP_FIRE_MODEST,
    .moves = MOVE_SUNNY_DAY, MOVE_HIDDEN_POWER, MOVE_EARTH_POWER, MOVE_POWER_GEM
    },
    {
    .lvl = 0,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_GARDEVOIRITE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_THUNDERBOLT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Mitchell[] = { // with Halle
    {
    .lvl = 0,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_MACHAMPITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_BULLET_PUNCH
    },
    {
    .lvl = -1,
    .species = SPECIES_SHIINOTIC,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, // Effect Spore
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_STRENGTH_SAP, MOVE_SPORE, MOVE_DAZZLING_GLEAM, MOVE_MOONLIGHT
    },
    {
    .lvl = -1,
    .species = SPECIES_GOTHITELLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Shadow Tag
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PSYCHIC, MOVE_FLATTER, MOVE_NASTY_PLOT, MOVE_THUNDERBOLT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Halle[] = { // with Mitchell
    {
    .lvl = 0,
    .species = SPECIES_PINSIR,
    .heldItem = ITEM_PINSIRITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_FEINT, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE
    },
    {
    .lvl = -1,
    .species = SPECIES_PACHIRISU,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Fur Coat
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_FOLLOW_ME, MOVE_SUPER_FANG, MOVE_NUZZLE, MOVE_CHARM
    },
    {
    .lvl = -1,
    .species = SPECIES_LICKILICKY,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Own Tempo
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_FIRE_BLAST, MOVE_THUNDER, MOVE_ICE_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edgar[] = {
    {
    .lvl = -1,
    .species = SPECIES_TREVENANT,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = 2, // Grassy Surge
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_HORN_LEECH, MOVE_WILL_O_WISP, MOVE_SHADOW_CLAW, MOVE_LEECH_SEED
    },
    {
    .lvl = -1,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Rock Head
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_HEAD_SMASH, MOVE_WOOD_HAMMER, MOVE_LOW_KICK, MOVE_EXPLOSION
    },
    {
    .lvl = -1,
    .species = SPECIES_VENOMOTH,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Tinted Lens
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BUG_BUZZ, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_QUIVER_DANCE
    },
    {
    .lvl = -1,
    .species = SPECIES_KLINKLANG,
    .heldItem = ITEM_GRASSY_SEED,
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_GEAR_GRIND, MOVE_WILD_CHARGE, MOVE_SHIFT_GEAR, MOVE_TOXIC
    },
    {
    .lvl = -1,
    .species = SPECIES_CHESNAUGHT,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 2, // Bulletproof
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_WOOD_HAMMER, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SHELL_SMASH
    },
    {
    .lvl = 0,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_MANECTITE,
    .spread = SPREAD_HP_GRASS_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_FLAMETHROWER, MOVE_HIDDEN_POWER, MOVE_AURORA_BEAM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Quincy[] = { // with Katelynn
    {
    .lvl = 0,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_CHOPLE_BERRY,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_FIRE_BLAST
    },
    {
    .lvl = 0,
    .species = SPECIES_DURANT,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 1, // Hustle
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_ENTRAINMENT, MOVE_X_SCISSOR, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE
    },
    {
    .lvl = 0,
    .species = SPECIES_BUTTERFREE,
    .heldItem = ITEM_BUTTERFRENITE,
    .ability = 0, // Compound Eyes? Doesn't matter anyway
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_ENERGY_BALL, MOVE_SLEEP_POWDER, MOVE_TAILWIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Katelynn[] = { // with Quincy
    {
    .lvl = 0,
    .species = SPECIES_AUDINO,
    .heldItem = ITEM_AUDINITE,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SKILL_SWAP, MOVE_MOONBLAST, MOVE_HEAL_PULSE, MOVE_HELPING_HAND
    },
    {
    .lvl = 0,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_DOUBLE_EDGE, MOVE_SLACK_OFF, MOVE_BULK_UP, MOVE_NIGHT_SLASH
    },
    {
    .lvl = 0,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 0, // Blaze
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FAKE_OUT, MOVE_HEAT_WAVE, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT
    }
};

// SS Tidal

static const struct TrainerMonItemCustomMoves sParty_LeaAndJed[] = {
    {
    .lvl = -2,
    .species = SPECIES_MILTANK,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BODY_SLAM, MOVE_ATTRACT, MOVE_MILK_DRINK, MOVE_HIGH_HORSEPOWER
    },
    {
    .lvl = -2,
    .species = SPECIES_TAUROS,
    .ability = 1, // Rampage
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_GIGA_IMPACT, MOVE_ZEN_HEADBUTT, MOVE_CLOSE_COMBAT, MOVE_ATTRACT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Naomi[] = {
    {
    .lvl = -2,
    .species = SPECIES_TSAREENA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_POWER_WHIP, MOVE_HIGH_JUMP_KICK, MOVE_PUNISHMENT, MOVE_PLAY_ROUGH
    },
    {
    .lvl = -2,
    .species = SPECIES_MAWILE,
    .ability = 1, // Intimidate
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_STOCKPILE, MOVE_SWALLOW
    },
    {
    .lvl = -2,
    .species = SPECIES_SALAZZLE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FIRE_BLAST, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_ATTRACT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Garret[] = {
    {
    .lvl = -2,
    .species = SPECIES_PERSIAN_ALOLAN,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_FOUL_PLAY, MOVE_PARTING_SHOT, MOVE_TOXIC, MOVE_FAKE_OUT
    },
    {
    .lvl = -2,
    .species = SPECIES_FURFROU_KABUKI_TRIM,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HEADBUTT, MOVE_THUNDER_WAVE, MOVE_COTTON_GUARD, MOVE_ENDEAVOR
    },
    {
    .lvl = -2,
    .species = SPECIES_WEAVILE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_LOW_KICK, MOVE_POISON_JAB
    }
};

static const struct TrainerMonItemCustomMoves sParty_Micah[] = {
    {
    .lvl = -2,
    .species = SPECIES_MANECTRIC,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_THUNDER_WAVE, MOVE_SIGNAL_BEAM
    },
    {
    .lvl = -2,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_LAPRASITE,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SPARKLING_ARIA, MOVE_FREEZE_DRY, MOVE_RAIN_DANCE, MOVE_REST
    }
};

static const struct TrainerMonItemCustomMoves sParty_Colton[] = {
    {
    .lvl = 10,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL
    },
    {
    .lvl = 10,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL
    },
    {
    .lvl = 10,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL
    },
    {
    .lvl = 10,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL
    },
    {
    .lvl = 10,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL
    },
    {
    .lvl = 10,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL
    }
};

static const struct TrainerMonItemCustomMoves sParty_Thomas[] = {
    {
    .lvl = -2,
    .species = SPECIES_BRAVIARY,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_CLOSE_COMBAT, MOVE_ROOST
    },
    {
    .lvl = -2,
    .species = SPECIES_SIMISAGE,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_NASTY_PLOT, MOVE_FOCUS_BLAST
    },
    {
    .lvl = -2,
    .species = SPECIES_SCOLIPEDE,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_ROCK_CLIMB, MOVE_PROTECT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Phillip[] = { // with Leonard
    {
    .lvl = -2,
    .species = SPECIES_MACHAMP,
    .ability = 1, // No Guard
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE, MOVE_KNOCK_OFF, MOVE_DUAL_CHOP
    },
    {
    .lvl = -2,
    .species = SPECIES_BASCULIN,
    .ability = 1, // Adaptability
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_PSYCHIC_FANGS
    }
};

static const struct TrainerMonItemCustomMoves sParty_Leonard[] = { // with Phillip 
    {
    .lvl = -2,
    .species = SPECIES_CARRACOSTA,
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_LIQUIDATION, MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_WIDE_GUARD
    },
    {
    .lvl = -2,
    .species = SPECIES_SHARPEDO,
    .ability = 2, // Speed Boost
    .spread = SPREAD_31_IV_80_EV,
    .moves = MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_ICE_BEAM, MOVE_PROTECT
    }
};

// Ever Grande/Pokemon League

static const struct TrainerMonItemCustomMoves sParty_Sidney[] = {
    {
    .lvl = 1,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = 0, // Sand Stream
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_STONE_EDGE, MOVE_CRUNCH, MOVE_STEALTH_ROCK, MOVE_FIRE_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 1, // Sand Rush
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_KNOCK_OFF, MOVE_NEEDLE_ARM, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 1,
    .species = SPECIES_MUK_ALOLAN,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Poison Touch
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EXTRASENSORY, MOVE_GUNK_SHOT
    },
    {
    .lvl = 1,
    .species = SPECIES_MANDIBUZZ,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Overcoat
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_ROOST, MOVE_WHIRLWIND
    },
    {
    .lvl = 2,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_ABSOLITE,
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_FIRE_BLAST, MOVE_CLOSE_COMBAT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Phoebe[] = {
    {
    .lvl = 1,
    .species = SPECIES_MISMAGIUS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Pixilate
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_MYSTICAL_FIRE, MOVE_NASTY_PLOT
    },
    {
    .lvl = 1,
    .species = SPECIES_GOLURK,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Iron Fist
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SHADOW_PUNCH, MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_CHANDELURE,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 0, // Flash Fire
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_SHADOW_BALL, MOVE_FIRE_BLAST, MOVE_ENERGY_BALL, MOVE_PSYCHIC
    },
    {
    .lvl = 1,
    .species = SPECIES_DUSKNOIR,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE
    },
    {
    .lvl = 1,
    .species = SPECIES_AEGISLASH,
    .heldItem = ITEM_SPELL_TAG,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_SHADOW_SNEAK, MOVE_KINGS_SHIELD
    },
    {
    .lvl = 2,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_BANETTITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SHADOW_CLAW, MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_COTTON_GUARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Glacia[] = {
    {
    .lvl = 1,
    .species = SPECIES_ABOMASNOW,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 0, // Snow Warning
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_AURORA_VEIL
    },
    {
    .lvl = 1,
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 2, // Whiteout
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_FREEZE_DRY, MOVE_PSYCHIC, MOVE_AURORA_VEIL
    },
    {
    .lvl = 2,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Ice Body
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_SUPER_FANG
    },
    {
    .lvl = 1,
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Thick Fat
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EARTHQUAKE, MOVE_ICICLE_CRASH, MOVE_SUPERPOWER, MOVE_ICE_SHARD
    },
    {
    .lvl = 1,
    .species = SPECIES_GLACEON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Slush Rush
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_THUNDERBOLT, MOVE_SURF
    },
    {
    .lvl = 2,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_GLALITITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_ICE_SHARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Drake[] = {
    {
    .lvl = 1,
    .species = SPECIES_DRAGALGE,
    .heldItem = ITEM_POISON_GEM,
    .ability = 2, // Adaptability
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SLUDGE_WAVE, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST, MOVE_TOXIC_SPIKES
    },
    {
    .lvl = 1,
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Soundproof
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_OUTRAGE, MOVE_IRON_TAIL, MOVE_SHELL_SMASH
    },
    {
    .lvl = 1,
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Contrary
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_LEAF_STORM, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, MOVE_GLARE
    },
    {
    .lvl = 1,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_STRENGTH, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 1,
    .species = SPECIES_NAGANADEL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Beast Boost
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SLUDGE_WAVE, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT
    },
    {
    .lvl = 2,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SALAMENCITE,
    .ability = 0, // Intimidate -> Aerilate
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_DRAGON_DANCE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wallace[] = {
    {
    .lvl = 2,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_WEATHER_BALL, MOVE_EARTHQUAKE
    },
    {
    .lvl = 2,
    .species = SPECIES_LATIOS,
    .heldItem = ITEM_SOUL_DEW,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_DRACO_METEOR, MOVE_THUNDER, MOVE_AURA_SPHERE
    },
    {
    .lvl = 2,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_QUIVER_DANCE
    },
    {
    .lvl = 2,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 0, // Adaptability
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE, MOVE_DRAGON_DANCE
    },
    {
    .lvl = 2,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Levitate
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_HURRICANE, MOVE_BUG_BUZZ, MOVE_ENERGY_BALL
    },
    {
    .lvl = 3,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_MILOTICITE,
    .ability = 1, // Competitive -> Prism Scales
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_RECOVER
    }
};

// Placeholders

static const struct TrainerMonItemCustomMoves sParty_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Red[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Leaf[] = {
    {
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};

// Frontier Brains

static const struct TrainerMonItemCustomMoves sParty_LucyLavaridge[] = {
    {
    .lvl = 0,
    .species = SPECIES_SHUCKLE,
    .heldItem = ITEM_RED_CARD,
    .ability = 0, // Sturdy
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_STICKY_WEB, MOVE_STEALTH_ROCK, MOVE_INFESTATION, MOVE_TOXIC
    },
    {
    .lvl = 0,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_WATER_GEM,
    .ability = 1, // Competitive
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DRAGON_PULSE, MOVE_RECOVER
    },
    {
    .lvl = 0,
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Shed Skin
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .moves = MOVE_POWER_WHIP, MOVE_DRAGON_RUSH, MOVE_COIL, MOVE_REST
    },
    {
    .lvl = 0,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Sheer Force
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_ICE_FANG, MOVE_EXPLOSION
    },
    {
    .lvl = 0,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WATERFALL, MOVE_BOUNCE, MOVE_DRAGON_DANCE, MOVE_SUBSTITUTE
    },
    {
    .lvl = 1,
    .species = SPECIES_SEVIPER,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Merciless
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_DARK_PULSE
    }
};

static const struct TrainerMonItemCustomMoves sParty_SpenserFortree[] = {
    {
    .lvl = 0,
    .species = SPECIES_CROBAT,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 2, // Infiltrator
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .moves = MOVE_FLY, MOVE_ROOST, MOVE_PROTECT, MOVE_TOXIC
    },
    {
    .lvl = 0,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 0, // Truant
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_PLAY_ROUGH
    },
    {
    .lvl = 0,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_WILD_CHARGE, MOVE_CRUNCH
    },
    {
    .lvl = 0,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_WATER_GEM,
    .ability = 0, // Water Absorb
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FREEZE_DRY, MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_PSYCHIC
    },
    {
    .lvl = 0,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_VENUSAURITE,
    .ability = 0, // Overgrow -> Thick Fat
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER, MOVE_SLEEP_POWDER
    },
    {
    .lvl = 1,
    .species = SPECIES_SUICUNE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Pressure
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_CALM_MIND, MOVE_REST, MOVE_SLEEP_TALK
    }
};

static const struct TrainerMonItemCustomMoves sParty_GretaSlateport[] = {
    {
    .lvl = 0,
    .species = SPECIES_LANDORUS_THERIAN,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 0, // Intimidate
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_EARTHQUAKE, MOVE_STRENGTH, MOVE_STEALTH_ROCK, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 1, // Poison Heal
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_SEED_BOMB
    },
    {
    .lvl = 0,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Guts
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 1,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Magic Guard
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DARK_PULSE, MOVE_CALM_MIND, MOVE_STRENGTH_SAP, MOVE_TOXIC
    },
    {
    .lvl = 0,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_GENGARITE,
    .ability = 0, // Levitate -> Shadow Tag
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_NASTY_PLOT
    },
    {
    .lvl = 0,
    .species = SPECIES_TAPU_KOKO,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = 0, // Electric Surge
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_VOLT_SWITCH, MOVE_DAZZLING_GLEAM, MOVE_AURORA_BEAM, MOVE_GRASS_KNOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Buffel[] = {
    {
    .lvl = 0,
    .species = SPECIES_MIENSHAO,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 1, // Regenerator
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_CLOSE_COMBAT, MOVE_STRENGTH, MOVE_KNOCK_OFF, MOVE_U_TURN
    },
    {
    .lvl = 0,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_TOXIC
    },
    {
    .lvl = 0,
    .species = SPECIES_HAXORUS,
    .heldItem = ITEM_DRAGON_GEM,
    .ability = 1, // Mold Breaker
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_OUTRAGE, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_DRAGON_DANCE
    },
    {
    .lvl = 0,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Technician
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_BULLET_PUNCH, MOVE_U_TURN, MOVE_SUPERPOWER, MOVE_PURSUIT
    },
    {
    .lvl = 0,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 1, // Serene Grace
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_THUNDER_WAVE, MOVE_ROOST
    },
    {
    .lvl = 0,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_GARDEVOIRITE,
    .ability = 1, // Trace
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL
    }
};

// League rematches
static const struct TrainerMonItemCustomMoves sParty_Sidney2[] = { // doubles
    {
    .lvl = 1,
    .species = SPECIES_TYRANITAR,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = 0, // Sand Stream
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 1, // Sand Rush
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .moves = MOVE_SUCKER_PUNCH, MOVE_NEEDLE_ARM, MOVE_LOW_KICK, MOVE_STOMPING_TANTRUM
    },
    {
    .lvl = 1,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_MAT_BLOCK, MOVE_ICE_BEAM, MOVE_EXTRASENSORY, MOVE_GUNK_SHOT
    },
    {
    .lvl = 1,
    .species = SPECIES_MANDIBUZZ,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Overcoat
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_FOUL_PLAY, MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_SWAGGER
    },
    {
    .lvl = 1,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_ROSELI_BERRY,
    .ability = 2, // Intimidate
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_FAKE_OUT
    },
    {
    .lvl = 2,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_ABSOLITE,
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_FIRE_BLAST, MOVE_CLOSE_COMBAT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sidney3[] = { // legendaries
    {
    .lvl = 1,
    .species = SPECIES_YVELTAL,
    .heldItem = ITEM_BIG_ROOT,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_SUCKER_PUNCH, MOVE_U_TURN
    },
    {
    .lvl = 1,
    .species = SPECIES_DARKRAI,
    .heldItem = ITEM_WIDE_LENS,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_VOID, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT
    },
    {
    .lvl = 1,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EXTRASENSORY, MOVE_GUNK_SHOT
    },
    {
    .lvl = 1,
    .species = SPECIES_SCRAFTY,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 1, // Moxie
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_DRAGON_DANCE
    },
    {
    .lvl = 1,
    .species = SPECIES_HOOPA_UNBOUND,
    .heldItem = ITEM_DARK_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HYPERSPACE_FURY, MOVE_ZEN_HEADBUTT, MOVE_GUNK_SHOT, MOVE_FIRE_PUNCH
    },
    {
    .lvl = 2,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_ABSOLITE,
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_FIRE_BLAST, MOVE_CLOSE_COMBAT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sidney4[] = { // doubles legendaries
    {
    .lvl = 1,
    .species = SPECIES_DARKRAI,
    .heldItem = ITEM_WIDE_LENS,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_DARK_VOID, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 1,
    .species = SPECIES_YVELTAL,
    .heldItem = ITEM_BIG_ROOT,
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_DARK_PULSE, MOVE_OBLIVION_WING, MOVE_SUCKER_PUNCH, MOVE_TAUNT
    },
    {
    .lvl = 1,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Protean
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .moves = MOVE_MAT_BLOCK, MOVE_ICE_BEAM, MOVE_EXTRASENSORY, MOVE_GUNK_SHOT
    },
    {
    .lvl = 1,
    .species = SPECIES_INCINEROAR,
    .heldItem = ITEM_FIGY_BERRY,
    .ability = 2, // Intimidate
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_KNOCK_OFF, MOVE_FLARE_BLITZ, MOVE_FAKE_OUT, MOVE_U_TURN
    },
    {
    .lvl = 1,
    .species = SPECIES_HOOPA_UNBOUND,
    .heldItem = ITEM_DARK_GEM,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HYPERSPACE_FURY, MOVE_ZEN_HEADBUTT, MOVE_GUNK_SHOT, MOVE_PROTECT
    },
    {
    .lvl = 2,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_ABSOLITE,
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_FIRE_BLAST, MOVE_CLOSE_COMBAT
    }
};

static const struct TrainerMonItemCustomMoves sParty_Phoebe2[] = { // doubles
    {
    .lvl = 1,
    .species = SPECIES_COFAGRIGUS,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = 0, // Mummy
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_AURA_SPHERE, MOVE_TRICK_ROOM
    },
    {
    .lvl = 1,
    .species = SPECIES_JELLICENT,
    .heldItem = ITEM_WATER_GEM,
    .ability = 1, // Cursed Body
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SHADOW_BALL, MOVE_WATER_SPOUT, MOVE_STRENGTH_SAP, MOVE_ICE_BEAM
    },
    {
    .lvl = 1,
    .species = SPECIES_CHANDELURE,
    .heldItem = ITEM_IRON_BALL,
    .ability = 0, // Flash Fire
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SHADOW_BALL, MOVE_HEAT_WAVE, MOVE_ENERGY_BALL, MOVE_PSYCHIC
    },
    {
    .lvl = 1,
    .species = SPECIES_DUSKNOIR,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 1, // Iron Fist
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .moves = MOVE_SHADOW_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH
    },
    {
    .lvl = 1,
    .species = SPECIES_GOURGEIST_SUPER,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, // Flare Boost
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_GIGA_DRAIN, MOVE_TRICK, MOVE_MOONBLAST, MOVE_TRICK_ROOM
    },
    {
    .lvl = 2,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_SABLENITE,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DARK_PULSE, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Phoebe3[] = { // legendaries
    {
    .lvl = 1,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_THICK_CLUB,
    .ability = 0, // Cursed Body
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_STEALTH_ROCK, MOVE_BONEMERANG
    },
    {
    .lvl = 1,
    .species = SPECIES_NECROZMA_DAWN_WINGS,
    .heldItem = ITEM_LIGHT_CLAY,
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_MOONGEIST_BEAM, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PHOTON_GEYSER
    },
    {
    .lvl = 1,
    .species = SPECIES_CALYREX_SHADOW_RIDER,
    .heldItem = ITEM_SHELL_BELL,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_ASTRAL_BARRAGE, MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_NASTY_PLOT
    },
    {
    .lvl = 1,
    .species = SPECIES_AEGISLASH,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_CLOSE_COMBAT, MOVE_KINGS_SHIELD
    },
    {
    .lvl = 1,
    .species = SPECIES_GIRATINA,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_SHADOW_BALL, MOVE_DRAGON_TAIL, MOVE_WILL_O_WISP, MOVE_PSYCH_UP
    },
    {
    .lvl = 2,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_SABLENITE,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DARK_PULSE, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Phoebe4[] = { // legendaries doubles
    {
    .lvl = 1,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_THICK_CLUB,
    .ability = 1, // Lightning Rod
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .moves = MOVE_SHADOW_BONE, MOVE_FLARE_BLITZ, MOVE_BONEMERANG, MOVE_PROTECT
    },
    {
    .lvl = 1,
    .species = SPECIES_NECROZMA_DAWN_WINGS,
    .heldItem = ITEM_LIGHT_CLAY,
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_MOONGEIST_BEAM, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PHOTON_GEYSER
    },
    {
    .lvl = 1,
    .species = SPECIES_CALYREX_SHADOW_RIDER,
    .heldItem = ITEM_SHELL_BELL,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_ASTRAL_BARRAGE, MOVE_PSYSHOCK, MOVE_DRAINING_KISS, MOVE_NASTY_PLOT
    },
    {
    .lvl = 1,
    .species = SPECIES_AEGISLASH,
    .heldItem = ITEM_LEFTOVERS,
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .moves = MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_CLOSE_COMBAT, MOVE_KINGS_SHIELD
    },
    {
    .lvl = 1,
    .species = SPECIES_GIRATINA_ORIGIN,
    .heldItem = ITEM_GRISEOUS_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_SHADOW_BALL, MOVE_DRACO_METEOR, MOVE_WILL_O_WISP, MOVE_AURA_SPHERE
    },
    {
    .lvl = 2,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_SABLENITE,
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DARK_PULSE, MOVE_WILL_O_WISP, MOVE_FOUL_PLAY, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_Glacia2[] = { // Doubles
    {
    .lvl = 1,
    .species = SPECIES_ABOMASNOW,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 0, // Snow Warning
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_LEAF_STORM, MOVE_EARTH_POWER, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 1,
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 2, // Whiteout
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_BLIZZARD, MOVE_PSYCHIC, MOVE_AURORA_VEIL
    },
    {
    .lvl = 2,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Ice Body
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PROTECT, MOVE_BLIZZARD, MOVE_TOXIC, MOVE_SUPER_FANG
    },
    {
    .lvl = 1,
    .species = SPECIES_MAMOSWINE,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Thick Fat
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_HIGH_HORSEPOWER, MOVE_ICICLE_CRASH, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD
    },
    {
    .lvl = 1,
    .species = SPECIES_GLACEON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Slush Rush
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_FREEZE_DRY, MOVE_WATER_PULSE
    },
    {
    .lvl = 2,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_GLALITITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_ICE_SHARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Glacia3[] = { // legendaries
    {
    .lvl = 1,
    .species = SPECIES_NINETALES_ALOLAN,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 2, // Snow Warning
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_WATER_PULSE
    },
    {
    .lvl = 1,
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 2, // Whiteout
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_FREEZE_DRY, MOVE_PSYCHIC, MOVE_AURORA_VEIL
    },
    {
    .lvl = 2,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Ice Body
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_SUPER_FANG
    },
    {
    .lvl = 1,
    .species = SPECIES_KYUREM_WHITE,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = 2, // Thick Fat
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FREEZE_DRY, MOVE_FUSION_FLARE, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 1,
    .species = SPECIES_GLACEON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Slush Rush
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_FREEZE_DRY, MOVE_WATER_PULSE
    },
    {
    .lvl = 2,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_GLALITITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_ICE_SHARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Glacia4[] = {
    {
    .lvl = 1,
    .species = SPECIES_NINETALES_ALOLAN,
    .heldItem = ITEM_FAIRY_GEM,
    .ability = 2, // Snow Warning
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_PROTECT
    },
    {
    .lvl = 1,
    .species = SPECIES_FROSLASS,
    .heldItem = ITEM_LIGHT_CLAY,
    .ability = 2, // Whiteout
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_BLIZZARD, MOVE_PSYCHIC, MOVE_AURORA_VEIL
    },
    {
    .lvl = 2,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Ice Body
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_PROTECT, MOVE_BLIZZARD, MOVE_TOXIC, MOVE_SUPER_FANG
    },
    {
    .lvl = 1,
    .species = SPECIES_KYUREM_WHITE,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = 2, // Thick Fat
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_FREEZE_DRY, MOVE_FUSION_FLARE, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST
    },
    {
    .lvl = 1,
    .species = SPECIES_GLACEON,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Slush Rush
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_FREEZE_DRY, MOVE_WATER_PULSE
    },
    {
    .lvl = 2,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_GLALITITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_ICE_SHARD
    }
};

static const struct TrainerMonItemCustomMoves sParty_Drake2[] = { // Doubles
    {
    .lvl = 1,
    .species = SPECIES_DRAGALGE,
    .heldItem = ITEM_POISON_GEM,
    .ability = 2, // Adaptability
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_SLUDGE_BOMB, MOVE_DRACO_METEOR, MOVE_FOCUS_BLAST, MOVE_PROTECT
    },
    {
    .lvl = 1,
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Soundproof
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_PROTECT
    },
    {
    .lvl = 1,
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 2, // Contrary
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_LEAF_STORM, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, MOVE_GLARE
    },
    {
    .lvl = 1,
    .species = SPECIES_HAXORUS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Mold Breaker
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_DRAGON_CLAW, MOVE_CLOSE_COMBAT, MOVE_IRON_TAIL, MOVE_FIRST_IMPRESSION
    },
    {
    .lvl = 1,
    .species = SPECIES_NAGANADEL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Beast Boost
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SLUDGE_BOMB, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_PROTECT
    },
    {
    .lvl = 2,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SALAMENCITE,
    .ability = 0, // Intimidate -> Aerilate
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_DRAGON_PULSE, MOVE_FIRE_BLAST, MOVE_HYDRO_PUMP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Drake3[] = { // Legendaries
    {
    .lvl = 1,
    .species = SPECIES_DIALGA,
    .heldItem = ITEM_CUSTAP_BERRY,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_ROAR_OF_TIME, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 1,
    .species = SPECIES_RESHIRAM,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLUE_FLARE, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_FLAME_CHARGE
    },
    {
    .lvl = 1,
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 2, // Contrary
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_LEAF_STORM, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, MOVE_GLARE
    },
    {
    .lvl = 1,
    .species = SPECIES_ZYGARDE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_THOUSAND_ARROWS, MOVE_OUTRAGE, MOVE_IRON_TAIL, MOVE_DRAGON_DANCE
    },
    {
    .lvl = 1,
    .species = SPECIES_NAGANADEL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Beast Boost
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SLUDGE_BOMB, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT
    },
    {
    .lvl = 2,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SALAMENCITE,
    .ability = 0, // Intimidate -> Aerilate
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_DRAGON_PULSE, MOVE_FIRE_BLAST, MOVE_HYDRO_PUMP
    }
};

static const struct TrainerMonItemCustomMoves sParty_Drake4[] = { // Legendaries doubles
    {
    .lvl = 1,
    .species = SPECIES_DIALGA,
    .heldItem = ITEM_CUSTAP_BERRY,
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .moves = MOVE_FLASH_CANNON, MOVE_ROAR_OF_TIME, MOVE_THUNDER, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 2,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SALAMENCITE,
    .ability = 0, // Intimidate -> Aerilate
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HYPER_VOICE, MOVE_DRAGON_PULSE, MOVE_FIRE_BLAST, MOVE_HYDRO_PUMP
    },
    {
    .lvl = 1,
    .species = SPECIES_RESHIRAM,
    .heldItem = ITEM_WHITE_HERB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_BLUE_FLARE, MOVE_DRACO_METEOR, MOVE_EARTH_POWER, MOVE_FLAME_CHARGE
    },
    {
    .lvl = 1,
    .species = SPECIES_SERPERIOR,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 2, // Contrary
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_LEAF_STORM, MOVE_DRACO_METEOR, MOVE_HIDDEN_POWER, MOVE_GLARE
    },
    {
    .lvl = 1,
    .species = SPECIES_ZYGARDE,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_THOUSAND_ARROWS, MOVE_OUTRAGE, MOVE_IRON_TAIL, MOVE_PROTECT
    },
    {
    .lvl = 1,
    .species = SPECIES_NAGANADEL,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Beast Boost
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SLUDGE_BOMB, MOVE_DRACO_METEOR, MOVE_FIRE_BLAST, MOVE_PROTECT
    }
};

static const struct TrainerMonItemCustomMoves sParty_WallaceDoubles[] = { // Doubles
    {
    .lvl = 2,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_WIKI_BERRY,
    .ability = 2, // Drizzle
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_WATER_SPOUT, MOVE_ICY_WIND, MOVE_WEATHER_BALL, MOVE_PROTECT
    },
    {
    .lvl = 2,
    .species = SPECIES_ZAPDOS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Static
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_ROOST
    },
    {
    .lvl = 2,
    .species = SPECIES_LATIOS,
    .heldItem = ITEM_SOUL_DEW,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_DRACO_METEOR, MOVE_THUNDER, MOVE_AURA_SPHERE
    },
    {
    .lvl = 2,
    .species = SPECIES_FERROTHORN,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 0, // Iron Barbs
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_LEECH_SEED, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 2,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 0, // Swift Swim
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_POWER_GEM, MOVE_ICE_BEAM, MOVE_EARTH_POWER
    },
    {
    .lvl = 3,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_MILOTICITE,
    .ability = 1, // Competitive -> Prism Scales
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_WallaceLegends[] = { // Legendaries
    {
    .lvl = 2,
    .species = SPECIES_KYOGRE,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_HIDDEN_POWER
    },
    {
    .lvl = 2,
    .species = SPECIES_ZAPDOS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Static
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_ROOST
    },
    {
    .lvl = 2,
    .species = SPECIES_LATIOS,
    .heldItem = ITEM_SOUL_DEW,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_DRACO_METEOR, MOVE_THUNDER, MOVE_AURA_SPHERE
    },
    {
    .lvl = 2,
    .species = SPECIES_FERROTHORN,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 0, // Iron Barbs
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .moves = MOVE_POWER_WHIP, MOVE_KNOCK_OFF, MOVE_LEECH_SEED, MOVE_THUNDER_WAVE
    },
    {
    .lvl = 2,
    .species = SPECIES_ARCEUS_WATER,
    .heldItem = ITEM_SPLASH_PLATE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 3,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_MILOTICITE,
    .ability = 1, // Competitive -> Prism Scales
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_RECOVER
    }
};

static const struct TrainerMonItemCustomMoves sParty_WallaceDoublesLegends[] = { // Legendaries doubles
    {
    .lvl = 2,
    .species = SPECIES_KYOGRE,
    .heldItem = ITEM_ASSAULT_VEST,
    .spread = SPREAD_HP_FIRE_TIMID,
    .moves = MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM, MOVE_THUNDER, MOVE_HIDDEN_POWER
    },
    {
    .lvl = 2,
    .species = SPECIES_ARCEUS_ELECTRIC,
    .heldItem = ITEM_ZAP_PLATE,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_THUNDER, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM
    },
    {
    .lvl = 2,
    .species = SPECIES_TORNADUS_THERIAN,
    .heldItem = ITEM_LIFE_ORB,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_HURRICANE, MOVE_FOCUS_BLAST, MOVE_GRASS_KNOT, MOVE_U_TURN
    },
    {
    .lvl = 2,
    .species = SPECIES_LATIOS,
    .heldItem = ITEM_SOUL_DEW,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSHOCK, MOVE_DRACO_METEOR, MOVE_THUNDER, MOVE_AURA_SPHERE
    },
    {
    .lvl = 2,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_WATER_GEM,
    .ability = 0, // Iron Barbs
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_MUDDY_WATER, MOVE_ICE_BEAM, MOVE_EARTH_POWER, MOVE_PROTECT
    },
    {
    .lvl = 3,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_MILOTICITE,
    .ability = 1, // Competitive -> Prism Scales
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_RECOVER
    }
};

// Post Game
static const struct TrainerMonItemCustomMoves sParty_Cynthia1[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_FOCUS_SASH,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SPIKES
    },
    {
    .lvl = 5,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 1, // Serene Grace
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_THUNDER_WAVE, MOVE_ROOST
    },
    {
    .lvl = 5,
    .species = SPECIES_SPIRITOMB,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Pressure
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DARK_PULSE, MOVE_CALM_MIND, MOVE_SUBSTITUTE, MOVE_RECOVER
    },
    {
    .lvl = 5,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 0, // Steadfast
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH, MOVE_STRENGTH, MOVE_ICE_PUNCH
    },
    {
    .lvl = 5,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_MIRROR_COAT
    },
    {
    .lvl = 7,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_GARCHOMPITE,
    .ability = 2, // Rough Skin -> Sand Force
    .spread = SPREAD_31_IV_ATK_SPEED_NAIVE,
    .moves = MOVE_EARTHQUAKE, MOVE_DRACO_METEOR, MOVE_STONE_EDGE, MOVE_FIRE_BLAST
    }
};

// Post Game
static const struct TrainerMonItemCustomMoves sParty_Cynthia2[] = {
    {
    .lvl = 5,
    .species = SPECIES_TOGEKISS,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Serene Grace
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_AIR_SLASH, MOVE_ROOST, MOVE_THUNDER_WAVE, MOVE_NASTY_PLOT
    },
    {
    .lvl = 5,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_CHOICE_SCARF,
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB, MOVE_LEAF_STORM, MOVE_DAZZLING_GLEAM
    },
    {
    .lvl = 5,
    .species = SPECIES_SPIRITOMB,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Pressure
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_DOUBLE_TEAM, MOVE_FOUL_PLAY, MOVE_SUBSTITUTE, MOVE_RECOVER
    },
    {
    .lvl = 5,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Multiscale
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .moves = MOVE_SCALD, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_TOXIC
    },
    {
    .lvl = 5,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_LUCARIONITE,
    .ability = 0, // Steadfast
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_CLOSE_COMBAT, MOVE_CRUNCH, MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE
    },
    {
    .lvl = 7,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 2, // Rough Skin
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_STONE_EDGE, MOVE_SWORDS_DANCE //, MOVE_SCALE_SHOT
    }
};

static const struct TrainerMonItemCustomMoves sParty_LeafAlteringCave[] = {
    {
    .lvl = 5,
    .species = SPECIES_NINETALES,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Pyromancy
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .moves = MOVE_FLAMETHROWER, MOVE_FOUL_PLAY, MOVE_CALM_MIND, MOVE_DRAINING_KISS
    },
    {
    .lvl = 5,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_KANGASKHANITE,
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .moves = MOVE_POWER_UP_PUNCH, MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH
    },
    {
    .lvl = 5,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Levitate
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_FOCUS_BLAST, MOVE_DESTINY_BOND
    },
    {
    .lvl = 5,
    .species = SPECIES_TANGROWTH,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Regenerator
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .moves = MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_EARTHQUAKE, MOVE_POISON_JAB
    },
    {
    .lvl = 5,
    .species = SPECIES_MEWTWO,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 2, // Unnerve
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .moves = MOVE_PSYSTRIKE, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT
    },
    {
    .lvl = 7,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, // Mega Launcher
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .moves = MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_ICE_BEAM, MOVE_SHELL_SMASH,
    }
};

// Cut rematches
static const struct TrainerMonItemCustomMoves sParty_Bernie5[] = {
    {
    .lvl = 0,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nob5[] = {
    {
    .lvl = 5,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 5,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 5,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 5,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 5,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 5,
    .species = SPECIES_HAPPINY,
    .moves = MOVE_MEMENTO
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cyndy5[] = {
    {
    .lvl = 0,
    .species = SPECIES_AUDINO,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_AUDINO,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_AUDINO,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_AUDINO,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_AUDINO,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_AUDINO,
    .moves = MOVE_MEMENTO
    }
};

static const struct TrainerMonItemCustomMoves sParty_Timothy5[] = {
    {
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .moves = MOVE_MEMENTO
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sawyer5[] = {
    {
    .lvl = 0,
    .species = SPECIES_BLISSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_BLISSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_BLISSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_BLISSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_BLISSEY,
    .moves = MOVE_MEMENTO
    },
    {
    .lvl = 0,
    .species = SPECIES_BLISSEY,
    .moves = MOVE_MEMENTO
    }
};

static const struct TrainerMonItemCustomMoves sParty_Shelby5[] = {
    {
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    },
    {
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Diana5[] = {
    {
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ethan5[] = {
    {
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .lvl = 34,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Andres5[] = {
    {
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Nicolas5[] = {
    {
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 49,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMonItemCustomMoves sParty_JohnAndJay5[] = {
    {
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT
    },
    {
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM
    }
};

static const struct TrainerMonItemCustomMoves sParty_Katelyn5[] = {
    {
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isaiah5[] = {
    {
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Koji5[] = {
    {
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Pablo5[] = {
    {
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ernest5[] = {
    {
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jenny5[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMonItemCustomMoves sParty_LilaAndRoy5[] = {
    {
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cameron5[] = {
    {
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    },
    {
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jacki5[] = {
    {
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    },
    {
    .lvl = 43,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Fernando5[] = {
    {
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Gabrielle5[] = {
    {
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cristin5[] = {
    {
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Walter5[] = {
    {
    .lvl = 41,
    .species = SPECIES_LINOONE,
    .moves = MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES
    },
    {
    .lvl = 41,
    .species = SPECIES_GOLDUCK,
    .moves = MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP
    },
    {
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .moves = MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jeffrey5[] = {
    {
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 38,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 38,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .lvl = 38,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Robert5[] = {
    {
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jackson5[] = {
    {
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Catherine5[] = {
    {
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonItemCustomMoves sParty_KiraAndDan5[] = {
    {
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Thalia5[] = {
    {
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cory5[] = {
    {
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

// Unused Trainers
static const struct TrainerMonItemCustomMoves sParty_Cindy6[] = { // Unused
    {
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kaylee[] = { // Unused
    {
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

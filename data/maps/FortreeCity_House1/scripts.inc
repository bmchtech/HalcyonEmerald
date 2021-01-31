FortreeCity_House1_MapScripts:: @ 82162BA
	.byte 0

FortreeCity_House1_EventScript_ExpertF:: @ 821635F
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
	end

FortreeCity_House1_EventScript_Zigzagoon:: @ 8216368
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, 0
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FortreeCity_House1_EventScript_Trader:: @ 8264FED
	lock
	faceplayer
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, FortreeCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_KARRABLAST
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox FortreeCity_House1_Text_WouldYouLikeToTrade, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq FortreeCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne FortreeCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox FortreeCity_House1_Text_PromiseIllBeGoodToIt, MSGBOX_DEFAULT
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
	release
	end

FortreeCity_House1_EventScript_DeclineTrade:: @ 826506B
	msgbox FortreeCity_House1_Text_WellThatsFineToo, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_NotRequestedMon:: @ 8265075
	bufferspeciesname 0, VAR_0x8009
	msgbox FortreeCity_House1_Text_DontTradeForAnythingButMon, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_TradeCompleted:: @ 8265083
	msgbox FortreeCity_House1_Text_SkittySoMuchCuterThanImagined, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_Text_WouldYouLikeToTrade: @ 826508D
	.string "My Pokémon is a {STR_VAR_2}.\n"
	.string "Do you know it?\l"
	.string "It's quite cute and rather nice.\p"
	.string "This little one, I could trade with\n"
	.string "pride!\p"
	.string "Would you like to trade me a {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"

FortreeCity_House1_Text_PromiseIllBeGoodToIt: @ 8265128
	.string "Oh, it's adorable!\n"
	.string "Thank you!\l"
	.string "I promise I'll be good to it!\p"
	.string "Oh! I hope you'll be good to\n"
	.string "my {STR_VAR_2}, too!$"

FortreeCity_House1_Text_DontTradeForAnythingButMon: @ 826518D
	.string "Oh, I'm sorry!\n"
	.string "I don't intend to trade for anything\l"
	.string "but a {STR_VAR_1}.$"

FortreeCity_House1_Text_WellThatsFineToo: @ 82651CB
	.string "Oh, you won't?\n"
	.string "Well, that's fine, too.\l"
	.string "Please come visit us again.$"

FortreeCity_House1_Text_SkittySoMuchCuterThanImagined: @ 826520E
	.string "Giggle!\n"
	.string "Did you know Karrablast would evolve?\l"
	.string "Your Shelmet evolved too!$"

FortreeCity_House1_Text_Zigzagoon: @ 8216597
	.string "Zigzagoon: Gumomoh?$"

FortreeCity_House1_Text_TradingMemoriesWithOthers: @ 821653B
	.string "Trading Pokémon with others…\p"
	.string "It's as if you're trading your own\n"
	.string "memories with other people.$"

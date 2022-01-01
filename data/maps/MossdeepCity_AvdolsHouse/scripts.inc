MossdeepCity_AvdolsHouse_MapScripts::
	.byte 0

MossdeepCity_AvdolsHouse_EventScript_Avdol::
	lock
	faceplayer
	msgbox MossdeepCity_AvdolsHouse_Text_IAmAvdol, MSGBOX_DEFAULT
	goto_if_set FLAG_IS_CHAMPION, MossdeepCity_AvdolsHouse_EventScript_Avdol_PlayerChampion
	msgbox MossdeepCity_AvdolsHouse_Text_ReturnWhenChampion, MSGBOX_DEFAULT
	release
	end

MossdeepCity_AvdolsHouse_EventScript_Avdol_PlayerChampion::
	msgbox MossdeepCity_AvdolsHouse_Text_YouAreChampion, MSGBOX_DEFAULT
	msgbox MossdeepCity_AvdolsHouse_Text_BringYouNews, MSGBOX_DEFAULT
	goto MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveAuroraTicket
	release
	end

MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveAuroraTicket::
	goto_if_set FLAG_RECEIVED_AURORA_TICKET, MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveMysticTicket
	checkitemspace ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, MossdeepCity_AvdolsHouse_EventScript_Avdol_NotEnoughSpace
	giveitem ITEM_AURORA_TICKET
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	setflag FLAG_RECEIVED_AURORA_TICKET
	goto MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveMysticTicket

MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveMysticTicket::
	goto_if_set FLAG_RECEIVED_MYSTIC_TICKET, MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveOldSeaMap
	checkitemspace ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, MossdeepCity_AvdolsHouse_EventScript_Avdol_NotEnoughSpace
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	goto MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveOldSeaMap

MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveOldSeaMap::
	goto_if_set FLAG_RECEIVED_OLD_SEA_MAP, MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveEonTicket
	checkitemspace ITEM_OLD_SEA_MAP
	vgoto_if_eq VAR_RESULT, FALSE, MossdeepCity_AvdolsHouse_EventScript_Avdol_NotEnoughSpace
	giveitem ITEM_OLD_SEA_MAP
	setflag FLAG_ENABLE_SHIP_FARAWAY_ISLAND
	setflag FLAG_RECEIVED_OLD_SEA_MAP
	goto MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveEonTicket

MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveEonTicket::
	goto_if_set FLAG_RECEIVED_EON_TICKET, MossdeepCity_AvdolsHouse_EventScript_Avdol_TryGiveEonTicket
	checkitemspace ITEM_EON_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, MossdeepCity_AvdolsHouse_EventScript_Avdol_NotEnoughSpace
	giveitem ITEM_EON_TICKET
	setflag FLAG_ENABLE_SHIP_SOUTHERN_ISLAND
	setflag FLAG_RECEIVED_EON_TICKET
	goto MossdeepCity_AvdolsHouse_EventScript_Avdol_VisitDone
	end

MossdeepCity_AvdolsHouse_EventScript_Avdol_NotEnoughSpace::
	msgbox MossdeepCity_AvdolsHouse_Text_NoSpace, MSGBOX_DEFAULT
	release
	end

MossdeepCity_AvdolsHouse_EventScript_Avdol_VisitDone::
	msgbox MossdeepCity_AvdolsHouse_Text_ThisWillTakeYouFar, MSGBOX_DEFAULT
	release
	end

MossdeepCity_AvdolsHouse_Text_ReturnWhenChampion:
	.string "Go forth child, reach high!\p"
	.string "Pay me a visit if one day\n"
	.string "you perhaps become a champion.$"

MossdeepCity_AvdolsHouse_Text_YouAreChampion:
	.string "I have heard the news that you\n"
	.string "are now the champion of this land.$"

MossdeepCity_AvdolsHouse_Text_BringYouNews:
	.string "I come to bring you news of mythical\n"
	.string "adventures in distant places.$"

MossdeepCity_AvdolsHouse_Text_ThisWillTakeYouFar:
	.string "This will take you far.$"

MossdeepCity_AvdolsHouse_Text_NoSpace:
	.string "Tragic.\p"
	.string "Come back with space for more\n"
	.string "extremely valuable gifts.$"

MossdeepCity_AvdolsHouse_Text_IAmAvdol:
	.string "Greetings, friend.$"

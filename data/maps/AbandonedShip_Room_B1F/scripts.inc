AbandonedShip_Room_B1F_MapScripts:: @ 82380A5
	.byte 0

AbandonedShip_Room_B1F_EventScript_Spiritomb::
	lock
	checkPartyHasSpecies SPECIES_LICKITUNG
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_Room_B1F_EventScript_CheckOddKeystone
	checkPartyHasSpecies SPECIES_SLUGMA
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_Room_B1F_EventScript_CheckOddKeystone
AbandonedShip_Room_B1F_EventScript_ItsEmpty::
	msgbox Text_EmptyTrashCan, MSGBOX_DEFAULT
	closemessage
	release
	end

AbandonedShip_Room_B1F_EventScript_CheckOddKeystone::
	checkitem ITEM_ODD_KEYSTONE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_Room_B1F_EventScript_ItsEmpty
	msgbox AbandonedShip_Room_B1F_Text_PutKeystoneInTrash, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq AbandonedShip_Room_B1F_EventScript_End
	closemessage
	removeitem ITEM_ODD_KEYSTONE, 1
	specialvar VAR_RESULT, GetHighestLevelInPlayerParty
	copyvar VAR_0x800A, VAR_RESULT
	setwildbattle SPECIES_SPIRITOMB, VAR_0x800A, ITEM_SMOKE_BALL
	waitse
	playmoncry SPECIES_SPIRITOMB, 2
	delay 40
	waitmoncry
	dowildbattle
	release
	end

AbandonedShip_Room_B1F_EventScript_End::
	closemessage
	release
	end

AbandonedShip_Room_B1F_Text_PutKeystoneInTrash:
	.string "Something is compelling you to toss\n"
	.string "the Odd Keystone into this trash can.\p"
	.string "Trash the Odd Keystone?$"

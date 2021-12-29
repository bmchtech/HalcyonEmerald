SootopolisCity_MegaHouse_MapScripts::
	.byte 0

SootopolisCity_MegaHouse_EventScript_Zeppeli::
	goto_if_set FLAG_RECEIVED_MEGA_BRACELET, SootopolisCity_MegaHouse_EventScript_ReceivedMegaThing1
	msgbox SootopolisCity_MegaHouse_Text_IAmZeppeli, MSGBOX_NPC
	msgbox SootopolisCity_MegaHouse_Text_WouldYouLikeMyAdvice, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SootopolisCity_MegaHouse_EventScript_GiveAdvice
	goto SootopolisCity_MegaHouse_EventScript_DeclineAdvice
	end

SootopolisCity_MegaHouse_EventScript_GiveAdvice::
	msgbox SootopolisCity_MegaHouse_Text_ZeppeliAdvice, MSGBOX_NPC
	goto SootopolisCity_MegaHouse_EventScript_TryGivingGift
	end

SootopolisCity_MegaHouse_EventScript_DeclineAdvice::
	msgbox SootopolisCity_MegaHouse_Text_ISee, MSGBOX_NPC
	end

SootopolisCity_MegaHouse_EventScript_TryGivingGift::
	lock
	faceplayer
	msgbox SootopolisCity_MegaHouse_Text_TakeThisMegaThing1, MSGBOX_DEFAULT
	giveitem ITEM_MEGA_RING
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MEGA_BRACELET
	msgbox SootopolisCity_MegaHouse_Text_UseMegaThingWell, MSGBOX_DEFAULT
	release
	end

SootopolisCity_MegaHouse_EventScript_ReceivedMegaThing1::
	msgbox SootopolisCity_MegaHouse_Text_UseMegaThingWell, MSGBOX_DEFAULT
	release
	end

SootopolisCity_MegaHouse_Text_TakeThisMegaThing1:
	.string "In my earlier travels,\n"
	.string "I encountered this mysterious item…\p"
	.string "Take it…$"

SootopolisCity_MegaHouse_Text_UseMegaThingWell:
	.string "Carry on…\n"
	.string "Use it well…$"

SootopolisCity_MegaHouse_Text_IAmZeppeli:
	.string "You're that new upstart, aren't you?\p"
	.string "I am Baron Zeppeli.\n"
	.string "I was once a famous trainer here.$"

SootopolisCity_MegaHouse_Text_WouldYouLikeMyAdvice:
	.string "Do you think my advice\n"
	.string "is worth your time?$"

SootopolisCity_MegaHouse_Text_ISee:
	.string "I see…$"

SootopolisCity_MegaHouse_Text_ZeppeliAdvice:
	.string "During my training, I discovered\n"
	.string "a baffling truth.\p"
	.string "Sometimes, one experiences the future\n"
	.string "on a medium of the past.\p"
	.string "You may soon see this for yourself.$"

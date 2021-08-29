EventScript_EeveeDevolution::
    lockall
    faceplayer
    msgbox Eevee_Text_HaveAnEevee, MSGBOX_YESNO
    compare VAR_RESULT, NO
	goto_if_eq EventScript_NoEevee
    msgbox Eevee_Text_WantToDevolve, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq EventScript_EeveeExit
    msgbox Eevee_Text_WhichEevee, MSGBOX_DEFAULT
    special ChoosePartyMon
	waitstate
    compare VAR_0x8004, 255
	goto_if_eq EventScript_EeveeExit
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
    goto_if_eq EventScript_Eevee_SelectedMonIsEgg
    specialvar VAR_RESULT, IsSelectedMonEeveelution
    compare VAR_RESULT, FALSE
    goto_if_eq EventScript_Eevee_SelectedMonIsntEevee
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge EventScript_EeveeExit
    bufferpartymonnick 0, VAR_0x8004
    msgbox Eevee_Text_SureToDevolve, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq EventScript_EeveeExit
    closemessage
    setvar VAR_0x8005, SPECIES_EEVEE
	fadescreen 1
    special ChangeMonSpecies
    playfanfare MUS_LEVEL_UP
    waitfanfare
	fadescreen 0
    bufferpartymonnick 0, VAR_0x8004
    msgbox Eevee_Text_NicknameBecameEevee, MSGBOX_AUTOCLOSE
    releaseall
    end
    
EventScript_NoEevee::
    msgbox Eevee_Text_NoEevee, MSGBOX_DEFAULT
    releaseall
    end

EventScript_EeveeExit::
    msgbox Eevee_Text_Exit, MSGBOX_DEFAULT
    releaseall
    end

EventScript_Eevee_SelectedMonIsntEevee::
    msgbox Eevee_Text_NotAnEevee, MSGBOX_DEFAULT
    releaseall
    end

EventScript_Eevee_SelectedMonIsEgg::
    msgbox Eevee_Text_ThatsEgg, MSGBOX_DEFAULT
    releaseall
    end

Eevee_Text_HaveAnEevee:
    .string "Do you have an Eeveelution - that is,\n"
    .string "a Pokémon that evolved from Eevee?$"

Eevee_Text_NoEevee:
    .string "Please come back if you ever train\n"
    .string "an Eevee!$"

Eevee_Text_WantToDevolve:
    .string "Eevee has an unstable genetic make up\n"
    .string "that changes depending on its\l"
    .string "environment.\p"
    .string "It's not so unstable after evolution,\n"
    .string "but I've created a device that changes\l"
    .string "that.\p"
    .string "It allows any Eeveelution to revert\n"
    .string "back to an Eevee, without forgetting\l"
    .string "any moves it's learned!\p"
    .string "Would you like to try it?$"

Eevee_Text_SureToDevolve:
    .string "So you want to revert {STR_VAR_1}?$"

Eevee_Text_NotAnEevee:
    .string "That Pokémon did not evolve from\n"
    .string "an Eevee!$"

Eevee_Text_WhichEevee:
    .string "Which Eeveelution would you like to\n"
    .string "revert to Eevee?$"

Eevee_Text_ThatsEgg:
    .string "That's just an egg!$"

Eevee_Text_Exit:
    .string "See you later then!$"

Eevee_Text_NicknameBecameEevee:
    .string "{STR_VAR_1} became an Eevee!$"

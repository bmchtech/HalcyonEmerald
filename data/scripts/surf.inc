EventScript_UseSurf::
	checkpartymove MOVE_SURF
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq EventScript_ExploudSurf
	bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end

EventScript_ExploudSurf::
	setvar VAR_0x8004, SPECIES_EXPLOUD
	setvar VAR_0x8008, MOVE_SURF
	setvar VAR_0x8009, 1
	bufferspeciesname 0, VAR_0x8004	
	buffermovename 1, VAR_0x8008
	msgbox Text_ExploudSurf, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_ReleaseUseSurf
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_SURF
	end

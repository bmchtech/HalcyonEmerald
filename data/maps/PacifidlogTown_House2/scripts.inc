PacifidlogTown_House2_MapScripts::
	.byte 0

PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_DIANCITE, PacifidlogTown_House2_EventScript_HaveDiancite
	call_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_FanClubYoungerBrotherStrongBond
	call_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_FanClubYoungerBrotherIntro
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
	specialvar VAR_RESULT, GetDiancieFriendshipScore
	compare VAR_RESULT, TRUE	
	goto_if_eq PacifidlogTown_House2_EventScript_GiveDiancite
	msgbox PacifidlogTown_House2_Text_AlasNotYou, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_GiveDiancite::
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 1, Common_Movement_Delay48
	waitmovement 0
	msgbox PacifidlogTown_House2_Text_DiancieLikesYou, MSGBOX_DEFAULT
	giveitem ITEM_DIANCITE
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_DIANCITE
PacifidlogTown_House2_EventScript_HaveDiancite::
	msgbox PacifidlogTown_House2_Text_ExplainDiancite, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_FanClubYoungerBrotherIntro::
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_FanClubYoungerBrotherStrongBond::
	msgbox PacifidlogTown_House2_Text_StrongBond, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_EventScript_HappyAzurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, 0
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_UnhappyAzurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, 2
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation:
	.string "Er-hem!\p"
	.string "I am the Pokémon Fan Club's most\n"
	.string "important person, the Chairman's\l"
	.string "younger brother.\p"
	.string "I'm here enjoying my vacation with\n"
	.string "Pokémon, yes, indeed.\p"
	.string "Also, I have here a very special stone\n"
	.string "that I would like to give to a special\l"
	.string "Trainer.$"

PacifidlogTown_House2_Text_AlasNotYou:
	.string "But alas, it seems you are not that\n"
	.string "Trainer…$"

PacifidlogTown_House2_Text_DiancieLikesYou:
	.string "Oho! That's a Diancie you have with you!\p"
	.string "And it seems to like you very much.\n"
	.string "You are worthy of this Mega Stone.\n"
	.string "Please take it!$"

PacifidlogTown_House2_Text_ExplainDiancite:
	.string "If you let Diancie hold that stone, it\n"
	.string "will be able to Mega Evolve in battle.$"

PacifidlogTown_House2_Text_StrongBond:
	.string "Er-hem!\p"
	.string "I will only give this stone to a\n"
	.string "Trainer who has a strong bond with\l"
	.string "a certain Mythical Pokémon.$"

PacifidlogTown_House2_Text_Rurii: @ 8203B8D
	.string "Azurill: Rurii.$"

PacifidlogTown_House2_Text_VeryFriendlyWithTrainer: @ 8203B9D
	.string "It appears to be very friendly with the\n"
	.string "Trainer.$"

PacifidlogTown_House2_Text_Rururi: @ 8203BCE
	.string "Azurill: Rururi!$"

PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch: @ 8203BDF
	.string "It doesn't appear to like the Trainer\n"
	.string "very much.$"


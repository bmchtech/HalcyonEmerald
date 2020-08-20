AshenWoods_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, AshenWoods_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, AshenWoods_OnTransition
	.byte 0

AshenWoods_OnResume::
	setstepcallback STEP_CB_ASH
	end

AshenWoods_OnTransition::
	compare VAR_JAGGED_PASS_ASH_WEATHER, 1
	call_if_eq AshenWoods_EventScript_SetWeatherAsh
	end

AshenWoods_EventScript_SetWeatherAsh::
	setweather WEATHER_VOLCANIC_ASH
	doweather
	return

AshenWoods_EventScript_Chef::
	msgbox AshenWoods_Text_Mushrooms, MSGBOX_NPC
	end

AshenWoods_EventScript_Alannah::
	trainerbattle_single TRAINER_ALANNAH, AshenWoods_Text_AlannahIntro, AshenWoods_Text_AlannahDefeat
	msgbox AshenWoods_Text_AlannahPostBattle, MSGBOX_AUTOCLOSE
	end

AshenWoods_EventScript_Martin::
	trainerbattle_single TRAINER_MARTIN, AshenWoods_Text_MartinIntro, AshenWoods_Text_MartinDefeat
	msgbox AshenWoods_Text_MartinPostBattle, MSGBOX_AUTOCLOSE
	end

AshenWoods_EventScript_Roman::
	trainerbattle_single TRAINER_ROMAN, AshenWoods_Text_RomanIntro, AshenWoods_Text_RomanDefeat
	msgbox AshenWoods_Text_RomanPostBattle, MSGBOX_AUTOCLOSE
	end

AshenWoods_EventScript_Elmer::
	trainerbattle_single TRAINER_ELMER, AshenWoods_Text_ElmerIntro, AshenWoods_Text_ElmerDefeat
	msgbox AshenWoods_Text_ElmerPostBattle, MSGBOX_AUTOCLOSE
	end

AshenWoods_Text_Mushrooms:
	.string "The mushrooms that grow here are\n"
	.string "a highly sought after ingredient.\p"
	.string "They're quite valuable, and they\n"
	.string "seem to grow back overnight!\n"

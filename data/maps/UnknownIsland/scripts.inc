UnknownIsland_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, UnknownIsland_OnFrame
	.byte 0

UnknownIsland_OnFrame::
	map_script_2 VAR_TEMP_2, 0, UnknownIsland_EventScript_IntroFlags
	map_script_2 VAR_TEMP_9, 1, UnknownIsland_EventScript_StarterAfterSR
	.2byte 0

UnknownIsland_EventScript_IntroFlags::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_PLAYERS_BEDROOM
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setflag FLAG_REMOVE_WARP_FADE
	setflag FLAG_SET_WALL_CLOCK
	setflag FLAG_QUALIFYING_GIFT
	setvar VAR_TEMP_2, 1
	end

UnknownIsland_EventScript_StarterAfterSR::
	goto_if_eq VAR_TEMP_2, 1, UnknownIsland_EventScript_KantoAfterSR
	goto_if_eq VAR_TEMP_2, 2, UnknownIsland_EventScript_JohtoAfterSR
	goto_if_eq VAR_TEMP_2, 3, UnknownIsland_EventScript_HoennAfterSR
	end

UnknownIsland_EventScript_KantoAfterSR::
	goto_if_eq VAR_STARTER_MON, 0, UnknownIsland_EventScript_GiveBulbasaur
	goto_if_eq VAR_STARTER_MON, 1, UnknownIsland_EventScript_GiveCharmander
	goto_if_eq VAR_STARTER_MON, 2, UnknownIsland_EventScript_GiveSquirtle
	goto_if_eq VAR_STARTER_MON, 3, UnknownIsland_EventScript_GivePorygon
	goto_if_eq VAR_STARTER_MON, 4, UnknownIsland_EventScript_GiveCubone
	end

UnknownIsland_EventScript_JohtoAfterSR::
	goto_if_eq VAR_STARTER_MON, 0, UnknownIsland_EventScript_GiveChikorita
	goto_if_eq VAR_STARTER_MON, 1, UnknownIsland_EventScript_GiveCyndaquil
	goto_if_eq VAR_STARTER_MON, 2, UnknownIsland_EventScript_GiveTotodile
	goto_if_eq VAR_STARTER_MON, 3, UnknownIsland_EventScript_GiveTeddiursa
	goto_if_eq VAR_STARTER_MON, 4, UnknownIsland_EventScript_GiveGligar
	end

UnknownIsland_EventScript_HoennAfterSR::
	goto_if_eq VAR_STARTER_MON, 0, UnknownIsland_EventScript_GiveTreecko
	goto_if_eq VAR_STARTER_MON, 1, UnknownIsland_EventScript_GiveTorchic
	goto_if_eq VAR_STARTER_MON, 2, UnknownIsland_EventScript_GiveMudkip
	goto_if_eq VAR_STARTER_MON, 3, UnknownIsland_EventScript_GiveZangoose
	goto_if_eq VAR_STARTER_MON, 4, UnknownIsland_EventScript_GiveTrapinch
	end

UnknownIsland_EventScript_NoStarter::
	lock
	msgbox UnknownIsland_Text_ForgettingSomething, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, UnknownIsland_Movement_WalkDown
	waitmovement 0
	release
	end

UnknownIsland_EventScript_WarpHome::
	fadescreen FADE_TO_BLACK
	setweather WEATHER_SUNNY
	doweather
	msgbox UnknownIsland_Text_WarpHome, MSGBOX_AUTOCLOSE
	warp MAP_LITTLEROOT_TOWN_PLAYERS_BEDROOM, 1, 6
	end

UnknownIsland_EventScript_FellowFragmentLong::
	goto_if_set FLAG_SYS_POKEMON_GET, UnknownIsland_EventScript_FellowFragmentAwaken
	goto_if_eq VAR_TEMP_1, 1, UnknownIsland_EventScript_FellowFragmentShort
	msgbox UnknownIsland_Text_GreetingPart1, MSGBOX_NPC
	setvar VAR_TEMP_1, 1
	delay 48
	goto UnknownIsland_EventScript_FellowFragmentShort
	end

UnknownIsland_EventScript_FellowFragmentShort::
	msgbox UnknownIsland_Text_GreetingPart2, MSGBOX_NPC
	goto UnknownIsland_EventScript_StarterChoiceRoot
	end

UnknownIsland_EventScript_FellowFragmentAwaken::
	msgbox UnknownIsland_Text_FragmentAwaken, MSGBOX_NPC
	end

UnknownIsland_EventScript_BeginningOfBranch::
	msgbox UnknownIsland_Text_InThatCase, MSGBOX_NPC
	goto UnknownIsland_EventScript_StarterChoiceRoot
	end

UnknownIsland_EventScript_StarterChoiceReturn::
	switch VAR_TEMP_2
	case 1, UnknownIsland_EventScript_StarterOptionsKanto
	case 2, UnknownIsland_EventScript_StarterOptionsJohto
	case 3, UnknownIsland_EventScript_StarterOptionsHoenn
	end

UnknownIsland_EventScript_StarterChoiceRoot::
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnknownIsland_Text_Region1, UnknownIsland_Text_Region2, UnknownIsland_Text_Region3, gText_MenuOptionExit
	switch VAR_RESULT
	case 0, UnknownIsland_EventScript_StarterChoiceKanto
	case 1, UnknownIsland_EventScript_StarterChoiceJohto
	case 2, UnknownIsland_EventScript_StarterChoiceHoenn
	case 3, UnknownIsland_EventScript_AnotherTime
	end

UnknownIsland_EventScript_AnotherTime::
	msgbox UnknownIsland_Text_AnotherTime, MSGBOX_NPC
	end

UnknownIsland_EventScript_StarterChoiceKanto::
	msgbox UnknownIsland_Text_ChoseKanto, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_BeginningOfBranch
	goto UnknownIsland_EventScript_StarterOptionsKanto
	end

UnknownIsland_EventScript_StarterChoiceJohto::
	msgbox UnknownIsland_Text_ChoseJohto, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_BeginningOfBranch
	goto UnknownIsland_EventScript_StarterOptionsJohto
	end

UnknownIsland_EventScript_StarterChoiceHoenn::
	msgbox UnknownIsland_Text_ChoseHoenn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_BeginningOfBranch
	goto UnknownIsland_EventScript_StarterOptionsHoenn
	end

UnknownIsland_EventScript_StarterOptionsKanto::
	setvar VAR_TEMP_2, 1
	msgbox UnknownIsland_Text_WhichKindOfMon, MSGBOX_NPC
	bufferspeciesname 0, SPECIES_CHARMANDER
	bufferspeciesname 1, SPECIES_SQUIRTLE
	bufferspeciesname 2, SPECIES_BULBASAUR
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnknownIsland_Text_DynamicOption1, UnknownIsland_Text_DynamicOption2, UnknownIsland_Text_DynamicOption3, UnknownIsland_Text_Porygon, UnknownIsland_Text_Cubone, gEasyChatWord_Back
	switch VAR_RESULT
	case 0, UnknownIsland_EventScript_StarterFireKanto
	case 1, UnknownIsland_EventScript_StarterWaterKanto
	case 2, UnknownIsland_EventScript_StarterGrassKanto
	case 3, UnknownIsland_EventScript_StarterNormalKanto
	case 4, UnknownIsland_EventScript_StarterGroundKanto
	case 5, UnknownIsland_EventScript_BeginningOfBranch
	end

UnknownIsland_EventScript_StarterOptionsJohto::
	setvar VAR_TEMP_2, 2
	msgbox UnknownIsland_Text_WhichKindOfMon, MSGBOX_NPC
	bufferspeciesname 0, SPECIES_CYNDAQUIL
	bufferspeciesname 1, SPECIES_TOTODILE
	bufferspeciesname 2, SPECIES_CHIKORITA
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnknownIsland_Text_DynamicOption1, UnknownIsland_Text_DynamicOption2, UnknownIsland_Text_DynamicOption3, UnknownIsland_Text_Teddiursa, UnknownIsland_Text_Gligar, gEasyChatWord_Back
	switch VAR_RESULT
	case 0, UnknownIsland_EventScript_StarterFireJohto
	case 1, UnknownIsland_EventScript_StarterWaterJohto
	case 2, UnknownIsland_EventScript_StarterGrassJohto
	case 3, UnknownIsland_EventScript_StarterNormalJohto
	case 4, UnknownIsland_EventScript_StarterGroundJohto
	case 5, UnknownIsland_EventScript_BeginningOfBranch
	end

UnknownIsland_EventScript_StarterOptionsHoenn::
	setvar VAR_TEMP_2, 3
	msgbox UnknownIsland_Text_WhichKindOfMon, MSGBOX_NPC
	bufferspeciesname 0, SPECIES_TORCHIC
	bufferspeciesname 1, SPECIES_MUDKIP
	bufferspeciesname 2, SPECIES_TREECKO
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnknownIsland_Text_DynamicOption1, UnknownIsland_Text_DynamicOption2, UnknownIsland_Text_DynamicOption3, UnknownIsland_Text_Zangoose, UnknownIsland_Text_Trapinch, gEasyChatWord_Back
	switch VAR_RESULT
	case 0, UnknownIsland_EventScript_StarterFireHoenn
	case 1, UnknownIsland_EventScript_StarterWaterHoenn
	case 2, UnknownIsland_EventScript_StarterGrassHoenn
	case 3, UnknownIsland_EventScript_StarterNormalHoenn
	case 4, UnknownIsland_EventScript_StarterGroundHoenn
	case 5, UnknownIsland_EventScript_BeginningOfBranch
	end

UnknownIsland_EventScript_StarterFireKanto::
	bufferspeciesname 0, SPECIES_CHARMANDER
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_TEMP_9, 1
	setvar VAR_STARTER_MON, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveCharmander
	end

UnknownIsland_EventScript_GiveCharmander::
	givemon SPECIES_CHARMANDER, 5
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterWaterKanto::
	bufferspeciesname 0, SPECIES_SQUIRTLE
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_TEMP_9, 1
	setvar VAR_STARTER_MON, 2
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveSquirtle
	end

UnknownIsland_EventScript_GiveSquirtle::
	givemon SPECIES_SQUIRTLE, 5
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterGrassKanto::
	bufferspeciesname 0, SPECIES_BULBASAUR
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_TEMP_9, 1
	setvar VAR_STARTER_MON, 0
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveBulbasaur
	end

UnknownIsland_EventScript_GiveBulbasaur::
	givemon SPECIES_BULBASAUR, 5
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterNormalKanto::
	bufferspeciesname 0, SPECIES_PORYGON
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 3
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GivePorygon
	end

UnknownIsland_EventScript_GivePorygon::
	givemon SPECIES_PORYGON, 5, move1=MOVE_TACKLE, move2=MOVE_CONVERSION, move3=MOVE_PECK, move4=MOVE_SPARK
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterGroundKanto::
	bufferspeciesname 0, SPECIES_CUBONE
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_TEMP_9, 1
	setvar VAR_STARTER_MON, 4
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveCubone
	end

UnknownIsland_EventScript_GiveCubone::
	givemon SPECIES_CUBONE, 5, move1=MOVE_TACKLE, move2=MOVE_GROWL, move3=MOVE_TAIL_WHIP, move4=MOVE_ANCIENT_POWER
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterFireJohto::
	bufferspeciesname 0, SPECIES_CYNDAQUIL
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 1
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveCyndaquil
	end

UnknownIsland_EventScript_GiveCyndaquil::
	givemon SPECIES_CYNDAQUIL, 5
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterWaterJohto::
	bufferspeciesname 0, SPECIES_TOTODILE
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_TEMP_9, 1
	setvar VAR_STARTER_MON, 2
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveTotodile
	end

UnknownIsland_EventScript_GiveTotodile::
	givemon SPECIES_TOTODILE, 5
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterGrassJohto::
	bufferspeciesname 0, SPECIES_CHIKORITA
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 0
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveChikorita
	end

UnknownIsland_EventScript_GiveChikorita::
	givemon SPECIES_CHIKORITA, 5
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterNormalJohto::
	bufferspeciesname 0, SPECIES_TEDDIURSA
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 3
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveTeddiursa
	end

UnknownIsland_EventScript_GiveTeddiursa::
	givemon SPECIES_TEDDIURSA, 5, move1=MOVE_LICK, move2=MOVE_COVET, move3=MOVE_SCRATCH, move4=MOVE_CRUNCH
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterGroundJohto::
	bufferspeciesname 0, SPECIES_GLIGAR
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 4
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveGligar
	end

UnknownIsland_EventScript_GiveGligar::
	givemon SPECIES_GLIGAR, 5, move1=MOVE_POISON_STING, move2=MOVE_SCRATCH, move3=MOVE_SAND_ATTACK, move4=MOVE_WING_ATTACK
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterFireHoenn::
	bufferspeciesname 0, SPECIES_TORCHIC
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 1
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveTorchic
	end

UnknownIsland_EventScript_GiveTorchic::
	givemon SPECIES_TORCHIC, 5
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterWaterHoenn::
	bufferspeciesname 0, SPECIES_MUDKIP
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 2
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveMudkip
	end

UnknownIsland_EventScript_GiveMudkip::
	givemon SPECIES_MUDKIP, 5
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterGrassHoenn::
	bufferspeciesname 0, SPECIES_TREECKO
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 0
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveTreecko
	end

UnknownIsland_EventScript_GiveTreecko::
	givemon SPECIES_TREECKO, 5
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterNormalHoenn::
	bufferspeciesname 0, SPECIES_ZANGOOSE
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 3
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveZangoose
	end

UnknownIsland_EventScript_GiveZangoose::
	givemon SPECIES_ZANGOOSE, 5, move1=MOVE_SCRATCH, move2=MOVE_LEER, move3=MOVE_QUICK_ATTACK
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_StarterGroundHoenn::
	bufferspeciesname 0, SPECIES_TRAPINCH
	msgbox UnknownIsland_Text_StarterConfirm, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, UnknownIsland_EventScript_StarterChoiceReturn
	setvar VAR_STARTER_MON, 4
	setvar VAR_TEMP_9, 1
	call Common_EventScript_SaveGameSR
	goto UnknownIsland_EventScript_GiveTrapinch
	end

UnknownIsland_EventScript_GiveTrapinch::
	givemon SPECIES_TRAPINCH, 5, move1=MOVE_ASTONISH, move2=MOVE_SAND_ATTACK, move3=MOVE_GUST, move4=MOVE_QUICK_ATTACK
	call UnknownIsland_EventScript_NicknameMon
	end

UnknownIsland_EventScript_NicknameMon::
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	bufferlivemonnickname 0
	playfanfare MUS_A_NEW_FRIEND
	msgbox UnknownIsland_Text_YouRemembered, MSGBOX_DEFAULT
	waitfanfare
	setvar VAR_TEMP_5, 1
	setvar VAR_TEMP_9, 0
	closemessage
	clearflag FLAG_QUALIFYING_GIFT
	delay 16
	msgbox UnknownIsland_Text_FragmentAwaken, MSGBOX_DEFAULT
	closemessage
	return

UnknownIsland_Movement_WalkDown::
	walk_down
	step_end

UnknownIsland_Text_GreetingPart1:
	.string "I'm sure you could tell by how strange\n"
	.string "it seems, but this island doesn't really\l"
	.string "exist.\p"
	.string "It's born of memories, fragments and\n"
	.string "pieces… just like you and me!\p"
	.string "Just fragments of something larger out\n"
	.string "there, looking to put itself back\l"
	.string "together.\p"
	.string "Your name is {PLAYER}, just like mine.\p"
	.string "A borrowed name, a given name, a chosen\n"
	.string "name… all are important, don't you\l"
	.string "think?$"

UnknownIsland_Text_GreetingPart2:
	.string "I'd like to ask you a question.\p"
	.string "Rather, I need to tell you something:\n"
	.string "you have a friend beside you, but you\l"
	.string "cannot see them because you do not\l"
	.string "remember their name.\p"
	.string "Put together some pieces for me… what\n"
	.string "region is your friend from?$"

UnknownIsland_Text_ChoseKanto:
	.string "So your friend is from Kanto?$"

UnknownIsland_Text_ChoseJohto:
	.string "So your friend is from Johto?$"

UnknownIsland_Text_ChoseHoenn:
	.string "So your friend is from Hoenn?$"

UnknownIsland_Text_WhichKindOfMon:
	.string "Well then, which of these species\n"
	.string "does your friend belong to?$"

UnknownIsland_Text_StarterConfirm:
	.string "Is {STR_VAR_1}\n"
	.string "the species of your friend?$"

UnknownIsland_Text_AnotherTime:
	.string "You're unsure?\p"
	.string "Perhaps another time, then.\n"
	.string "Sometime soon, no doubt.$"

UnknownIsland_Text_InThatCase:
	.string "In that case…\p"
	.string "This friend of yours… what region\n"
	.string "are they from?$"

UnknownIsland_Text_FragmentAwaken:
	.string "Restless dreamer, it is your turn to\n"
	.string "awaken.\p"
	.string "Please, carry this island in your heart,\n"
	.string "or else you'll let it fade.$"

UnknownIsland_Text_YouRemembered:
	.string "You remembered {STR_VAR_1}!$"

UnknownIsland_Text_ForgettingSomething:
	.string "You feel as though you are\n"
	.string "forgetting something.\p"
	.string "Perhaps you should take another\n"
	.string "look around.$"

UnknownIsland_Text_WarpHome:
	.string "Carry this island in your heart…\p"
	.string "Remember.\p"
	.string "It's time to wake up.$"

UnknownIsland_Text_DynamicOption1:
	.string "{STR_VAR_1}$"

UnknownIsland_Text_DynamicOption2:
	.string "{STR_VAR_2}$"

UnknownIsland_Text_DynamicOption3:
	.string "{STR_VAR_3}$"

UnknownIsland_Text_Porygon:
	.string "Porygon$"

UnknownIsland_Text_Cubone:
	.string "Cubone$"

UnknownIsland_Text_Teddiursa:
	.string "Teddiursa$"

UnknownIsland_Text_Gligar:
	.string "Gligar$"

UnknownIsland_Text_Zangoose:
	.string "Zangoose$"

UnknownIsland_Text_Trapinch:
	.string "Trapinch$"

UnknownIsland_Text_Region1:
	.string "Kanto$"

UnknownIsland_Text_Region2:
	.string "Johto$"

UnknownIsland_Text_Region3:
	.string "Hoenn$"

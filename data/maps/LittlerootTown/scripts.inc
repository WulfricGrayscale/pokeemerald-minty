.set LOCALID_TWIN, 1
.set LOCALID_MOM, 4
.set LOCALID_RIVAL, 7
.set LOCALID_BIRCH, 8

LittlerootTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
	.byte 0

	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
	@ 1: Met Rival
	@ 2: Saving Birch
	@ 3: Received Pokedex
	@ 4: Received Running Shoes

LittlerootTown_OnTransition:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	call_if_eq VAR_TEMP_0, LittlerootTown_EventScript_UnhideMapNamePopup
	end

LittlerootTown_EventScript_UnhideMapNamePopup::
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	addvar VAR_TEMP_0, 1
	return

LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
	return

LittlerootTown_EventScript_FatMan::
	msgbox LittlerootTown_Text_TechnologyIsAstounding, MSGBOX_NPC
	end

LittlerootTown_EventScript_Boy::
	msgbox LittlerootTown_Text_LittlerootGrove, MSGBOX_NPC
	end

LittlerootTown_EventScript_Twin::
	lock
	faceplayer
	msgbox LittlerootTown_Text_StrawberryFields, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_ForSaleSign::
	msgbox LittlerootTown_Text_ForSaleSign, MSGBOX_SIGN
	end

LittlerootTown_EventScript_TownSign::
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BirchsLabSign::
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BirchsHouseSign::
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_SIGN
	end

LittlerootTown_EventScript_NormansHouseSign::
	msgbox LittlerootTown_Text_NormansHouse, MSGBOX_SIGN
	end

LittlerootTown_EventScript_PlayersHouseSign::
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_SIGN
	end

LittlerootTown_Text_TechnologyIsAstounding:
	.string "The power of technology is astounding!\n"
	.string "Thanks to the internet, I can find\l"
	.string "information about anything I dream of.\p"
	.string "Unfortunately, my default search\n"
	.string "engine is becoming less and less\l"
	.string "reliable, so it almost feels like we're\l"
	.string "back at square one.$"

LittlerootTown_Text_LittlerootGrove:
	.string "Have you checked out Littleroot Grove?\p"
	.string "I heard that some pretty unique\n"
	.string "Pokémon can be found there, but a\l"
	.string "group of kids who call themselves the\l"
	.string "Bug Boys wouldn't let me in.$"

LittlerootTown_Text_StrawberryFields:
	.string "A lot of cool new places have been\n"
	.string "showing up around Hoenn over the\l"
	.string "years, but they're all scary or yucky\l"
	.string "and full of bugs and ghosts.\p"
	.string "I really wish someone would find a field\n"
	.string "that's always full of strawberries\l"
	.string "instead.$"

LittlerootTown_Text_TownSign:
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_Text_ProfBirchsLab:
	.string "Prof. Birch's Pokémon Lab$"

LittlerootTown_Text_PlayersHouse:
	.string "{PLAYER}'s House$"

LittlerootTown_Text_ProfBirchsHouse:
	.string "Prof. Birch's House$"

LittlerootTown_Text_NormansHouse:
	.string "Leader Norman's House$"

LittlerootTown_Text_ForSaleSign:
	.string "A sign that once said FOR SALE now only\n"
	.string "reads SOLD.\p"
	.string "You've lived here for a month.$"

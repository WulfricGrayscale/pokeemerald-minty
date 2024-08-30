LittlerootTown_PlayersBedroom_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_PlayersBedroom_OnWarp
	.byte 0

LittlerootTown_PlayersBedroom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, LittlerootTown_PlayersBedroom_EventScript_RunningShoes
	.2byte 0

LittlerootTown_PlayersBedroom_EventScript_RunningShoes::
	setflag FLAG_SYS_B_DASH
	addvar VAR_TEMP_1, 1
	end

LittlerootTown_PlayersBedroom_EventScript_BedHeal::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_FaceDown
	msgbox LittlerootTown_PlayersBedroom_Text_BetterRest, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox LittlerootTown_PlayersBedroom_Text_AllBetter, MSGBOX_DEFAULT
	closemessage
	releaseall
	setvar VAR_TEMP_0, 0
	end

LittlerootTown_PlayersBedroom_EventScript_SetBedHeal::
	setvar VAR_TEMP_0, 1
	end

LittlerootTown_PlayersBedroom_EventScript_CheckPlayersPC::
	setvar VAR_0x8004, PC_LOCATION_PLAYERS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

LittlerootTown_PlayersBedroom_EventScript_TurnOffPlayerPC::
	setvar VAR_0x8004, PC_LOCATION_PLAYERS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

LittlerootTown_PlayersBedroom_EventScript_Storage::
	msgbox LittlerootTown_PlayersBedroom_Text_Storage0
	random 5
	switch VAR_RESULT,
	case 0, LittlerootTown_PlayersBedroom_EventScript_Storage1
	case 1, LittlerootTown_PlayersBedroom_EventScript_Storage2
	case 2, LittlerootTown_PlayersBedroom_EventScript_Storage3
	case 3, LittlerootTown_PlayersBedroom_EventScript_Storage4
	case 4, LittlerootTown_PlayersBedroom_EventScript_Storage5
	end

LittlerootTown_PlayersBedroom_EventScript_Storage1::
	msgbox LittlerootTown_PlayersBedroom_Text_Storage1, MSGBOX_SIGN
	end

LittlerootTown_PlayersBedroom_EventScript_Storage2::
	msgbox LittlerootTown_PlayersBedroom_Text_Storage2, MSGBOX_SIGN
	end

LittlerootTown_PlayersBedroom_EventScript_Storage3::
	msgbox LittlerootTown_PlayersBedroom_Text_Storage3, MSGBOX_SIGN
	end

LittlerootTown_PlayersBedroom_EventScript_Storage4::
	msgbox LittlerootTown_PlayersBedroom_Text_Storage4, MSGBOX_SIGN
	end

LittlerootTown_PlayersBedroom_EventScript_Storage5::
	msgbox LittlerootTown_PlayersBedroom_Text_Storage5Part1, MSGBOX_SIGN
	playfanfare MUS_RG_POKE_FLUTE
	waitfanfare
	msgbox LittlerootTown_PlayersBedroom_Text_Storage5Part2, MSGBOX_SIGN
	end

LittlerootTown_PlayersBedroom_EventScript_GameCube::
	msgbox LittlerootTown_PlayersBedroom_Text_GameCube, MSGBOX_SIGN
	end

LittlerootTown_PlayersBedroom_Text_BetterRest:
	.string "Feeling kinda tired…\p"
	.string "Better take a quick nap!$"

LittlerootTown_PlayersBedroom_Text_AllBetter:
	.string "There, all better!$"

LittlerootTown_PlayersBedroom_Text_Storage0:
	.string "Let's see here…$"

LittlerootTown_PlayersBedroom_Text_Storage1:
	.string "In the drawers you find a brand new\n"
	.string "pair of running shoes!\p"
	.string "…But you don't wear shoes.\p"
	.string "Better put them back.$"

LittlerootTown_PlayersBedroom_Text_Storage2:
	.string "In the drawers you find a strategy\n"
	.string "guide for Pokémon Emerald!\p"
	.string "Unfortunately, it's not in\n"
	.string "mint condition.\p"
	.string "Better put it back.$"

LittlerootTown_PlayersBedroom_Text_Storage3:
	.string "In the drawers you find a…\p"
	.string "Whoops!\p"
	.string "Better put that back!$"

LittlerootTown_PlayersBedroom_Text_Storage4:
	.string "In the drawers you find a photo album.\p"
	.string "There are photos of Sans with a lot of\n"
	.string "people you don't recognize.\p"
	.string "Hey! This isn't yours!\p"
	.string "Better put it back anyway.$"

LittlerootTown_PlayersBedroom_Text_Storage5Part1:
	.string "In the drawers you find a relaxing\n"
	.string "flute melody.$"

LittlerootTown_PlayersBedroom_Text_Storage5Part2:
	.string "…Ah.\n"
	.string "Refreshing.$"

LittlerootTown_PlayersBedroom_Text_GameCube:
	.string "It's a Nintendo GameCube.\p"
	.string "What a fun retro console.\n"
	.string "Better get going!$"

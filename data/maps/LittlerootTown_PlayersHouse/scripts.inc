LittlerootTown_PlayersHouse_MapScripts::
	.byte 0

LittlerootTown_PlayersHouse_EventScript_WallClock::
	goto PlayersHouse_2F_EventScript_WallClock
	end

LittlerootTown_PlayersHouse_EventScript_Fridge::
	msgbox LittlerootTown_PlayersHouse_Text_LeftoverPizza, MSGBOX_SIGN
	end

LittlerootTown_PlayersHouse_EventScript_ClockNotSet::
	lockall
	msgbox LittlerootTown_PlayersHouse_Text_ClockNotSet, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_PlayersHouse_EventScript_WalkUpSouth
	goto_if_eq VAR_FACING, DIR_EAST, LittlerootTown_PlayersHouse_EventScript_WalkUpEast
	goto_if_eq VAR_FACING, DIR_WEST, LittlerootTown_PlayersHouse_EventScript_WalkUpWest
	end

LittlerootTown_PlayersHouse_EventScript_WalkUpWest:
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_PlayersHouse_Movement_ClockNotSet
	waitmovement 0
	applymovement OBJ_EVENT_ID_FOLLOWER, LittlerootTown_PlayersHouse_Movement_FollowerClockWest
	waitmovement 0
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	releaseall
	end

LittlerootTown_PlayersHouse_EventScript_WalkUpEast:
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_PlayersHouse_Movement_ClockNotSet
	waitmovement 0
	applymovement OBJ_EVENT_ID_FOLLOWER, LittlerootTown_PlayersHouse_Movement_FollowerClockEast
	waitmovement 0
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	releaseall
	end

LittlerootTown_PlayersHouse_EventScript_WalkUpSouth:
	applymovement OBJ_EVENT_ID_FOLLOWER, LittlerootTown_PlayersHouse_Movement_FollowerClockSouth
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_PlayersHouse_Movement_ClockNotSet
	waitmovement 0
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	releaseall
	end


LittlerootTown_PlayersHouse_Movement_ClockNotSet:
	walk_up
	step_end

LittlerootTown_PlayersHouse_Movement_FollowerClockWest:
	walk_left
	face_player
	step_end

LittlerootTown_PlayersHouse_Movement_FollowerClockEast:
	walk_right
	face_player
	step_end

LittlerootTown_PlayersHouse_Movement_FollowerClockSouth:
	walk_right
	face_player
	step_end

LittlerootTown_PlayersHouse_Text_LeftoverPizza:
	.string "Looking through the fridge, you find\n"
	.string "some leftover pizza. You wonder how\l"
	.string "long it's been here.\p"
	.string "…Suddenly, you aren't that hungry.$"

LittlerootTown_PlayersHouse_Text_ClockNotSet:
	.string "I think I forgot to set the clock…\n"
	.string "Better do that before I leave.$"

PlayersHouse_2F_Text_ClockIsStopped:
	.string "The clock is stopped…\p"
	.string "Better set it and start it!$"

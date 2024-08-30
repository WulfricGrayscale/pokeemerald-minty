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
	switch VAR_FACING
	case DIR_SOUTH, LittlerootTown_PlayersHouse_EventScript_WalkUpSouth
	case DIR_EAST, LittlerootTown_PlayersHouse_EventScript_WalkUpEast
	case DIR_WEST, LittlerootTown_PlayersHouse_EventScript_WalkUpWest
	end

LittlerootTown_PlayersHouse_EventScript_WalkUpWest:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_FOLLOWER, LittlerootTown_PlayersHouse_Movement_FollowerClockWest
	releaseall
	end

LittlerootTown_PlayersHouse_EventScript_WalkUpEast:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_FOLLOWER, LittlerootTown_PlayersHouse_Movement_FollowerClockEast
	releaseall
	end

LittlerootTown_PlayersHouse_EventScript_WalkUpSouth:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	applymovement OBJ_EVENT_ID_FOLLOWER, LittlerootTown_PlayersHouse_Movement_FollowerClockSouth
	releaseall
	end

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

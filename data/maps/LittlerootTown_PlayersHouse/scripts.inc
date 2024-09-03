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
	applymovement OBJ_EVENT_ID_FOLLOWER, LittlerootTown_PlayersHouse_Movement_EnterBall
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_PlayersHouse_Movement_ClockNotSet
	waitmovement 0
	applymovement OBJ_EVENT_ID_FOLLOWER, LittlerootTown_PlayersHouse_Movement_ExitBall
	waitmovement 0
	releaseall
	end

LittlerootTown_PlayersHouse_Movement_ClockNotSet:
	walk_up
	step_end

LittlerootTown_PlayersHouse_Movement_EnterBall:
	enter_pokeball
	step_end

LittlerootTown_PlayersHouse_Movement_ExitBall:
	exit_pokeball
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

LittlerootTown_PlayersHouse_MapScripts::
	.byte 0

LittlerootTown_PlayersHouse_EventScript_WallClock::
	goto PlayersHouse_2F_EventScript_WallClock
	end

LittlerootTown_PlayersHouse_EventScript_Fridge::
	msgbox LittlerootTown_PlayersHouse_Text_LeftoverPizza, MSGBOX_SIGN
	end

LittlerootTown_PlayersHouse_Text_LeftoverPizza:
	.string "Looking through the fridge, you find\n"
	.string "some leftover pizza. You wonder how\l"
	.string "long it's been here.\p"
	.string "…Suddenly, you aren't that hungry.$"


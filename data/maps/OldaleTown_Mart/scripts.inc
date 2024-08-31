.set LOCALID_CLERK, 1

OldaleTown_Mart_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_Mart_OnFrame
	.byte 0

OldaleTown_Mart_OnFrame::
map_script_2 VAR_BIRCH_LAB_STATE, 1, OldaleTown_Mart_EventScript_Parcel
	.2byte 0

OldaleTown_Mart_EventScript_Parcel::
	lockall
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement LOCALID_CLERK, Common_Movement_WalkInPlaceDown
	msgbox OldaleTown_Mart_Text_AreYouProfAssist, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Mart_Movement_Parcel
	applymovement OBJ_EVENT_ID_FOLLOWER, OldaleTown_Mart_Movement_Parcel
	waitmovement 0
	applymovement LOCALID_CLERK, Common_Movement_WalkInPlaceRight
	msgbox OldaleTown_Mart_Text_TakeThisParcel, MSGBOX_AUTOCLOSE
	waitmessage
	giveitem ITEM_PARCEL
	addvar VAR_BIRCH_LAB_STATE, 1
	releaseall
	end

OldaleTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
	pokemart OldaleTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Basic:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_ExpandedItems::
	pokemart OldaleTown_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
	release
	end

OldaleTown_Mart_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_PokeBallsInStock::
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Boy::
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end

OldaleTown_Mart_Movement_Parcel:
	walk_up
	walk_up
	walk_up
	walk_up
	face_left
	step_end

OldaleTown_Mart_Text_PokeBallsAreSoldOut:
	.string "The clerk says they're all sold out.\n"
	.string "I can't buy any POKé BALLS.$"

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
	.string "I'm going to buy a bunch of POKé BALLS\n"
	.string "and catch a bunch of POKéMON!$"

OldaleTown_Mart_Text_RestoreHPWithPotion:
	.string "If a POKéMON gets hurt and loses its HP\n"
	.string "and faints, it won't be able to battle.\p"
	.string "To prevent your POKéMON from fainting,\n"
	.string "restore its HP with a POTION.$"

OldaleTown_Mart_Text_AreYouProfAssist:
	.string "Oh, hey, are you the professor's\n"
	.string "assistant? From Littleroot Town?$"

OldaleTown_Mart_Text_TakeThisParcel:
	.string "Here, you should take this package.\p"
	.string "It was delivered here for Professor\n"
	.string "Birch the other day.$"


.set LOCALID_BIRCH, 2
.set LOCALID_SENTRET, 5
.set LOCALID_BEETLE, 4

Route101_MapScripts::
	.byte 0

Route101_EventScript_Youngster::
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end

Route101_EventScript_Boy::
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end

Route101_EventScript_RouteSign::
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end

Route101_EventScript_Gatekeeper::
	msgbox Route101_Text_YouCannotEnter, MSGBOX_NPC
	end

Route101_EventScript_Birch::
	goto Route101_EventScript_Error
	end

Route101_EventScript_Gatekeeping::
	lock
	applymovement LOCALID_BEETLE, Common_Movement_FaceDown
	waitmovement 0
	applymovement LOCALID_BEETLE, Common_Movement_ExclamationMark
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox Route101_Text_YouCannotEnter, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_WalkLeft
	waitmovement 0
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
	waitmovement 0
	releaseall
	end

Route101_EventScript_BirchTrigger1::
	lockall
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_ApproachBirchTrigger1
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101_Movement_WalkLeft
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101_Movement_ApproachBirchTrigger1
	waitmovement 0
	goto Route101_EventScript_BirchTriggerAll
	end

Route101_EventScript_BirchTrigger2::
	lockall
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_ApproachBirchTrigger2
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101_Movement_ApproachBirchTrigger2
	waitmovement 0
	goto Route101_EventScript_BirchTriggerAll
	end

Route101_EventScript_BirchTrigger3::
	lockall
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_ApproachBirchTrigger3
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101_Movement_ApproachBirchTrigger3
	waitmovement 0
	goto Route101_EventScript_BirchTriggerAll
	end

Route101_EventScript_BirchTrigger4::
	lockall
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_ApproachBirchTrigger4
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101_Movement_ApproachBirchTrigger4
	waitmovement 0
	goto Route101_EventScript_BirchTriggerAll
	end

Route101_EventScript_BirchTriggerAll::
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_ApproachBirchTriggerAll
	applymovement OBJ_EVENT_ID_FOLLOWER, Route101_Movement_ApproachBirchFollowerAll
	applymovement LOCALID_SENTRET, Route101_Movement_SurpriseByPlayer
	playse SE_PIN
	waitmovement 0
	delay 16
	applymovement LOCALID_BIRCH, Route101_Movement_SurpriseByPlayer
	playse SE_PIN
	applymovement LOCALID_SENTRET, Route101_Movement_RunAway
	waitmovement 0
	removeobject LOCALID_SENTRET
	setflag FLAG_HIDE_ROUTE_101_SENTRET
	goto Route101_EventScript_BirchSpeech
	end

Route101_EventScript_BirchSpeech::
	msgbox Route101_Text_ProfBirchMyAssistant, MSGBOX_DEFAULT
	waitmessage
	applymovement LOCALID_BIRCH, Common_Movement_FaceRight
	msgbox Route101_Text_ProfBirchNewSpecies, MSGBOX_DEFAULT
	waitmessage
	applymovement LOCALID_BIRCH, Common_Movement_FaceDown
	msgbox Route101_Text_ProfBirchPackage, MSGBOX_DEFAULT
	waitmessage
	applymovement LOCALID_BIRCH, Common_Movement_FaceUp
	bufferlivemonnickname 0
	msgbox Route101_Text_ProfBirchDirectionsToOldale, MSGBOX_DEFAULT
	waitmessage
	applymovement LOCALID_BIRCH, Common_Movement_FaceDown
	msgbox Route101_Text_ProfBirchWillBeWaiting, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement LOCALID_BIRCH, Route101_Movement_BirchLeave
	waitmovement 0
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	setvar VAR_BIRCH_LAB_STATE, 1
	removeobject LOCALID_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH
	releaseall
	end

Route101_EventScript_Error::
	msgbox Route101_Text_WhatAreYouDoing, MSGBOX_NPC
	end

Route101_Movement_WalkLeft:
	walk_left
	step_end

Route101_Movement_SurpriseByPlayer:
	face_down
	emote_exclamation_mark
	step_end

Route101_Movement_RunAway:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route101_Movement_ApproachBirchTrigger1:
	walk_left
	step_end

Route101_Movement_ApproachBirchTrigger2:
	walk_left
	walk_up
	step_end

Route101_Movement_ApproachBirchTrigger3:
	walk_left
	walk_up
	walk_up
	step_end

Route101_Movement_ApproachBirchTrigger4:
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

Route101_Movement_ApproachBirchTriggerAll:
	walk_up
	walk_left
	walk_up
	step_end

Route101_Movement_ApproachBirchFollowerAll:
	walk_up
	walk_left
	walk_in_place_up
	step_end

Route101_Movement_BirchLeave:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

Route101_Text_TakeTiredPokemonToPokeCenter:
	.string "If POKéMON get tired, take them to\n"
	.string "a POKéMON CENTER.\p"
	.string "There's a POKéMON CENTER in OLDALE\n"
	.string "TOWN right close by.$"

Route101_Text_WildPokemonInTallGrass:
	.string "Wild POKéMON will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch POKéMON, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_RouteSign:
	.string "ROUTE 101\n"
	.string "{UP_ARROW} OLDALE TOWN$"

Route101_Text_YouCannotEnter:
	.string "BEETLE: Hey!\p"
	.string "I've never seen you around here,\n"
	.string "so who do you think you are coming\l"
	.string "onto the turf of the Bug Boys?\p"
	.string "Scram!$"

Route101_Text_WhatAreYouDoing:
	.string "Hunh?\p"
	.string "If you're reading this, something is\n"
	.string "not going right. Report this!$"	

Route101_Text_ProfBirchMyAssistant:
	.string "Prof. Birch: Ah, there's my assistant!\p"
	.string "Brendan's still in the lab right now,\n"
	.string "but I wanted to take the opportunity\l"
	.string "to study some more of the wild Pokémon\l"
	.string "living in the area.$"

Route101_Text_ProfBirchNewSpecies:
	.string "Not too long ago, I had a basic\n"
	.string "understanding of the species\l"
	.string "distribution in Hoenn.\p"
	.string "But it seems that plenty of Pokémon\n"
	.string "never before seen in the region\l"
	.string "have been showing up and filling in\l"
	.string "ecological niches previously left\l"
	.string "unfilled!$"

Route101_Text_ProfBirchPackage:
	.string "I know most of your time as my\n"
	.string "assistant has been processing\l"
	.string "data in Littleroot, but could I\l"
	.string "trouble you to pick up an important\l"
	.string "package for me from the mart in\l"
	.string "Oldale Town?$"

Route101_Text_ProfBirchDirectionsToOldale:
	.string "It's just to the north, and {STR_VAR_1}\n"
	.string "should be able to protect you from any\l"
	.string "wild Pokémon who might jump out at you.$"

Route101_Text_ProfBirchWillBeWaiting:
	.string "I'll be waiting in the lab.\p"
	.string "Good luck!$"

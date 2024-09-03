.set LOCALID_BEETLE, 2
.set LOCALID_WEEVIL, 3
.set LOCALID_KID, 5
.set LOCALID_LOSER, 6
.set LOCALID_SCYTHER, 7
.set LOCALID_CATERPIE, 8
.set LOCALID_HERACROSS, 9

LittlerootGrove_MapScripts::
	.byte 0

LittlerootGrove_OnTransition::
	end

LittlerootGrove_OnFrame::
	end

LittlerootGrove_EventScript_WeevilWinStreak::
	goto_if_defeated TRAINER_WEEVIL, LittlerootGrove_EventScript_WeevilWinStreakBroken
	msgbox LittlerootGrove_Text_WeevilWinStreak, MSGBOX_SIGN
	end

LittlerootGrove_EventScript_WeevilWinStreakBroken::
	msgbox LittlerootGrove_Text_WeevilWinStreakBroken, MSGBOX_SIGN
	end

LittlerootGrove_EventScript_BoyTest::
	msgbox LittlerootGrove_Text_Test, MSGBOX_NPC
	end

LittlerootGrove_EventScript_Sorry::
	goto_if_defeated TRAINER_WEEVIL, LittlerootGrove_EventScript_BackToNormal
	goto_if_eq VAR_TEMP_1, 1, LittlerootGrove_EventScript_SorryShort
	msgbox LittlerootGrove_Text_Sorry, MSGBOX_NPC
	setvar VAR_TEMP_1, 1
	applymovement LOCALID_BEETLE, Common_Movement_FaceAwayPlayer
	delay 60
	faceplayer
	msgbox LittlerootGrove_Text_BeetleFavor, MSGBOX_NPC
	end

LittlerootGrove_EventScript_SorryShort::
	msgbox LittlerootGrove_Text_BeetleFavor, MSGBOX_NPC
	end

LittlerootGrove_EventScript_BackToNormal::
	msgbox LittlerootGrove_Text_BackToNormal, MSGBOX_NPC
	end

LittlerootGrove_EventScript_LittleBug::
	playmoncry SPECIES_WURMPLE, CRY_MODE_NORMAL
	waitmoncry
	msgbox LittlerootGrove_Text_LittleBug, MSGBOX_NPC
	end

LittlerootGrove_EventScript_LittleKid::
	msgbox LittlerootGrove_Text_LearningToCatch, MSGBOX_NPC
	playmoncry SPECIES_YANMA, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_KID, Common_Movement_FaceAwayPlayer
	waitmovement 0
	applymovement LOCALID_KID, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	msgbox LittlerootGrove_Text_DidYouHear, MSGBOX_NPC
	end

LittlerootGrove_EventScript_Loser::
	msgbox LittlerootGrove_Text_CaterpieCantHackIt, MSGBOX_DEFAULT
	closemessage
	delay 16
	msgbox LittlerootGrove_Text_QuitDistractingMe, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	end

LittlerootGrove_EventScript_Caterpie::
	playmoncry SPECIES_CATERPIE, CRY_MODE_NORMAL
	waitmoncry
	msgbox LittlerootGrove_Text_FocusedOnBattle, MSGBOX_DEFAULT
	closemessage
	end

LittlerootGrove_EventScript_Scyther::
	goto_if_defeated TRAINER_WEEVIL, LittlerootGrove_EventScript_HeracrossScytherWordless
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
	waitmoncry
	msgbox LittlerootGrove_Text_FocusedOnBattle, MSGBOX_DEFAULT
	closemessage
	end

LittlerootGrove_EventScript_Weevil::
	msgbox LittlerootGrove_Text_WeevilGoScyther, MSGBOX_DEFAULT
	closemessage
	delay 48
	applymovement LOCALID_WEEVIL, Common_Movement_FacePlayer
	msgbox LittlerootGrove_Text_WeevilWannaFight, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq LittlerootGrove_EventScript_NotRightNow
	msgbox LittlerootGrove_Text_WeevilLetsFight, MSGBOX_NPC
	applymovement LOCALID_WEEVIL, Common_Movement_WalkInPlaceDown
	applymovement LOCALID_LOSER, Common_Movement_ExclamationMark
	playse SE_PIN
	waitse
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	applymovement LOCALID_SCYTHER, LittlerootGrove_Movement_EnterPokeball
	msgbox LittlerootGrove_Text_WeevilThisIsOver, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CATERPIE, LittlerootGrove_Movement_EnterPokeball
	waitmovement 0
	applymovement LOCALID_LOSER, LittlerootGrove_Movement_LeaveBattlefield
	waitmovement 0
	switch VAR_FACING
	case DIR_EAST, LittlerootGrove_EventScript_WeevilChallengeFacingEast
	case DIR_WEST, LittlerootGrove_EventScript_WeevilChallengeFacingWest
	case DIR_SOUTH, LittlerootGrove_EventScript_WeevilChallengeFacingSouth
	end

LittlerootGrove_EventScript_NotRightNow::
	msgbox LittlerootGrove_Text_WeevilGetLost, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	end

LittlerootGrove_EventScript_WeevilChallengeFacingSouth::
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootGrove_Movement_EnterBattlefieldFacingSouth
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootGrove_Movement_CameraMoveUp
	waitmovement 0
	delay 20
	trainerbattle_no_intro TRAINER_WEEVIL, LittlerootGrove_Text_WeevilDefeated
	goto LittlerootGrove_EventScript_WeevilLost
	end

LittlerootGrove_EventScript_WeevilChallengeFacingEast::
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootGrove_Movement_EnterBattlefieldFacingEast
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootGrove_Movement_CameraMoveUp
	waitmovement 0
	delay 20
	trainerbattle_no_intro TRAINER_WEEVIL, LittlerootGrove_Text_WeevilDefeated
	goto LittlerootGrove_EventScript_WeevilLost
	end

LittlerootGrove_EventScript_WeevilChallengeFacingWest::
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootGrove_Movement_EnterBattlefieldFacingWest
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootGrove_Movement_CameraMoveUp
	waitmovement 0
	delay 20
	trainerbattle_no_intro TRAINER_WEEVIL, LittlerootGrove_Text_WeevilDefeated
	goto LittlerootGrove_EventScript_WeevilLost
	end

LittlerootGrove_EventScript_WeevilLost::
	special SpawnCameraObject
	removeobject LOCALID_LOSER
	delay 60
	applymovement LOCALID_WEEVIL, LittlerootGrove_Movement_ChangeSign
	waitmovement 0
	msgbox LittlerootGrove_Text_WhatWasYourName, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WEEVIL, Common_Movement_FaceDown
	msgbox LittlerootGrove_Text_ChangedTheSign, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WEEVIL, LittlerootGrove_Movement_ReturnToPosition
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootGrove_Movement_CameraMoveDown
	waitmovement 0
	special RemoveCameraObject
	msgbox LittlerootGrove_Text_WeevilAdmittingDefeat, MSGBOX_NPC
	delay 48
	applymovement LOCALID_WEEVIL, Common_Movement_ExclamationMark
	playse SE_PIN
	goto LittlerootGrove_EventScript_WeevilMonOut
	end

LittlerootGrove_EventScript_WeevilMonOut::
	setobjectxyperm LOCALID_SCYTHER, 22, 5
	addobject LOCALID_SCYTHER
	applymovement LOCALID_SCYTHER, LittlerootGrove_Movement_ExitPokeball
	waitmovement 0
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
	waitmoncry
	addobject LOCALID_HERACROSS
	applymovement LOCALID_HERACROSS, LittlerootGrove_Movement_ExitPokeball
	waitmovement 0
	playmoncry SPECIES_HERACROSS, CRY_MODE_NORMAL
	waitmoncry
	call_if_unset FLAG_DEFEATED_WEEVIL, LittlerootGrove_EventScript_WeevilGetItNow
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_lt VAR_RESULT, 5, LittlerootGrove_EventScript_GivemonChoice
	msgbox LittlerootGrove_Text_PartyFull, MSGBOX_DEFAULT
	closemessage
	end

LittlerootGrove_EventScript_WeevilGetItNow::
	msgbox LittlerootGrove_Text_WeevilGetItNow, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_DEFEATED_WEEVIL
	return

LittlerootGrove_EventScript_HeracrossScytherWordless::
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
	waitmoncry
	delay 16
	playmoncry SPECIES_HERACROSS, CRY_MODE_NORMAL
	waitmoncry
	msgbox LittlerootGrove_Text_BugsNeitherTalk, MSGBOX_DEFAULT
	closemessage
	end

LittlerootGrove_EventScript_GivemonChoice::
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, LittlerootGrove_Text_Scyther, LittlerootGrove_Text_Heracross
	switch VAR_RESULT
	case 0, LittlerootGrove_EventScript_GiveScyther
	case 1, LittlerootGrove_EventScript_GiveHeracross

LittlerootGrove_EventScript_GiveScyther::
	bufferspeciesname 0, SPECIES_SCYTHER
	msgbox LittlerootGrove_Text_PickThisMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, LittlerootGrove_EventScript_GivemonChoice
	givemon SPECIES_SCYTHER, 4, nature=NATURE_JOLLY
	bufferspeciesname 0, SPECIES_SCYTHER
	call_if_eq VAR_RESULT, 1, Common_EventScript_NameReceivedPartyMon
	end

LittlerootGrove_EventScript_GiveHeracross::
	bufferspeciesname 0, SPECIES_HERACROSS
	msgbox LittlerootGrove_Text_PickThisMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, LittlerootGrove_EventScript_GivemonChoice
	givemon SPECIES_HERACROSS, 4, nature=NATURE_ADAMANT
	bufferspeciesname 0, SPECIES_HERACROSS
	call_if_eq VAR_RESULT, 1, Common_EventScript_NameReceivedPartyMon
	end

LittlerootGrove_Movement_EnterPokeball:
	enter_pokeball
	step_end

LittlerootGrove_Movement_ExitPokeball:
	exit_pokeball
	step_end

LittlerootGrove_Movement_LeaveBattlefield:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

LittlerootGrove_Movement_EnterBattlefieldFacingSouth:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	face_up
	step_end

LittlerootGrove_Movement_EnterBattlefieldFacingWest:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	face_up
	step_end

LittlerootGrove_Movement_EnterBattlefieldFacingEast:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	face_up
	step_end

LittlerootGrove_Movement_ChangeSign:
	walk_left
	walk_up
	delay_16
	walk_in_place_up
	walk_in_place_up
	step_end

LittlerootGrove_Movement_ReturnToPosition:
	walk_down
	walk_right
	face_down
	step_end

LittlerootGrove_Movement_CameraMoveUp:
	walk_slow_up
	walk_slow_up
	step_end

LittlerootGrove_Movement_CameraMoveDown:
	walk_slow_down
	walk_slow_down
	step_end

LittlerootGrove_Text_WeevilWinStreak:
	.string "What's this?\p"
	.string "What once was a TRAINER TIPS sign…\p"
	.string "…has been scribbled over, leaving\n"
	.string "the original text entirely illegible.\p"
	.string "Instead, the new text reads:\n"
	.string "Wins - 99\l"
	.string "Losses - 0$"

LittlerootGrove_Text_WeevilWinStreakBroken:
	.string "What's this?\p"
	.string "What once was a TRAINER TIPS sign…\p"
	.string "…has been scribbled over, leaving\n"
	.string "the original text entirely illegible.\p"
	.string "Instead, the new text reads:\n"
	.string "Wins - 99\l"
	.string "Losses - 1, to {PLAYER}$"

LittlerootGrove_Text_Test:
	.string "TESTER: Huh?\p"
	.string "Oh, hello!\n"
	.string "Sorry, you caught me off guard.\p"
	.string "I'm just here as a test NPC.$"

LittlerootGrove_Text_LittleBug:
	.string "Wurple: Sigh…\p"
	.string "Sometimes I miss living in the wild.\p"
	.string "I used to get to eat as many berries\n"
	.string "as I wanted…\p"
	.string "But the berries I get to eat now are\n"
	.string "way tastier, plus I get to live with\l"
	.string "my best friend, so I'm quite happy,\l"
	.string "all things considered.$"

LittlerootGrove_Text_LearningToCatch:
	.string "I'm trying to learn how to catch\n"
	.string "a POKéMON.\p"
	.string "I was told that if I bring some bugs\n"
	.string "to school, I'll get real popular.$"

LittlerootGrove_Text_DidYouHear:
	.string "Did you hear that sound?\p"
	.string "That one sounded really cool!\n"
	.string "I think it was a Yanma, I should\l"
	.string "try to catch one!$"

LittlerootGrove_Text_Sorry:
	.string "Beetle: Oh, it's you.\p"
	.string "Hey, um… sorry about before.\n"
	.string "No hard feelings, right?$"

LittlerootGrove_Text_BeetleFavor:
	.string "Beetle: Weevil's been acting really\n"
	.string "mean ever since he's been on a\l"
	.string "win streak.\p"
	.string "Do you think you could knock\n"
	.string "him down a peg?$"

LittlerootGrove_Text_CaterpieCantHackIt:
	.string "Oh no… I don't think my Caterpie\n"
	.string "can hack it…$"

LittlerootGrove_Text_QuitDistractingMe:
	.string "H-hey! Quit bothering me while I'm\n"
	.string "trying to battle!$"

LittlerootGrove_Text_FocusedOnBattle:
	.string "It seems too focused on battle to say\n"
	.string "anything right now…$"

LittlerootGrove_Text_BackToNormal:
	.string "PLACEHOLDER TEXT.$"

LittlerootGrove_Text_WeevilGoScyther:
	.string "Weevil: Let's go, Scyther!\n"
	.string "You can do it!$"

LittlerootGrove_Text_WeevilWannaFight:
	.string "Huh? What do you want?\n"
	.string "You wanna fight?$"

LittlerootGrove_Text_WeevilGetLost:
	.string "Huh? Then what are you wasting my\n"
	.string "time for! Get lost!$"

LittlerootGrove_Text_WeevilLetsFight:
	.string "Alright! Let me just clear the\n"
	.string "battleground real quick.$"

LittlerootGrove_Text_WeevilThisIsOver:
	.string "Hey, you! Get out off the field so\n"
	.string "I can teach this chump a lesson!$"

LittlerootGrove_Text_WeevilDefeated:
	.string "What? How could you…?! No, it's my\n"
	.string "fault. I let the Bug Boys down.$"

LittlerootGrove_Text_WhatWasYourName:
	.string "What'd you say your name was?\p"
	.string "… … …\p"
	.string "{PLAYER}… okay, got it.$"

LittlerootGrove_Text_ChangedTheSign:
	.string "Like a Beedril, this is a sting\n"
	.string "that I'll never forget\p"
	.string "I changed the sign to make sure\n"
	.string "of that.$"

LittlerootGrove_Text_WeevilAdmittingDefeat:
	.string "Weevil: … … …\p"
	.string "Okay, okay, I'm sorry.\p"
	.string "I guess I went a little overboard\n"
	.string "trying to prove the power of bugs.\p"
	.string "I'm just tired of everyone thinking that\n"
	.string "they're second rate or only good for\l"
	.string "trainers just starting out!$"

LittlerootGrove_Text_BugsNeitherTalk:
	.string "Neither Scyther nor Heracross say a word,\n"
	.string "but you can tell what they're thinking.$"

LittlerootGrove_Text_WeevilGetItNow:
	.string "Weevil: Oh, I get it!\p"
	.string "Scyther and Heracross were both impressed\n"
	.string "by your battling skills. I bet they think\l"
	.string "you have what it takes to go all the way!\p"
	.string "Say, how about you take one of them along?\n"
	.string "They're pretty rare here in Hoenn, y'know!$"

LittlerootGrove_Text_Scyther:
	.string "Scyther$"

LittlerootGrove_Text_Heracross:
	.string "Heracross$"

LittlerootGrove_Text_PickThisMon:
	.string "Do you want {STR_VAR_1}\n"
	.string "to join your team?$"

LittlerootGrove_Text_MonGet:
	.string "{STR_VAR_1} joined your party!$"

LittlerootGrove_Text_GiveNick:
	.string "Would you like to give a nickname to\n"
	.string "{STR_VAR_1}?$"

LittlerootGrove_Text_PartyFull:
	.string "Oh, it seems like your party is full.\n"
	.string "Go make some room!$"

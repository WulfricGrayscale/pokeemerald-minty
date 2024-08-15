.set LOCALID_BEETLE, 2
.set LOCALID_WEEVIL, 3
.set LOCALID_KID, 5
.set LOCALID_LOSER, 6
.set LOCALID_CATERPIE, 8

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
playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
waitmoncry
msgbox LittlerootGrove_Text_FocusedOnBattle, MSGBOX_DEFAULT
closemessage
end

LittlerootGrove_EventScript_Weevil::


delay 48
msgbox LittlerootGrove_Text_WeevilWannaFight, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq LittlerootGrove_EventScript_NotRightNow
msgbox LittlerootGrove_Text_WeevilLetsFight, MSGBOX_NPC
applymovement LOCALID_WEEVIL, Common_Movement_WalkInPlaceDown
applymovement LOCALID_LOSER, Common_Movement_ExclamationMark
playse SE_PIN
waitse
applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
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
trainerbattle_no_intro TRAINER_WEEVIL, LittlerootGrove_Text_WeevilDefeated
goto LittlerootGrove_EventScript_WeevilLost
end

LittlerootGrove_EventScript_WeevilChallengeFacingEast::
applymovement OBJ_EVENT_ID_PLAYER, LittlerootGrove_Movement_EnterBattlefieldFacingEast
trainerbattle_no_intro TRAINER_WEEVIL, LittlerootGrove_Text_WeevilDefeated
goto LittlerootGrove_EventScript_WeevilLost
end

LittlerootGrove_EventScript_WeevilChallengeFacingWest::
applymovement OBJ_EVENT_ID_PLAYER, LittlerootGrove_Movement_EnterBattlefieldFacingWest
trainerbattle_no_intro TRAINER_WEEVIL, LittlerootGrove_Text_WeevilDefeated
goto LittlerootGrove_EventScript_WeevilLost
end

LittlerootGrove_EventScript_WeevilLost::
applymovement LOCALID_WEEVIL, LittlerootGrove_Movement_ChangeSign
waitmovement 0
msgbox LittlerootGrove_Text_WhatWasYourName, MSGBOX_DEFAULT
closemessage
applymovement LOCALID_WEEVIL, Common_Movement_FaceDown
msgbox LittlerootGrove_Text_ChangedTheSign, MSGBOX_DEFAULT
closemessage
applymovement LOCALID_WEEVIL, LittlerootGrove_Movement_ReturnToPosition
waitmovement 0
msgbox LittlerootGrove_Text_WeevilAdmittingDefeat, MSGBOX_NPC
end

LittlerootGrove_Movement_EnterPokeball::
enter_pokeball
step_end

LittlerootGrove_Movement_LeaveBattlefield::
walk_left
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

LittlerootGrove_Movement_EnterBattlefieldFacingSouth::
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
face_up
step_end

LittlerootGrove_Movement_EnterBattlefieldFacingWest::
walk_down
walk_down
walk_down
walk_down
walk_left
face_up
step_end

LittlerootGrove_Movement_EnterBattlefieldFacingEast::
walk_down
walk_down
walk_down
walk_down
walk_right
face_up
step_end

LittlerootGrove_Movement_ChangeSign::
walk_left
walk_up
delay_16
walk_in_place_up
walk_in_place_up
step_end

LittlerootGrove_Movement_ReturnToPosition::
walk_down
walk_right
face_down
step_end

LittlerootGrove_Text_WeevilWinStreak::
	.string "What's this?\p"
	.string "What once was a TRAINER TIPS sign…\p"
	.string "…has been scribbled over, leaving\n"
	.string "the original text entirely illegible.\p"
	.string "Instead, the new text reads:\n"
	.string "Wins - 99\l"
	.string "Losses - 0$"

LittlerootGrove_Text_WeevilWinStreakBroken::
	.string "What's this?\p"
	.string "What once was a TRAINER TIPS sign…\p"
	.string "…has been scribbled over, leaving\n"
	.string "the original text entirely illegible.\p"
	.string "Instead, the new text reads:\n"
	.string "Wins - 99\l"
	.string "Losses - 1, to {PLAYER}$"

LittlerootGrove_Text_Test::
	.string "TESTER: Huh?\p"
	.string "Oh, hello!\n"
	.string "Sorry, you caught me off guard.\p"
	.string "I'm just here as a test NPC.$"

LittlerootGrove_Text_LittleBug::
	.string "WURMPLE: Sigh…\p"
	.string "Sometimes I miss living in the wild.\p"
	.string "I used to get to eat as many berries\n"
	.string "as I wanted…\p"
	.string "But the berries I get to eat now are\n"
	.string "way tastier, plus I get to live with\l"
	.string "my best friend, so I'm quite happy,\l"
	.string "all things considered.$"

LittlerootGrove_Text_LearningToCatch::
	.string "I'm trying to learn how to catch\n"
	.string "a POKéMON.\p"
	.string "I was told that if I bring some bugs\n"
	.string "to school, I'll get real popular.$"

LittlerootGrove_Text_DidYouHear::
	.string "Did you hear that sound?\p"
	.string "That one sounded really cool!\n"
	.string "I think it was a Yanma, I should\l"
	.string "try to catch one!$"

LittlerootGrove_Text_Sorry::
	.string "BEETLE: Oh, it's you.\p"
	.string "Hey, um… sorry about before.\n"
	.string "No hard feelings, right?$"

LittlerootGrove_Text_BeetleFavor::
	.string "BEETLE: Weevil's been acting really\n"
	.string "mean ever since he's been on a\l"
	.string "win streak.\p"
	.string "Do you think you could knock\n"
	.string "him down a peg?$"

LittlerootGrove_Text_CaterpieCantHackIt::
	.string "Oh no… I don't think my Caterpie\n"
	.string "can hack it…$"

LittlerootGrove_Text_QuitDistractingMe::
	.string "H-hey! Quit bothering me while I'm\n"
	.string "trying to battle!$"

LittlerootGrove_Text_FocusedOnBattle::
	.string "It seems too focused on battle to say\n"
	.string "anything right now…$"

LittlerootGrove_Text_BackToNormal::
	.string "PLACEHOLDER TEXT.$"

LittlerootGrove_Text_WeevilWannaFight::
	.string "So how about it, then?\n"
	.string "Think you can take me on?$"

LittlerootGrove_Text_WeevilGetLost::
	.string "Huh? Then what are you wasting my\n"
	.string "time for! Get lost!$"

LittlerootGrove_Text_WeevilLetsFight::
	.string "Alright! Let me just clear the\n"
	.string "battleground real quick.$"

LittlerootGrove_Text_WeevilThisIsOver::
	.string "Hey, you! Get out off the field so\n"
	.string "I can teach this chump a lesson!$"

LittlerootGrove_Text_WeevilDefeated::
	.string "What? How could you…?! No, it's my\n"
	.string "fault. I let the Bug Boys down.$"

LittlerootGrove_Text_WhatWasYourName::
	.string "What'd you say your name was?\p"
	.string "… … …\p"
	.string "{PLAYER}… okay, got it.$"

LittlerootGrove_Text_ChangedTheSign::
	.string "Like a Beedril, this is a sting\n"
	.string "that I'll never forget\p"
	.string "I changed the sign to make sure\n"
	.string "of that.$"

LittlerootGrove_Text_WeevilAdmittingDefeat::
	.string "WEEVIL: … … …\p"
	.string "Okay, okay, I'm sorry.\p"
	.string "I guess I went a little overboard\n"
	.string "trying to prove the power of bugs.\p"
	.string "I'm just tired of everyone thinking that\n"
	.string "they're second rate or only good for\l"
	.string "trainers just starting out!$"

LittlerootGrove_Text_BugsNeitherTalk::
	.string "Neither Scyther nor Heracross say a word,\n"
	.string "but you can tell what they're thinking.$"

LittlerootGrove_Text_WeevilGetItNow::
	.string "WEEVIL: Oh, I get it!\p"
	.string "Scyther and Heracross were both impressed\n"
	.string "by your battling skills. I bet they think\l"
	.string "you have what it takes to go all the way!\p"
	.string "Say, how about you take one of them along?\n"
	.string "They're pretty rare here in Hoenn, y'know!$"
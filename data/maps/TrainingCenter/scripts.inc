.set LOCALID_HP_MASTER, 1
.set LOCALID_ATTACK_MASTER, 2
.set LOCALID_DEFENSE_MASTER, 3
.set LOCALID_SPEED_MASTER, 4
.set LOCALID_SP_ATTACK_MASTER, 5
.set LOCALID_SP_DEFENSE_MASTER, 6

TrainingCenter_MapScripts::
	.byte 0

TrainingCenter_EventScript_EVResetter::
	call_if_unset FLAG_VISITED_TRAINING_CENTER, TrainingCenter_EventScript_FirstTime
	checkitem ITEM_FRESH_START_MOCHI, 1
	goto_if_eq VAR_RESULT, 1, TrainingCenter_EventScript_HasMochi
	msgbox TrainingCenter_Text_TakeAFewMochi, MSGBOX_NPC
	giveitem ITEM_FRESH_START_MOCHI, 5
	closemessage
	end

TrainingCenter_EventScript_BPClerk::
	msgbox TrainingCenter_Text_BPExchange, MSGBOX_NPC
	goto TrainingCenter_EventScript_CheckCardClerk
	end

TrainingCenter_EventScript_ExpMaster::
	setvar VAR_EXP_LEVEL_CAP_TYPE, 1
	msgbox TrainingCenter_Text_CurrentLevelCap, MSGBOX_NPC
	end

TrainingCenter_EventScript_HPMaster::
	applymovement LOCALID_HP_MASTER, Common_Movement_FacePlayer
	bufferstring STR_VAR_1, TrainingCenter_Text_HP
	msgbox TrainingCenter_Text_BattleStart, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, TrainingCenter_EventScript_LetsTrainSoon
	call TrainingCenter_EventScript_SetFlags
	trainerbattle_no_intro TRAINER_HP_MASTER, TrainingCenter_Text_Defeated
	call TrainingCenter_EventScript_CheckCard
	call TrainingCenter_EventScript_ClearFlags
	msgbox TrainingCenter_Text_TrainAgainSoon, MSGBOX_NPC
	end

TrainingCenter_EventScript_SpeedMaster::
	applymovement LOCALID_SPEED_MASTER, Common_Movement_FacePlayer
	bufferstring STR_VAR_1, TrainingCenter_Text_Speed
	msgbox TrainingCenter_Text_BattleStart, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, TrainingCenter_EventScript_LetsTrainSoon
	call TrainingCenter_EventScript_SetFlags
	trainerbattle_no_intro TRAINER_SPEED_MASTER, TrainingCenter_Text_Defeated
	call TrainingCenter_EventScript_CheckCard
	call TrainingCenter_EventScript_ClearFlags
	msgbox TrainingCenter_Text_TrainAgainSoon, MSGBOX_NPC
	end

TrainingCenter_EventScript_AttackMaster::
	applymovement LOCALID_ATTACK_MASTER, Common_Movement_FacePlayer
	bufferstring STR_VAR_1, TrainingCenter_Text_Attack
	msgbox TrainingCenter_Text_BattleStart, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, TrainingCenter_EventScript_LetsTrainSoon
	call TrainingCenter_EventScript_SetFlags
	trainerbattle_no_intro TRAINER_ATK_MASTER, TrainingCenter_Text_Defeated
	call TrainingCenter_EventScript_CheckCard
	call TrainingCenter_EventScript_ClearFlags
	msgbox TrainingCenter_Text_TrainAgainSoon, MSGBOX_NPC
	end

TrainingCenter_EventScript_SpecialAttackMaster::
	applymovement LOCALID_SP_ATTACK_MASTER, Common_Movement_FacePlayer
	bufferstring STR_VAR_1, TrainingCenter_Text_Special_Attack
	msgbox TrainingCenter_Text_BattleStart, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, TrainingCenter_EventScript_LetsTrainSoon
	call TrainingCenter_EventScript_SetFlags
	trainerbattle_no_intro TRAINER_SP_ATK_MASTER, TrainingCenter_Text_Defeated
	call TrainingCenter_EventScript_CheckCard
	call TrainingCenter_EventScript_ClearFlags
	msgbox TrainingCenter_Text_TrainAgainSoon, MSGBOX_NPC
	end

TrainingCenter_EventScript_DefenseMaster::
	applymovement LOCALID_DEFENSE_MASTER, Common_Movement_FacePlayer
	bufferstring STR_VAR_1, TrainingCenter_Text_Defense
	msgbox TrainingCenter_Text_BattleStart, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, TrainingCenter_EventScript_LetsTrainSoon
	call TrainingCenter_EventScript_SetFlags
	trainerbattle_no_intro TRAINER_DEF_MASTER, TrainingCenter_Text_Defeated
	call TrainingCenter_EventScript_CheckCard
	call TrainingCenter_EventScript_ClearFlags
	msgbox TrainingCenter_Text_TrainAgainSoon, MSGBOX_NPC
	end

TrainingCenter_EventScript_SpecialDefenseMaster::
	applymovement LOCALID_SP_DEFENSE_MASTER, Common_Movement_FacePlayer
	bufferstring STR_VAR_1, TrainingCenter_Text_Special_Defense
	msgbox TrainingCenter_Text_BattleStart, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, 0, TrainingCenter_EventScript_LetsTrainSoon
	call TrainingCenter_EventScript_SetFlags
	trainerbattle_no_intro TRAINER_SP_DEF_MASTER, TrainingCenter_Text_Defeated
	call TrainingCenter_EventScript_CheckCard
	call TrainingCenter_EventScript_ClearFlags
	msgbox TrainingCenter_Text_TrainAgainSoon, MSGBOX_NPC
	end
	
TrainingCenter_EventScript_LetsTrainSoon::
	msgbox TrainingCenter_Text_TrainSoon, MSGBOX_NPC
	end

TrainingCenter_EventScript_SetFlags::
	setflag FLAG_EXP_DISABLED
	setflag FLAG_MONEY_DISABLED
	return

TrainingCenter_EventScript_ClearFlags::
	clearflag FLAG_EXP_DISABLED
	clearflag FLAG_MONEY_DISABLED
	return

TrainingCenter_EventScript_CheckCardClerk::
	goto_if_eq VAR_TRAINING_CENTER_CARD_TIER 0, TrainingCenter_EventScript_NoCard
	call_if_eq VAR_TRAINING_CENTER_CARD_TIER 1, TrainingCenter_EventScript_BronzeCard
	call_if_eq VAR_TRAINING_CENTER_CARD_TIER 2, TrainingCenter_EventScript_SilverCard
	call_if_eq VAR_TRAINING_CENTER_CARD_TIER 3, TrainingCenter_EventScript_GoldCard
	return

TrainingCenter_EventScript_CheckCard::
	call_if_eq VAR_TRAINING_CENTER_CARD_TIER 1, TrainingCenter_EventScript_BronzeCardAward
	call_if_eq VAR_TRAINING_CENTER_CARD_TIER 2, TrainingCenter_EventScript_SilverCardAward
	call_if_eq VAR_TRAINING_CENTER_CARD_TIER 3, TrainingCenter_EventScript_GoldCardAward
	return

TrainingCenter_EventScript_NoCard::
	msgbox TrainingCenter_Text_NoCard, MSGBOX_NPC
	end

TrainingCenter_EventScript_BronzeCard::
	bufferstring STR_VAR_1, TrainingCenter_Text_Bronze
	msgbox TrainingCenter_Text_CurrentCard, MSGBOX_DEFAULT
	end

TrainingCenter_EventScript_SilverCard::
	bufferstring STR_VAR_1, TrainingCenter_Text_Silver
	msgbox TrainingCenter_Text_CurrentCard, MSGBOX_DEFAULT
	end

TrainingCenter_EventScript_GoldCard::
	bufferstring STR_VAR_1, TrainingCenter_Text_Gold
	msgbox TrainingCenter_Text_CurrentCard, MSGBOX_DEFAULT
	end

TrainingCenter_EventScript_BronzeCardAward::
	buffernumberstring STR_VAR_1, 1
	setvar VAR_0x8004, 1
	call TrainingCenter_EventScript_GetPoints
	return

TrainingCenter_EventScript_SilverCardAward::
	buffernumberstring STR_VAR_1, 2
	setvar VAR_0x8004, 2
	call TrainingCenter_EventScript_GetPoints
	return

TrainingCenter_EventScript_GoldCardAward::
	buffernumberstring STR_VAR_1, 3
	setvar VAR_0x8004, 3
	call TrainingCenter_EventScript_GetPoints
	return

TrainingCenter_EventScript_PlatinumCard::
	buffernumberstring STR_VAR_1, 4
	setvar VAR_0x8004, 4
	call TrainingCenter_EventScript_GetPoints
	return

TrainingCenter_EventScript_GetPoints::
	special GiveFrontierBattlePoints
	msgbox TrainingCenter_Text_ReceivePoints, MSGBOX_GETPOINTS
	return

TrainingCenter_EventScript_FirstTime::
	setflag FLAG_VISITED_TRAINING_CENTER
	msgbox TrainingCenter_Text_FirstTime, MSGBOX_NPC
	return

TrainingCenter_EventScript_HasMochi::
	msgbox TrainingCenter_Text_YouHaveMochi, MSGBOX_NPC
	end

TrainingCenter_Text_BattleStart:
	.string "I'm the master of {STR_VAR_1}!\p" 
	.string "Are you ready to train?$"

TrainingCenter_Text_TrainSoon:
	.string "Let's train soon, okay?$"

TrainingCenter_Text_TrainAgainSoon:
	.string "Let's train again soon, okay?$"

TrainingCenter_Text_Attack:
	.string "Attack$"

TrainingCenter_Text_Defense:
	.string "Defense$"

TrainingCenter_Text_HP:
	.string "HP$"

TrainingCenter_Text_Special_Attack:
	.string "Special Attack$"

TrainingCenter_Text_Special_Defense:
	.string "Special Defense$"

TrainingCenter_Text_Speed:
	.string "Speed$"

TrainingCenter_Text_Defeated:
	.string "Good match!$"

TrainingCenter_Text_ReceivePoints:
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Point(s).$"

TrainingCenter_Text_CurrentLevelCap:
	.string "The level cap is {STR_VAR_1}."

TrainingCenter_Text_FirstTime:
	.string "Thank you for coming to the Effort\n"
	.string "Value Training Center.\p"
	.string "For the sake of brevity, we refer to\n"
	.string "Effort Values as EVs instead.\p"
	.string "Here, your Pokémon can gain EVs without\n"
	.string "gaining regular experience points.\p"
	.string "If you would like to train your Pokémon\n"
	.string "as if it was freshly caught, I have some\l"
	.string "Mochi from the far off Kitakami region\l"
	.string "that can help.$"

TrainingCenter_Text_TakeAFewMochi:
	.string "It seems you don't have any mochi on you.\p"
	.string "Here, take a few. Come and see me if you\n"
	.string "need more.$"

TrainingCenter_Text_YouHaveMochi:
	.string "You seem to have some mochi with you,\n"
	.string "come back when you run out.$"

TrainingCenter_Text_BPExchange:
	.string "I can help those with membership cards\n"
	.string "exchange BP for a variety of prizes.$"

TrainingCenter_Text_NoCard:
	.string "With your current card... oops!\p"
	.string "It seems you don't have a card.\p"
	.string "Please come back when you get one.$"

TrainingCenter_Text_CurrentCard:
	.string "With your current card, you can access\n"
	.string "the {STR_VAR_1} tier rewards.$"

TrainingCenter_Text_Bronze:
	.string "Bronze$"

TrainingCenter_Text_Silver:
	.string "Silver$"

TrainingCenter_Text_Gold:
	.string "Gold$"

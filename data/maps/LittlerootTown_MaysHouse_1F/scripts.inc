.set LOCALID_MOM, 1
.set LOCALID_RIVAL_MOM, 4
.set LOCALID_RIVAL, 7

LittlerootTown_MaysHouse_1F_MapScripts::
	.byte 0

LittlerootTown_MaysHouse_1F_EventScript_MaysMom::
	bufferspeciesname 0, SPECIES_TORCHIC
	msgbox LittlerootTown_MaysHouse_1F_Text_MaysMom, MSGBOX_NPC
	end

LittlerootTown_MaysHouse_1F_EventScript_MaysSibling::
	msgbox LittlerootTown_MaysHouse_1F_Text_MaysSibling, MSGBOX_NPC
	end

LittlerootTown_MaysHouse_1F_EventScript_MaysFather::
	msgbox LittlerootTown_MaysHouse_1F_Text_MaysFather, MSGBOX_NPC
	end

LittlerootTown_MaysHouse_1F_Text_MaysMom:
	.string "Ah, you're the professor's \n"
	.string "assistant, aren't you?\p"
	.string "May's been doing well with her\n"
	.string "{STR_VAR_1} ever since the other day.\p"
	.string "I think they've even made it to\n"
	.string "Petalburg together!$"

LittlerootTown_MaysHouse_1F_Text_MaysSibling:
	.string "I can't believe May got her own\n"
	.string "Pokémon!\p"
	.string "I hope I get a Pokémon\n"
	.string "someday too.$"

LittlerootTown_MaysHouse_1F_Text_MaysFather:
	.string "PLACEHOLDER TEXT$"

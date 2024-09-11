.set LOCALID_TWIN, 1
.set LOCALID_MOM, 4
.set LOCALID_RIVAL, 7
.set LOCALID_BIRCH, 8

LittlerootTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
	.byte 0

	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
	@ 1: Met Rival
	@ 2: Saving Birch
	@ 3: Received Pokedex
	@ 4: Received Running Shoes

LittlerootTown_OnTransition:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	call_if_eq VAR_TEMP_0, LittlerootTown_EventScript_UnhideMapNamePopup
	end

LittlerootTown_EventScript_UnhideMapNamePopup::
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	addvar VAR_TEMP_0, 1
	return

LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
	return

LittlerootTown_EventScript_FatMan::
	msgbox LittlerootTown_Text_TechnologyIsBoring, MSGBOX_NPC
	end

LittlerootTown_EventScript_Boy::
	msgbox LittlerootTown_Text_LittlerootGrove, MSGBOX_NPC
	end

LittlerootTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_GoodLuck::
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_ForSaleSign::
	msgbox LittlerootTown_Text_ForSaleSign, MSGBOX_SIGN
	end

LittlerootTown_EventScript_TownSign::
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BirchsLabSign::
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end

LittlerootTown_EventScript_BirchsHouseSign::
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_SIGN
	end

LittlerootTown_EventScript_NormansHouseSign::
	msgbox LittlerootTown_Text_NormansHouse, MSGBOX_SIGN
	end

LittlerootTown_EventScript_PlayersHouseSign::
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_SIGN
	end

LittlerootTown_Text_TechnologyIsBoring:
	.string "The power of technology is incredible!\p"
	.string "…Well, that's what I used to think.\p"
	.string "Nowadays, I find myself more entranced\n"
	.string "by things like magic and witchcraft.\p"
	.string "Do you think there's any such thing?$"

LittlerootTown_Text_LittlerootGrove:
	.string "How's Littleroot treating you? There's\n"
	.string "not much to do here if you're not\l"
	.string "checking out Birch's lab…\p"
	.string "But the grove off of Route 101\n"
	.string "is quite scenic!$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild Pokémon will jump out!$"

LittlerootTown_Text_DangerousIfYouDontHavePokemon:
	.string "It's dangerous if you don't have\n"
	.string "your own POKéMON.$"

LittlerootTown_Text_YouSavedBirch:
	.string "You saved PROF. BIRCH!\n"
	.string "I'm so glad!$"

LittlerootTown_Text_GoodLuckCatchingPokemon:
	.string "Are you going to catch Pokémon?\n"
	.string "Good luck!$"

LittlerootTown_Text_TownSign:
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_Text_ProfBirchsLab:
	.string "Prof. Birch's Pokémon Lab$"

LittlerootTown_Text_PlayersHouse:
	.string "{PLAYER}'s House$"

LittlerootTown_Text_ProfBirchsHouse:
	.string "Prof. Birch's House$"

LittlerootTown_Text_NormansHouse:
	.string "Leader Norman's House$"

LittlerootTown_Text_ForSaleSign:
	.string "A sign that once said FOR SALE now only\n"
	.string "reads SOLD.\p"
	.string "You've lived here for a month now.$"

LittlerootTown_Text_BirchSomethingToShowYouAtLab:
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
	.string "That was good work out there!\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you,\l"
	.string "but I never expected this.\p"
	.string "Oh, yes. Do you still have the POKéDEX\n"
	.string "I gave you?\p"
	.string "I have something to show you.\n"
	.string "Let's go to my LAB.$"


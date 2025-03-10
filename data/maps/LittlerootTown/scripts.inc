LittlerootTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
	.byte 0

LittlerootTown_OnTransition:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	end

woman::
lock
faceplayer
msgbox impressive, MSGBOX_NPC
release
end

impressive:
.string "{COLOR RED}Wow, your POKéGEAR is impressive!\n"
.string "Did yor mom get it for you?$"

guy::
lock
faceplayer
msgbox yoplayer, MSGBOX_NPC
release
end

yoplayer:
.string "{COLOR BLUE}Yo, {PLAYER}!\p"
.string "I hear PROF. OAK discovered some\n"
.string "new POKéMON.$"

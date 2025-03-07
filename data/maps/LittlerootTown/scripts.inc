LittlerootTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
	.byte 0

LittlerootTown_OnTransition:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	end

IlhadeTestes_MapScripts::
	.byte 0


PortaTrancada::
# 7 "data/maps/IlhadeTestes/scripts.pory"
	lock
# 8 "data/maps/IlhadeTestes/scripts.pory"
	msgbox PortaTrancada_Text_0
# 9 "data/maps/IlhadeTestes/scripts.pory"
	release
	end


SavePoint::
# 16 "data/maps/IlhadeTestes/scripts.pory"
	lock
# 17 "data/maps/IlhadeTestes/scripts.pory"
	fadescreencustom FADE_TO_CUSTOM, -8, 13, 0, 31
# 18 "data/maps/IlhadeTestes/scripts.pory"
	fadescreencustom FADE_FROM_CUSTOM, 3, 13, 0, 31
# 19 "data/maps/IlhadeTestes/scripts.pory"
	special HealPlayerParty
# 20 "data/maps/IlhadeTestes/scripts.pory"
	msgbox SavePoint_Text_0
# 21 "data/maps/IlhadeTestes/scripts.pory"
	call Common_EventScript_SaveGame
# 22 "data/maps/IlhadeTestes/scripts.pory"
	release
	end


Anim::
# 27 "data/maps/IlhadeTestes/scripts.pory"
	lock
# 28 "data/maps/IlhadeTestes/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/IlhadeTestes/scripts.pory"
	applymovement LOCALID_CAMERA, Anim_Movement_0
# 32 "data/maps/IlhadeTestes/scripts.pory"
	waitmovement LOCALID_CAMERA
# 33 "data/maps/IlhadeTestes/scripts.pory"
	clearflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
# 34 "data/maps/IlhadeTestes/scripts.pory"
	addobject LOCALID_TRIANGLE
# 35 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_TRIANGLE, 0, 0
# 36 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_TRIANGLE, 1, 0
# 37 "data/maps/IlhadeTestes/scripts.pory"
	delay 100
# 38 "data/maps/IlhadeTestes/scripts.pory"
	clearflag FLAG_HIDE_DEOXYS
# 39 "data/maps/IlhadeTestes/scripts.pory"
	addobject LOCALID_DEOXYS
# 40 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_DEOXYS, 0, 2
# 41 "data/maps/IlhadeTestes/scripts.pory"
	setobjectsubpriority LOCALID_DEOXYS, MAP_ILHADE_TESTES, 0
# 42 "data/maps/IlhadeTestes/scripts.pory"
	delay 126
# 43 "data/maps/IlhadeTestes/scripts.pory"
	applymovement LOCALID_DEOXYS, Anim_Movement_1
# 46 "data/maps/IlhadeTestes/scripts.pory"
	waitmovement LOCALID_DEOXYS
# 47 "data/maps/IlhadeTestes/scripts.pory"
	removeefeitografico LOCALID_DEOXYS, 0
# 48 "data/maps/IlhadeTestes/scripts.pory"
	msgbox Anim_Text_0
# 49 "data/maps/IlhadeTestes/scripts.pory"
	applymovement LOCALID_DEOXYS, Anim_Movement_2
# 52 "data/maps/IlhadeTestes/scripts.pory"
	waitmovement LOCALID_DEOXYS
# 53 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_DEOXYS, 0, 3
# 54 "data/maps/IlhadeTestes/scripts.pory"
	delay 126
# 55 "data/maps/IlhadeTestes/scripts.pory"
	removeefeitografico LOCALID_DEOXYS, 0
# 56 "data/maps/IlhadeTestes/scripts.pory"
	removeobject LOCALID_DEOXYS
# 57 "data/maps/IlhadeTestes/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 58 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_TRIANGLE, 0, 1
# 59 "data/maps/IlhadeTestes/scripts.pory"
	delay 108
# 60 "data/maps/IlhadeTestes/scripts.pory"
	removeefeitografico LOCALID_TRIANGLE, 0
# 61 "data/maps/IlhadeTestes/scripts.pory"
	removeefeitografico LOCALID_TRIANGLE, 1
# 62 "data/maps/IlhadeTestes/scripts.pory"
	removeobject LOCALID_TRIANGLE
# 63 "data/maps/IlhadeTestes/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
# 64 "data/maps/IlhadeTestes/scripts.pory"
	applymovement LOCALID_CAMERA, Anim_Movement_3
# 67 "data/maps/IlhadeTestes/scripts.pory"
	waitmovement LOCALID_CAMERA
# 68 "data/maps/IlhadeTestes/scripts.pory"
	special RemoveCameraObject
# 69 "data/maps/IlhadeTestes/scripts.pory"
	release
	end


# 29 "data/maps/IlhadeTestes/scripts.pory"
Anim_Movement_0:
# 30 "data/maps/IlhadeTestes/scripts.pory"
	walk_up
	step_end

# 43 "data/maps/IlhadeTestes/scripts.pory"
Anim_Movement_1:
# 44 "data/maps/IlhadeTestes/scripts.pory"
	levitate
	step_end

# 49 "data/maps/IlhadeTestes/scripts.pory"
Anim_Movement_2:
# 50 "data/maps/IlhadeTestes/scripts.pory"
	stop_levitate
	step_end

# 64 "data/maps/IlhadeTestes/scripts.pory"
Anim_Movement_3:
# 65 "data/maps/IlhadeTestes/scripts.pory"
	walk_down
	step_end

PortaTrancada_Text_0:
# 8 "data/maps/IlhadeTestes/scripts.pory"
	.string "Esta porta está trancada. Se você viu\n"
	.string "isso, o teste é um sucesso!$"

SavePoint_Text_0:
# 20 "data/maps/IlhadeTestes/scripts.pory"
	.string "Você e seus pokémon se sentem\nrevigorados.$"

Anim_Text_0:
# 48 "data/maps/IlhadeTestes/scripts.pory"
	.string "Hello!$"

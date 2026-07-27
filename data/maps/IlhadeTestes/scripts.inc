IlhadeTestes_MapScripts::
	.byte 0


PortaTrancada::
# 4 "data/maps/IlhadeTestes/scripts.pory"
	lock
# 5 "data/maps/IlhadeTestes/scripts.pory"
	msgbox PortaTrancada_Text_0
# 6 "data/maps/IlhadeTestes/scripts.pory"
	release
	end


SavePoint::
# 13 "data/maps/IlhadeTestes/scripts.pory"
	lock
# 14 "data/maps/IlhadeTestes/scripts.pory"
	hidefollower 0
# 15 "data/maps/IlhadeTestes/scripts.pory"
	fadescreencustom FADE_FROM_CUSTOM, 3, 13, 0, 31
# 16 "data/maps/IlhadeTestes/scripts.pory"
	special HealPlayerParty
# 17 "data/maps/IlhadeTestes/scripts.pory"
	msgbox SavePoint_Text_0
# 19 "data/maps/IlhadeTestes/scripts.pory"
	call Common_EventScript_SaveGame
# 20 "data/maps/IlhadeTestes/scripts.pory"
	release
	end


Anim::
# 25 "data/maps/IlhadeTestes/scripts.pory"
	lock
# 26 "data/maps/IlhadeTestes/scripts.pory"
	applymovement LOCALID_TRIANGLE, Anim_Movement_0
# 32 "data/maps/IlhadeTestes/scripts.pory"
	waitmovement 0
# 33 "data/maps/IlhadeTestes/scripts.pory"
	msgbox Anim_Text_0
# 34 "data/maps/IlhadeTestes/scripts.pory"
	applymovement LOCALID_TRIANGLE, Anim_Movement_1
# 38 "data/maps/IlhadeTestes/scripts.pory"
	waitmovement 0
# 39 "data/maps/IlhadeTestes/scripts.pory"
	release
	end


# 26 "data/maps/IlhadeTestes/scripts.pory"
Anim_Movement_0:
# 27 "data/maps/IlhadeTestes/scripts.pory"
	init_affine_anim
# 28 "data/maps/IlhadeTestes/scripts.pory"
	walk_down_affine
# 28 "data/maps/IlhadeTestes/scripts.pory"
	walk_down_affine
# 28 "data/maps/IlhadeTestes/scripts.pory"
	walk_down_affine
# 29 "data/maps/IlhadeTestes/scripts.pory"
	walk_fast_up
# 29 "data/maps/IlhadeTestes/scripts.pory"
	walk_fast_up
# 29 "data/maps/IlhadeTestes/scripts.pory"
	walk_fast_up
# 30 "data/maps/IlhadeTestes/scripts.pory"
	levitate
	step_end

# 34 "data/maps/IlhadeTestes/scripts.pory"
Anim_Movement_1:
# 35 "data/maps/IlhadeTestes/scripts.pory"
	clear_affine_anim
# 36 "data/maps/IlhadeTestes/scripts.pory"
	stop_levitate
	step_end

PortaTrancada_Text_0:
# 5 "data/maps/IlhadeTestes/scripts.pory"
	.string "Esta porta está trancada. Se você viu\n"
	.string "isso, o teste é um sucesso!$"

SavePoint_Text_0:
# 17 "data/maps/IlhadeTestes/scripts.pory"
	.string "Você e seus pokémon se sentem\n"
	.string "revigorados.$"

Anim_Text_0:
# 33 "data/maps/IlhadeTestes/scripts.pory"
	.string "Olá, humano!$"

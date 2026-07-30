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
	hidefollower 0
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
	clearflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
# 29 "data/maps/IlhadeTestes/scripts.pory"
	addobject LOCALID_TRIANGLE
# 30 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_TRIANGLE, 0, 0, 0
# 31 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_TRIANGLE, 1, 0, 0
# 32 "data/maps/IlhadeTestes/scripts.pory"
	delay 100
# 33 "data/maps/IlhadeTestes/scripts.pory"
	clearflag FLAG_HIDE_DEOXYS
# 34 "data/maps/IlhadeTestes/scripts.pory"
	addobject LOCALID_DEOXYS
# 35 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_DEOXYS, 0, 2, 0
# 36 "data/maps/IlhadeTestes/scripts.pory"
	delay 126
# 40 "data/maps/IlhadeTestes/scripts.pory"
	msgbox Anim_Text_0
# 44 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_DEOXYS, 0, 3, 0
# 45 "data/maps/IlhadeTestes/scripts.pory"
	delay 126
# 46 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_DEOXYS, 0, 3, 1
# 47 "data/maps/IlhadeTestes/scripts.pory"
	removeobject LOCALID_DEOXYS
# 48 "data/maps/IlhadeTestes/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 49 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_TRIANGLE, 0, 1, 0
# 50 "data/maps/IlhadeTestes/scripts.pory"
	delay 108
# 51 "data/maps/IlhadeTestes/scripts.pory"
	efeitografico LOCALID_TRIANGLE, 0, 1, 1
# 52 "data/maps/IlhadeTestes/scripts.pory"
	removeobject LOCALID_TRIANGLE
# 53 "data/maps/IlhadeTestes/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
# 55 "data/maps/IlhadeTestes/scripts.pory"
	release
	end


PortaTrancada_Text_0:
# 8 "data/maps/IlhadeTestes/scripts.pory"
	.string "Esta porta está trancada. Se você viu\n"
	.string "isso, o teste é um sucesso!$"

SavePoint_Text_0:
# 20 "data/maps/IlhadeTestes/scripts.pory"
	.string "Você e seus pokémon se sentem\nrevigorados.$"

Anim_Text_0:
# 40 "data/maps/IlhadeTestes/scripts.pory"
	.string "Olá, humano!$"

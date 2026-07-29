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
# 18 "data/maps/IlhadeTestes/scripts.pory"
	call Common_EventScript_SaveGame
# 19 "data/maps/IlhadeTestes/scripts.pory"
	release
	end


Anim::
# 24 "data/maps/IlhadeTestes/scripts.pory"
	lock
# 25 "data/maps/IlhadeTestes/scripts.pory"
	triangleaffine LOCALID_TRIANGLE
# 26 "data/maps/IlhadeTestes/scripts.pory"
	delay 120
# 27 "data/maps/IlhadeTestes/scripts.pory"
	msgbox Anim_Text_0
# 28 "data/maps/IlhadeTestes/scripts.pory"
	triangleaffine LOCALID_TRIANGLE
# 29 "data/maps/IlhadeTestes/scripts.pory"
	delay 100
# 31 "data/maps/IlhadeTestes/scripts.pory"
	release
	end


PortaTrancada_Text_0:
# 5 "data/maps/IlhadeTestes/scripts.pory"
	.string "Esta porta está trancada. Se você viu\n"
	.string "isso, o teste é um sucesso!$"

SavePoint_Text_0:
# 17 "data/maps/IlhadeTestes/scripts.pory"
	.string "Você e seus pokémon se sentem\nrevigorados.$"

Anim_Text_0:
# 27 "data/maps/IlhadeTestes/scripts.pory"
	.string "Olá, humano!$"

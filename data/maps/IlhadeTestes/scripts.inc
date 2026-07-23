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


PortaTrancada_Text_0:
# 5 "data/maps/IlhadeTestes/scripts.pory"
	.string "Esta porta está trancada. Se você viu\n"
	.string "isso, o teste é um sucesso!$"

SavePoint_Text_0:
# 17 "data/maps/IlhadeTestes/scripts.pory"
	.string "Você e seus pokémon se sentem\n"
	.string "revigorados.$"

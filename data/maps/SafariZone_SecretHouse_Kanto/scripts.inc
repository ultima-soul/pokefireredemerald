SafariZone_SecretHouse_Kanto_MapScripts:: @ 8162452
	.byte 0

SafariZone_SecretHouse_Kanto_EventScript_162453:: @ 8162453
	lock
	faceplayer
	checkflag FLAG_0x239
	goto_if_eq EventScript_1624A9
	msgbox gUnknown_8177DC1
	checkitemspace ITEM_HM03, 1
	compare_var_to_value VAR_RESULT, 0
	goto_if_eq EventScript_16249F
	additem ITEM_HM03, 1
	giveitemfanfaremsg gUnknown_8177E92, ITEM_HM03
	msgbox gUnknown_8177EB7
	setflag FLAG_0x239
	release
	end

EventScript_16249F:: @ 816249F
	msgbox gUnknown_8177F72
	release
	end

EventScript_1624A9:: @ 81624A9
	msgbox gUnknown_8177EB7
	release
	end

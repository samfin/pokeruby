LilycoveCity_PokemonTrainerFanClub_MapScripts:: @ 815938A
	map_script 2, LilycoveCity_PokemonTrainerFanClub_MapScript2_159395
	map_script 3, LilycoveCity_PokemonTrainerFanClub_MapScript1_159412
	.byte 0

LilycoveCity_PokemonTrainerFanClub_MapScript2_159395:: @ 8159395
	map_script_2 0x4095, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_15939F
	.2byte 0

LilycoveCity_PokemonTrainerFanClub_EventScript_15939F:: @ 815939F
	lockall
	move 1, LilycoveCity_PokemonTrainerFanClub_Movement_1A0845
	waitmove 0
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A1D6, 4
	move 4, LilycoveCity_PokemonTrainerFanClub_Movement_159402
	move 2, LilycoveCity_PokemonTrainerFanClub_Movement_1593FA
	waitmove 0
	move 255, LilycoveCity_PokemonTrainerFanClub_Movement_1A0843
	waitmove 0
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A1E8, 4
	move 4, LilycoveCity_PokemonTrainerFanClub_Movement_159409
	waitmove 0
	move 255, LilycoveCity_PokemonTrainerFanClub_Movement_1A083F
	waitmove 0
	move 4, LilycoveCity_PokemonTrainerFanClub_Movement_15940C
	waitmove 0
	setvar 0x4095, 2
	releaseall
	end

LilycoveCity_PokemonTrainerFanClub_Movement_1593FA:: @ 81593FA
	step_13
	step_25
	step_down
	step_down
	step_down
	step_left
	step_left
	step_end

LilycoveCity_PokemonTrainerFanClub_Movement_159402:: @ 8159402
	step_17
	step_17
	step_15
	step_15
	step_17
	step_15
	step_end

LilycoveCity_PokemonTrainerFanClub_Movement_159409:: @ 8159409
	step_down
	step_28
	step_end

LilycoveCity_PokemonTrainerFanClub_Movement_15940C:: @ 815940C
	step_49
	step_16
	step_16
	step_18
	step_25
	step_end

LilycoveCity_PokemonTrainerFanClub_MapScript1_159412:: @ 8159412
	compare 0x4095, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159515
	compare 0x4095, 2
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159429
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159429:: @ 8159429
	special sub_810FCE8
	setvar 0x8004, 8
	specialval RESULT, sub_810FD60
	compare RESULT, 0
	callif 1, LilycoveCity_PokemonTrainerFanClub_EventScript_1594D5
	setvar 0x8004, 9
	specialval RESULT, sub_810FD60
	compare RESULT, 0
	callif 1, LilycoveCity_PokemonTrainerFanClub_EventScript_1594DD
	setvar 0x8004, 10
	specialval RESULT, sub_810FD60
	compare RESULT, 0
	callif 1, LilycoveCity_PokemonTrainerFanClub_EventScript_1594E5
	setvar 0x8004, 11
	specialval RESULT, sub_810FD60
	compare RESULT, 0
	callif 1, LilycoveCity_PokemonTrainerFanClub_EventScript_1594ED
	setvar 0x8004, 12
	specialval RESULT, sub_810FD60
	compare RESULT, 0
	callif 1, LilycoveCity_PokemonTrainerFanClub_EventScript_1594F5
	setvar 0x8004, 13
	specialval RESULT, sub_810FD60
	compare RESULT, 0
	callif 1, LilycoveCity_PokemonTrainerFanClub_EventScript_1594FD
	setvar 0x8004, 14
	specialval RESULT, sub_810FD60
	compare RESULT, 0
	callif 1, LilycoveCity_PokemonTrainerFanClub_EventScript_159505
	setvar 0x8004, 15
	specialval RESULT, sub_810FD60
	compare RESULT, 0
	callif 1, LilycoveCity_PokemonTrainerFanClub_EventScript_15950D
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1594D5:: @ 81594D5
	movespriteperm 1, 7, 5
	return

LilycoveCity_PokemonTrainerFanClub_EventScript_1594DD:: @ 81594DD
	movespriteperm 3, 3, 4
	return

LilycoveCity_PokemonTrainerFanClub_EventScript_1594E5:: @ 81594E5
	movespriteperm 4, 7, 2
	return

LilycoveCity_PokemonTrainerFanClub_EventScript_1594ED:: @ 81594ED
	movespriteperm 5, 5, 5
	return

LilycoveCity_PokemonTrainerFanClub_EventScript_1594F5:: @ 81594F5
	movespriteperm 6, 5, 2
	return

LilycoveCity_PokemonTrainerFanClub_EventScript_1594FD:: @ 81594FD
	movespriteperm 2, 8, 4
	return

LilycoveCity_PokemonTrainerFanClub_EventScript_159505:: @ 8159505
	movespriteperm 7, 3, 3
	return

LilycoveCity_PokemonTrainerFanClub_EventScript_15950D:: @ 815950D
	movespriteperm 8, 8, 3
	return

LilycoveCity_PokemonTrainerFanClub_EventScript_159515:: @ 8159515
	call LilycoveCity_PokemonTrainerFanClub_EventScript_1594DD
	call LilycoveCity_PokemonTrainerFanClub_EventScript_1594ED
	call LilycoveCity_PokemonTrainerFanClub_EventScript_1594F5
	call LilycoveCity_PokemonTrainerFanClub_EventScript_159505
	call LilycoveCity_PokemonTrainerFanClub_EventScript_15950D
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15952F:: @ 815952F
	lock
	faceplayer
	setvar 0x8004, 13
	special sub_810FDAC
	compare 0x4095, 0
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_15959C
	specialval RESULT, sub_810FD60
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_15956E
	specialval RESULT, sub_810FCB0
	compare RESULT, 7
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159592
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A400, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15956E:: @ 815956E
	specialval RESULT, sub_810FCB0
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159588
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A36A, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159588:: @ 8159588
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A391, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159592:: @ 8159592
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A48D, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15959C:: @ 815959C
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A4EA, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1595A6:: @ 81595A6
	lock
	faceplayer
	setvar 0x8004, 8
	special sub_810FDAC
	compare 0x4095, 0
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159613
	specialval RESULT, sub_810FD60
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_1595E5
	specialval RESULT, sub_810FCB0
	compare RESULT, 7
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159609
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A629, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1595E5:: @ 81595E5
	specialval RESULT, sub_810FCB0
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_1595FF
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A584, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1595FF:: @ 81595FF
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A5AC, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159609:: @ 8159609
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A65B, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159613:: @ 8159613
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A6D4, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15961D:: @ 815961D
	lock
	faceplayer
	setvar 0x8004, 9
	special sub_810FDAC
	compare 0x4095, 0
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_15968A
	specialval RESULT, sub_810FD60
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_15965C
	specialval RESULT, sub_810FCB0
	compare RESULT, 7
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159680
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A814, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15965C:: @ 815965C
	specialval RESULT, sub_810FCB0
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159676
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A71E, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159676:: @ 8159676
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A789, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159680:: @ 8159680
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A8C4, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15968A:: @ 815968A
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18A984, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159694:: @ 8159694
	lock
	faceplayer
	setvar 0x8004, 10
	special sub_810FDAC
	compare 0x4095, 0
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159701
	specialval RESULT, sub_810FD60
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_1596D3
	specialval RESULT, sub_810FCB0
	compare RESULT, 7
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_1596F7
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AB0A, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1596D3:: @ 81596D3
	specialval RESULT, sub_810FCB0
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_1596ED
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AA39, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1596ED:: @ 81596ED
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AA83, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1596F7:: @ 81596F7
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AB41, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159701:: @ 8159701
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18ABAE, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15970B:: @ 815970B
	lock
	faceplayer
	setvar 0x8004, 11
	special sub_810FDAC
	specialval RESULT, sub_810FD60
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_15973F
	specialval RESULT, sub_810FCB0
	compare RESULT, 7
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159763
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18ACC7, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15973F:: @ 815973F
	specialval RESULT, sub_810FCB0
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159759
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AC15, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159759:: @ 8159759
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AC5E, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159763:: @ 8159763
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AD05, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15976D:: @ 815976D
	lock
	faceplayer
	setvar 0x8004, 12
	special sub_810FDAC
	specialval RESULT, sub_810FD60
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_1597A1
	specialval RESULT, sub_810FCB0
	compare RESULT, 7
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_1597C5
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AE63, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1597A1:: @ 81597A1
	specialval RESULT, sub_810FCB0
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_1597BB
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AD6D, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1597BB:: @ 81597BB
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18ADEF, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1597C5:: @ 81597C5
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AEF5, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_1597CF:: @ 81597CF
	lock
	faceplayer
	setvar 0x8004, 14
	special sub_810FDAC
	specialval RESULT, sub_810FD60
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159803
	specialval RESULT, sub_810FCB0
	compare RESULT, 7
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159827
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18B030, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159803:: @ 8159803
	specialval RESULT, sub_810FCB0
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_15981D
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AF62, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15981D:: @ 815981D
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18AFD0, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159827:: @ 8159827
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18B0C8, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159831:: @ 8159831
	lock
	faceplayer
	setvar 0x8004, 15
	special sub_810FDAC
	specialval RESULT, sub_810FD60
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159865
	specialval RESULT, sub_810FCB0
	compare RESULT, 7
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_159889
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18B1FD, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159865:: @ 8159865
	specialval RESULT, sub_810FCB0
	compare RESULT, 1
	jumpeq LilycoveCity_PokemonTrainerFanClub_EventScript_15987F
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18B16E, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_15987F:: @ 815987F
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18B181, 4
	release
	end

LilycoveCity_PokemonTrainerFanClub_EventScript_159889:: @ 8159889
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_18B24F, 4
	release
	end

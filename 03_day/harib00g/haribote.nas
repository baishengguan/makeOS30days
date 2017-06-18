; haribote-os
; TAB=4

		ORG		0xc200			; 该程序将要被装载到内存的什么地方？

		MOV		AL,0x13			; VGA显卡，320x200x8bit彩色
		MOV		AH,0x00
		INT		0x10
fin:
		HLT
		JMP		fin

; naskfunc
; TAB=4

[FORMAT "WCOFF"]				; ����Ŀ���ļ���ģʽ	
[INSTRSET "i486p"]				; ʹ�õ�486Ϊֹ��ָ��
[BITS 32]						; ����32λģʽ�õĻ�������
[FILE "naskfunc.nas"]			; �ļ���

		GLOBAL	_io_hlt,_write_mem8

[SECTION .text]

_io_hlt:	; void io_hlt(void);
		HLT
		RET

_write_mem8:	; void write_mem8(int addr, int data);
		MOV		ECX,[ESP+4]		; [ESP+4]�д�ŵ��ǵ�ַ���������ECX
		MOV		AL,[ESP+8]		; [ESP+8]�д�ŵ������ݣ��������AL
		MOV		[ECX],AL
		RET

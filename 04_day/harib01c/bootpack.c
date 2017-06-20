void io_hlt(void);
void write_mem8(int addr, int data);

void HariMain(void)
{
	int i; /* ����������i��һ��32λ����*/
	char *p; /*  ��������vram������BYTE [...]��ַ */

	for (i = 0xa0000; i <= 0xaffff; i++) {
		
		p = (char*) i; /* �����ַ */
		*p = i & 0x0f;
		
		/* write_mem8(i, i & 0x0f);;  MOV BYTE [i], i&0x0f */
	}

	for (;;) {
		io_hlt();
	}
}

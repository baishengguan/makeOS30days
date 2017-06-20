void io_hlt(void);
void write_mem8(int addr, int data);

void HariMain(void)
{
	int i; /* ����������i��һ��32λ����*/
	char *p; /*  ��������vram������BYTE [...]��ַ */

	p = (char *) 0xa0000; /* �����ַ */
	for (i = 0; i <= 0xffff; i++) {
		*(p + i) = i & 0x0f;
		
		/* write_mem8(i, i & 0x0f);;  MOV BYTE [i], i&0x0f */
	}

	for (;;) {
		io_hlt();
	}
}

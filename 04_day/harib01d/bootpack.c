void io_hlt(void);
void write_mem8(int addr, int data);

void HariMain(void)
{
	int i; /* 变量声明：i是一个32位整数*/
	char *p; /*  声明变量vram、用于BYTE [...]地址 */

	p = (char *) 0xa0000; /* 代入地址 */
	for (i = 0; i <= 0xffff; i++) {
		*(p + i) = i & 0x0f;
		
		/* write_mem8(i, i & 0x0f);;  MOV BYTE [i], i&0x0f */
	}

	for (;;) {
		io_hlt();
	}
}

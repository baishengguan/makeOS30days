/* ��ʼ����ϵ */

#include "bootpack.h"

void init_pic(void)
/* PIC��ʼ�� */
{
	io_out8(PIC0_IMR,  0xff  ); /* ��ֹ�����ж� */
	io_out8(PIC1_IMR,  0xff  ); /* ��ֹ�����ж� */

	io_out8(PIC0_ICW1, 0x11  ); /* ��Ե����ģʽ��edge trigger mode��*/
	io_out8(PIC0_ICW2, 0x20  ); /* IRQ0-7��INT20-27���� */
	io_out8(PIC0_ICW3, 1 << 2); /* PIC1��IRQ2���� */
	io_out8(PIC0_ICW4, 0x01  ); /* �޻�����ģʽ */

	io_out8(PIC1_ICW1, 0x11  ); /* ��Ե����ģʽ��edge trigger mode��*/
	io_out8(PIC1_ICW2, 0x28  ); /* IRQ0-7��INT20-27���� */
	io_out8(PIC1_ICW3, 2     ); /* PIC1��IRQ2���� */
	io_out8(PIC1_ICW4, 0x01  ); /* �޻�����ģʽ */

	io_out8(PIC0_IMR,  0xfb  ); /* 11111011 PIC1����ȫ����ֹ */
	io_out8(PIC1_IMR,  0xff  ); /* 11111111 ��ֹ�����ж� */

	return;
}
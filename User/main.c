#include "stm32f10x.h"
#include "bsp_oled.h"
//#include "7th.h"
u8 tt[]="��������";
u8 bb[]="�����˰�";
int main(void)
{
	SysTick_Init(80);
	oled_Config();
	SPI_FLASH_Init();	
/* �����������ڲ���֮��һ��һ��Ҫ����ע�͵� */
	//for(int i=0;i<32;i++)
	//{SPI_FLASH_Sector_Erase(0x00000+i*4096);}
//����һ��һ���ǵ�Ҫ�����ע�͵���Ҫ�����ԭ���Ĳ�����
	
	//������д����
//	for(uint32_t i=0;i<1000;i++)
//	{SPI_Page_Write(start_addr+16*i,hzk[i],16);}
	
	//��֤�Ե�ʵ��
	show_Chinese(tt,0,0,4);
	show_Chinese(bb,0,3,4);
}
/*
��ϸ�����������doc�µ�readme.txt.
*/

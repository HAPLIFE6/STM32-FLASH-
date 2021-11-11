#ifndef __BSP_OLED_H
#define __BSP_OLED_H

#include "stm32f10x.h"
#define I2Cx                                 I2C2
#define I2Cx_APBxClock_FUN                   RCC_APB1PeriphClockCmd
#define I2Cx_CLK                             RCC_APB1Periph_I2C2

#define I2Cx_GPIO_APBxClock_FUN              RCC_APB2PeriphClockCmd
#define I2Cx_GPIO_CLK                        RCC_APB2Periph_GPIOB
#define I2Cx_GPIO_SCL_PORT                   GPIOB
#define I2Cx_GPIO_SCL_PIN                    GPIO_Pin_10
#define I2Cx_GPIO_SDA_PORT                   GPIOB
#define I2Cx_GPIO_SDA_PIN                    GPIO_Pin_11

#define I2C_SCL_RES()                        GPIO_ResetBits(I2Cx_GPIO_SCL_PORT, I2Cx_GPIO_SCL_PIN)
#define I2C_SCL_SET()                        GPIO_SetBits(I2Cx_GPIO_SCL_PORT, I2Cx_GPIO_SCL_PIN)
#define I2C_SDA_RES()                        GPIO_ResetBits(I2Cx_GPIO_SDA_PORT, I2Cx_GPIO_SDA_PIN)
#define I2C_SDA_SET()                        GPIO_SetBits(I2Cx_GPIO_SDA_PORT, I2Cx_GPIO_SDA_PIN)

#define OLED_ADDR                           0x78           

void OLED_GPIO_Config(void);
void SDA_OUT(void);
void SDA_IN(void);
void IIC_Start(void);
void IIC_Stop(void);
void IIC_Wait_Ask(void);
void Write_IIC_Byte(u8 data);
void Write_IIC_Command(u8 command);
void Write_IIC_Data(u8 data);
void OLED_Init(void);
void OLED_Clear(void) ;
void oled_Config(void);
/*
�˲�ƷΪIIC������0.96��OLEDģ�飬���ز���SSD1306
Ѱַ��ʽΪ�Ƚ�������Ѱַ��ÿ��ÿҳÿ������8��bit��
����ÿһҳΪ8λ��д�����Զ����뵽��һ������
x������127��y������7.
ע�⼸���㣺дcmd���Ρ���һ��дСx���ڶ���дy��������д��x
*/
#endif


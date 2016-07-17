#include "led.h"

#include "stm32f4xx.h"


void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF,ENABLE); //ʱ��ʹ�ܺ�����
	
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_9|GPIO_Pin_10;//pin9
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;//���ģʽ
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;//����
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;//����
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;//50M
	GPIO_Init(GPIOF,&GPIO_InitStruct);
	GPIO_SetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);//��ʼΪ��
	
	
	
	
}


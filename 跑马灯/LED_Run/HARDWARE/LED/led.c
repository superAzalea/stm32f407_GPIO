#include "led.h"

#include "stm32f4xx.h"


void LED_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF,ENABLE); //时钟使能函数，
	
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_9|GPIO_Pin_10;//pin9
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_OUT;//输出模式
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;//推免
	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;//上拉
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;//50M
	GPIO_Init(GPIOF,&GPIO_InitStruct);
	GPIO_SetBits(GPIOF,GPIO_Pin_9|GPIO_Pin_10);//初始为灭
	
	
	
	
}


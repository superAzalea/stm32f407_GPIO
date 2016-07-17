#include "led.h"
#include "stm32f4xx.h"

void LED_Init(void)
{
	RCC->AHB1ENR |= 1 << 5;
	//pf9
	GPIOF->MODER &= ~(3 << 18);//GPIO mode寄存器18,19位清0，其他置1
	GPIOF->MODER |= (1 << 18);
	
	GPIOF->OSPEEDR &=~(3 << 18) ;
	GPIOF->OSPEEDR |=(2 << 18) ;
	
	GPIOF->PUPDR &=~(3 << 18);
	GPIOF->PUPDR |= (1 << 18);

	GPIOF->OTYPER &= ~(1 << 9) ;  
	GPIOF->OTYPER |= (0 << 9);
	
	GPIOF->ODR |= 1 << 9 ;

	//pf10

	GPIOF->MODER &= ~(3 << 20);//GPIO mode寄存器18,19位清0，其他置1
	GPIOF->MODER |= (1 << 20);
	
	GPIOF->OSPEEDR &=~(3 << 20) ;
	GPIOF->OSPEEDR |=(2 << 20) ;
	
	GPIOF->PUPDR &=~(3 << 20);
	GPIOF->PUPDR |= (1 << 20);

	GPIOF->OTYPER &= ~(1 << 10) ;  
	GPIOF->OTYPER |= (0 << 10);
	
	GPIOF->ODR |= 1 << 10 ;
	
}

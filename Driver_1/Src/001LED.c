/*
 * 001LED.c
 *
 *  Created on: Dec 29, 2020
 *      Author: 99003159
 */

#include "STM32F4XX.h"

void delay(void)
{
	for(uint32_t i=0;i<500000;i++)
	{
		;
	}
}

int main()
{
GPIO_HANDLE_t GPIO_LED;

GPIO_LED.pGPIOx = GPIOD;
GPIO_LED.PIN_CONGFIG.GPIO_PinNumber = GPIO_Pin_Number_15;
GPIO_LED.PIN_CONGFIG.GPIO_PinMode = GPIO_Pin_Mode_Out;
GPIO_LED.PIN_CONGFIG.GPIO_PinSpeed = GPIO_Pin_Speed_Fast;
GPIO_LED.PIN_CONGFIG.GPIO_PinOPType = GPIO_Pin_PP;
GPIO_LED.PIN_CONGFIG.GPIO_PinPuPdControl=GPIO_Pin_PU;
GPIO_PeriClockControl(GPIOD, ENABLE);
GPIO_Init(&GPIO_LED);

GPIO_LED.PIN_CONGFIG.GPIO_PinNumber = GPIO_Pin_Number_12;
GPIO_LED.PIN_CONGFIG.GPIO_PinMode = GPIO_Pin_Mode_Out;
GPIO_LED.PIN_CONGFIG.GPIO_PinSpeed = GPIO_Pin_Speed_Fast;
GPIO_LED.PIN_CONGFIG.GPIO_PinOPType = GPIO_Pin_PP;
GPIO_LED.PIN_CONGFIG.GPIO_PinPuPdControl=GPIO_Pin_PU;
GPIO_PeriClockControl(GPIOD, ENABLE);
GPIO_Init(&GPIO_LED);

GPIO_LED.PIN_CONGFIG.GPIO_PinNumber = GPIO_Pin_Number_13;
GPIO_LED.PIN_CONGFIG.GPIO_PinMode = GPIO_Pin_Mode_Out;
GPIO_LED.PIN_CONGFIG.GPIO_PinSpeed = GPIO_Pin_Speed_Fast;
GPIO_LED.PIN_CONGFIG.GPIO_PinOPType = GPIO_Pin_PP;
GPIO_LED.PIN_CONGFIG.GPIO_PinPuPdControl=GPIO_Pin_PU;

GPIO_PeriClockControl(GPIOD, ENABLE);
GPIO_Init(&GPIO_LED);
GPIO_LED.PIN_CONGFIG.GPIO_PinNumber = GPIO_Pin_Number_14;
GPIO_LED.PIN_CONGFIG.GPIO_PinMode = GPIO_Pin_Mode_Out;
GPIO_LED.PIN_CONGFIG.GPIO_PinSpeed = GPIO_Pin_Speed_Fast;
GPIO_LED.PIN_CONGFIG.GPIO_PinOPType = GPIO_Pin_PP;
GPIO_LED.PIN_CONGFIG.GPIO_PinPuPdControl=GPIO_Pin_PU;




GPIO_PeriClockControl(GPIOD, ENABLE);
GPIO_Init(&GPIO_LED);

while(1)
{
	GPIO_ToggleOutputPin(GPIOD, 13);
	delay();
	GPIO_ToggleOutputPin(GPIOD, 12);
	delay();
	GPIO_ToggleOutputPin(GPIOD, 14);
	delay();
	GPIO_ToggleOutputPin(GPIOD, 15);
	delay();
}

}

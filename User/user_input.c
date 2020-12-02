#include <stdio.h>

#include "user_input.h"
#include "stdint.h"
#include "tim.h"
#include "spi.h"
#include "gpio.h"

void readInput(){
	if(HAL_GPIO_ReadPin(GPIO_IN_GPIO_Port, GPIO_IN_Pin))
	{
	  printf("Input Success\n");
	}
	else
  {
	  printf("Input Null\n");
	}
}

void readEinInput(uint16_t GPIO_Pin){
	if(GPIO_Pin == GPIO_EIN_Pin)
	{
		printf("Input Success\n");
	}
}


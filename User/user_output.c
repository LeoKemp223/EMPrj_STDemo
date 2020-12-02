#include <stdio.h>

#include "user_output.h"
#include "stdint.h"
#include "tim.h"
#include "spi.h"
#include "gpio.h"
#include "usart.h"

void setOutput(){
	HAL_GPIO_WritePin(GPIO_OUT_GPIO_Port, GPIO_OUT_Pin, GPIO_PIN_RESET);
}


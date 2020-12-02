#include <stdio.h>

#include "user_pwm.h"
#include "stdint.h"
#include "tim.h"
#include "spi.h"
#include "gpio.h"

uint16_t pwmVal=0;   //PWM占空比  
uint8_t dir=1;


void testPwm(){
	while (pwmVal< 500)
	  {
		  pwmVal++;
		  __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, pwmVal);    //修改比较值，修改占空比
		  HAL_Delay(1);
	  }
	  while (pwmVal)
	  {
		  pwmVal--;
		  __HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, pwmVal);    //修改比较值，修改占空比
		  HAL_Delay(1);
	  }
	  HAL_Delay(200);
}


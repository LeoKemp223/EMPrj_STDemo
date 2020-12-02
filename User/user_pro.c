#include <stdio.h>

#include "user_pro.h"
#include "stdint.h"
#include "tim.h"
#include "spi.h"
#include "gpio.h"
#include "usart.h"

uint8_t hello[] = "USART3 is ready...\n";
uint8_t recv_buf[13] = {0};

void initPro(){
    HAL_UART_Receive_IT(&huart3, (uint8_t*)recv_buf, 13);
}

void readProData(UART_HandleTypeDef *huart){
	if(huart ->Instance == USART1)
    {
        //重新使能串口接收中断
        HAL_UART_Receive_IT(&huart3, (uint8_t*)recv_buf, 13);
    }
}

void sendProData(){
		HAL_UART_Transmit_IT(&huart3, (uint8_t*)hello, sizeof(hello));
}


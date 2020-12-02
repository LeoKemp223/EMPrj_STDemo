#include "user_at24c02.h"
#include "stdint.h"
#include "tim.h"
#include "i2c.h"
#include <stdio.h>

uint8_t WriteBuffer[BufferSize] = {0,1,2,3,4,5,6,7,8,9};
uint8_t ReadBuffer[BufferSize];

void testAT24C02(){
	HAL_Delay(5);
	if(HAL_I2C_Mem_Write(&hi2c1, ADDR_24LCxx_Write, 0, I2C_MEMADD_SIZE_8BIT,WriteBuffer,BufferSize, 0x10) != HAL_OK)
	{
		printf("Write fail!\n");
	}
	HAL_Delay(5);
	if(HAL_I2C_Mem_Read(&hi2c1, ADDR_24LCxx_Read, 0, I2C_MEMADD_SIZE_8BIT,ReadBuffer,BufferSize, 0x10) != HAL_OK)
	{
		printf("Read fail!\n");
	}
}


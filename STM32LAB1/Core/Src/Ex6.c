/*
 * Ex6.c
 *
 *  Created on: Sep 17, 2024
 *      Author: Admin
 */
#include "Ex6.h"

void Exercise6(void){
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);

	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);

	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);

	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
}

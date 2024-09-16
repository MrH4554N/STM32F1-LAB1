/*
 * Ex2.c
 *
 *  Created on: Sep 16, 2024
 *      Author: Admin
 */

#include "Ex2.h"

void Exercise2(void){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
	HAL_Delay(5000);
	HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_10);

	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);
	HAL_Delay(2000);
	HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_11);

	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
	HAL_Delay(2000);
	HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);
}

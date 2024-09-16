/*
 * Ex1.c
 *
 *  Created on: Sep 16, 2024
 *      Author: Admin
 */
#include "Ex1.h"

void Exercise1(void)
{
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_6);
	HAL_Delay(2000);
}

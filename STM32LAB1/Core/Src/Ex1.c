/*
 * Ex1.c
 *
 *  Created on: Sep 16, 2024
 *      Author: Admin
 */
#include "Ex1.h"

void Exercise1(void)
{
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);  // Toggles the RED LED on PA5
}

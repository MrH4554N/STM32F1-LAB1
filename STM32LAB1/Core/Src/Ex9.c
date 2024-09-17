/*
 * Ex9.c
 *
 *  Created on: Sep 17, 2024
 *      Author: Admin
 */

#include "Ex9.h"

void Exercise9(int num){
	switch(num){
			case 0:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);
				break;
			case 1:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
				break;
			case 2:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
				break;
			case 3:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
				break;
			case 4:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
				break;
			case 5:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
				break;
			case 6:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
				break;
			case 7:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
				break;
			case 8:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);
				break;
			case 9:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);
				break;
			case 10:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);
				break;
			case 11:
				HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
				break;
		}


}

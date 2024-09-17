/*
 * Ex4.c
 *
 *  Created on: Sep 17, 2024
 *      Author: Admin
 */


#include "Ex4.h"
void SegLedDisplay(int num){
	switch(num){
			case 0:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET);
				break;
			case 1:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET);
				break;
			case 2:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
				break;
			case 3:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
				break;
			case 4:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
				break;
			case 5:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
				break;
			case 6:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
				break;
			case 7:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET);
				break;
			case 8:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
				break;
			case 9:
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
	}
}

void Exercise4(int counter){

	if(counter <= 1){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, SET);
		SegLedDisplay(counter);
	}
	else if (counter <= 4){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);			//X1-D2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
		SegLedDisplay(counter);
	}
	else if(counter <= 6){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, SET);				//V1-D2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
		SegLedDisplay(counter);
	}
	else if(counter <= 9){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);					//D1-X2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, SET);
		SegLedDisplay(counter);
	}

	HAL_Delay(1000);

	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);		//D1
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, RESET);		//V1
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);		//X1

	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);		//D2
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);		//V2
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);		//X2

	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);		//D1
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);		//V1
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);		//X1

	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);		//D2
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, RESET);		//V2
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, RESET);		//X2
}

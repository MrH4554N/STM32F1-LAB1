/*
 * Ex10.c
 *
 *  Created on: Sep 17, 2024
 *      Author: Admin
 */
#include "Ex6.h"
#include "Ex7.h"
#include "Ex8.h"
#include "Ex9.h"

#include "Ex10.h"

void Exercise10(int hour, int minute, int second){
	second++;
	Exercise9((second - 5) / 5);

	if(second >= 60){
		Exercise9(minute / 5);
		minute++;
		second = 0;
	}
	Exercise8(second / 5);
	if(minute >= 60){
		Exercise9(hour);
		hour++;
		minute = 0;
	}
	Exercise8(minute / 5);
	if(hour >= 12){
		hour = minute = second = 0;
		Exercise7();
		Exercise8(0);
	}
	Exercise9(hour);
	HAL_Delay(100);
}

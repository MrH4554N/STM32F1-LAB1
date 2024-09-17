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

void Exercise10(int hour, int minute, int second){
	if(second%5 == 0){
		Exercise7();
		Exercise8(second/5);
		Exercise8(minute/5);
		Exercise8(hour);
	}
	second++;
	if(second >= 60){
		second = 0;
		minute++;
		if(minute >= 60){
			minute = 0;
			hour++;
			if(hour >= 12){
				hour = 0;
			}
		}
	}
}

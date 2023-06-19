/*
 * clovk.c
 *
 *  Created on: Apr 8, 2023
 *      Author: pc
 */


#include "clock.h"


void clock(){
	second++;
	if ( second >= 60) {
		second = 0;
		minute++;
	}
	if( minute >= 60) {
		minute = 0;
		hour++;
	}
	if( hour >= 24){
	 hour = 0;
	}
//	updateLedBuffer(hour , minute);
//	updateLedBuffer(minute , second);
}

void setClock(int h, int m, int s ){
	second = s;
	minute = m;
	hour = h;
}

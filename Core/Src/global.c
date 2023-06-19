/*
 * global.c
 *
 *  Created on: Sep 30, 2022
 *      Author: pc
 */
# include "global.h"
//# include "main.h"
int status_mode = 0;
int status_buz = 0;

int index_led = 0;

int butM = 0; //MODE
int butS = 1; //SET
int butU = 2; //UP
int butD = 3; //DOWN


int hourAlarm = 0;
int minuteAlarm = 0;
int secondAlarm = 0;

int hourStopWatch = 0;
int minuteStopWatch = 0;
int secondStopWatch = 0;

int led12 = 0;
int led34 = 0;

int second = 0;
int minute = 0;
int hour = 0;

int timeTimer(int time){
	return time * 1000;
}

/*
 * global.h
 *
 *  Created on: Sep 30, 2022
 *      Author: pc
 */
#include "main.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#define INIT 			0

#define MODE1 			1 // Normal
#define MODE2 			2 // Alarm
#define MODE3 			3 // Stop Watch
#define MODE4 			4 // Set Time

#define MODIFY_MINUTE 		12
#define MODIFY_HOUR 		13

#define MODIFY_MINUTE_ALARM 		14
#define MODIFY_HOUR_ALARM 		15

#define MODIFY_MINUTE_STOPWATCH 		16
#define MODIFY_HOUR_STOPWATCH  		17

#define ON_STOPWATCH	8

#define BUZ_ON_ALARM 			40
#define BUZ_OFF			41
#define BUZ_ON_STOPWATCH			43

extern int status_mode;
extern int status_buz;
extern int index_led;

extern int butM;
extern int butS;
extern int butU;
extern int butD;

extern int led12;
extern int led34;

extern int second;
extern int minute;
extern int hour;

extern int hourAlarm;
extern int minuteAlarm;
extern int secondAlarm;

extern int hourStopWatch;
extern int minuteStopWatch;
extern int secondStopWatch;

int timeTimer(int time);

#endif /* INC_GLOBAL_H_ */

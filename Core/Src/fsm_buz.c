/*
 * FSM_AUTOMATIC.c
 *
 *  Created on: Sep 30, 2022
 *      Author: pc
 */


#include <fsm_buz.h>

void fsm_buz_run(){
	switch(status_buz){
	case BUZ_OFF:
		if ((hour == hourAlarm && minute == minuteAlarm && second == secondAlarm))
		{
					Buzzer_On();
					status_buz = BUZ_ON_ALARM;
					setTimer5(3000);
		}

		if (led12 <= 0 && led34 <= 0 && status_mode == ON_STOPWATCH){
			Buzzer_On();
			status_buz = BUZ_ON_STOPWATCH;
			setTimer5(3000);
		}
		break;

	case BUZ_ON_STOPWATCH:

		if (timer5_flag == 1){
			Buzzer_Off();
			status_buz = BUZ_OFF;
			status_mode = MODE3;
		}
		break;

	case BUZ_ON_ALARM:

		if (timer5_flag == 1){
			Buzzer_Off();
			status_buz = BUZ_OFF;
		}
		break;

	default:
		break;

	}


}



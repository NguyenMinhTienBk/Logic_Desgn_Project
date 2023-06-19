/*
 * FSM_AUTOMATIC.c
 *
 *  Created on: Sep 30, 2022
 *      Author: pc
 */

#include <fsm_mode.h>

void fsm_mode_run(){
	switch (status_mode){
	case INIT:
		status_mode = MODE1;
		status_buz = BUZ_OFF;
//		status_led7seg = INIT;
//		index_led = 0;
		//setTimer1(500);
		break;

	case MODE1:
		updateLedBuffer(minute , second);
		if (isButtonflag(butM) == 1){
//			clearTimer1();
//			clearTimer2();
//			clearTimer3();
			status_mode = MODE2;
			led12 = hourAlarm;
			led34 = minuteAlarm;
			updateLedBuffer(led12, led34);
//			setTimer3(1000);
		}
			  if (timer1_flag == 1){
				  HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
				  setTimer1(500);
			  }

		break;

	case MODE2: // Alarm
		if (isButtonflag(butM) == 1){
//			clearTimer1();
//			clearTimer2();
//			clearTimer3();
			status_mode = MODE3;
			led12 = hourStopWatch;
			led34 = minuteStopWatch;

//			led12 = minuteStopWatch;
//			led34 = secondStopWatch;
			updateLedBuffer(led12, led34);
			//setTimer3(1000);
		}
		if(isButtonflag(butS)==1){
			status_mode = MODIFY_HOUR_ALARM;
			led12 = hourAlarm;
			led34 = minuteAlarm;
		}

		  if (timer2_flag == 1){
			  HAL_GPIO_TogglePin(LED_YEL_GPIO_Port, LED_YEL_Pin);
			  setTimer2(500);
		  }
//		if (isButtonflag(but2) == 1){
//			led34++;
//			if (led34 > 99){
//				led34 = 0;
//			}
//		}

		break;

	case MODIFY_HOUR_ALARM:

		  if (timer3_flag == 1){
			  HAL_GPIO_TogglePin(LED_GRE_GPIO_Port, LED_GRE_Pin);
			  setTimer3(500);
		  }

		if (isButtonflag(butM) == 1){
			status_mode = MODE3;
		}

		if (isButtonflag(butU) == 1){
			led12++;

			if (led12 > 23){
				led12 = 0;
			}
			updateLedBuffer(led12, led34);
		}

		if (isButtonflag(butD) == 1){
			led12--;

			if (led12 < 0){
				led12 = 23;
			}
			updateLedBuffer(led12, led34);
		}

		if(isButtonflag(butS)==1){
			hourAlarm = led12;
			status_mode = MODIFY_MINUTE_ALARM;
		}

		break;

	case MODIFY_MINUTE_ALARM:

		if (isButtonflag(butM) == 1){
			status_mode = MODE3;
		}

		if (isButtonflag(butU) == 1){
			led34++;

			if (led34 > 59){
				led34 = 0;
			}
			updateLedBuffer(led12, led34);
		}

		if (isButtonflag(butD) == 1){
			led34--;

			if (led34 < 0){
				led34 = 59;
			}

			updateLedBuffer(led12, led34);
		}

		if(isButtonflag(butS)==1){
			minuteAlarm = led34;
			status_mode = MODE2;
			led12 = hourAlarm;
//			led34 = minuteAlarm;
			updateLedBuffer(led12, led34);
		}
		break;

	case MODE3: //Stop Watch

		if (isButtonflag(butM) == 1){
//			clearTimer1();
//			clearTimer2();
//			clearTimer3();
			status_mode = MODE4;
//			led12 = hourStopWatch;
//			led34 = minuteStopWatch;

			led12 = hour;
			led34 = minute;
			updateLedBuffer(led12, led34);
			//setTimer3(1000);
		}
		if(isButtonflag(butS)==1){
			status_mode = MODIFY_HOUR_STOPWATCH;
			led12 = hourStopWatch;
			led34 = minuteStopWatch;
			updateLedBuffer(led12, led34);
		}

		if(isButtonflag(butU)==1 && isButtonflag(butD)==1){
			status_mode = ON_STOPWATCH;
			led12 = hourStopWatch;
			led34 = minuteStopWatch;
			updateLedBuffer(led12, led34);
		}

		break;

	case MODIFY_HOUR_STOPWATCH:

//		  if (timer3_flag == 1){
//			  HAL_GPIO_TogglePin(LED_GRE_GPIO_Port, LED_GRE_Pin);
//			  setTimer3(500);
//		  }

		if (isButtonflag(butM) == 1){
			status_mode = MODE4;
		}

		if (isButtonflag(butU) == 1){
			led12++;

			if (led12 > 23){
				led12 = 0;
			}
			updateLedBuffer(led12, led34);
		}

		if (isButtonflag(butD) == 1){
			led12--;

			if (led12 < 0){
				led12 = 23;
			}
			updateLedBuffer(led12, led34);
		}

		if(isButtonflag(butS)==1){
			hourStopWatch = led12;
			status_mode = MODIFY_MINUTE_STOPWATCH;
		}

		break;

	case ON_STOPWATCH:

//		  if (timer3_flag == 1){
//			  HAL_GPIO_TogglePin(LED_GRE_GPIO_Port, LED_GRE_Pin);
//			  setTimer3(500);
//		  }
		if(timer6_flag == 1){
			if ( led34 > 0 && led12 >= 0 ){
				led34--;
				if (led34 == 0 && led12 != 0){
					led34 = 59;
					led12--;
				}
				updateLedBuffer(led12, led34);
			}
			setTimer6(1000);
		}

		if (isButtonflag(butM) == 1){
			status_mode = MODE4;
		}


		if(isButtonflag(butS)==1){
			hourStopWatch = led12;
			status_mode = MODIFY_HOUR_STOPWATCH;
		}

		break;

	case MODIFY_MINUTE_STOPWATCH:

		if (isButtonflag(butM) == 1){
			status_mode = MODE4;
		}

		if (isButtonflag(butU) == 1){
			led34++;

			if (led34 > 59){
				led34 = 0;
			}
			updateLedBuffer(led12, led34);
		}

		if (isButtonflag(butD) == 1){
			led34--;

			if (led34 < 0){
				led34 = 59;
			}

			updateLedBuffer(led12, led34);
		}

		if(isButtonflag(butS)==1){
			minuteStopWatch = led34;
			status_mode = MODE3;
			led12 = hourStopWatch;
//			led34 = minuteAlarm;
			updateLedBuffer(led12, led34);
		}
		break;

	case MODE4: // Modify Time
		if (isButtonflag(butM) == 1){
//			clearTimer1();
//			clearTimer2();
//			clearTimer3();
			status_mode = MODE1;
			led12 = hour;
			led34 = minute;
			updateLedBuffer(led12, led34);
			//setTimer3(1000);
		}
		if(isButtonflag(butS)==1){
			status_mode = MODIFY_HOUR;
		}

//		  if (timer2_flag == 1){
//			  HAL_GPIO_TogglePin(LED_YEL_GPIO_Port, LED_YEL_Pin);
//			  setTimer2(500);
//		  }
//		if (isButtonflag(but2) == 1){
//			led34++;
//			if (led34 > 99){
//				led34 = 0;
//			}
//		}

		break;

	case MODIFY_HOUR:

//		  if (timer3_flag == 1){
//			  HAL_GPIO_TogglePin(LED_GRE_GPIO_Port, LED_GRE_Pin);
//			  setTimer3(500);
//		  }

		if (isButtonflag(butM) == 1){
			status_mode = MODE1;
		}

		if (isButtonflag(butU) == 1){
			led12++;

			if (led12 > 23){
				led12 = 0;
			}
			updateLedBuffer(led12, led34);
		}

		if (isButtonflag(butD) == 1){
			led12--;

			if (led12 < 0){
				led12 = 23;
			}
			updateLedBuffer(led12, led34);
		}

		if(isButtonflag(butS)==1){
			hour = led12;
			status_mode = MODIFY_MINUTE;
		}

		break;

	case MODIFY_MINUTE:

		if (isButtonflag(butM) == 1){
			status_mode = MODE1;
		}

		if (isButtonflag(butU) == 1){
			led34++;

			if (led34 > 59){
				led34 = 0;
			}
			updateLedBuffer(led12, led34);
		}

		if (isButtonflag(butD) == 1){
			led34--;

			if (led34 < 0){
				led34 = 59;
			}

			updateLedBuffer(led12, led34);
		}

		if(isButtonflag(butS)==1){
			minute = led34;
			status_mode = MODE4;
			led12 = hour;
//			led34 = minuteAlarm;
			updateLedBuffer(led12, led34);
		}
		break;
	default:
		break;
	}


}



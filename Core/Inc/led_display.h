/*
 * led_display.h
 *
 *  Created on: Oct 29, 2022
 *      Author: pc
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "main.h"
#include "global.h"
#include "software_timer.h"

void display7SEG(int num);
void update7SEG(int index);

void SetLed7Seg1On();
void SetLed7Seg2On();
void SetLed7Seg3On();
void SetLed7Seg4On();
void SetLed7SegAllOn();
void SetLed7SegAllOff();
void updateLedBuffer(int led1_2,int led3_4);
void upadateClokBuffer(int hour, int minute);
void Led_scaning();

#endif /* INC_LED_DISPLAY_H_ */

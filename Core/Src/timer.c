/*
 * timer.c
 *
 *  Created on: Sep 28, 2023
 *      Author: Admin
 */

#include "main.h"
#include "timer.h"

int timer0_counter = 0;
int timer0_flag = 0;

void setTimer0 ( int duration ){
	timer0_counter = duration / TIMER_CYCLE ;
	timer0_flag = 0;
}

void timer_run(){
	if( timer0_counter > 0){
		timer0_counter --;
		if( timer0_counter == 0) timer0_flag = 1;
	}
}

 void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	if(htim->Instance == TIM2){
		timer_run();
	}
}

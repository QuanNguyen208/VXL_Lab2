/*
 * timer.c
 *
 *  Created on: Sep 28, 2023
 *      Author: Admin
 */

#include "main.h"
#include "timer.h"


void timer_set(int idx, int duration){
	if (idx >= NUMBER_OF_TIMER) return; //num_timer = 2
	timer_counter[idx] = duration/TIMER_CYCLE; //timer_cycle = 10
	timer_flag[idx] = 0 ;
}

void timer_run(){
	int i = 0 ;
	if (i >= NUMBER_OF_TIMER) {
		return ;
	}
	if (timer_counter[i] > 0) {
	        timer_counter[i]--;
	        if (timer_counter[i] == 0) {
	            timer_flag[i] = 1;
	            i++;
	        }
		}
}

 void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	if(htim->Instance == TIM2){
		timer_run();
	}
}

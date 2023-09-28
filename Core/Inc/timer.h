/*
 * timer.h
 *
 *  Created on: Sep 28, 2023
 *      Author: Admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#define TIMER_CYCLE 10
#define NUMBER_OF_TIMER 2

int	timer_counter	[NUMBER_OF_TIMER];
int	timer_flag	[NUMBER_OF_TIMER];

void setTimer0 ( int duration );
void timer_run();
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

extern int timer0_flag;

#endif /* INC_TIMER_H_ */

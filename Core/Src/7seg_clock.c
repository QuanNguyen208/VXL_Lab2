/*
 * 7seg_clock.c
 *
 *  Created on: Sep 27, 2023
 *      Author: Admin
 */

#include "main.h"
#include "7seg_clock.h"

#define MAX_LED 4
int led_buffer[MAX_LED] ;

void update7SEG(int index_led , int val){
		// save value for clk

		if (index_led < MAX_LED && val < 10);
		led_buffer[index_led] = val;


}
void display7SEG(int index_led){
	int temp = led_buffer[index_led] ;

	// choose clock
	switch (index_led){
				case 0:
					HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
					HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
					HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
					HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
					break;

				case 1:
					HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
					HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
					HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
					HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
					break;

				case 2:
					HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
					HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
					HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
					HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
					break;

				case 3:
					HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
					HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
					HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
					HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
					break;

				case 4: // halting case: all clocks OFF
					HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
					HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
					HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
					HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
					break;

				default:
					break;
			}

	switch(temp){
				case 0:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_SET ) ;
					break;
				case 1:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_SET ) ;
					break;
				case 2:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
					break;
				case 3:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
					break;
				case 4:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
					break;
				case 5:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
					break;
				case 6:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
					break;
				case 7:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_SET ) ;
					break;
				case 8:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
					break;
				case 9:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;
					break;
				default:
					HAL_GPIO_WritePin ( LED7_A_GPIO_Port , LED7_A_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_B_GPIO_Port , LED7_B_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_C_GPIO_Port , LED7_C_Pin , GPIO_PIN_SET ) ;
					HAL_GPIO_WritePin ( LED7_D_GPIO_Port , LED7_D_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_E_GPIO_Port , LED7_E_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_F_GPIO_Port , LED7_F_Pin , GPIO_PIN_RESET ) ;
					HAL_GPIO_WritePin ( LED7_G_GPIO_Port , LED7_G_Pin , GPIO_PIN_RESET ) ;

				}
}

/*
 * app.c
 *
 *  Created on: Feb 10, 2022
 *      Author: lukaz
 */

#include <stdint.h>
#include <stdbool.h>
#include "app.h"
#include "main.h"
#include "hw.h"

void app_init(void)
{


}
void app_loop(void)
{

	uint32_t led_time_on_ms;
	uint32_t led_time_off_ms;
	bool switch0_state = hw_switch0_state_get();
	bool switch1_state = hw_switch1_state_get();
	if (switch0_state == 0 && switch1_state == 0){
		led_time_on_ms = 100;
		led_time_off_ms = 100;
	}
	else if (switch0_state == 0 && switch1_state == 1) {
		led_time_on_ms = 300;
		led_time_off_ms = 150;
	}
	else if (switch0_state == 1 && switch1_state == 0) {
		led_time_on_ms = 600;
		led_time_off_ms = 300;
	}
	else if (switch0_state == 1 && switch1_state == 1) {
		led_time_on_ms = 900;
		led_time_off_ms = 450;
	}

	hw_led_state_set(true);
	hw_delay_ms(led_time_on_ms);
	hw_led_state_set(false);
	hw_delay_ms(led_time_off_ms);


}

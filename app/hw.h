/*
 * hw.h
 *
 *  Created on: Feb 10, 2022
 *      Author: lukaz
 */

#ifndef HW_H_
#define HW_H_

bool hw_switch0_state_get(void);
bool hw_switch1_state_get(void);
void hw_led_state_set (bool state);
void hw_delay_ms (uint32_t time_ms);

#endif /* HW_H_ */

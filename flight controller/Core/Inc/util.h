/*
 * util.h
 *
 *  Created on: Aug 5, 2025
 *      Author: 34684
 */

#ifndef UTIL_H_
#define UTIL_H_

void dt_timer_init(void);
uint32_t get_time_now_us(void);
float get_time_elapsed(uint32_t* lastcall);
void constrain(float* value, float low, float high);
void eliminate_first(uint8_t arr[], uint8_t len);



#endif /* UTIL_H_ */

/*
 * joystick_mapper.h
 *
 *  Created on: Aug 4, 2025
 *      Author: 34684
 */

#ifndef JOYSTICK_MAPPER_H_
#define JOYSTICK_MAPPER_H_

#include "dron_structs.h"

void get_joystick_data(UserControl_t* input);
void map_joystick_to_setpoint(UserControl_t input, FlightMessage_t* setpoint);



#endif /* JOYSTICK_MAPPER_H_ */

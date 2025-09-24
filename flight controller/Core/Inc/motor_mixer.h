/*
 * motor_mixer.h
 *
 *  Created on: Aug 4, 2025
 *      Author: 34684
 */

#ifndef MOTOR_MIXER_H_
#define MOTOR_MIXER_H_
#include "dron_structs.h"

void motor_mixer(PID_Outputs_t pid_outputs, float throttle, PWM_Outputs_t* ccr_values);


#endif /* MOTOR_MIXER_H_ */

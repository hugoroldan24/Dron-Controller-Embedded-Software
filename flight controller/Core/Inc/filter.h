/*
 * filter.h
 *
 *  Created on: Jul 30, 2025
 *      Author: 34684
 */

#ifndef FILTER_H_
#define FILTER_H_

#include "dron_structs.h"

void computeAttitudeFromIMU(float imu_data[6], Attitude_t* attitude, uint32_t* lastcall);


#endif /* FILTER_H_ */

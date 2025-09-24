#ifndef DRON_STRUCTS_H_
#define DRON_STRUCTS_H_

#include <stdint.h>

typedef struct {
    float roll;
    float pitch;
    float yaw_rate; /* Since we won't use magnetometer, if we deal with yaw as an angle, it will end up not working so we will work with the angular speed */
} Attitude_t;

typedef struct {
	Attitude_t  attitude;
	float 		throttle;
	uint8_t		type;
} FlightMessage_t;

typedef union {
	struct{
		uint8_t left_x_axis;
		uint8_t left_y_axis;
		uint8_t right_x_axis;
		uint8_t right_y_axis;
	};
	uint8_t axis[4];

} UserControl_t;

typedef struct {
    uint16_t motor1_pwm;
    uint16_t motor2_pwm;
    uint16_t motor3_pwm;
    uint16_t motor4_pwm;
} PWM_Outputs_t;

typedef struct{
	float roll;
	float pitch;
	float yaw_rate;
} PID_Outputs_t;

typedef struct {
    float kp;           // Ganancia proporcional
    float ki;           // Ganancia integral
    float kd;           // Ganancia derivativa

    float integral;     // Acumulador de término integral
    float prev_error;   // Error anterior (para cálculo derivativo)

    float output_min;   // Límite inferior de la salida (-1)
    float output_max;   // Límite superior de la salida (1)
} PID_Controller_t;

typedef struct {
	int32_t  preassure;
	uint16_t battery_level;
} Telem_t;

#endif /* DRON_STRUCTS_H_ */


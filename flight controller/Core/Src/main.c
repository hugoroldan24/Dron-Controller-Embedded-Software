/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * @file main.c																   *
 * @brief																	   *
 * Main entry point for the flight controller firmware.						   *
 * Initializes peripherals, creates FreeRTOS tasks, and starts the scheduler.  *
 * Implements the idle hook to put the MCU into low-power sleep when idle.     *
 *																			   *
 * Pinout:																	   *
 *  - Battery measurement: PA2												   *
 *  - MPU6050 (interrupt pin): PA4											   *
 *  - I2C: PB6 = SCL, PB7 = SDA												   *
 *  - PWM outputs: PA6, PA7, PB0, PB1										   *
 *  - SPI: PB8 = CS, PB10 = SCK, PB14 = MISO, PB15 = MOSI					   *
 *  - UART: PA9 = TX, PA10 = RX												   *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "stm32f411xe.h"
#include "FC_tasks.h"
#include "FreeRTOS.h"
#include "task.h"

int main(void)
{
    /* Initialize all required peripherals (GPIOs, UART, I2C, PWM, SPI, etc.) */
	Periph_Init();

    /* Create all FreeRTOS tasks for flight control, sensors, telemetry, etc. */
	createTasks();

    /* Start the FreeRTOS scheduler; tasks now take control */
	vTaskStartScheduler();

    /* Execution should never reach here; scheduler runs indefinitely */
	while(1);

	return 0;
}

/**
 * @brief Idle task hook called by FreeRTOS when no other task is running.
 *        Puts the MCU into sleep mode to reduce power consumption.
 */void vApplicationIdleHook(void)
{
	 /* Put the MCU into low-power sleep mode until the next interrupt
	       SLEEPDEEP bit is 0, so MCU enters standard sleep (not deep sleep) */
	__WFI();
}



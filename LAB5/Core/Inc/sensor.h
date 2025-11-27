/*
 * sensor.h
 *
 *  Created on: Nov 27, 2025
 *      Author: ADMIN
 */

#ifndef INC_SENSOR_H_
#define INC_SENSOR_H_

#include "main.h"
#include "uart.h"

extern uint32_t sensorValue;

void sensorRead(void);

#endif /* INC_SENSOR_H_ */

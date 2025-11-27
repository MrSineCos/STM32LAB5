/*
 * sensor.c
 *
 *  Created on: Nov 27, 2025
 *      Author: ADMIN
 */


#include "sensor.h"

uint32_t sensorValue = 0;

void sensorRead(void) {
    sensorValue = HAL_ADC_GetValue(&hadc1);
    char bufferMessage[50];
    sprintf(bufferMessage, "! ADC = %ld#\r\n", sensorValue);
    addToPrint(bufferMessage);
}

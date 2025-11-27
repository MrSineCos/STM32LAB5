/*
 * led.c
 *
 *  Created on: Nov 27, 2025
 *      Author: ADMIN
 */

#include "led.h"

void ledBlink(void) {
    HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}


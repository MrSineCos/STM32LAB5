/*
 * uart.h
 *
 *  Created on: Nov 27, 2025
 *      Author: ADMIN
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include <stdio.h>
#include "command.h"
#include "main.h"
#include "sensor.h"

#define UART_SIZE 10

extern uint8_t uartChar;
extern uint8_t uartBuffer[UART_SIZE];
extern uint8_t uartIndex;

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void addToPrint(const char *msg);
void directPrint(const char *msg);
void uartRead(void);
void uartSend(void);


#endif /* INC_UART_H_ */

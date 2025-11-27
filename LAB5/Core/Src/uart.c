/*
 * uart.c
 *
 *  Created on: Nov 27, 2025
 *      Author: ADMIN
 */
#include "uart.h"

uint8_t uartChar = 0;
uint8_t uartBuffer[UART_SIZE];
uint8_t uartIndex = 0;
unsigned char uartFlag = 0;
char uartMessage[100];

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
    if (huart->Instance == USART2) {
        uartBuffer[uartIndex] = uartChar;
        uartFlag = 1;
        HAL_UART_Receive_IT(&huart2, &uartChar, 1);
    }
}

void addToPrint(const char *msg) {
    sprintf(uartMessage, "%s", msg);
}

void directPrint(const char *msg) {
    HAL_UART_Transmit(&huart2, (void *)msg, strlen(msg), 100);
}

void uartRead(void) {
    if (uartFlag == 1) {
        uartFlag = 0;
        SCH_AddTask(commandParser, 0, 0);
    }
}

void uartSend(void) {
    HAL_UART_Transmit(&huart2, (void *)uartMessage, strlen(uartMessage), 100);
}



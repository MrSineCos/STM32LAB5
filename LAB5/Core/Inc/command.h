/*
 * command.h
 *
 *  Created on: Nov 27, 2025
 *      Author: ADMIN
 */

#ifndef INC_COMMAND_H_
#define INC_COMMAND_H_

#include <string.h>
#include "scheduler.h"
#include "uart.h"
#include "led.h"

void commandExecute(void);
void commandParser(void);

#endif /* INC_COMMAND_H_ */

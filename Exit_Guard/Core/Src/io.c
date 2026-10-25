/*
 * io.c
 *
 *  Created on: 25 paź 2026
 *      Author: weronika
 */

#include "io.h"
#include "main.h"
#include "stm32f4xx_hal.h"

void LED_Off(void) { HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET); }

void LED_On(void) { HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET); }

void BUZZ_Off(void) { HAL_GPIO_WritePin(BUZZ_GPIO_Port, BUZZ_Pin, GPIO_PIN_RESET); }
void BUZZ_On(void) { HAL_GPIO_WritePin(BUZZ_GPIO_Port, BUZZ_Pin, GPIO_PIN_SET); }

bool DOOR_Is_Open(void) {
	if (HAL_GPIO_ReadPin(DOOR_GPIO_Port, DOOR_Pin) == 1) return 1;
	return 0;
}

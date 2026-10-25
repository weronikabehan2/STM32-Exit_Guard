/*
 * io.h
 *
 *  Created on: 25 paź 2026
 *      Author: weronika
 */

#ifndef INC_IO_H_
#define INC_IO_H_

#include "stdbool.h"

void LED_Off(void);
void LED_On(void);

void BUZZ_Off(void);
void BUZZ_On(void);

bool DOOR_Is_Open(void);

#endif /* INC_IO_H_ */



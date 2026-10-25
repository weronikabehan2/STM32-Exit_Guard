/*
 * button.h
 *
 *  Created on: 25 paź 2026
 *      Author: weronika
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

typedef enum {
	BTN_NONE,
	BTN_SINGLE,
	BTN_TRIPLE
} BTN_Event;

void BTN_Interrupt(void);
BTN_Event BTN_GetEvent(void);

#endif /* INC_BUTTON_H_ */

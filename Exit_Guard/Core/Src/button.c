/*
 * button.c
 *
 *  Created on: 25 paź 2026
 *      Author: weronika
 */
#include "button.h"
#include "config.h"
#include "main.h"

static volatile uint32_t last_edge_tick = 0;
static volatile uint32_t last_click_tick = 0;
static volatile uint8_t  click_count = 0;

void BTN_Interrupt(void) {
	uint32_t now = HAL_GetTick();

	if (now - last_edge_tick < DEBOUNCE) return;

	last_edge_tick = now;
	last_click_tick = now;
	click_count++;
}

BTN_Event BTN_GetEvent(void) {
	uint32_t now = HAL_GetTick();

	if(click_count == 0 || (now - last_click_tick > BTN_WAIT)) return BTN_NONE;

	uint8_t click = click_count;
	click_count = 0;

	switch(click) {
	case 1: return BTN_SINGLE;
	case 3: return BTN_TRIPLE;
	default: return BTN_NONE;
	}
}

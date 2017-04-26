#include "stm32f4xx.h"
#include "stm32f4xx_hal_conf.h"
#include "stm32f4xx_hal_def.h"
#include "stm32f4xx_hal_gpio.h"

#ifndef __USER_CONTROLS_H
#define __USER_CONTROLS_H


// Sets the debug led at startup
void DebugLedON(void);

// Toggles the debug LED when a button is pressed
void ButtonsLedAck(void);

#endif
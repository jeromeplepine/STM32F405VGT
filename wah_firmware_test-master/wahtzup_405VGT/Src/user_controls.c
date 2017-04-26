
#include "stm32f4xx.h"
#include "stm32f4xx_hal_conf.h"
#include "stm32f4xx_hal_def.h"
#include "stm32f4xx_hal_gpio.h"
#include "user_controls.h"

void DebugLedON(void){

//Debug led PE11
//Buttons:
    //Up: PD4
    //Down: PD5
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);

}

void ButtonsLedAck(void){

//Debug led PE11
//Buttons:
    //Up: PD4
    //Down: PD5
    if( HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_4) ){
    	    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_11);
    }
    else if( HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_5) ){
    	    HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_11);
    }


}
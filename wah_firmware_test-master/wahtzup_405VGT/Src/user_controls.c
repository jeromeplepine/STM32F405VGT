
#include "user_controls.h"


void ButtonsLedAck(void){

//Debug led PE11
//Buttons:
    //Up: PD4
    //Down: PD5
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_11, GPIO_PIN_SET);

}
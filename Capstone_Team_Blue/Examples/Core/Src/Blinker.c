/*
 * Blinker.c
 *
 *  Created on: Mar 8, 2021
 *      Author: lenovo
 */

#include "Blinker.h"

/**
  * @brief  Toggles the specified wih the given delay
  * @param  late: delay in milliseconds
  * @retval None
  */
void toggleblink(uint16_t late){
	  HAL_GPIO_TogglePin(LED_GPIO_Port,LED_Pin);
	  HAL_Delay(late);
}

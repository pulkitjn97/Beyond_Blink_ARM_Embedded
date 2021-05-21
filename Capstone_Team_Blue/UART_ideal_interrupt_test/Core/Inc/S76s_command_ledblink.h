/*
 * S76s_command_ledblink.h
 *
 *  Created on: May 19, 2021
 *      Author: KIIT
 */

#ifndef INC_S76S_COMMAND_LEDBLINK_H_
#define INC_S76S_COMMAND_LEDBLINK_H_

//
#include "stm32f1xx_hal.h"
//#include "stm32f1xx_hal_conf.h"
#include<string.h>

//void LoRa_putChar(USART_TypeDef* USARTx, uint8_t ch);
//void LoRa_putString(USART_TypeDef* USARTx, uint8_t *str);

char* TransmitFormatter(uint8_t);

#endif /* INC_S76S_COMMAND_LEDBLINK_H_ */

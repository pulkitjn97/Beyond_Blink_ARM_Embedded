/*
 * S76s_command_ledblink.c
 *
 *  Created on: May 19, 2021
 *      Author: KIIT
 */

#include "S76s_command_ledblink.h"

//char str1[100]= "rf set_freq ";
//char str1[]= {'r','f',' ','s','e','t','_','f','r','e','q',' '};
//uint8_t *u=(uint8_t *)str1;



char* TransmitFormatter(uint8_t CmndType)
{
//strcat(Tx_SQ, msg);
	switch (CmndType)
	{
		case 1:
		return ("rf set_freq ");

		case 2:
		return ("rf tx ");

		case 3:
		return ("rf set_pwr ")

		default:
		return ("Wrong Command");
	}
}

//void LoRa_putChar(USART_TypeDef* USARTx, uint8_t ch){
//	while(!(USARTx->SR & USART_SR_TXE));
//	USARTx->DR=ch;
//
//}
//void LoRa_putString(USART_TypeDef* USARTx, uint8_t *str){
//	strcat(*u,str);
//	while(*u!=0){
//		LoRa_putChar(USARTx, *u);
//		u++;
//	}
//}

//char* LoRa_TX(char* DATA){
//	strcat(str1,DATA);
//	return str1;
//	for(int i=1;i<=5;i++){
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_SET);
//		HAL_Delay(1000);
//		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, GPIO_PIN_RESET);
//		HAL_Delay(1000);
//	}
//
//}
//
//char* LoRa_tx(char* DATA){
//	char* str1;
//	str1= "rf tx ";
//	strcat(str1,DATA);
//	return str1;
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, GPIO_PIN_SET);
//		HAL_Delay(1000);
//	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, GPIO_PIN_RESET);
//	HAL_Delay(1000);
//
//}

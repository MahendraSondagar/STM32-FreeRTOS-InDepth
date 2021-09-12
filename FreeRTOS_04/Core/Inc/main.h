/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
#define debug_en                1
#define KERNEL_DBG(...)     do {                                            \
                                 if(debug_en==1)                            \
                                 {                                          \
                                	 printf(__VA_ARGS__);                   \
                                	 printf("\r\n");                        \
                                 }                                          \
                            }while(0);

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BSP_USER_BUTTON_Pin GPIO_PIN_0
#define BSP_USER_BUTTON_GPIO_Port GPIOA
#define BSP_USER_BUTTON_EXTI_IRQn EXTI0_IRQn
#define BSP_USER_LED1_Pin GPIO_PIN_2
#define BSP_USER_LED1_GPIO_Port GPIOB
#define DEBUG_TX_Pin GPIO_PIN_5
#define DEBUG_TX_GPIO_Port GPIOD
#define DEBUG_RX_Pin GPIO_PIN_6
#define DEBUG_RX_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */
extern UART_HandleTypeDef huart2;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

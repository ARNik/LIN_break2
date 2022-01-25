/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LIN_RXD1_Pin GPIO_PIN_3
#define LIN_RXD1_GPIO_Port GPIOA
#define LIN_TXT1_Pin GPIO_PIN_4
#define LIN_TXT1_GPIO_Port GPIOA
#define LIN_EN1_Pin GPIO_PIN_5
#define LIN_EN1_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_6
#define LED_GPIO_Port GPIOA
#define OUT_L_Pin GPIO_PIN_15
#define OUT_L_GPIO_Port GPIOB
#define OUT_R_Pin GPIO_PIN_12
#define OUT_R_GPIO_Port GPIOA
#define LIN_TXD2_Pin GPIO_PIN_5
#define LIN_TXD2_GPIO_Port GPIOB
#define LIN_EN2_Pin GPIO_PIN_6
#define LIN_EN2_GPIO_Port GPIOB
#define LIN_RXD2_Pin GPIO_PIN_7
#define LIN_RXD2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

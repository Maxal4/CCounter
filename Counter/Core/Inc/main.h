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
#include "stm32f0xx_hal.h"

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
#define ENCODER_SW_Pin GPIO_PIN_0
#define ENCODER_SW_GPIO_Port GPIOA
#define ENCA_Pin GPIO_PIN_1
#define ENCA_GPIO_Port GPIOA
#define ENCA_EXTI_IRQn EXTI0_1_IRQn
#define ENCB_Pin GPIO_PIN_2
#define ENCB_GPIO_Port GPIOA
#define LED5_Pin GPIO_PIN_3
#define LED5_GPIO_Port GPIOA
#define LED4_Pin GPIO_PIN_4
#define LED4_GPIO_Port GPIOA
#define DIG4_Pin GPIO_PIN_5
#define DIG4_GPIO_Port GPIOA
#define G_Pin GPIO_PIN_6
#define G_GPIO_Port GPIOA
#define C_Pin GPIO_PIN_7
#define C_GPIO_Port GPIOA
#define DP_Pin GPIO_PIN_0
#define DP_GPIO_Port GPIOB
#define D_Pin GPIO_PIN_1
#define D_GPIO_Port GPIOB
#define E_Pin GPIO_PIN_2
#define E_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_10
#define LED3_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_11
#define LED2_GPIO_Port GPIOB
#define B_Pin GPIO_PIN_12
#define B_GPIO_Port GPIOB
#define DIG3_Pin GPIO_PIN_13
#define DIG3_GPIO_Port GPIOB
#define DIG2_Pin GPIO_PIN_14
#define DIG2_GPIO_Port GPIOB
#define F_Pin GPIO_PIN_15
#define F_GPIO_Port GPIOB
#define A_Pin GPIO_PIN_8
#define A_GPIO_Port GPIOA
#define DIG1_Pin GPIO_PIN_9
#define DIG1_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_11
#define LED1_GPIO_Port GPIOA
#define BUT_Pin GPIO_PIN_7
#define BUT_GPIO_Port GPIOF
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

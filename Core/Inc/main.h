/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#define BTN0_Pin GPIO_PIN_0
#define BTN0_GPIO_Port GPIOC
#define BTN1_Pin GPIO_PIN_1
#define BTN1_GPIO_Port GPIOC
#define BTN2_Pin GPIO_PIN_2
#define BTN2_GPIO_Port GPIOC
#define POT1_Pin GPIO_PIN_0
#define POT1_GPIO_Port GPIOA
#define L_STICK_X_Pin GPIO_PIN_1
#define L_STICK_X_GPIO_Port GPIOA
#define L_STICK_Y_Pin GPIO_PIN_2
#define L_STICK_Y_GPIO_Port GPIOA
#define POT2_Pin GPIO_PIN_3
#define POT2_GPIO_Port GPIOA
#define POT3_Pin GPIO_PIN_4
#define POT3_GPIO_Port GPIOA
#define R_STICK_X_Pin GPIO_PIN_5
#define R_STICK_X_GPIO_Port GPIOA
#define R_STICK_Y_Pin GPIO_PIN_6
#define R_STICK_Y_GPIO_Port GPIOA
#define POT4_Pin GPIO_PIN_7
#define POT4_GPIO_Port GPIOA
#define POT5_Pin GPIO_PIN_4
#define POT5_GPIO_Port GPIOC
#define POT6_Pin GPIO_PIN_5
#define POT6_GPIO_Port GPIOC
#define POT7_Pin GPIO_PIN_0
#define POT7_GPIO_Port GPIOB
#define BTN3_Pin GPIO_PIN_1
#define BTN3_GPIO_Port GPIOB
#define BTN4_Pin GPIO_PIN_2
#define BTN4_GPIO_Port GPIOB
#define BTN5_Pin GPIO_PIN_10
#define BTN5_GPIO_Port GPIOB
#define BTN6_Pin GPIO_PIN_11
#define BTN6_GPIO_Port GPIOB
#define BTN7_Pin GPIO_PIN_12
#define BTN7_GPIO_Port GPIOB
#define BTN8_Pin GPIO_PIN_13
#define BTN8_GPIO_Port GPIOB
#define R_STICK_SEL_Pin GPIO_PIN_14
#define R_STICK_SEL_GPIO_Port GPIOB
#define L_STICK_SEL_Pin GPIO_PIN_15
#define L_STICK_SEL_GPIO_Port GPIOB
#define BTN9_Pin GPIO_PIN_6
#define BTN9_GPIO_Port GPIOC
#define BTN10_Pin GPIO_PIN_7
#define BTN10_GPIO_Port GPIOC
#define BTN11_Pin GPIO_PIN_8
#define BTN11_GPIO_Port GPIOC
#define BTN12_Pin GPIO_PIN_9
#define BTN12_GPIO_Port GPIOC
#define BTN13_Pin GPIO_PIN_8
#define BTN13_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_2
#define LED1_GPIO_Port GPIOD
#define LED2_Pin GPIO_PIN_3
#define LED2_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_4
#define LED3_GPIO_Port GPIOB
#define LED4_Pin GPIO_PIN_5
#define LED4_GPIO_Port GPIOB
#define LED5_Pin GPIO_PIN_6
#define LED5_GPIO_Port GPIOB
#define LED6_Pin GPIO_PIN_7
#define LED6_GPIO_Port GPIOB
#define LED7_Pin GPIO_PIN_8
#define LED7_GPIO_Port GPIOB
#define LED8_Pin GPIO_PIN_9
#define LED8_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

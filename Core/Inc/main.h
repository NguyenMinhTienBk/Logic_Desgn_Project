/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI15_10_IRQn
#define LED_GRE_Pin GPIO_PIN_0
#define LED_GRE_GPIO_Port GPIOC
#define DOT_Pin GPIO_PIN_1
#define DOT_GPIO_Port GPIOC
#define EN0_Pin GPIO_PIN_0
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_1
#define EN1_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_4
#define EN2_GPIO_Port GPIOA
#define MODE_Pin GPIO_PIN_5
#define MODE_GPIO_Port GPIOA
#define SET_Pin GPIO_PIN_7
#define SET_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_0
#define EN3_GPIO_Port GPIOB
#define LED_E_Pin GPIO_PIN_10
#define LED_E_GPIO_Port GPIOB
#define DOWN_Pin GPIO_PIN_7
#define DOWN_GPIO_Port GPIOC
#define LED_F_Pin GPIO_PIN_8
#define LED_F_GPIO_Port GPIOA
#define LED_G_Pin GPIO_PIN_9
#define LED_G_GPIO_Port GPIOA
#define LED_A_Pin GPIO_PIN_10
#define LED_A_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define LED_B_Pin GPIO_PIN_3
#define LED_B_GPIO_Port GPIOB
#define LED_D_Pin GPIO_PIN_4
#define LED_D_GPIO_Port GPIOB
#define LED_C_Pin GPIO_PIN_5
#define LED_C_GPIO_Port GPIOB
#define UP_Pin GPIO_PIN_6
#define UP_GPIO_Port GPIOB
#define LED_YEL_Pin GPIO_PIN_8
#define LED_YEL_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_9
#define LED_RED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
void Buzzer_On();
void Buzzer_Off();

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

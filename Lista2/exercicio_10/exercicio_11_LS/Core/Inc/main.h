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
#include "stm32g0xx_hal.h"

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
#define ld_f_Pin GPIO_PIN_11
#define ld_f_GPIO_Port GPIOC
#define ld_b_Pin GPIO_PIN_12
#define ld_b_GPIO_Port GPIOC
#define ld_d_Pin GPIO_PIN_13
#define ld_d_GPIO_Port GPIOC
#define ld_e_Pin GPIO_PIN_2
#define ld_e_GPIO_Port GPIOC
#define ld_c_Pin GPIO_PIN_3
#define ld_c_GPIO_Port GPIOC
#define but_1_Pin GPIO_PIN_7
#define but_1_GPIO_Port GPIOA
#define but_2_Pin GPIO_PIN_0
#define but_2_GPIO_Port GPIOB
#define but_4_Pin GPIO_PIN_9
#define but_4_GPIO_Port GPIOA
#define but_3_Pin GPIO_PIN_7
#define but_3_GPIO_Port GPIOC
#define ld_g_Pin GPIO_PIN_9
#define ld_g_GPIO_Port GPIOC
#define ld_a_Pin GPIO_PIN_10
#define ld_a_GPIO_Port GPIOC
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

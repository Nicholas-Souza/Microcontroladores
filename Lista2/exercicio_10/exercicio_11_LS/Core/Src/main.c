/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

uint8_t b1, b2, b3, b4;

uint16_t numero;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */



/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */


  numero = 12;
  while (1)
  {
	  b1 = HAL_GPIO_ReadPin(but_1_GPIO_Port, but_1_Pin);
	  b2 = HAL_GPIO_ReadPin(but_2_GPIO_Port, but_2_Pin);
	  b3 = HAL_GPIO_ReadPin(but_3_GPIO_Port, but_3_Pin);
	  b4 = HAL_GPIO_ReadPin(but_4_GPIO_Port, but_4_Pin);


	  if(HAL_GPIO_ReadPin(but_1_GPIO_Port, but_1_Pin) == 1){

  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
	  }else {
		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 1);
	  }

	  if(HAL_GPIO_ReadPin(but_2_GPIO_Port, but_2_Pin) == 1){

  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
	  }else {
		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 1);
	  }

	  if(HAL_GPIO_ReadPin(but_3_GPIO_Port, but_3_Pin) == 1){

  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
	  }else {
		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 1);
	  }

	  if(HAL_GPIO_ReadPin(but_4_GPIO_Port, but_4_Pin) == 1){

  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
	  }else {
		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 1);
	  }



//	  numero = b4 + b3*2 + b2*4 + b1*8;


//	  switch (numero){
//
//  	  case 0:
//  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 1);
//
//  		  break;
//
//	  	  case 1:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 1);
//
//	  		  break;
//
//	  	  case 2:
//
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//
//	  		  break;
//
//	  	  case 3:
//
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//
//	  		  break;
//
//	  	  case 4:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//
//	  		  break;
//
//	  	  case 5:
//
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//
//	  		  break;
//
//	  	  case 6:
//
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//
//	  		  break;
//
//	  	  case 7:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 1);
//
//	  		  break;
//
//	  	  case 8:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//
//	  		  break;
//
//	  	  case 9:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//
//	  		  break;
//
//	  	  case 10:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//
//	  		  break;
//
//	  	  case 11:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//
//	  		  break;
//
//	  	  case 12:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 1);
//
//	  		  break;
//
//	  	  case 13:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 1);
//
//	  		  break;
//
//	  	  case 14:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//
//	  		  break;
//
//	  	  case 15:
//	  		  HAL_GPIO_WritePin(ld_a_GPIO_Port, ld_a_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_b_GPIO_Port, ld_b_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_c_GPIO_Port, ld_c_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_d_GPIO_Port, ld_d_Pin, 1);
//	  		  HAL_GPIO_WritePin(ld_e_GPIO_Port, ld_e_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_f_GPIO_Port, ld_f_Pin, 0);
//	  		  HAL_GPIO_WritePin(ld_g_GPIO_Port, ld_g_Pin, 0);
//
//	  		  break;
//
//
//
//
//
//
//	  }


    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSIDiv = RCC_HSI_DIV1;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = RCC_PLLM_DIV1;
  RCC_OscInitStruct.PLL.PLLN = 8;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, ld_f_Pin|ld_b_Pin|ld_d_Pin|ld_e_Pin
                          |ld_c_Pin|ld_g_Pin|ld_a_Pin, GPIO_PIN_SET);

  /*Configure GPIO pins : ld_f_Pin ld_b_Pin ld_d_Pin ld_e_Pin
                           ld_c_Pin ld_g_Pin ld_a_Pin */
  GPIO_InitStruct.Pin = ld_f_Pin|ld_b_Pin|ld_d_Pin|ld_e_Pin
                          |ld_c_Pin|ld_g_Pin|ld_a_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : but_1_Pin but_4_Pin */
  GPIO_InitStruct.Pin = but_1_Pin|but_4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : but_2_Pin */
  GPIO_InitStruct.Pin = but_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(but_2_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : but_3_Pin */
  GPIO_InitStruct.Pin = but_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(but_3_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */


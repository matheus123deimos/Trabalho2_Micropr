/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "STM_MY_LCD16X2.h"
#include "oven.h"
#include <string.h>

void digitalWrite(int pin, char val){


	switch(pin){

		case 0:
				if(val == 'H'){
					HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0, GPIO_PIN_SET);
					break;
				}else{
					HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0, GPIO_PIN_RESET);
					break;
				}


		case 1:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1, GPIO_PIN_RESET);
				break;
			}

		case 2:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2, GPIO_PIN_RESET);
				break;
			}


		case 3:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3, GPIO_PIN_RESET);
				break;
			}
		case 4:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4, GPIO_PIN_RESET);
				break;
			}


		case 5:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5, GPIO_PIN_RESET);
				break;
			}



		case 6:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6, GPIO_PIN_RESET);
				break;
			}

		case 7:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7, GPIO_PIN_RESET);
				break;
			}


		case 8:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8, GPIO_PIN_RESET);
				break;
			}


		case 9:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9, GPIO_PIN_RESET);
				break;
			}


		case 10:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10, GPIO_PIN_RESET);
				break;
			}



		case 11:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11, GPIO_PIN_RESET);
				break;
			}


		case 12:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12, GPIO_PIN_RESET);
				break;
			}


		case 13:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13, GPIO_PIN_RESET);
				break;
			}


		case 14:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_14, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_14, GPIO_PIN_RESET);
				break;
			}


		case 15:
			if(val == 'H'){
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_15, GPIO_PIN_SET);
				break;
			}else{
				HAL_GPIO_WritePin(GPIOA,GPIO_PIN_15, GPIO_PIN_RESET);
				break;
			}


	}


}


int digitalRead(int pin){


	switch(pin){

		case 0:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0);

		case 1:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1);

		case 2:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_2);

		case 3:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_3);

		case 4:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_4);

		case 5:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_5);

		case 6:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_6);

		case 7:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_7);

		case 8:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_8);

		case 9:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_9);

		case 10:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_10);

		case 11:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_11);

		case 12:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_12);

		case 13:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_13);

		case 14:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_14);

		case 15:
			return (int) HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_15);

	}

	return (int) GPIO_PIN_RESET;
}

int col_event(int start, int end){

	for(int j=start;j<end+1;j++){
		if(digitalRead(j)==0){
			return j;
		}
	} return -1;
}

char display_mod_pg1(int i,int j,int n_pos){

	HAL_Delay(200);

	if(j != -1 && n_pos<11){
		if(i==6 && j==10){return '7';}
		if(i==6 && j==11){return '8';}
		if(i==6 && j==12){return '9';}
		if(i==6 && j==13){return '.';}
		if(i==7 && j==10){return '4';}
		if(i==7 && j==11){return '5';}
		if(i==7 && j==12){return '6';}
		if(i==8 && j==10){return '1';}
		if(i==8 && j==11){return '2';}
		if(i==8 && j==12){return '3';}
		if(i==9 && j==11){return '0';}

	}

	else{
		if(j==12 && i == 9){return 'p';}
	}

	return 'n';

}

char display_mod_pg2(int i,int j){

	HAL_Delay(200);

	if(j != -1){
		if(i==9 && j==10){return 'b';}
	}
	return 'c';

}



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
ADC_HandleTypeDef* hadc;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */
HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef*);
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
  HAL_ADC_Init(hadc);
  /* USER CODE BEGIN 2 */
  LCD1602_Begin8BIT(GPIOA, GPIO_PIN_14, GPIO_PIN_1, GPIOA, GPIO_PIN_2, GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5, GPIOB,GPIO_PIN_0, GPIO_PIN_1,GPIO_PIN_2, GPIO_PIN_3);
  char temp[] = "Temp:              ";
  LCD1602_print(temp);
  int page = 1;
  int n_pos = 6;
  float temp_check;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */

	// Sempre eu irei trabalhar com temperaturas que usam 5 valores, 2 números antes do ponto
	// E 2 números depois do ponto, e claro o ponto


	if(page == 1){

		for(int i=6;i<10;i++){

			digitalWrite(6,'H');
			digitalWrite(7,'H');
			digitalWrite(8,'H');
			digitalWrite(9,'H');
			digitalWrite(i,'L');

			char result = display_mod_pg1(i,col_event(10,13),n_pos);

			if(result == 'p'){

				char temp_e[] = "Te_Escol: ";
				char number[] = {temp[n_pos-5],temp[n_pos-4],temp[n_pos-3],temp[n_pos-2],temp[n_pos-1]};
				strcat(temp_e,number);
				temp_check = atof(number);
				LCD1602_clear();
				LCD1602_print(temp_e);
				page = 2;
				continue;

			}else{
				if(result == 'n'){

					continue;

				}else{

					LCD1602_clear();
					temp[n_pos] = result;
					n_pos = n_pos + 1;
					LCD1602_print(temp);
				}
			}



		}

	}else{
		if(page==2){
			// Não consegui fazer pra voltar pra pagina 1 de forma correta
			TempCheck(temp_check,hadc);
		}

	}


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

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
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
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4
                          |GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8
                          |GPIO_PIN_9|GPIO_PIN_14|GPIO_PIN_15, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, GPIO_PIN_RESET);

  /*Configure GPIO pin : PA0 */
  GPIO_InitStruct.Pin = GPIO_PIN_0;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PA1 PA2 PA3 PA4
                           PA5 PA6 PA7 PA8
                           PA9 PA14 PA15 */
  GPIO_InitStruct.Pin = GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4
                          |GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8
                          |GPIO_PIN_9|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB0 PB1 PB2 PB3 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PA10 PA11 PA12 PA13 */
  GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

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

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

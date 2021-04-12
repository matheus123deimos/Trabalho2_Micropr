/*
 * oven.h
 *
 */

#ifndef INC_OVEN_H_
#define INC_OVEN_H_

void TempCheck(int Temp, ADC_HandleTypeDef* hadc1)
{
	int x;
	int y;
	HAL_ADC_Start(hadc1);
	HAL_Delay(100);
	x = HAL_ADC_GetValue(hadc1);
	y = 4095*Temp/40;
	if (x<y)
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15,0);
	else
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15,1);
}

#endif /* INC_OVEN_H_ */

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
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

#define EMG_ADC 0x00000003     //adcͨ�����ã�ͨ�����ƼĴ���ת��sEMG��power voltage֮���ͨ��
#define PWR_ADC 0x00000200			//

#define ADC_TIM_PERIOD 199			//����adc��Ӧ��timer�������,72mhz/72/(ADC_TIM_PERIOD+1)
#define LED_TIM_PERIOD 999				//����led��Ӧtimerʱ��
#define MOTOR_A_TIM_PERIOD 999		//���õ��pwmƵ��
#define KEY_TIM_PERIOD 1999				//���ð���ʱ��
	
#define ADC_LEN 1000							//����adc ���ȣ�ADC_LEN/channel=����������72m/(ADC_TIM_PERIOD+1)/ADC_LEN=1s��������
#define S_CHANNEL__NUM 2U					//sEMGͨ������
#define CHA 0U										//����ͨ������
#define CHB 1U
#define CH_ALL 0xFF								
#define CH_DIS 0xFF 
#define SUBDIVIDE 0xFF						//adc value�ֱ���
#define S_VALUE_CENTERLINE_CHA 30	//���ò�ͬͨ��sEMGĬ�������߻�׼�����ܼ���Ӧ����SUBDIVIDE��ʽ�����������
#define S_VALUE_CENTERLINE_CHB 10
#define S_VALUE_TOP_CHA 200					//����sEMG��ֵ����߲�����SUBDIVIDE
#define S_VALUE_TOP_CHB 200
#define SET_S_VALUE_CENTERLINE_CHA_MIN 5 //����״̬�¶�Ӧͨ����ȡ���ܼ�����
#define SET_S_VALUE_CENTERLINE_CHB_MIN 5	//
#define SET_S_VALUE_CENTERLINE_CHA_MAX 80 //����״̬�¶�Ӧͨ����ȡ���ܼ�����
#define SET_S_VALUE_CENTERLINE_CHB_MAX 80
#define COMPARE_TH 10U										//sEMGͨ��֮��ʹ�ܲ�������ֵ�����
#define S_VALUE_COUNT_TH 0U								//��������������������Ե����������������
#define S_VALUE_SET_CYCLE 8U							//����״̬�µĲ���ѭ������
#define S_VALUE_SET_TH	2U;								//����״̬�µ��ܼ�ƫ����

#define SPEED_SUBDIVIDE 100									//���pwmռ�ձȷֱ���
#define MOTOR_A_DIR_A_EN MOTOR_A_TIM.Instance->CCER=0x10 	//����pwmͨ��
#define MOTOR_A_DIR_B_EN MOTOR_A_TIM.Instance->CCER=0x01

//#define MOTOR_A_DIR_A_EN MOTOR_A_TIM.Instance->CCER=0x00  	//�滻�������ã��رյ��ͨ�����ڷ������
//#define MOTOR_A_DIR_B_EN MOTOR_A_TIM.Instance->CCER=0x00
#define MOTOR_A_DIS MOTOR_A_TIM.Instance->CCER=0U
#define MOTOR_A_CCRA MOTOR_A_TIM.Instance->CCR1		//����pwmռ�ձ�
#define MOTOR_A_CCRB MOTOR_A_TIM.Instance->CCR2  //TIM3->CCR1 TIM3->CCR2

#define LED_SUBDIVIDE 100										//����led pwm�ֱ���
#define LED_kEEP_ON 100
#define LED_CENTERLINE 20

#define KEY_SHORT 16						
#define KEY_LONG 750
#define KEY_TIME_OUT 2000
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
#define MOTOR_A_TIM htim3
#define ADC_TIM htim1
#define LED_TIM htim14
#define KEY_TIM htim16
#define LED_CHA_Pin GPIO_PIN_2
#define LED_CHA_GPIO_Port GPIOA
#define KEY_B_Pin GPIO_PIN_3
#define KEY_B_GPIO_Port GPIOA
#define KEY_B_EXTI_IRQn EXTI2_3_IRQn
#define LED_CHB_Pin GPIO_PIN_4
#define LED_CHB_GPIO_Port GPIOA
#define KEY_A_Pin GPIO_PIN_5
#define KEY_A_GPIO_Port GPIOA
#define KEY_A_EXTI_IRQn EXTI4_15_IRQn
#define null1_Pin GPIO_PIN_9
#define null1_GPIO_Port GPIOA
#define null0_Pin GPIO_PIN_10
#define null0_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

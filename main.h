/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
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
extern uint16_t SMOKE_UP;
extern uint16_t CH4_UP  ;
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */

extern uint8_t temp[6],humi;
extern uint8_t cnt_light;
extern uint8_t show_flag;
extern uint8_t over_flag; 

extern uint16_t SMOKE_UP; //ÑÌÎíÅ¨¶ÈãÐÖµ
extern uint16_t SUN_UP  ; //¹âÕÕãÐÖµ
extern uint16_t T_UP ;    //ÎÂ¶ÈãÐÖµ
extern uint16_t H_UP ;    //Êª¶ÈãÐÖµ


extern char led_sta[6];    //µÆ×´Ì¬
extern char alarm_sta[6];  //±¨¾¯Æ÷×´Ì¬
extern char fan_sta[6];    //·çÉÈ×´Ì¬
extern char humidev_sta[6]; //¼ÓÊªÆ÷×´Ì¬

extern uint8_t Modeflag; 

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

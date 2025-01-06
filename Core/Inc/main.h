/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define SPI2_MISO_OLED_Pin GPIO_PIN_2
#define SPI2_MISO_OLED_GPIO_Port GPIOC
#define SPI2_MOSI_OLED_Pin GPIO_PIN_3
#define SPI2_MOSI_OLED_GPIO_Port GPIOC
#define GPIO_DC_OLED_Pin GPIO_PIN_2
#define GPIO_DC_OLED_GPIO_Port GPIOA
#define GPIO_RES_OLED_Pin GPIO_PIN_3
#define GPIO_RES_OLED_GPIO_Port GPIOA
#define SPI1_SCK_IMU_Pin GPIO_PIN_5
#define SPI1_SCK_IMU_GPIO_Port GPIOA
#define SPI1_MISO_IMU_Pin GPIO_PIN_6
#define SPI1_MISO_IMU_GPIO_Port GPIOA
#define SPI1_MOSI_IMUx_Pin GPIO_PIN_7
#define SPI1_MOSI_IMUx_GPIO_Port GPIOA
#define I2C2_SCL_LIGHT_Pin GPIO_PIN_10
#define I2C2_SCL_LIGHT_GPIO_Port GPIOB
#define SPI2_SCK_OLED_Pin GPIO_PIN_13
#define SPI2_SCK_OLED_GPIO_Port GPIOB
#define GPIO_CS_IMU_Pin GPIO_PIN_7
#define GPIO_CS_IMU_GPIO_Port GPIOC
#define I2C2_SDA_LIGHT_Pin GPIO_PIN_3
#define I2C2_SDA_LIGHT_GPIO_Port GPIOB
#define I2C1_SCL_TEMPHUM_Pin GPIO_PIN_6
#define I2C1_SCL_TEMPHUM_GPIO_Port GPIOB
#define I2C1_SDA_TEMPHUM_Pin GPIO_PIN_7
#define I2C1_SDA_TEMPHUM_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

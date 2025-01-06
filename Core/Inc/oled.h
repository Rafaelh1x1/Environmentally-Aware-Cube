#ifndef OLED_H
#define OLED_H

#include "stm32f4xx_hal.h"
#include "spi.h"
#include "gpio.h"

#define OLED_WIDTH 128
#define OLED_HEIGHT 64

// OLED Commands
#define OLED_DISPLAY_OFF       0xAE
#define OLED_DISPLAY_ON        0xAF
#define OLED_SET_CONTRAST      0x81
#define OLED_NORMAL_DISPLAY    0xA6
#define OLED_INVERSE_DISPLAY   0xA7
#define OLED_SET_COLUMN_ADDR   0x21
#define OLED_SET_PAGE_ADDR     0x22

// GPIO Pins (Updated to match pinout)
#define OLED_CS_PIN   GPIO_PIN_12
#define OLED_CS_PORT  GPIOB
#define OLED_DC_PIN   GPIO_PIN_2
#define OLED_DC_PORT  GPIOA
#define OLED_RES_PIN  GPIO_PIN_0
#define OLED_RES_PORT GPIOA

void OLED_Init(void);
void OLED_Clear(void);
void OLED_TestPattern(void);

#endif /* OLED_H */

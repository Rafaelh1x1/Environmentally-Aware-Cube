#include "oled.h"

// Write a command to the OLED
void OLED_WriteCommand(uint8_t cmd) {
    HAL_GPIO_WritePin(OLED_DC_PORT, OLED_DC_PIN, GPIO_PIN_RESET);  // Command mode
    HAL_GPIO_WritePin(OLED_CS_PORT, OLED_CS_PIN, GPIO_PIN_RESET);  // CS low
    HAL_SPI_Transmit(&hspi2, &cmd, 1, HAL_MAX_DELAY);
    HAL_GPIO_WritePin(OLED_CS_PORT, OLED_CS_PIN, GPIO_PIN_SET);    // CS high
}

// Write data to the OLED
void OLED_WriteData(uint8_t *data, uint16_t size) {
    HAL_GPIO_WritePin(OLED_DC_PORT, OLED_DC_PIN, GPIO_PIN_SET);    // Data mode
    HAL_GPIO_WritePin(OLED_CS_PORT, OLED_CS_PIN, GPIO_PIN_RESET);  // CS low
    HAL_SPI_Transmit(&hspi2, data, size, HAL_MAX_DELAY);
    HAL_GPIO_WritePin(OLED_CS_PORT, OLED_CS_PIN, GPIO_PIN_SET);    // CS high
}

// Reset the OLED
void OLED_Reset(void) {
    HAL_GPIO_WritePin(OLED_RES_PORT, OLED_RES_PIN, GPIO_PIN_RESET);  // Reset
    HAL_Delay(10);                                                 // Wait 10 ms
    HAL_GPIO_WritePin(OLED_RES_PORT, OLED_RES_PIN, GPIO_PIN_SET);    // Release reset
    HAL_Delay(10);                                                 // Wait 10 ms
}

// Initialize the OLED
void OLED_Init(void) {
    OLED_Reset();

    OLED_WriteCommand(OLED_DISPLAY_OFF);           // Turn off display
    OLED_WriteCommand(OLED_SET_CONTRAST);          // Set contrast
    OLED_WriteCommand(0x7F);                       // Medium contrast
    OLED_WriteCommand(OLED_NORMAL_DISPLAY);        // Normal display mode
    OLED_WriteCommand(OLED_DISPLAY_ON);            // Turn on display
}

// Clear the OLED screen
void OLED_Clear(void) {
    uint8_t buffer[OLED_WIDTH] = {0};
    for (uint8_t page = 0; page < 8; page++) {
        OLED_WriteCommand(0xB0 + page);  // Set page address
        OLED_WriteCommand(0x00);         // Set lower column address
        OLED_WriteCommand(0x10);         // Set higher column address
        OLED_WriteData(buffer, OLED_WIDTH);
    }
}

// Test pattern for the OLED
void OLED_TestPattern(void) {
    uint8_t buffer[OLED_WIDTH];
    for (uint8_t i = 0; i < OLED_WIDTH; i++) {
        buffer[i] = (i % 2 == 0) ? 0xFF : 0x00;  // Alternate pixels
    }

    for (uint8_t page = 0; page < 8; page++) {
        OLED_WriteCommand(0xB0 + page);  // Set page address
        OLED_WriteCommand(0x00);         // Set lower column address
        OLED_WriteCommand(0x10);         // Set higher column address
        OLED_WriteData(buffer, OLED_WIDTH);
    }
}

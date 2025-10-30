//
// Created by Gio Choi on 25. 10. 20.
//

#include "Pin.h"

// Constants
const Pin spi1RegisterSelectPin = (Pin){.port = GPIOB, .pin = GPIO_PIN_4, .comment = "SPI1 RegisterSelect"};
const Pin spi1ResetPin          = (Pin){.port = GPIOB, .pin = GPIO_PIN_3, .comment = "SPI1 RESET"};

const Pin spi2RegisterSelectPin = (Pin){.port = GPIOC, .pin = GPIO_PIN_2, .comment = "SPI2 RegisterSelect"};
const Pin spi2ResetPin          = (Pin){.port = GPIOB, .pin = GPIO_PIN_9, .comment = "SPI2 RESET"};

const Pin spi3RegisterSelectPin = (Pin){.port = GPIOC, .pin = GPIO_PIN_11, .comment = "SPI3 RegisterSelect"};
const Pin spi3ResetPin          = (Pin){.port = GPIOA, .pin = GPIO_PIN_15, .comment = "SPI3 RESET"};

const Pin userButtonPin = (Pin){.port = GPIOC, .pin = GPIO_PIN_13, .comment = "DEBUG NUCLEO BOARD SWITCH"};
const Pin led1Pin       = (Pin){.port = GPIOB, .pin = GPIO_PIN_0, .comment = "DEBUG NUCLEO BOARD LED1"};
const Pin led2Pin       = (Pin){.port = GPIOB, .pin = GPIO_PIN_7, .comment = "DEBUG NUCLEO BOARD LED2"};
const Pin led3Pin       = (Pin){.port = GPIOB, .pin = GPIO_PIN_14, .comment = "DEBUG NUCLEO BOARD LED3"};

const Pin moduleDetectPin1 = (Pin){.port = GPIOD, .pin = GPIO_PIN_0, .comment = "Module Detect Pin 1"};
const Pin moduleDetectPin2 = (Pin){.port = GPIOD, .pin = GPIO_PIN_1, .comment = "Module Detect Pin 2"};
const Pin moduleDetectPin3 = (Pin){.port = GPIOD, .pin = GPIO_PIN_2, .comment = "Module Detect Pin 3"};
const Pin moduleDetectPin4 = (Pin){.port = GPIOD, .pin = GPIO_PIN_3, .comment = "Module Detect Pin 4"};
const Pin moduleDetectPin5 = (Pin){.port = GPIOD, .pin = GPIO_PIN_4, .comment = "Module Detect Pin 5"};
const Pin moduleDetectPin6 = (Pin){.port = GPIOD, .pin = GPIO_PIN_5, .comment = "Module Detect Pin 6"};

const Pin row0  = (Pin){.port = GPIOE, .pin = GPIO_PIN_0, .comment = "Row 0"};
const Pin row1  = (Pin){.port = GPIOE, .pin = GPIO_PIN_1, .comment = "Row 1"};
const Pin row2  = (Pin){.port = GPIOE, .pin = GPIO_PIN_2, .comment = "Row 2"};
const Pin row3  = (Pin){.port = GPIOE, .pin = GPIO_PIN_3, .comment = "Row 3"};
const Pin row4  = (Pin){.port = GPIOE, .pin = GPIO_PIN_4, .comment = "Row 4"};
const Pin row5  = (Pin){.port = GPIOE, .pin = GPIO_PIN_5, .comment = "Row 5"};
const Pin row6  = (Pin){.port = GPIOE, .pin = GPIO_PIN_6, .comment = "Row 6"};
const Pin row7  = (Pin){.port = GPIOE, .pin = GPIO_PIN_7, .comment = "Row 7"};
const Pin row8  = (Pin){.port = GPIOE, .pin = GPIO_PIN_8, .comment = "Row 8"};
const Pin row9  = (Pin){.port = GPIOE, .pin = GPIO_PIN_9, .comment = "Row 9"};
const Pin row10 = (Pin){.port = GPIOE, .pin = GPIO_PIN_10, .comment = "Row 10"};
const Pin row11 = (Pin){.port = GPIOE, .pin = GPIO_PIN_11, .comment = "Row 11"};
const Pin row12 = (Pin){.port = GPIOE, .pin = GPIO_PIN_12, .comment = "Row 12"};
const Pin row13 = (Pin){.port = GPIOE, .pin = GPIO_PIN_13, .comment = "Row 13"};
const Pin row14 = (Pin){.port = GPIOE, .pin = GPIO_PIN_14, .comment = "Row 14"};
const Pin row15 = (Pin){.port = GPIOE, .pin = GPIO_PIN_15, .comment = "Row 15"};

const Pin rows[] = {
    row0, row1, row2, row3, row4, row5, row6, row7,
    row8, row9, row10, row11, row12, row13, row14, row15
};

const Pin col0  = (Pin){.port = GPIOF, .pin = GPIO_PIN_0, .comment = "Col 0"};
const Pin col1  = (Pin){.port = GPIOF, .pin = GPIO_PIN_1, .comment = "Col 1"};
const Pin col2  = (Pin){.port = GPIOF, .pin = GPIO_PIN_2, .comment = "Col 2"};
const Pin col3  = (Pin){.port = GPIOF, .pin = GPIO_PIN_3, .comment = "Col 3"};
const Pin col4  = (Pin){.port = GPIOF, .pin = GPIO_PIN_4, .comment = "Col 4"};
const Pin col5  = (Pin){.port = GPIOF, .pin = GPIO_PIN_5, .comment = "Col 5"};
const Pin col6  = (Pin){.port = GPIOF, .pin = GPIO_PIN_6, .comment = "Col 6"};
const Pin col7  = (Pin){.port = GPIOF, .pin = GPIO_PIN_7, .comment = "Col 7"};
const Pin col8  = (Pin){.port = GPIOF, .pin = GPIO_PIN_8, .comment = "Col 8"};
const Pin col9  = (Pin){.port = GPIOF, .pin = GPIO_PIN_9, .comment = "Col 9"};
const Pin col10 = (Pin){.port = GPIOF, .pin = GPIO_PIN_10, .comment = "Col 10"};
const Pin col11 = (Pin){.port = GPIOF, .pin = GPIO_PIN_11, .comment = "Col 11"};
const Pin col12 = (Pin){.port = GPIOF, .pin = GPIO_PIN_12, .comment = "Col 12"};
const Pin col13 = (Pin){.port = GPIOF, .pin = GPIO_PIN_13, .comment = "Col 13"};
const Pin col14 = (Pin){.port = GPIOF, .pin = GPIO_PIN_14, .comment = "Col 14"};
const Pin col15 = (Pin){.port = GPIOF, .pin = GPIO_PIN_15, .comment = "Col 15"};

const Pin col16 = (Pin){.port = GPIOG, .pin = GPIO_PIN_0, .comment = "Col 16"};
const Pin col17 = (Pin){.port = GPIOG, .pin = GPIO_PIN_1, .comment = "Col 17"};
const Pin col18 = (Pin){.port = GPIOG, .pin = GPIO_PIN_2, .comment = "Col 18"};
const Pin col19 = (Pin){.port = GPIOG, .pin = GPIO_PIN_3, .comment = "Col 19"};
const Pin col20 = (Pin){.port = GPIOG, .pin = GPIO_PIN_4, .comment = "Col 20"};
const Pin col21 = (Pin){.port = GPIOG, .pin = GPIO_PIN_5, .comment = "Col 21"};
const Pin col22 = (Pin){.port = GPIOG, .pin = GPIO_PIN_8, .comment = "Col 22"};
const Pin col23 = (Pin){.port = GPIOG, .pin = GPIO_PIN_9, .comment = "Col 23"};
const Pin col24 = (Pin){.port = GPIOG, .pin = GPIO_PIN_10, .comment = "Col 24"};
const Pin col25 = (Pin){.port = GPIOG, .pin = GPIO_PIN_12, .comment = "Col 25"};
const Pin col26 = (Pin){.port = GPIOG, .pin = GPIO_PIN_14, .comment = "Col 26"};

const Pin cols[] = {
    col0, col1, col2, col3, col4, col5, col6, col7,
    col8, col9, col10, col11, col12, col13, col14, col15,
    col16, col17, col18, col19, col20, col21, col22, col23,
    col24, col25, col26
};

const LCDGroup lcd1Pin = (LCDGroup){.registerSelectPin = &spi1RegisterSelectPin, .resetPin = &spi1ResetPin};
const LCDGroup lcd2Pin = (LCDGroup){.registerSelectPin = &spi2RegisterSelectPin, .resetPin = &spi2ResetPin};
const LCDGroup lcd3Pin = (LCDGroup){.registerSelectPin = &spi3RegisterSelectPin, .resetPin = &spi3ResetPin};

void pinInit(void) {}

void pinWrite(const Pin pin, const GPIO_PinState value) {
    HAL_GPIO_WritePin(pin.port, pin.pin, value);
}

void pinsWrite(const Pin* pins, const uint8_t arraySize, const GPIO_PinState value) {
    for (uint8_t pinIndex = 0; pinIndex < arraySize; pinIndex++) {
        pinWrite(pins[pinIndex], value);
    }
}

void pinToggle(const Pin pin) {
    HAL_GPIO_TogglePin(pin.port, pin.pin);
}

void pinsToggle(const Pin* pins, const uint8_t arraySize) {
    for (uint8_t pinIndex = 0; pinIndex < arraySize; pinIndex++) {
        pinToggle(pins[pinIndex]);
    }
}

GPIO_PinState pinRead(const Pin pin) {
    return HAL_GPIO_ReadPin(pin.port, pin.pin);
}

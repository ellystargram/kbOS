//
// Created by 6gioc on 25. 10. 20.
//
#pragma once

#ifndef KBOS_PIN_H
#define KBOS_PIN_H

#include "stm32f4xx_hal.h"


// Pin Control
typedef struct {
    GPIO_TypeDef *port;
    uint16_t pin;
    const char *comment;
} Pin;

extern const Pin spi1RegisterSelectPin;
extern const Pin spi1ResetPin;
extern const Pin spi2RegisterSelectPin;
extern const Pin spi2ResetPin;
extern const Pin spi3RegisterSelectPin;
extern const Pin spi3ResetPin;

extern const Pin userButtonPin;
extern const Pin led1Pin;
extern const Pin led2Pin;
extern const Pin led3Pin;

extern const Pin moduleDetectPin1;
extern const Pin moduleDetectPin2;
extern const Pin moduleDetectPin3;
extern const Pin moduleDetectPin4;
extern const Pin moduleDetectPin5;
extern const Pin moduleDetectPin6;

extern const Pin row1;
extern const Pin row2;
extern const Pin row3;
extern const Pin row4;
extern const Pin row5;
extern const Pin row6;
extern const Pin row7;
extern const Pin row8;
extern const Pin row9;
extern const Pin row10;
extern const Pin row11;
extern const Pin row12;
extern const Pin row13;
extern const Pin row14;
extern const Pin row15;
extern const Pin row16;

extern const Pin col1;
extern const Pin col2;
extern const Pin col3;
extern const Pin col4;
extern const Pin col5;
extern const Pin col6;
extern const Pin col7;
extern const Pin col8;
extern const Pin col9;
extern const Pin col10;
extern const Pin col11;
extern const Pin col12;
extern const Pin col13;
extern const Pin col14;
extern const Pin col15;
extern const Pin col16;

extern const Pin col17;
extern const Pin col18;
extern const Pin col19;
extern const Pin col20;
extern const Pin col21;
extern const Pin col22;
extern const Pin col23;
extern const Pin col24;
extern const Pin col25;
extern const Pin col26;
extern const Pin col27;


// LCD Control
typedef struct {
    const Pin *registerSelectPin;
    const Pin *resetPin;
} LCDGroup;

extern const LCDGroup lcd1Pin;
extern const LCDGroup lcd2Pin;
extern const LCDGroup lcd3Pin;

// Function Prototypes
extern void pinInit(void);

extern void pinWrite(Pin pin, GPIO_PinState value);

extern void pinsWrite(const Pin *pins, uint8_t arraySize, GPIO_PinState value);

extern void pinToggle(Pin pin);

extern void pinsToggle(const Pin *pins, uint8_t arraySize);

extern GPIO_PinState pinRead(Pin pin);

#endif //KBOS_PIN_H

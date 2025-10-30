//
// Created by Gio Choi on 25. 10. 20.
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

extern const Pin rows[];

extern const Pin cols[];


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

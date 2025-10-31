//
// Created by Gio Choi on 25. 10. 20.
//
#pragma once

#ifndef KBOS_PIN_H
#define KBOS_PIN_H

#include "stm32f4xx_hal.h"


// Pin Control
typedef struct {
    GPIO_TypeDef* port;
    uint16_t pin;
    const char* comment;
} Pin;

extern const Pin userButtonPin;
extern const Pin ledPins[];

extern const Pin moduleDetectPins[];

extern const Pin rows[];

extern const Pin cols[];


// LCD Control
typedef struct {
    const Pin* registerSelectPin;
    const Pin* resetPin;
} LCDGroup;

extern const LCDGroup lcdPins[];

// Function Prototypes
extern void pinInit(void);

extern void pinWrite(Pin pin, GPIO_PinState value);

extern void pinsWrite(const Pin* pins, uint8_t arraySize, GPIO_PinState value);

extern void pinToggle(Pin pin);

extern void pinsToggle(const Pin* pins, uint8_t arraySize);

extern GPIO_PinState pinRead(Pin pin);

#endif //KBOS_PIN_H

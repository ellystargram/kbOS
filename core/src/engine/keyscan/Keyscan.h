//
// Created by 6gioc on 25. 10. 20.
//
#pragma once

#ifndef KBOS_KEYSCAN_H
#define KBOS_KEYSCAN_H

#define ENABLE_NUCLEO_BUTTON
#define ENABLE_KEYBOARD

#define KEYBOARD_60P_COLS           14
#define KEYBOARD_60P_FUNCTION_COLS  14
#define KEYBOARD_TKL_COLS           17
#define KEYBOARD_TKL_FUNCTION_COLS  17
#define KEYBOARD_FULL_COLS          21
#define KEYBOARD_FULL_FUNCTION_COLS 21

#define KEYBOARD_60P_ROWS           5
#define KEYBOARD_60P_FUNCTION_ROWS  6
#define KEYBOARD_TKL_ROWS           5
#define KEYBOARD_TKL_FUNCTION_ROWS  6
#define KEYBOARD_FULL_ROWS          5
#define KEYBOARD_FULL_FUNCTION_ROWS 6

#include "../src/engine/pin/Pin.h"
#include "../src/engine/keyboard/KeyboardReporter.h"
#include "../src/layout/qwerty/qwerty.h"
#include "cmsis_os.h"

// Thread Manager
extern osThreadId_t keyscanTaskHandle;
extern const osThreadAttr_t keyscanTaskAttributes;

typedef struct {
    const uint8_t biosCode;
    const char asciiCode;
    const Pin *colPin;
    const Pin *rowPin;
} KeySwitch;

extern const KeySwitch keySwitchNull;

// Function Prototypes
extern void keyscanInit(void);

extern void keyscanTask(void *argument);

#endif //KBOS_KEYSCAN_H

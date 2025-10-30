//
// Created by Gio Choi on 25. 10. 20.
//
#pragma once

#ifndef KBOS_KEYSCAN_H
#define KBOS_KEYSCAN_H

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

#define KEYSCAN_ROW_TURN_OFF_DELAY_MS 5

#include <stdbool.h>

#include "../src/engine/pin/Pin.h"
#include "../src/engine/keyboard/KeyboardReporter.h"
#include "../src/layout/qwerty/qwerty.h"
#include "cmsis_os.h"

// Thread Manager
extern osThreadId_t keyscanTaskHandle;
extern const osThreadAttr_t keyscanTaskAttributes;

enum KeyboardLayoutType {
    KEYBOARD_60P,
    KEYBOARD_60P_FUNCTION,
    KEYBOARD_TKL,
    KEYBOARD_TKL_FUNCTION,
    KEYBOARD_FULL,
    KEYBOARD_FULL_FUNCTION,
    KEYBOARD_LAYOUT_TYPE_COUNT
};

extern uint8_t keyboardLayout;

typedef struct {
    const uint8_t biosCode;
    const char asciiCode;
    const uint8_t keyBoardSpecial;
} KeyType;

extern const KeyType keyA;
extern const KeyType keyB;
extern const KeyType keyC;
extern const KeyType keyD;
extern const KeyType keyE;
extern const KeyType keyF;
extern const KeyType keyG;
extern const KeyType keyH;
extern const KeyType keyI;
extern const KeyType keyJ;
extern const KeyType keyK;
extern const KeyType keyL;
extern const KeyType keyM;
extern const KeyType keyN;
extern const KeyType keyO;
extern const KeyType keyP;
extern const KeyType keyQ;
extern const KeyType keyR;
extern const KeyType keyS;
extern const KeyType keyT;
extern const KeyType keyU;
extern const KeyType keyV;
extern const KeyType keyW;
extern const KeyType keyX;
extern const KeyType keyY;
extern const KeyType keyZ;

extern const KeyType key1;
extern const KeyType key2;
extern const KeyType key3;
extern const KeyType key4;
extern const KeyType key5;
extern const KeyType key6;
extern const KeyType key7;
extern const KeyType key8;
extern const KeyType key9;
extern const KeyType key0;

extern const KeyType keyGraveTilde;
extern const KeyType keyMinus;
extern const KeyType keyEqual;
extern const KeyType keySquareBracketOpen;
extern const KeyType keySquareBracketClose;
extern const KeyType keyBackSlash;
extern const KeyType keySemiColon;
extern const KeyType keyQuote;
extern const KeyType keyComma;
extern const KeyType keyPeriod;
extern const KeyType keySlash;

extern const KeyType keyF1;
extern const KeyType keyF2;
extern const KeyType keyF3;
extern const KeyType keyF4;
extern const KeyType keyF5;
extern const KeyType keyF6;
extern const KeyType keyF7;
extern const KeyType keyF8;
extern const KeyType keyF9;
extern const KeyType keyF10;
extern const KeyType keyF11;
extern const KeyType keyF12;

extern const KeyType keyLCtrl;
extern const KeyType keyLShift;
extern const KeyType keyLAlt;
extern const KeyType keyLGui;
extern const KeyType keyRCtrl;
extern const KeyType keyRShift;
extern const KeyType keyRAlt;
extern const KeyType keyRGui;
extern const KeyType keyMenu;

extern const KeyType keySpace;
extern const KeyType keyDelete;
extern const KeyType keyCapsLock;
extern const KeyType keyReturn;
extern const KeyType keyTab;
extern const KeyType keyEscape;
extern const KeyType keyDeleteForward;
extern const KeyType keyInsert;
extern const KeyType keyHome;
extern const KeyType keyEnd;
extern const KeyType keyPageUp;
extern const KeyType keyPageDown;

extern const KeyType keyLeftArrow;
extern const KeyType keyRightArrow;
extern const KeyType keyUpArrow;
extern const KeyType keyDownArrow;

extern const KeyType keyPrintScreen;
extern const KeyType keyScrollLock;
extern const KeyType keyPause;

extern const KeyType keypad0;
extern const KeyType keypad1;
extern const KeyType keypad2;
extern const KeyType keypad3;
extern const KeyType keypad4;
extern const KeyType keypad5;
extern const KeyType keypad6;
extern const KeyType keypad7;
extern const KeyType keypad8;
extern const KeyType keypad9;

extern const KeyType keypadDivide;
extern const KeyType keypadMultiply;
extern const KeyType keypadMinus;
extern const KeyType keypadPlus;
extern const KeyType keypadEnter;
extern const KeyType keypadPeriod;

extern const KeyType keypadNumLock;

extern const KeyType keyTypeNull;
extern const KeyType keyTypeFunction1;
extern const KeyType keyTypeFunction2;

enum KeyboardFunctionGroup {
    KEYBOARD_FUNCTION_GROUP_MAIN,
    KEYBOARD_FUNCTION_GROUP_TAP,
    KEYBOARD_FUNCTION_GROUP_F1,
    KEYBOARD_FUNCTION_GROUP_F2,
    KEYBOARD_FUNCTION_GROUP_COUNT
};

typedef struct {
    const Pin* col;
    const Pin* row;
    const KeyType* action[KEYBOARD_FUNCTION_GROUP_COUNT];
} KeySwitch;

extern const KeySwitch* keySwitchBoard[KEYBOARD_FULL_FUNCTION_COLS][KEYBOARD_FULL_FUNCTION_ROWS];

// Function Prototypes
extern void keyscanInit(void);

extern void keyscanTask(void* argument);

extern void setKeySwitchAction(KeySwitch* keySwitch, uint8_t actionLevel, const KeyType* keyType);

extern void clearKeySwitchAction(KeySwitch* keySwitch);

extern void clearAllKeySwitchActions(void);

#endif //KBOS_KEYSCAN_H

//
// Created by 6gioc on 25. 10. 20..
//

#include "qwerty.h"
#include "../src/engine/keyscan/Keyscan.h"

// QWERTY Layout
const KeySwitch keyA = (KeySwitch){.biosCode = KEYBOARD_A, .asciiCode = 'A', .rowPin = &row3, .colPin = &col2};
const KeySwitch keyB = (KeySwitch){.biosCode = KEYBOARD_B, .asciiCode = 'B', .rowPin = &row2, .colPin = &col6};
const KeySwitch keyC = (KeySwitch){.biosCode = KEYBOARD_C, .asciiCode = 'C', .rowPin = &row2, .colPin = &col4};
const KeySwitch keyD = (KeySwitch){.biosCode = KEYBOARD_D, .asciiCode = 'D', .rowPin = &row3, .colPin = &col4};
const KeySwitch keyE = (KeySwitch){.biosCode = KEYBOARD_E, .asciiCode = 'E', .rowPin = &row4, .colPin = &col4};
const KeySwitch keyF = (KeySwitch){.biosCode = KEYBOARD_F, .asciiCode = 'F', .rowPin = &row3, .colPin = &col5};
const KeySwitch keyG = (KeySwitch){.biosCode = KEYBOARD_G, .asciiCode = 'G', .rowPin = &row3, .colPin = &col6};
const KeySwitch keyH = (KeySwitch){.biosCode = KEYBOARD_H, .asciiCode = 'H', .rowPin = &row3, .colPin = &col7};
const KeySwitch keyI = (KeySwitch){.biosCode = KEYBOARD_I, .asciiCode = 'I', .rowPin = &row4, .colPin = &col9};
const KeySwitch keyJ = (KeySwitch){.biosCode = KEYBOARD_J, .asciiCode = 'J', .rowPin = &row3, .colPin = &col8};
const KeySwitch keyK = (KeySwitch){.biosCode = KEYBOARD_K, .asciiCode = 'K', .rowPin = &row3, .colPin = &col9};
const KeySwitch keyL = (KeySwitch){.biosCode = KEYBOARD_L, .asciiCode = 'L', .rowPin = &row3, .colPin = &col10};
const KeySwitch keyM = (KeySwitch){.biosCode = KEYBOARD_M, .asciiCode = 'M', .rowPin = &row2, .colPin = &col8};
const KeySwitch keyN = (KeySwitch){.biosCode = KEYBOARD_N, .asciiCode = 'N', .rowPin = &row2, .colPin = &col7};
const KeySwitch keyO = (KeySwitch){.biosCode = KEYBOARD_O, .asciiCode = 'O', .rowPin = &row4, .colPin = &col10};
const KeySwitch keyP = (KeySwitch){.biosCode = KEYBOARD_P, .asciiCode = 'P', .rowPin = &row4, .colPin = &col11};
const KeySwitch keyQ = (KeySwitch){.biosCode = KEYBOARD_Q, .asciiCode = 'Q', .rowPin = &row4, .colPin = &col2};
const KeySwitch keyR = (KeySwitch){.biosCode = KEYBOARD_R, .asciiCode = 'R', .rowPin = &row4, .colPin = &col5};
const KeySwitch keyS = (KeySwitch){.biosCode = KEYBOARD_S, .asciiCode = 'S', .rowPin = &row3, .colPin = &col3}; //
const KeySwitch keyT = (KeySwitch){.biosCode = KEYBOARD_T, .asciiCode = 'T', .rowPin = &row4, .colPin = &col6};
const KeySwitch keyU = (KeySwitch){.biosCode = KEYBOARD_U, .asciiCode = 'U', .rowPin = &row2, .colPin = &col8};
const KeySwitch keyV = (KeySwitch){.biosCode = KEYBOARD_V, .asciiCode = 'V', .rowPin = &row2, .colPin = &col5};
const KeySwitch keyW = (KeySwitch){.biosCode = KEYBOARD_W, .asciiCode = 'W', .rowPin = &row4, .colPin = &col3};
const KeySwitch keyX = (KeySwitch){.biosCode = KEYBOARD_X, .asciiCode = 'X', .rowPin = &row2, .colPin = &col3};
const KeySwitch keyY = (KeySwitch){.biosCode = KEYBOARD_Y, .asciiCode = 'Y', .rowPin = &row4, .colPin = &col7};
const KeySwitch keyZ = (KeySwitch){.biosCode = KEYBOARD_Z, .asciiCode = 'Z', .rowPin = &row2, .colPin = &col2};

const KeySwitch key1 = (KeySwitch){.biosCode = KEYBOARD_1, .asciiCode = '1', .rowPin = &row5, .colPin = &col2};
const KeySwitch key2 = (KeySwitch){.biosCode = KEYBOARD_2, .asciiCode = '2', .rowPin = &row5, .colPin = &col3};
const KeySwitch key3 = (KeySwitch){.biosCode = KEYBOARD_3, .asciiCode = '3', .rowPin = &row5, .colPin = &col4};
const KeySwitch key4 = (KeySwitch){.biosCode = KEYBOARD_4, .asciiCode = '4', .rowPin = &row5, .colPin = &col5};
const KeySwitch key5 = (KeySwitch){.biosCode = KEYBOARD_5, .asciiCode = '5', .rowPin = &row5, .colPin = &col6};
const KeySwitch key6 = (KeySwitch){.biosCode = KEYBOARD_6, .asciiCode = '6', .rowPin = &row5, .colPin = &col7};
const KeySwitch key7 = (KeySwitch){.biosCode = KEYBOARD_7, .asciiCode = '7', .rowPin = &row5, .colPin = &col8};
const KeySwitch key8 = (KeySwitch){.biosCode = KEYBOARD_8, .asciiCode = '8', .rowPin = &row5, .colPin = &col9};
const KeySwitch key9 = (KeySwitch){.biosCode = KEYBOARD_9, .asciiCode = '9', .rowPin = &row5, .colPin = &col10};
const KeySwitch key0 = (KeySwitch){.biosCode = KEYBOARD_0, .asciiCode = '0', .rowPin = &row5, .colPin = &col11};

const KeySwitch keyF1 = (KeySwitch){.biosCode = KEYBOARD_F1, .rowPin = &row6, .colPin = &col3};
const KeySwitch keyF2 = (KeySwitch){.biosCode = KEYBOARD_F2, .rowPin = &row6, .colPin = &col4};
const KeySwitch keyF3 = (KeySwitch){.biosCode = KEYBOARD_F3, .rowPin = &row6, .colPin = &col5};
const KeySwitch keyF4 = (KeySwitch){.biosCode = KEYBOARD_F4, .rowPin = &row6, .colPin = &col6};
const KeySwitch keyF5 = (KeySwitch){.biosCode = KEYBOARD_F5, .rowPin = &row6, .colPin = &col7};
const KeySwitch keyF6 = (KeySwitch){.biosCode = KEYBOARD_F6, .rowPin = &row6, .colPin = &col8};
const KeySwitch keyF7 = (KeySwitch){.biosCode = KEYBOARD_F7, .rowPin = &row6, .colPin = &col9};
const KeySwitch keyF8 = (KeySwitch){.biosCode = KEYBOARD_F8, .rowPin = &row6, .colPin = &col10};
const KeySwitch keyF9 = (KeySwitch){.biosCode = KEYBOARD_F9, .rowPin = &row6, .colPin = &col11};
const KeySwitch keyF10 = (KeySwitch){.biosCode = KEYBOARD_F10, .rowPin = &row6, .colPin = &col12};
const KeySwitch keyF11 = (KeySwitch){.biosCode = KEYBOARD_F11, .rowPin = &row6, .colPin = &col13};
const KeySwitch keyF12 = (KeySwitch){.biosCode = KEYBOARD_F12, .rowPin = &row6, .colPin = &col14};

const KeySwitch keyLCtrl  = (KeySwitch){.biosCode = KEYBOARD_LEFT_CTRL, .rowPin = &row1, .colPin = &col1};
const KeySwitch keyLShift = (KeySwitch){.biosCode = KEYBOARD_LEFT_SHIFT, .rowPin = &row2, .colPin = &col1};
const KeySwitch keyLAlt   = (KeySwitch){.biosCode = KEYBOARD_LEFT_ALT, .rowPin = &row1, .colPin = &col3};
const KeySwitch keyLGui   = (KeySwitch){.biosCode = KEYBOARD_LEFT_GUI, .rowPin = &row1, .colPin = &col2};
const KeySwitch keyRCtrl  = (KeySwitch){.biosCode = KEYBOARD_RIGHT_CTRL, .rowPin = &row1, .colPin = &col1};
const KeySwitch keyRShift = (KeySwitch){.biosCode = KEYBOARD_RIGHT_SHIFT, .rowPin = &row2, .colPin = &col14};
const KeySwitch keyRAlt   = (KeySwitch){.biosCode = KEYBOARD_RIGHT_ALT, .rowPin = &row1, .colPin = &col10};
const KeySwitch keyRGui   = (KeySwitch){.biosCode = KEYBOARD_RIGHT_GUI, .rowPin = &row1, .colPin = &col11};

const KeySwitch keySpace    = (KeySwitch){.biosCode = KEYBOARD_SPACE, .rowPin = &row1, .colPin = &col6};
const KeySwitch keyDelete   = (KeySwitch){.biosCode = KEYBOARD_DELETE, .rowPin = &row5, .colPin = &col14};
const KeySwitch keyCapsLock = (KeySwitch){.biosCode = KEYBOARD_CAPSLOCK, .rowPin = &row3, .colPin = &col1};
const KeySwitch keyReturn   = (KeySwitch){.biosCode = KEYBOARD_RETURN, .rowPin = &row3, .colPin = &col14};
const KeySwitch keyTab      = (KeySwitch){.biosCode = KEYBOARD_TAB, .rowPin = &row4, .colPin = &col1};

const struct KeySwitch* qwertyKeyboardLayout60PWindows[KEYBOARD_60P_ROWS][KEYBOARD_60P_COLS] = {
    {
        &keyLCtrl, &keyLGui, &keyLAlt, &keySwitchNull, &keySwitchNull, &keySpace, &keySwitchNull, &keySwitchNull,
        &keySwitchNull, &keyRAlt, &keyRGui, &keyRGui, &keyRCtrl
    }, //R GUI 수정해야함
    {&keyLShift, &keyZ, &keyX, &keyC, &keyV, &keyB, &keyN, &keyM,},
    {&keyCapsLock, &keyA, &keyS, &keyD, &keyF, &keyG, &keyH, &keyJ, &keyK, &keyL,},
    {&keyTab, &keyQ, &keyW, &keyE, &keyR, &keyT, &keyY, &keyU, &keyI, &keyO, &keyP,},
    {},
};

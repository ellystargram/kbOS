//
// Created by Gio Choi on 25. 10. 20.
//

#include "Keyscan.h"
#include <stdbool.h>
#include <sys/types.h>

// Constants
osThreadId_t keyscanTaskHandle;
const osThreadAttr_t keyscanTaskAttributes = {
    .name = "keyscanTask",
    .stack_size = 128U * 8U,
    .priority = (osPriority_t)osPriorityRealtime,
};

uint8_t keyboardLayout                                             = KEYBOARD_60P;
uint8_t keyBoardKeyLayout                                          = KEYBOARD_KEY_LAYOUT_QWERTY;
void (*keyboardKeyLayoutAppliers[KEYBOARD_KEY_LAYOUT_COUNT])(void) = {
    applyQWERTY,
};

const KeyType keyA = (KeyType){.biosCode = KEYBOARD_A, .asciiCode = 'A'};
const KeyType keyB = (KeyType){.biosCode = KEYBOARD_B, .asciiCode = 'B'};
const KeyType keyC = (KeyType){.biosCode = KEYBOARD_C, .asciiCode = 'C'};
const KeyType keyD = (KeyType){.biosCode = KEYBOARD_D, .asciiCode = 'D'};
const KeyType keyE = (KeyType){.biosCode = KEYBOARD_E, .asciiCode = 'E'};
const KeyType keyF = (KeyType){.biosCode = KEYBOARD_F, .asciiCode = 'F'};
const KeyType keyG = (KeyType){.biosCode = KEYBOARD_G, .asciiCode = 'G'};
const KeyType keyH = (KeyType){.biosCode = KEYBOARD_H, .asciiCode = 'H'};
const KeyType keyI = (KeyType){.biosCode = KEYBOARD_I, .asciiCode = 'I'};
const KeyType keyJ = (KeyType){.biosCode = KEYBOARD_J, .asciiCode = 'J'};
const KeyType keyK = (KeyType){.biosCode = KEYBOARD_K, .asciiCode = 'K'};
const KeyType keyL = (KeyType){.biosCode = KEYBOARD_L, .asciiCode = 'L'};
const KeyType keyM = (KeyType){.biosCode = KEYBOARD_M, .asciiCode = 'M'};
const KeyType keyN = (KeyType){.biosCode = KEYBOARD_N, .asciiCode = 'N'};
const KeyType keyO = (KeyType){.biosCode = KEYBOARD_O, .asciiCode = 'O'};
const KeyType keyP = (KeyType){.biosCode = KEYBOARD_P, .asciiCode = 'P'};
const KeyType keyQ = (KeyType){.biosCode = KEYBOARD_Q, .asciiCode = 'Q'};
const KeyType keyR = (KeyType){.biosCode = KEYBOARD_R, .asciiCode = 'R'};
const KeyType keyS = (KeyType){.biosCode = KEYBOARD_S, .asciiCode = 'S'};
const KeyType keyT = (KeyType){.biosCode = KEYBOARD_T, .asciiCode = 'T'};
const KeyType keyU = (KeyType){.biosCode = KEYBOARD_U, .asciiCode = 'U'};
const KeyType keyV = (KeyType){.biosCode = KEYBOARD_V, .asciiCode = 'V'};
const KeyType keyW = (KeyType){.biosCode = KEYBOARD_W, .asciiCode = 'W'};
const KeyType keyX = (KeyType){.biosCode = KEYBOARD_X, .asciiCode = 'X'};
const KeyType keyY = (KeyType){.biosCode = KEYBOARD_Y, .asciiCode = 'Y'};
const KeyType keyZ = (KeyType){.biosCode = KEYBOARD_Z, .asciiCode = 'Z'};

const KeyType key1 = (KeyType){.biosCode = KEYBOARD_1, .asciiCode = '1'};
const KeyType key2 = (KeyType){.biosCode = KEYBOARD_2, .asciiCode = '2'};
const KeyType key3 = (KeyType){.biosCode = KEYBOARD_3, .asciiCode = '3'};
const KeyType key4 = (KeyType){.biosCode = KEYBOARD_4, .asciiCode = '4'};
const KeyType key5 = (KeyType){.biosCode = KEYBOARD_5, .asciiCode = '5'};
const KeyType key6 = (KeyType){.biosCode = KEYBOARD_6, .asciiCode = '6'};
const KeyType key7 = (KeyType){.biosCode = KEYBOARD_7, .asciiCode = '7'};
const KeyType key8 = (KeyType){.biosCode = KEYBOARD_8, .asciiCode = '8'};
const KeyType key9 = (KeyType){.biosCode = KEYBOARD_9, .asciiCode = '9'};
const KeyType key0 = (KeyType){.biosCode = KEYBOARD_0, .asciiCode = '0'};

const KeyType keyGraveTilde         = (KeyType){.biosCode = KEYBOARD_GRAVE_TILDE, .asciiCode = '`'};
const KeyType keyMinus              = (KeyType){.biosCode = KEYBOARD_DASH, .asciiCode = '-'};
const KeyType keyEqual              = (KeyType){.biosCode = KEYBOARD_EQUAL, .asciiCode = '='};
const KeyType keySquareBracketOpen  = (KeyType){.biosCode = KEYBOARD_SQBRACKET_OPEN, .asciiCode = '['};
const KeyType keySquareBracketClose = (KeyType){.biosCode = KEYBOARD_SQBRACKET_CLOSE, .asciiCode = ']'};
const KeyType keyBackSlash          = (KeyType){.biosCode = KEYBOARD_BACKSLASH, .asciiCode = '\\'};
const KeyType keySemiColon          = (KeyType){.biosCode = KEYBOARD_SEMICOLON, .asciiCode = ';'};
const KeyType keyQuote              = (KeyType){.biosCode = KEYBOARD_QUOTES, .asciiCode = '\''};
const KeyType keyComma              = (KeyType){.biosCode = KEYBOARD_COMMA, .asciiCode = ','};
const KeyType keyPeriod             = (KeyType){.biosCode = KEYBOARD_PERIOD, .asciiCode = '.'};
const KeyType keySlash              = (KeyType){.biosCode = KEYBOARD_SLASH, .asciiCode = '/'};

const KeyType keyF1  = (KeyType){.biosCode = KEYBOARD_F1};
const KeyType keyF2  = (KeyType){.biosCode = KEYBOARD_F2};
const KeyType keyF3  = (KeyType){.biosCode = KEYBOARD_F3};
const KeyType keyF4  = (KeyType){.biosCode = KEYBOARD_F4};
const KeyType keyF5  = (KeyType){.biosCode = KEYBOARD_F5};
const KeyType keyF6  = (KeyType){.biosCode = KEYBOARD_F6};
const KeyType keyF7  = (KeyType){.biosCode = KEYBOARD_F7};
const KeyType keyF8  = (KeyType){.biosCode = KEYBOARD_F8};
const KeyType keyF9  = (KeyType){.biosCode = KEYBOARD_F9};
const KeyType keyF10 = (KeyType){.biosCode = KEYBOARD_F10};
const KeyType keyF11 = (KeyType){.biosCode = KEYBOARD_F11};
const KeyType keyF12 = (KeyType){.biosCode = KEYBOARD_F12};

const KeyType keyLCtrl  = (KeyType){.biosCode = KEYBOARD_LEFT_CTRL};
const KeyType keyLShift = (KeyType){.biosCode = KEYBOARD_LEFT_SHIFT};
const KeyType keyLAlt   = (KeyType){.biosCode = KEYBOARD_LEFT_ALT};
const KeyType keyLGui   = (KeyType){.biosCode = KEYBOARD_LEFT_GUI};
const KeyType keyRCtrl  = (KeyType){.biosCode = KEYBOARD_RIGHT_CTRL};
const KeyType keyRShift = (KeyType){.biosCode = KEYBOARD_RIGHT_SHIFT};
const KeyType keyRAlt   = (KeyType){.biosCode = KEYBOARD_RIGHT_ALT};
const KeyType keyRGui   = (KeyType){.biosCode = KEYBOARD_RIGHT_GUI};
const KeyType keyMenu   = (KeyType){.biosCode = KEYBOARD_MENU};

const KeyType keySpace         = (KeyType){.biosCode = KEYBOARD_SPACE};
const KeyType keyDelete        = (KeyType){.biosCode = KEYBOARD_DELETE};
const KeyType keyCapsLock      = (KeyType){.biosCode = KEYBOARD_CAPSLOCK};
const KeyType keyReturn        = (KeyType){.biosCode = KEYBOARD_RETURN};
const KeyType keyTab           = (KeyType){.biosCode = KEYBOARD_TAB};
const KeyType keyEscape        = (KeyType){.biosCode = KEYBOARD_ESCAPE};
const KeyType keyDeleteForward = (KeyType){.biosCode = KEYBOARD_DELETE_FORWARD};
const KeyType keyInsert        = (KeyType){.biosCode = KEYBOARD_INSERT};
const KeyType keyHome          = (KeyType){.biosCode = KEYBOARD_HOME};
const KeyType keyEnd           = (KeyType){.biosCode = KEYBOARD_END};
const KeyType keyPageUp        = (KeyType){.biosCode = KEYBOARD_PAGEUP};
const KeyType keyPageDown      = (KeyType){.biosCode = KEYBOARD_PAGEDOWN};

const KeyType keyLeftArrow  = (KeyType){.biosCode = KEYBOARD_LEFT_ARROW};
const KeyType keyRightArrow = (KeyType){.biosCode = KEYBOARD_RIGHT_ARROW};
const KeyType keyUpArrow    = (KeyType){.biosCode = KEYBOARD_UP_ARROW};
const KeyType keyDownArrow  = (KeyType){.biosCode = KEYBOARD_DOWN_ARROW};

const KeyType keyPrintScreen = (KeyType){.biosCode = KEYBOARD_PRINTSCREEN};
const KeyType keyScrollLock  = (KeyType){.biosCode = KEYBOARD_SCROLLLOCK};
const KeyType keyPause       = (KeyType){.biosCode = KEYBOARD_PAUSE};

const KeyType keypad0 = (KeyType){.biosCode = KEYPAD_0, .asciiCode = '0'};
const KeyType keypad1 = (KeyType){.biosCode = KEYPAD_1, .asciiCode = '1'};
const KeyType keypad2 = (KeyType){.biosCode = KEYPAD_2, .asciiCode = '2'};
const KeyType keypad3 = (KeyType){.biosCode = KEYPAD_3, .asciiCode = '3'};
const KeyType keypad4 = (KeyType){.biosCode = KEYPAD_4, .asciiCode = '4'};
const KeyType keypad5 = (KeyType){.biosCode = KEYPAD_5, .asciiCode = '5'};
const KeyType keypad6 = (KeyType){.biosCode = KEYPAD_6, .asciiCode = '6'};
const KeyType keypad7 = (KeyType){.biosCode = KEYPAD_7, .asciiCode = '7'};
const KeyType keypad8 = (KeyType){.biosCode = KEYPAD_8, .asciiCode = '8'};
const KeyType keypad9 = (KeyType){.biosCode = KEYPAD_9, .asciiCode = '9'};

const KeyType keypadDivide   = (KeyType){.biosCode = KEYPAD_DIVIDE, .asciiCode = '/'};
const KeyType keypadMultiply = (KeyType){.biosCode = KEYPAD_PRODUCT, .asciiCode = '*'};
const KeyType keypadMinus    = (KeyType){.biosCode = KEYPAD_MINUS, .asciiCode = '-'};
const KeyType keypadPlus     = (KeyType){.biosCode = KEYPAD_PLUS, .asciiCode = '+'};
const KeyType keypadEnter    = (KeyType){.biosCode = KEYPAD_RETURN, .asciiCode = '\n'};
const KeyType keypadPeriod   = (KeyType){.biosCode = KEYPAD_DECIMAL, .asciiCode = '.'};

const KeyType keypadNumLock = (KeyType){.biosCode = KEYPAD_NUMLOCK};

const KeyType keyTypeNull;
const KeyType keyTypeFunction1 = (KeyType){.keyBoardSpecial = KEYBOARD_FUNCTION_GROUP_F1};
const KeyType keyTypeFunction2 = (KeyType){.keyBoardSpecial = KEYBOARD_FUNCTION_GROUP_F2};

// KeyboardKeyDefineEnd
// -------------------------------
// KeyboardSwitchDefine

KeySwitch keySwitchC0R0  = (KeySwitch){.col = &cols[0], .row = &rows[0]};
KeySwitch keySwitchC1R0  = (KeySwitch){.col = &cols[1], .row = &rows[0]};
KeySwitch keySwitchC2R0  = (KeySwitch){.col = &cols[2], .row = &rows[0]};
KeySwitch keySwitchC3R0  = (KeySwitch){.col = &cols[3], .row = &rows[0]};
KeySwitch keySwitchC4R0  = (KeySwitch){.col = &cols[4], .row = &rows[0]};
KeySwitch keySwitchC5R0  = (KeySwitch){.col = &cols[5], .row = &rows[0]};
KeySwitch keySwitchC6R0  = (KeySwitch){.col = &cols[6], .row = &rows[0]};
KeySwitch keySwitchC7R0  = (KeySwitch){.col = &cols[7], .row = &rows[0]};
KeySwitch keySwitchC8R0  = (KeySwitch){.col = &cols[8], .row = &rows[0]};
KeySwitch keySwitchC9R0  = (KeySwitch){.col = &cols[9], .row = &rows[0]};
KeySwitch keySwitchC10R0 = (KeySwitch){.col = &cols[10], .row = &rows[0]};
KeySwitch keySwitchC11R0 = (KeySwitch){.col = &cols[11], .row = &rows[0]};
KeySwitch keySwitchC12R0 = (KeySwitch){.col = &cols[12], .row = &rows[0]};
KeySwitch keySwitchC13R0 = (KeySwitch){.col = &cols[13], .row = &rows[0]};
KeySwitch keySwitchC14R0 = (KeySwitch){.col = &cols[14], .row = &rows[0]};
KeySwitch keySwitchC15R0 = (KeySwitch){.col = &cols[15], .row = &rows[0]};
KeySwitch keySwitchC16R0 = (KeySwitch){.col = &cols[16], .row = &rows[0]};
KeySwitch keySwitchC17R0 = (KeySwitch){.col = &cols[17], .row = &rows[0]};
KeySwitch keySwitchC18R0 = (KeySwitch){.col = &cols[18], .row = &rows[0]};
KeySwitch keySwitchC19R0 = (KeySwitch){.col = &cols[19], .row = &rows[0]};
KeySwitch keySwitchC20R0 = (KeySwitch){.col = &cols[20], .row = &rows[0]};
KeySwitch keySwitchC21R0 = (KeySwitch){.col = &cols[21], .row = &rows[0]};
KeySwitch keySwitchC22R0 = (KeySwitch){.col = &cols[22], .row = &rows[0]};
KeySwitch keySwitchC23R0 = (KeySwitch){.col = &cols[23], .row = &rows[0]};
KeySwitch keySwitchC24R0 = (KeySwitch){.col = &cols[24], .row = &rows[0]};
KeySwitch keySwitchC25R0 = (KeySwitch){.col = &cols[25], .row = &rows[0]};
KeySwitch keySwitchC26R0 = (KeySwitch){.col = &cols[26], .row = &rows[0]};

KeySwitch keySwitchC0R1  = (KeySwitch){.col = &cols[0], .row = &rows[1]};
KeySwitch keySwitchC1R1  = (KeySwitch){.col = &cols[1], .row = &rows[1]};
KeySwitch keySwitchC2R1  = (KeySwitch){.col = &cols[2], .row = &rows[1]};
KeySwitch keySwitchC3R1  = (KeySwitch){.col = &cols[3], .row = &rows[1]};
KeySwitch keySwitchC4R1  = (KeySwitch){.col = &cols[4], .row = &rows[1]};
KeySwitch keySwitchC5R1  = (KeySwitch){.col = &cols[5], .row = &rows[1]};
KeySwitch keySwitchC6R1  = (KeySwitch){.col = &cols[6], .row = &rows[1]};
KeySwitch keySwitchC7R1  = (KeySwitch){.col = &cols[7], .row = &rows[1]};
KeySwitch keySwitchC8R1  = (KeySwitch){.col = &cols[8], .row = &rows[1]};
KeySwitch keySwitchC9R1  = (KeySwitch){.col = &cols[9], .row = &rows[1]};
KeySwitch keySwitchC10R1 = (KeySwitch){.col = &cols[10], .row = &rows[1]};
KeySwitch keySwitchC11R1 = (KeySwitch){.col = &cols[11], .row = &rows[1]};
KeySwitch keySwitchC12R1 = (KeySwitch){.col = &cols[12], .row = &rows[1]};
KeySwitch keySwitchC13R1 = (KeySwitch){.col = &cols[13], .row = &rows[1]};
KeySwitch keySwitchC14R1 = (KeySwitch){.col = &cols[14], .row = &rows[1]};
KeySwitch keySwitchC15R1 = (KeySwitch){.col = &cols[15], .row = &rows[1]};
KeySwitch keySwitchC16R1 = (KeySwitch){.col = &cols[16], .row = &rows[1]};
KeySwitch keySwitchC17R1 = (KeySwitch){.col = &cols[17], .row = &rows[1]};
KeySwitch keySwitchC18R1 = (KeySwitch){.col = &cols[18], .row = &rows[1]};
KeySwitch keySwitchC19R1 = (KeySwitch){.col = &cols[19], .row = &rows[1]};
KeySwitch keySwitchC20R1 = (KeySwitch){.col = &cols[20], .row = &rows[1]};
KeySwitch keySwitchC21R1 = (KeySwitch){.col = &cols[21], .row = &rows[1]};
KeySwitch keySwitchC22R1 = (KeySwitch){.col = &cols[22], .row = &rows[1]};
KeySwitch keySwitchC23R1 = (KeySwitch){.col = &cols[23], .row = &rows[1]};
KeySwitch keySwitchC24R1 = (KeySwitch){.col = &cols[24], .row = &rows[1]};
KeySwitch keySwitchC25R1 = (KeySwitch){.col = &cols[25], .row = &rows[1]};
KeySwitch keySwitchC26R1 = (KeySwitch){.col = &cols[26], .row = &rows[1]};

KeySwitch keySwitchC0R2  = (KeySwitch){.col = &cols[0], .row = &rows[2]};
KeySwitch keySwitchC1R2  = (KeySwitch){.col = &cols[1], .row = &rows[2]};
KeySwitch keySwitchC2R2  = (KeySwitch){.col = &cols[2], .row = &rows[2]};
KeySwitch keySwitchC3R2  = (KeySwitch){.col = &cols[3], .row = &rows[2]};
KeySwitch keySwitchC4R2  = (KeySwitch){.col = &cols[4], .row = &rows[2]};
KeySwitch keySwitchC5R2  = (KeySwitch){.col = &cols[5], .row = &rows[2]};
KeySwitch keySwitchC6R2  = (KeySwitch){.col = &cols[6], .row = &rows[2]};
KeySwitch keySwitchC7R2  = (KeySwitch){.col = &cols[7], .row = &rows[2]};
KeySwitch keySwitchC8R2  = (KeySwitch){.col = &cols[8], .row = &rows[2]};
KeySwitch keySwitchC9R2  = (KeySwitch){.col = &cols[9], .row = &rows[2]};
KeySwitch keySwitchC10R2 = (KeySwitch){.col = &cols[10], .row = &rows[2]};
KeySwitch keySwitchC11R2 = (KeySwitch){.col = &cols[11], .row = &rows[2]};
KeySwitch keySwitchC12R2 = (KeySwitch){.col = &cols[12], .row = &rows[2]};
KeySwitch keySwitchC13R2 = (KeySwitch){.col = &cols[13], .row = &rows[2]};
KeySwitch keySwitchC14R2 = (KeySwitch){.col = &cols[14], .row = &rows[2]};
KeySwitch keySwitchC15R2 = (KeySwitch){.col = &cols[15], .row = &rows[2]};
KeySwitch keySwitchC16R2 = (KeySwitch){.col = &cols[16], .row = &rows[2]};
KeySwitch keySwitchC17R2 = (KeySwitch){.col = &cols[17], .row = &rows[2]};
KeySwitch keySwitchC18R2 = (KeySwitch){.col = &cols[18], .row = &rows[2]};
KeySwitch keySwitchC19R2 = (KeySwitch){.col = &cols[19], .row = &rows[2]};
KeySwitch keySwitchC20R2 = (KeySwitch){.col = &cols[20], .row = &rows[2]};
KeySwitch keySwitchC21R2 = (KeySwitch){.col = &cols[21], .row = &rows[2]};
KeySwitch keySwitchC22R2 = (KeySwitch){.col = &cols[22], .row = &rows[2]};
KeySwitch keySwitchC23R2 = (KeySwitch){.col = &cols[23], .row = &rows[2]};
KeySwitch keySwitchC24R2 = (KeySwitch){.col = &cols[24], .row = &rows[2]};
KeySwitch keySwitchC25R2 = (KeySwitch){.col = &cols[25], .row = &rows[2]};
KeySwitch keySwitchC26R2 = (KeySwitch){.col = &cols[26], .row = &rows[2]};

KeySwitch keySwitchC0R3  = (KeySwitch){.col = &cols[0], .row = &rows[3]};
KeySwitch keySwitchC1R3  = (KeySwitch){.col = &cols[1], .row = &rows[3]};
KeySwitch keySwitchC2R3  = (KeySwitch){.col = &cols[2], .row = &rows[3]};
KeySwitch keySwitchC3R3  = (KeySwitch){.col = &cols[3], .row = &rows[3]};
KeySwitch keySwitchC4R3  = (KeySwitch){.col = &cols[4], .row = &rows[3]};
KeySwitch keySwitchC5R3  = (KeySwitch){.col = &cols[5], .row = &rows[3]};
KeySwitch keySwitchC6R3  = (KeySwitch){.col = &cols[6], .row = &rows[3]};
KeySwitch keySwitchC7R3  = (KeySwitch){.col = &cols[7], .row = &rows[3]};
KeySwitch keySwitchC8R3  = (KeySwitch){.col = &cols[8], .row = &rows[3]};
KeySwitch keySwitchC9R3  = (KeySwitch){.col = &cols[9], .row = &rows[3]};
KeySwitch keySwitchC10R3 = (KeySwitch){.col = &cols[10], .row = &rows[3]};
KeySwitch keySwitchC11R3 = (KeySwitch){.col = &cols[11], .row = &rows[3]};
KeySwitch keySwitchC12R3 = (KeySwitch){.col = &cols[12], .row = &rows[3]};
KeySwitch keySwitchC13R3 = (KeySwitch){.col = &cols[13], .row = &rows[3]};
KeySwitch keySwitchC14R3 = (KeySwitch){.col = &cols[14], .row = &rows[3]};
KeySwitch keySwitchC15R3 = (KeySwitch){.col = &cols[15], .row = &rows[3]};
KeySwitch keySwitchC16R3 = (KeySwitch){.col = &cols[16], .row = &rows[3]};
KeySwitch keySwitchC17R3 = (KeySwitch){.col = &cols[17], .row = &rows[3]};
KeySwitch keySwitchC18R3 = (KeySwitch){.col = &cols[18], .row = &rows[3]};
KeySwitch keySwitchC19R3 = (KeySwitch){.col = &cols[19], .row = &rows[3]};
KeySwitch keySwitchC20R3 = (KeySwitch){.col = &cols[20], .row = &rows[3]};
KeySwitch keySwitchC21R3 = (KeySwitch){.col = &cols[21], .row = &rows[3]};
KeySwitch keySwitchC22R3 = (KeySwitch){.col = &cols[22], .row = &rows[3]};
KeySwitch keySwitchC23R3 = (KeySwitch){.col = &cols[23], .row = &rows[3]};
KeySwitch keySwitchC24R3 = (KeySwitch){.col = &cols[24], .row = &rows[3]};
KeySwitch keySwitchC25R3 = (KeySwitch){.col = &cols[25], .row = &rows[3]};
KeySwitch keySwitchC26R3 = (KeySwitch){.col = &cols[26], .row = &rows[3]};

KeySwitch keySwitchC0R4  = (KeySwitch){.col = &cols[0], .row = &rows[4]};
KeySwitch keySwitchC1R4  = (KeySwitch){.col = &cols[1], .row = &rows[4]};
KeySwitch keySwitchC2R4  = (KeySwitch){.col = &cols[2], .row = &rows[4]};
KeySwitch keySwitchC3R4  = (KeySwitch){.col = &cols[3], .row = &rows[4]};
KeySwitch keySwitchC4R4  = (KeySwitch){.col = &cols[4], .row = &rows[4]};
KeySwitch keySwitchC5R4  = (KeySwitch){.col = &cols[5], .row = &rows[4]};
KeySwitch keySwitchC6R4  = (KeySwitch){.col = &cols[6], .row = &rows[4]};
KeySwitch keySwitchC7R4  = (KeySwitch){.col = &cols[7], .row = &rows[4]};
KeySwitch keySwitchC8R4  = (KeySwitch){.col = &cols[8], .row = &rows[4]};
KeySwitch keySwitchC9R4  = (KeySwitch){.col = &cols[9], .row = &rows[4]};
KeySwitch keySwitchC10R4 = (KeySwitch){.col = &cols[10], .row = &rows[4]};
KeySwitch keySwitchC11R4 = (KeySwitch){.col = &cols[11], .row = &rows[4]};
KeySwitch keySwitchC12R4 = (KeySwitch){.col = &cols[12], .row = &rows[4]};
KeySwitch keySwitchC13R4 = (KeySwitch){.col = &cols[13], .row = &rows[4]};
KeySwitch keySwitchC14R4 = (KeySwitch){.col = &cols[14], .row = &rows[4]};
KeySwitch keySwitchC15R4 = (KeySwitch){.col = &cols[15], .row = &rows[4]};
KeySwitch keySwitchC16R4 = (KeySwitch){.col = &cols[16], .row = &rows[4]};
KeySwitch keySwitchC17R4 = (KeySwitch){.col = &cols[17], .row = &rows[4]};
KeySwitch keySwitchC18R4 = (KeySwitch){.col = &cols[18], .row = &rows[4]};
KeySwitch keySwitchC19R4 = (KeySwitch){.col = &cols[19], .row = &rows[4]};
KeySwitch keySwitchC20R4 = (KeySwitch){.col = &cols[20], .row = &rows[4]};
KeySwitch keySwitchC21R4 = (KeySwitch){.col = &cols[21], .row = &rows[4]};
KeySwitch keySwitchC22R4 = (KeySwitch){.col = &cols[22], .row = &rows[4]};
KeySwitch keySwitchC23R4 = (KeySwitch){.col = &cols[23], .row = &rows[4]};
KeySwitch keySwitchC24R4 = (KeySwitch){.col = &cols[24], .row = &rows[4]};
KeySwitch keySwitchC25R4 = (KeySwitch){.col = &cols[25], .row = &rows[4]};
KeySwitch keySwitchC26R4 = (KeySwitch){.col = &cols[26], .row = &rows[4]};

KeySwitch keySwitchC0R5  = (KeySwitch){.col = &cols[0], .row = &rows[5]};
KeySwitch keySwitchC1R5  = (KeySwitch){.col = &cols[1], .row = &rows[5]};
KeySwitch keySwitchC2R5  = (KeySwitch){.col = &cols[2], .row = &rows[5]};
KeySwitch keySwitchC3R5  = (KeySwitch){.col = &cols[3], .row = &rows[5]};
KeySwitch keySwitchC4R5  = (KeySwitch){.col = &cols[4], .row = &rows[5]};
KeySwitch keySwitchC5R5  = (KeySwitch){.col = &cols[5], .row = &rows[5]};
KeySwitch keySwitchC6R5  = (KeySwitch){.col = &cols[6], .row = &rows[5]};
KeySwitch keySwitchC7R5  = (KeySwitch){.col = &cols[7], .row = &rows[5]};
KeySwitch keySwitchC8R5  = (KeySwitch){.col = &cols[8], .row = &rows[5]};
KeySwitch keySwitchC9R5  = (KeySwitch){.col = &cols[9], .row = &rows[5]};
KeySwitch keySwitchC10R5 = (KeySwitch){.col = &cols[10], .row = &rows[5]};
KeySwitch keySwitchC11R5 = (KeySwitch){.col = &cols[11], .row = &rows[5]};
KeySwitch keySwitchC12R5 = (KeySwitch){.col = &cols[12], .row = &rows[5]};
KeySwitch keySwitchC13R5 = (KeySwitch){.col = &cols[13], .row = &rows[5]};
KeySwitch keySwitchC14R5 = (KeySwitch){.col = &cols[14], .row = &rows[5]};
KeySwitch keySwitchC15R5 = (KeySwitch){.col = &cols[15], .row = &rows[5]};
KeySwitch keySwitchC16R5 = (KeySwitch){.col = &cols[16], .row = &rows[5]};
KeySwitch keySwitchC17R5 = (KeySwitch){.col = &cols[17], .row = &rows[5]};
KeySwitch keySwitchC18R5 = (KeySwitch){.col = &cols[18], .row = &rows[5]};
KeySwitch keySwitchC19R5 = (KeySwitch){.col = &cols[19], .row = &rows[5]};
KeySwitch keySwitchC20R5 = (KeySwitch){.col = &cols[20], .row = &rows[5]};
KeySwitch keySwitchC21R5 = (KeySwitch){.col = &cols[21], .row = &rows[5]};
KeySwitch keySwitchC22R5 = (KeySwitch){.col = &cols[22], .row = &rows[5]};
KeySwitch keySwitchC23R5 = (KeySwitch){.col = &cols[23], .row = &rows[5]};
KeySwitch keySwitchC24R5 = (KeySwitch){.col = &cols[24], .row = &rows[5]};
KeySwitch keySwitchC25R5 = (KeySwitch){.col = &cols[25], .row = &rows[5]};
KeySwitch keySwitchC26R5 = (KeySwitch){.col = &cols[26], .row = &rows[5]};

const KeySwitch* keySwitchBoard[KEYBOARD_FULL_FUNCTION_COLS][KEYBOARD_FULL_FUNCTION_ROWS] = {
    {&keySwitchC0R0, &keySwitchC0R1, &keySwitchC0R2, &keySwitchC0R3, &keySwitchC0R4, &keySwitchC0R5},       //cols[0]
    {&keySwitchC1R0, &keySwitchC1R1, &keySwitchC1R2, &keySwitchC1R3, &keySwitchC1R4, &keySwitchC1R5},       //cols[1]
    {&keySwitchC2R0, &keySwitchC2R1, &keySwitchC2R2, &keySwitchC2R3, &keySwitchC2R4, &keySwitchC2R5},       //cols[2]
    {&keySwitchC3R0, &keySwitchC3R1, &keySwitchC3R2, &keySwitchC3R3, &keySwitchC3R4, &keySwitchC3R5},       //cols[3]
    {&keySwitchC4R0, &keySwitchC4R1, &keySwitchC4R2, &keySwitchC4R3, &keySwitchC4R4, &keySwitchC4R5},       //cols[4]
    {&keySwitchC5R0, &keySwitchC5R1, &keySwitchC5R2, &keySwitchC5R3, &keySwitchC5R4, &keySwitchC5R5},       //cols[5]
    {&keySwitchC6R0, &keySwitchC6R1, &keySwitchC6R2, &keySwitchC6R3, &keySwitchC6R4, &keySwitchC6R5},       //cols[6]
    {&keySwitchC7R0, &keySwitchC7R1, &keySwitchC7R2, &keySwitchC7R3, &keySwitchC7R4, &keySwitchC7R5},       //cols[7]
    {&keySwitchC8R0, &keySwitchC8R1, &keySwitchC8R2, &keySwitchC8R3, &keySwitchC8R4, &keySwitchC8R5},       //cols[8]
    {&keySwitchC9R0, &keySwitchC9R1, &keySwitchC9R2, &keySwitchC9R3, &keySwitchC9R4, &keySwitchC9R5},       //cols[9]
    {&keySwitchC10R0, &keySwitchC10R1, &keySwitchC10R2, &keySwitchC10R3, &keySwitchC10R4, &keySwitchC10R5}, //cols[10]
    {&keySwitchC11R0, &keySwitchC11R1, &keySwitchC11R2, &keySwitchC11R3, &keySwitchC11R4, &keySwitchC11R5}, //cols[11]
    {&keySwitchC12R0, &keySwitchC12R1, &keySwitchC12R2, &keySwitchC12R3, &keySwitchC12R4, &keySwitchC12R5}, //cols[12]
    {&keySwitchC13R0, &keySwitchC13R1, &keySwitchC13R2, &keySwitchC13R3, &keySwitchC13R4, &keySwitchC13R5}, //cols[13]
    {&keySwitchC14R0, &keySwitchC14R1, &keySwitchC14R2, &keySwitchC14R3, &keySwitchC14R4, &keySwitchC14R5}, //cols[14]
    {&keySwitchC15R0, &keySwitchC15R1, &keySwitchC15R2, &keySwitchC15R3, &keySwitchC15R4, &keySwitchC15R5}, //cols[15]
    {&keySwitchC16R0, &keySwitchC16R1, &keySwitchC16R2, &keySwitchC16R3, &keySwitchC16R4, &keySwitchC16R5}, //cols[16]
    {&keySwitchC17R0, &keySwitchC17R1, &keySwitchC17R2, &keySwitchC17R3, &keySwitchC17R4, &keySwitchC17R5}, //cols[17]
    {&keySwitchC18R0, &keySwitchC18R1, &keySwitchC18R2, &keySwitchC18R3, &keySwitchC18R4, &keySwitchC18R5}, //cols[18]
    {&keySwitchC19R0, &keySwitchC19R1, &keySwitchC19R2, &keySwitchC19R3, &keySwitchC19R4, &keySwitchC19R5}, //cols[19]
    {&keySwitchC20R0, &keySwitchC20R1, &keySwitchC20R2, &keySwitchC20R3, &keySwitchC20R4, &keySwitchC20R5}, //cols[20]
};

void keyscanInit(void) {
    clearAllKeySwitchActions();
    keyboardKeyLayoutAppliers[keyBoardKeyLayout]();
    keyscanTaskHandle = osThreadNew(keyscanTask, NULL, &keyscanTaskAttributes);
}

void keyscanTask(void* argument) {
    uint8_t rowIndexLast = 0;
    if (keyboardLayout == KEYBOARD_60P || keyboardLayout == KEYBOARD_TKL || keyboardLayout == KEYBOARD_FULL) {
        rowIndexLast = KEYBOARD_60P_ROWS;
    }
    else if (keyboardLayout == KEYBOARD_60P_FUNCTION || keyboardLayout == KEYBOARD_TKL_FUNCTION || keyboardLayout ==
             KEYBOARD_FULL_FUNCTION) {
        rowIndexLast = KEYBOARD_FULL_FUNCTION_ROWS;
    }

    uint8_t columnIndexLast = 0;
    if (keyboardLayout == KEYBOARD_60P || keyboardLayout == KEYBOARD_60P_FUNCTION) {
        columnIndexLast = KEYBOARD_60P_COLS;
    }
    else if (keyboardLayout == KEYBOARD_TKL || keyboardLayout == KEYBOARD_TKL_FUNCTION) {
        columnIndexLast = KEYBOARD_TKL_COLS;
    }
    else if (keyboardLayout == KEYBOARD_FULL || keyboardLayout == KEYBOARD_FULL_FUNCTION) {
        columnIndexLast = KEYBOARD_FULL_COLS;
    }

    GPIO_PinState colsValue[KEYBOARD_FULL_FUNCTION_COLS] = {GPIO_PIN_RESET,};

    // ReSharper disable once CppDFAEndlessLoop
    while (true) {
        for (uint8_t rowIndex = rowIndexLast; rowIndex < rowIndexLast; rowIndex++) {
            for (uint8_t rowTurnedOff = 0; rowTurnedOff < rowIndexLast; rowTurnedOff++) {
                if (rowIndex == rowTurnedOff) {
                    pinWrite(rows[rowIndex], GPIO_PIN_SET);
                }
                else {
                    pinWrite(rows[rowIndex], GPIO_PIN_RESET);
                }
            }
            osDelay(KEYSCAN_ROW_TURN_OFF_DELAY_MS);
            for (uint8_t columnIndex = 0; columnIndex < columnIndexLast; columnIndex++) {
                colsValue[columnIndex] = pinRead(cols[columnIndex]);
            }
        }
    }
}

void setKeySwitchAction(KeySwitch* keySwitch, const uint8_t actionLevel, const KeyType* keyType) {
    keySwitch->action[actionLevel] = keyType;
}

void clearKeySwitchAction(KeySwitch* keySwitch) {
    for (uint8_t clearIndex = 0; clearIndex < (uint8_t)KEYBOARD_FUNCTION_GROUP_COUNT; clearIndex++) {
        keySwitch->action[clearIndex] = NULL;
    }
}

void clearAllKeySwitchActions(void) {
    for (uint8_t columnIndex = 0; columnIndex < KEYBOARD_FULL_FUNCTION_COLS; columnIndex++) {
        for (uint8_t rowIndex = 0; rowIndex < KEYBOARD_FULL_FUNCTION_ROWS; rowIndex++) {
            clearKeySwitchAction((KeySwitch*)keySwitchBoard[columnIndex][rowIndex]);
        }
    }
}

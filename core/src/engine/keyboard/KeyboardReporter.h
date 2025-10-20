//
// Created by 6gioc on 25. 10. 20..
//
#pragma once

#ifndef KBOS_KEYBOARDREPORTER_H
#define KBOS_KEYBOARDREPORTER_H

#include <stdint.h>

// Modifiers
#define KEYBOARD_LEFT_CTRL_MASK   0x01
#define KEYBOARD_LEFT_SHIFT_MASK  0X02
#define KEYBOARD_LEFT_ALT_MASK    0X04
#define KEYBOARD_LEFT_GUI_MASK    0X08
#define KEYBOARD_RIGHT_CTRL_MASK  0X10
#define KEYBOARD_RIGHT_SHIFT_MASK 0X20
#define KEYBOARD_RIGHT_ALT_MASK   0X40
#define KEYBOARD_RIGHT_GUI_MASK   0X80

// KEYCODE
#define KEYBOARD_NO_EVENT        0X00
#define KEYBOARD_ERROR_ROLL_OVER 0X01
#define KEYBOARD_POST_FAIL       0X02
#define KEYBOARD_ERROR_UNDEFINED 0X03
#define KEYBOARD_A               0X04
#define KEYBOARD_B               0X05
#define KEYBOARD_C               0X06
#define KEYBOARD_D               0X07
#define KEYBOARD_E               0X08
#define KEYBOARD_F               0X09
#define KEYBOARD_G               0X0A
#define KEYBOARD_H               0X0B
#define KEYBOARD_I               0X0C
#define KEYBOARD_J               0X0D
#define KEYBOARD_K               0X0E
#define KEYBOARD_L               0X0F
#define KEYBOARD_M               0X10
#define KEYBOARD_N               0X11
#define KEYBOARD_O               0X12
#define KEYBOARD_P               0X13
#define KEYBOARD_Q               0X14
#define KEYBOARD_R               0X15
#define KEYBOARD_S               0X16
#define KEYBOARD_T               0X17
#define KEYBOARD_U               0X18
#define KEYBOARD_V               0X19
#define KEYBOARD_W               0X1A
#define KEYBOARD_X               0X1B
#define KEYBOARD_Y               0X1C
#define KEYBOARD_Z               0X1D
#define KEYBOARD_1               0x1E
#define KEYBOARD_2               0x1F
#define KEYBOARD_3               0x20
#define KEYBOARD_4               0x21
#define KEYBOARD_5               0x22
#define KEYBOARD_6               0x23
#define KEYBOARD_7               0x24
#define KEYBOARD_8               0x25
#define KEYBOARD_9               0x26
#define KEYBOARD_0               0x27
#define KEYBOARD_RETURN          0X28
#define KEYBOARD_ESCAPE          0X29
#define KEYBOARD_DELETE          0X2A
#define KEYBOARD_TAB             0X2B
#define KEYBOARD_SPACE           0X2C
#define KEYBOARD_DASH            0X2D
#define KEYBOARD_EQUAL           0X2E
#define KEYBOARD_SQBRACKET_OPEN  0X2F
#define KEYBOARD_SQBRACKET_CLOSE 0X30
#define KEYBOARD_BACKSLASH       0X31
#define KEYBOARD_NON_US_HASH     0X32
#define KEYBOARD_SEMICOLON       0X33
#define KEYBOARD_QUOTES          0X34
#define KEYBOARD_GRAVE_TILDE     0X35
#define KEYBOARD_COMMA           0X36
#define KEYBOARD_PERIOD          0X37
#define KEYBOARD_SLASH           0X38
#define KEYBOARD_CAPSLOCK        0X39
#define KEYBOARD_F1              0X3A
#define KEYBOARD_F2              0X3B
#define KEYBOARD_F3              0X3C
#define KEYBOARD_F4              0X3D
#define KEYBOARD_F5              0X3E
#define KEYBOARD_F6              0X3F
#define KEYBOARD_F7              0X40
#define KEYBOARD_F8              0X41
#define KEYBOARD_F9              0X42
#define KEYBOARD_F10             0X43
#define KEYBOARD_F11             0X44
#define KEYBOARD_F12             0X45
#define KEYBOARD_PRINTSCREEN     0X46
#define KEYBOARD_SCROLLLOCK      0X47
#define KEYBOARD_PAUSE           0X48
#define KEYBOARD_INSERT          0X49
#define KEYBOARD_HOME            0X4A
#define KEYBOARD_PAGEUP          0X4B
#define KEYBOARD_DELETE_FORWARD  0X4C
#define KEYBOARD_END             0X4D
#define KEYBOARD_PAGEDOWN        0X4E
#define KEYBOARD_RIGHT_ARROW     0X4F
#define KEYBOARD_LEFT_ARROW      0X50
#define KEYBOARD_DOWN_ARROW      0X51
#define KEYBOARD_UP_ARROW        0X52
#define KEYPAD_NUMLOCK           0X53
#define KEYPAD_DIVIDE            0X54
#define KEYPAD_PRODUCT           0X55
#define KEYPAD_MINUS             0X56
#define KEYPAD_PLUS              0X57
#define KEYPAD_RETURN            0X58
#define KEYPAD_1                 0X59
#define KEYPAD_2                 0X5A
#define KEYPAD_3                 0X5B
#define KEYPAD_4                 0X5C
#define KEYPAD_5                 0X5D
#define KEYPAD_6                 0X5E
#define KEYPAD_7                 0X5F
#define KEYPAD_8                 0X60
#define KEYPAD_9                 0X61
#define KEYPAD_0                 0X62
#define KEYPAD_QUOTE             0X63
#define KEYBOARD_NON_US_BCKSLASH 0X64
#define KEYBOARD_APPLICATION10   0X65
#define KEYBOARD_POWER9          0X66
#define KEYPAD_EQUAL             0X67
#define KEYBOARD_F13             0X68
#define KEYBOARD_F14             0X69
#define KEYBOARD_F15             0X6A
#define KEYBOARD_F16             0X6B
#define KEYBOARD_F17             0X6C
#define KEYBOARD_F18             0X6D
#define KEYBOARD_F19             0X6E
#define KEYBOARD_F20             0X6F
#define KEYBOARD_F21             0X70
#define KEYBOARD_F22             0X71
#define KEYBOARD_F23             0X72
#define KEYBOARD_F24             0X73
#define KEYBOARD_EXECUTE         0X74
#define KEYBOARD_HELP            0X75
#define KEYBOARD_MENU            0X76
#define KEYBOARD_SELECT          0X77
#define KEYBOARD_STOP            0X78
#define KEYBOARD_AGAIN           0X79
#define KEYBOARD_UNDO            0X7A
#define KEYBOARD_CUT             0X7B
#define KEYBOARD_COPY            0X7C
#define KEYBOARD_PASTE           0X7D
#define KEYBOARD_FIND            0X7E
#define KEYBOARD_MUTE            0X7F
#define KEYBOARD_VOLUME_UP       0X80
#define KEYBOARD_VOLUME_DOWN     0X81
#define KEYBOARD_LCKING_CAPSLOCK 0X82
#define KEYBOARD_LCKING_NUMLOCK  0X83
#define KEYBOARD_LCKING_SCRLLOCK 0X84
#define KEYPAD_COMMA             0X85
#define KEYPAD_EQUAL_SIGN        0X86
#define KEYBOARD_INTERNATIONAL1  0X87
#define KEYBOARD_INTERNATIONAL2  0X88
#define KEYBOARD_INTERNATIONAL3  0X89
#define KEYBOARD_INTERNATIONAL4  0X8A
#define KEYBOARD_INTERNATIONAL5  0X8B
#define KEYBOARD_INTERNATIONAL6  0X8C
#define KEYBOARD_INTERNATIONAL7  0X8D
#define KEYBOARD_INTERNATIONAL8  0X8E
#define KEYBOARD_INTERNATIONAL9  0X8F
#define KEYBOARD_LANG1           0X90
#define KEYBOARD_LANG2           0X91
#define KEYBOARD_LANG3           0X92
#define KEYBOARD_LANG4           0X93
#define KEYBOARD_LANG5           0X94
#define KEYBOARD_LANG6           0X95
#define KEYBOARD_LANG7           0X96
#define KEYBOARD_LANG8           0X97
#define KEYBOARD_LANG9           0X98
#define KEYBOARD_ALTERNATE_ERASE 0X99
#define KEYBOARD_SYSTEM_REQESET  0X9A
#define KEYBOARD_CANCEL          0X9B
#define KEYBOARD_CLEAR           0X9C
#define KEYBOARD_PRIOR           0X9D
#define KEYBOARD_RETURN2         0X9E
#define KEYBOARD_SEPARATOR       0X9F
#define KEYBOARD_OUT             0XA0
#define KEYBOARD_OPER            0XA1
#define KEYBOARD_CLEAR_AGAIN     0XA2
#define KEYBOARD_CRSEL           0XA3
#define KEYBOARD_EXSEL           0XA4
#define KEYPAD_00                0XB0
#define KEYPAD_000               0XB1
#define THOUSANDS_SEPARATOR      0XB2
#define DECIMAL_SEPARATOR        0XB3
#define CURRENCY_UNIT            0XB4
#define CURRENCY_SUBUNIT         0XB5
#define KEYPAD_PARENTHESES_OPEN  0XB6
#define KEYPAD_PARENTHESES_CLOSE 0XB7
#define KEYPAD_BRACE_OPEN        0XB8
#define KEYPAD_BRACE_CLOSE       0XB9
#define KEYPAD_TAB               0XBA
#define KEYPAD_BACKSPACE         0XBB
#define KEYPAD_A                 0XBC
#define KEYPAD_B                 0XBD
#define KEYPAD_C                 0XBE
#define KEYPAD_D                 0XBF
#define KEYPAD_E                 0XC0
#define KEYPAD_F                 0XC1
#define KEYPAD_XOR               0XC2
#define KEYPAD_POWER             0XC3
#define KEYPAD_PERCENT           0XC4
#define KEYPAD_LESS              0XC5
#define KEYPAD_GREATER           0XC6
#define KEYPAD_AMPERSAND         0XC7
#define KEYPAD_DB_AMPERSAND      0XC8
#define KEYPAD_VERTICAL_BAR      0XC9
#define KEYPAD_DB_VERTICAL_BAR   0XCA
#define KEYPAD_COLON             0XCB
#define KEYPAD_HASH              0XCC
#define KEYPAD_SPACE             0XCD
#define KEYPAD_AT                0XCE
#define KEYPAD_EXCLAMATION       0XCF
#define KEYPAD_MEMORY_STORE      0XD0
#define KEYPAD_MEMORY_RECALL     0XD1
#define KEYPAD_MEMORY_CLEAR      0XD2
#define KEYPAD_MEMORY_ADD        0XD3
#define KEYPAD_MEMORY_SUBTRACT   0XD4
#define KEYPAD_MEMORY_MULTIPLY   0XD5
#define KEYPAD_MEMORY_DIVIDE     0XD6
#define KEYPAD_PLUS_MINUS        0XD7
#define KEYPAD_CLEAR             0XD8
#define KEYPAD_CLEAR_ENTRY       0XD9
#define KEYPAD_BINARY            0XDA
#define KEYPAD_OCTAL             0XDB
#define KEYPAD_DECIMAL           0XDC
#define KEYPAD_HEXADECIMAL       0XDD
#define KEYBOARD_LEFT_CTRL       0XE0
#define KEYBOARD_LEFT_SHIFT      0XE1
#define KEYBOARD_LEFT_ALT        0XE2
#define KEYBOARD_LEFT_GUI        0XE3
#define KEYBOARD_RIGHT_CTRL      0XE4
#define KEYBOARD_RIGHT_SHIFT     0XE5
#define KEYBOARD_RIGHT_ALT       0XE6
#define KEYBOARD_RIGHT_GUI       0XE7

// USB IDs (예시)
#define KEYBOARD_USB_VID                 0x0483
#define KEYBOARD_USB_PID                 0xA0B0

// 풀스피드 IN EP 패킷 크기
#define KEYBOARD_EP_MAX_PACKET           64

// 폴링 주기 (1~10ms 권장)
#define KEYBOARD_POLL_INTERVAL_MS        1

// NKRO 범위: 0x04(A) ~ 0xA4 정도(원하는 만큼 줄이기/늘리기)
#define KEYBOARD_NKRO_MIN_USAGE          0x04
#define KEYBOARD_NKRO_MAX_USAGE          0xA4

// Report IDs
#define KEYBOARD_RID_BOOT                0x01
#define KEYBOARD_RID_NKRO                0x02

// Boot(8B) 구조
typedef struct __attribute__((packed)) {
    uint8_t modifiers; // E0~E7
    uint8_t reserved;
    uint8_t keys[6]; // 6KRO
} KeyboardBootReport;

// NKRO 비트맵: modifier 8bit + key bitmap
#define KEYBOARD_NKRO_BITS   ( (KEYBOARD_NKRO_MAX_USAGE - KEYBOARD_NKRO_MIN_USAGE + 1) )
#define KEYBOARD_NKRO_BYTES  ((KEYBOARD_NKRO_BITS + 7) / 8)

typedef struct __attribute__((packed)) {
    uint8_t mods; // E0~E7
    uint8_t bitmap[KEYBOARD_NKRO_BYTES]; // 0x04~0xA4 범위 비트필드
} keyboardNKROReport;

// Report Descriptor 바이트열/길이
extern const uint8_t keyboardReportDesc[];
extern const uint16_t keyboardReportDescSize;

#endif //KBOS_KEYBOARDREPORTER_H

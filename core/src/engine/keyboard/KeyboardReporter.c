//
// Created by 6gioc on 25. 10. 20..
//

#include "KeyboardReporter.h"

const uint8_t keyboardReportDesc[] = {
    // ===== Report ID 1: Boot Keyboard (8 bytes) =====
    0x05,0x01,       // Usage Page (Generic Desktop)
    0x09,0x06,       // Usage (Keyboard)
    0xA1,0x01,       // Collection (Application)
      0x85, KEYBOARD_RID_BOOT,        //   Report ID 1
      0x05,0x07,                 //   Usage Page (Key Codes)
      // Modifiers E0~E7
      0x19,0xE0, 0x29,0xE7,
      0x15,0x00, 0x25,0x01,
      0x75,0x01, 0x95,0x08,
      0x81,0x02,                //   Input (Data,Var,Abs)
      // Reserved
      0x75,0x08, 0x95,0x01,
      0x81,0x01,                //   Input (Const,Array,Abs)
      // 6 keycodes
      0x19,0x00, 0x29,0x65,
      0x15,0x00, 0x25,0x65,
      0x75,0x08, 0x95,0x06,
      0x81,0x00,                //   Input (Data,Array,Abs)
    0xC0,                       // End Collection

    // ===== Report ID 2: NKRO bitmap =====
    0x05,0x01,       // Usage Page (Generic Desktop)
    0x09,0x06,       // Usage (Keyboard)
    0xA1,0x01,       // Collection (Application)
      0x85, KEYBOARD_RID_NKRO,       //   Report ID 2
      0x05,0x07,                //   Usage Page (Key Codes)
      // Modifiers E0~E7
      0x19,0xE0, 0x29,0xE7,
      0x15,0x00, 0x25,0x01,
      0x75,0x01, 0x95,0x08,
      0x81,0x02,               // Input (Data,Var,Abs)
      // Key bitmap: KBD_NKRO_MIN_USAGE ~ KBD_NKRO_MAX_USAGE
      0x19, KEYBOARD_NKRO_MIN_USAGE,
      0x29, KEYBOARD_NKRO_MAX_USAGE,
      0x15,0x00, 0x25,0x01,
      0x75,0x01, 0x95, KEYBOARD_NKRO_BITS,
      0x81,0x02,               // Input (Data,Var,Abs)
      // 패딩(필요 시): 8배수 맞추기
      #if (KBD_NKRO_BITS % 8) != 0
        0x75, (uint8_t)(8 - (KBD_NKRO_BITS % 8)),
        0x95, 0x01,
        0x81, 0x01,             // Input (Const,Array,Abs)
      #endif
    0xC0
};

const uint16_t keyboardReportDescSize = sizeof(keyboardReportDesc);
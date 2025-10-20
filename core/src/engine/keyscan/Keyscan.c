//
// Created by 6gioc on 25. 10. 20.
//

#include "Keyscan.h"

#include <stdbool.h>

// Constants
osThreadId_t keyscanTaskHandle;
const osThreadAttr_t keyscanTaskAttributes = {
    .name = "keyscanTask",
    .stack_size = 128U * 8U,
    .priority = (osPriority_t) osPriorityRealtime,
};

const KeySwitch keySwitchNull;

void keyscanInit(void) {
    keyscanTaskHandle = osThreadNew(keyscanTask, NULL, &keyscanTaskAttributes);
}

void keyscanTask(void *argument) {
    while (true) {
#ifdef ENABLE_NUCLEO_BUTTON
        GPIO_PinState userButtonState = pinRead(userButtonPin);

#endif
    }
}

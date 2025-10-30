//
// Created by Gio Choi on 25. 10. 20.
//

#include "qwerty.h"
#include "../src/engine/keyscan/Keyscan.h"

// QWERTY Layout

void applyQWERTY(void) {
    applyQWERTYMainAction();
    applyQWERTYFunctionGroup1Action();
}

void applyQWERTYMainAction(void) {
    setKeySwitchAction(keySwitchBoard[0][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLCtrl);
    setKeySwitchAction(keySwitchBoard[0][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLShift);
    setKeySwitchAction(keySwitchBoard[0][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyCapsLock);
    setKeySwitchAction(keySwitchBoard[0][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyTab);
    if (keyboardLayout == KEYBOARD_60P || keyboardLayout == KEYBOARD_TKL || keyboardLayout == KEYBOARD_FULL) {
        setKeySwitchAction(keySwitchBoard[0][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyEscape);
    }
    else {
        setKeySwitchAction(keySwitchBoard[0][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyGraveTilde);
        setKeySwitchAction(keySwitchBoard[0][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyEscape);
    }

    setKeySwitchAction(keySwitchBoard[1][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLGui);
    setKeySwitchAction(keySwitchBoard[1][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[1][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyA);
    setKeySwitchAction(keySwitchBoard[1][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyQ);
    setKeySwitchAction(keySwitchBoard[1][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key1);

    setKeySwitchAction(keySwitchBoard[2][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLAlt);
    setKeySwitchAction(keySwitchBoard[2][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyZ);
    setKeySwitchAction(keySwitchBoard[2][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyS);
    setKeySwitchAction(keySwitchBoard[2][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyW);
    setKeySwitchAction(keySwitchBoard[2][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key2);
    setKeySwitchAction(keySwitchBoard[2][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF1);

    setKeySwitchAction(keySwitchBoard[3][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[3][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyX);
    setKeySwitchAction(keySwitchBoard[3][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyD);
    setKeySwitchAction(keySwitchBoard[3][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyE);
    setKeySwitchAction(keySwitchBoard[3][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key3);
    setKeySwitchAction(keySwitchBoard[3][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF2);

    setKeySwitchAction(keySwitchBoard[4][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[4][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyC);
    setKeySwitchAction(keySwitchBoard[4][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF);
    setKeySwitchAction(keySwitchBoard[4][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyR);
    setKeySwitchAction(keySwitchBoard[4][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key4);
    setKeySwitchAction(keySwitchBoard[4][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF3);

    setKeySwitchAction(keySwitchBoard[5][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[5][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyV);
    setKeySwitchAction(keySwitchBoard[5][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyG);
    setKeySwitchAction(keySwitchBoard[5][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyT);
    setKeySwitchAction(keySwitchBoard[5][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key5);
    setKeySwitchAction(keySwitchBoard[5][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF4);

    setKeySwitchAction(keySwitchBoard[6][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keySpace);
    setKeySwitchAction(keySwitchBoard[6][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyB);
    setKeySwitchAction(keySwitchBoard[6][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyH);
    setKeySwitchAction(keySwitchBoard[6][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyY);
    setKeySwitchAction(keySwitchBoard[6][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key6);
    setKeySwitchAction(keySwitchBoard[6][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF5);

    setKeySwitchAction(keySwitchBoard[7][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[7][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyN);
    setKeySwitchAction(keySwitchBoard[7][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyJ);
    setKeySwitchAction(keySwitchBoard[7][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyU);
    setKeySwitchAction(keySwitchBoard[7][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key7);
    setKeySwitchAction(keySwitchBoard[7][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF6);

    setKeySwitchAction(keySwitchBoard[8][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[8][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyM);
    setKeySwitchAction(keySwitchBoard[8][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyK);
    setKeySwitchAction(keySwitchBoard[8][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyI);
    setKeySwitchAction(keySwitchBoard[8][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key8);
    setKeySwitchAction(keySwitchBoard[8][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF7);

    setKeySwitchAction(keySwitchBoard[9][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[9][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyComma);
    setKeySwitchAction(keySwitchBoard[9][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyL);
    setKeySwitchAction(keySwitchBoard[9][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyO);
    setKeySwitchAction(keySwitchBoard[9][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key9);
    setKeySwitchAction(keySwitchBoard[9][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF8);

    if (keyboardLayout == KEYBOARD_60P || keyboardLayout == KEYBOARD_TKL || keyboardLayout == KEYBOARD_FULL) {
        setKeySwitchAction(keySwitchBoard[10][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyTypeFunction1);
    }
    else {
        setKeySwitchAction(keySwitchBoard[10][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRAlt);
    }
    setKeySwitchAction(keySwitchBoard[10][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPeriod);
    setKeySwitchAction(keySwitchBoard[10][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keySemiColon);
    setKeySwitchAction(keySwitchBoard[10][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyP);
    setKeySwitchAction(keySwitchBoard[10][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key0);
    setKeySwitchAction(keySwitchBoard[10][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF9);

    if (keyboardLayout == KEYBOARD_60P || keyboardLayout == KEYBOARD_TKL || keyboardLayout == KEYBOARD_FULL) {
        setKeySwitchAction(keySwitchBoard[11][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyTypeFunction2);
    }
    else {
        setKeySwitchAction(keySwitchBoard[11][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRGui);
    }
    setKeySwitchAction(keySwitchBoard[11][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keySlash);
    setKeySwitchAction(keySwitchBoard[11][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyQuote);
    setKeySwitchAction(keySwitchBoard[11][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keySquareBracketOpen);
    setKeySwitchAction(keySwitchBoard[11][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyMinus);
    setKeySwitchAction(keySwitchBoard[11][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF10);

    setKeySwitchAction(keySwitchBoard[12][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyMenu);
    setKeySwitchAction(keySwitchBoard[12][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[12][2], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[12][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keySquareBracketClose);
    setKeySwitchAction(keySwitchBoard[12][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyEqual);
    setKeySwitchAction(keySwitchBoard[12][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF11);

    setKeySwitchAction(keySwitchBoard[13][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRCtrl);
    setKeySwitchAction(keySwitchBoard[13][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRShift);
    setKeySwitchAction(keySwitchBoard[13][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyReturn);
    setKeySwitchAction(keySwitchBoard[13][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyBackSlash);
    setKeySwitchAction(keySwitchBoard[13][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyDelete);
    setKeySwitchAction(keySwitchBoard[13][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF12);

    setKeySwitchAction(keySwitchBoard[14][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLeftArrow);
    setKeySwitchAction(keySwitchBoard[14][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[14][2], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[14][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyDeleteForward);
    setKeySwitchAction(keySwitchBoard[14][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyInsert);
    setKeySwitchAction(keySwitchBoard[14][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPrintScreen);

    setKeySwitchAction(keySwitchBoard[15][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyDownArrow);
    setKeySwitchAction(keySwitchBoard[15][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyUpArrow);
    setKeySwitchAction(keySwitchBoard[15][2], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[15][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyEnd);
    setKeySwitchAction(keySwitchBoard[15][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyHome);
    setKeySwitchAction(keySwitchBoard[15][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyScrollLock);

    setKeySwitchAction(keySwitchBoard[16][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRightArrow);
    setKeySwitchAction(keySwitchBoard[16][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[16][2], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[16][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPageDown);
    setKeySwitchAction(keySwitchBoard[16][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPageUp);
    setKeySwitchAction(keySwitchBoard[16][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPause);

    setKeySwitchAction(keySwitchBoard[17][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad0);
    setKeySwitchAction(keySwitchBoard[17][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad1);
    setKeySwitchAction(keySwitchBoard[17][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad4);
    setKeySwitchAction(keySwitchBoard[17][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad7);
    setKeySwitchAction(keySwitchBoard[17][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadNumLock);

    setKeySwitchAction(keySwitchBoard[18][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[18][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad2);
    setKeySwitchAction(keySwitchBoard[18][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad5);
    setKeySwitchAction(keySwitchBoard[18][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad8);
    setKeySwitchAction(keySwitchBoard[18][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadDivide);

    setKeySwitchAction(keySwitchBoard[19][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadPeriod);
    setKeySwitchAction(keySwitchBoard[19][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad3);
    setKeySwitchAction(keySwitchBoard[19][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad6);
    setKeySwitchAction(keySwitchBoard[19][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad9);
    setKeySwitchAction(keySwitchBoard[19][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadMultiply);

    setKeySwitchAction(keySwitchBoard[20][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadEnter);
    setKeySwitchAction(keySwitchBoard[20][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[20][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadPlus);
    setKeySwitchAction(keySwitchBoard[20][3], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction(keySwitchBoard[20][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadMinus);
}

void applyQWERTYFunctionGroup1Action(void) {
    setKeySwitchAction(keySwitchBoard[0][4], KEYBOARD_FUNCTION_GROUP_F1, &keyGraveTilde);

    setKeySwitchAction(keySwitchBoard[1][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF1);
    setKeySwitchAction(keySwitchBoard[2][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF2);
    setKeySwitchAction(keySwitchBoard[3][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF3);
    setKeySwitchAction(keySwitchBoard[4][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF4);
    setKeySwitchAction(keySwitchBoard[5][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF5);
    setKeySwitchAction(keySwitchBoard[6][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF6);
    setKeySwitchAction(keySwitchBoard[7][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF7);
    setKeySwitchAction(keySwitchBoard[8][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF8);
    setKeySwitchAction(keySwitchBoard[9][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF9);
    setKeySwitchAction(keySwitchBoard[10][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF10);
    setKeySwitchAction(keySwitchBoard[11][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF11);
    setKeySwitchAction(keySwitchBoard[12][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF12);

    setKeySwitchAction(keySwitchBoard[1][2], KEYBOARD_FUNCTION_GROUP_F1, &keyLeftArrow);
    setKeySwitchAction(keySwitchBoard[2][2], KEYBOARD_FUNCTION_GROUP_F1, &keyDownArrow);
    setKeySwitchAction(keySwitchBoard[3][2], KEYBOARD_FUNCTION_GROUP_F1, &keyRightArrow);
    setKeySwitchAction(keySwitchBoard[2][3], KEYBOARD_FUNCTION_GROUP_F1, &keyUpArrow);

    setKeySwitchAction(keySwitchBoard[13][4], KEYBOARD_FUNCTION_GROUP_F1, &keyDeleteForward);
}

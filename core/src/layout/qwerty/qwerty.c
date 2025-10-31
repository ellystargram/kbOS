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
    setKeySwitchAction((KeySwitch*)keySwitchBoard[0][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLCtrl);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[0][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLShift);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[0][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyCapsLock);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[0][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyTab);
    if (keyboardLayout == KEYBOARD_60P || keyboardLayout == KEYBOARD_TKL || keyboardLayout == KEYBOARD_FULL) {
        setKeySwitchAction((KeySwitch*)keySwitchBoard[0][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyEscape);
    }
    else {
        setKeySwitchAction((KeySwitch*)keySwitchBoard[0][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyGraveTilde);
        setKeySwitchAction((KeySwitch*)keySwitchBoard[0][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyEscape);
    }

    setKeySwitchAction((KeySwitch*)keySwitchBoard[1][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLGui);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[1][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[1][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyA);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[1][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyQ);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[1][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key1);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[2][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLAlt);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[2][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyZ);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[2][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyS);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[2][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyW);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[2][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key2);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[2][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF1);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[3][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[3][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyX);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[3][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyD);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[3][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyE);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[3][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key3);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[3][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF2);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[4][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[4][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyC);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[4][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[4][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyR);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[4][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key4);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[4][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF3);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[5][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[5][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyV);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[5][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyG);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[5][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyT);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[5][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key5);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[5][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF4);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[6][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keySpace);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[6][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyB);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[6][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyH);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[6][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyY);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[6][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key6);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[6][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF5);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[7][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[7][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyN);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[7][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyJ);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[7][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyU);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[7][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key7);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[7][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF6);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[8][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[8][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyM);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[8][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyK);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[8][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyI);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[8][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key8);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[8][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF7);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[9][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[9][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyComma);
    setKeySwitchAction((KeySwitch*)(KeySwitch*)keySwitchBoard[9][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[9][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyO);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[9][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key9);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[9][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF8);

    if (keyboardLayout == KEYBOARD_60P || keyboardLayout == KEYBOARD_TKL || keyboardLayout == KEYBOARD_FULL) {
        setKeySwitchAction((KeySwitch*)keySwitchBoard[10][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyTypeFunction1);
    }
    else {
        setKeySwitchAction((KeySwitch*)keySwitchBoard[10][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRAlt);
    }
    setKeySwitchAction((KeySwitch*)keySwitchBoard[10][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPeriod);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[10][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keySemiColon);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[10][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyP);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[10][4], KEYBOARD_FUNCTION_GROUP_MAIN, &key0);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[10][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF9);

    if (keyboardLayout == KEYBOARD_60P || keyboardLayout == KEYBOARD_TKL || keyboardLayout == KEYBOARD_FULL) {
        setKeySwitchAction((KeySwitch*)keySwitchBoard[11][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyTypeFunction2);
    }
    else {
        setKeySwitchAction((KeySwitch*)keySwitchBoard[11][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRGui);
    }
    setKeySwitchAction((KeySwitch*)keySwitchBoard[11][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keySlash);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[11][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyQuote);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[11][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keySquareBracketOpen);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[11][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyMinus);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[11][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF10);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[12][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyMenu);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[12][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[12][2], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[12][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keySquareBracketClose);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[12][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyEqual);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[12][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF11);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[13][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRCtrl);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[13][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRShift);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[13][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keyReturn);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[13][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyBackSlash);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[13][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyDelete);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[13][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyF12);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[14][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyLeftArrow);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[14][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[14][2], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[14][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyDeleteForward);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[14][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyInsert);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[14][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPrintScreen);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[15][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyDownArrow);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[15][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keyUpArrow);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[15][2], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[15][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyEnd);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[15][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyHome);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[15][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyScrollLock);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[16][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keyRightArrow);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[16][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[16][2], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[16][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPageDown);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[16][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPageUp);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[16][5], KEYBOARD_FUNCTION_GROUP_MAIN, &keyPause);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[17][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad0);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[17][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad1);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[17][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad4);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[17][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad7);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[17][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadNumLock);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[18][0], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[18][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad2);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[18][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad5);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[18][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad8);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[18][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadDivide);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[19][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadPeriod);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[19][1], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad3);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[19][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad6);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[19][3], KEYBOARD_FUNCTION_GROUP_MAIN, &keypad9);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[19][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadMultiply);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[20][0], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadEnter);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[20][1], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[20][2], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadPlus);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[20][3], KEYBOARD_FUNCTION_GROUP_MAIN, NULL);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[20][4], KEYBOARD_FUNCTION_GROUP_MAIN, &keypadMinus);
}

void applyQWERTYFunctionGroup1Action(void) {
    setKeySwitchAction((KeySwitch*)keySwitchBoard[0][4], KEYBOARD_FUNCTION_GROUP_F1, &keyGraveTilde);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[1][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF1);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[2][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF2);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[3][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF3);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[4][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF4);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[5][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF5);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[6][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF6);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[7][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF7);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[8][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF8);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[9][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF9);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[10][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF10);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[11][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF11);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[12][4], KEYBOARD_FUNCTION_GROUP_F1, &keyF12);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[1][2], KEYBOARD_FUNCTION_GROUP_F1, &keyLeftArrow);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[2][2], KEYBOARD_FUNCTION_GROUP_F1, &keyDownArrow);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[3][2], KEYBOARD_FUNCTION_GROUP_F1, &keyRightArrow);
    setKeySwitchAction((KeySwitch*)keySwitchBoard[2][3], KEYBOARD_FUNCTION_GROUP_F1, &keyUpArrow);

    setKeySwitchAction((KeySwitch*)keySwitchBoard[13][4], KEYBOARD_FUNCTION_GROUP_F1, &keyDeleteForward);
}

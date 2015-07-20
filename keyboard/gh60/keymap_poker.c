#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, \
        A,   S,   D,   F,   F,   G,   H,   J,   K,   L, \
        Z,   X,   C,   V,   B,   N,   M,   COMM,   DOT, \
        1,          2,                     3),
};
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(6),  // to Fn overlay
};

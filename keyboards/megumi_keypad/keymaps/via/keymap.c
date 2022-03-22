#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ S │ D │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_default(
        KC_A,   KC_S,   KC_D
    ),
    
    [1] = LAYOUT_default(
        KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    
    [2] = LAYOUT_default(
        KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    
    [3] = LAYOUT_default(
        KC_TRNS,   KC_TRNS,   KC_TRNS
    )
};

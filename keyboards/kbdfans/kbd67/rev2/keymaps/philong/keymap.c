 /* Copyright 2020 Hekeke 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details.  
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */ 

#include QMK_KEYBOARD_H

enum custom_keycodes {
    KC_MAC1 = SAFE_RANGE,
	KC_MAC2,
	KC_MAC3,
	KC_MAC4,
	KC_MAC5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        
    /* Base layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│MA1│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ^ │     │MA2│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐Ent ├───┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ # │    │MA3│
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
     * │Shft│ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ ↑ │MA5│
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┼───┴┬──┴─┬─┴──┬───┼───┼───┤
     * │Ctrl│LAlt│LGUI│        Space        │RAlt│ FN │RCtl│ ← │ ↓ │ → │
     * └────┴────┴────┴─────────────────────┴────┴────┴────┴───┴───┴───┘ 
     */
    [0] = LAYOUT_65_iso(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_MAC1,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_MAC2,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,  KC_MAC3,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_MAC5,
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Function layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
     * │`  │ F1│ F2│ F3│ F4│ F5│ F6│ F7│ F8│ F9│F10│F11│F12│       │HU+│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │     │   │   │   │   │   │   │   │   │   │   │   │PGU│MAC4 │HU-│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    ├───┤
     * │      │   │   │   │   │   │   │   │   │   │   │   │PGD│    │SA+│
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
     * │    │   │   │   │   │   │   │   │   │   │   │   │ PSCR │INS│SA-│
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┼───┴┬──┴─┬─┴──┬───┼───┼───┤
     * │    │    │    │                     │    │    │HOME│END│DEL│TOG│
     * └────┴────┴────┴─────────────────────┴────┴────┴────┴───┴───┴───┘
     */

    [1] = LAYOUT_65_iso(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, RGB_HUI,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP,          RGB_HUD,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGDN, KC_MAC4, RGB_SAI,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_INS,  RGB_SAD,
        _______, _______, _______,                   _______,                            _______, _______, KC_HOME, KC_END,  KC_DEL,  RGB_TOG
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case KC_MAC1:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("a"));
        }
        break;
    case KC_MAC2:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("c"));
        }
        break;
    case KC_MAC3:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("v"));
        }
        break;
    case KC_MAC4:
        if (record->event.pressed) {
			SEND_STRING("`");
			SEND_STRING(SS_DELAY(10)"quit");
			SEND_STRING(SS_DELAY(10) SS_TAP(X_ENT));
        }
        break;
    case KC_MAC5:
        if (record->event.pressed) {
			SEND_STRING(SS_LCTL("z"));        
			}
        break;		
    }
    return true;
};

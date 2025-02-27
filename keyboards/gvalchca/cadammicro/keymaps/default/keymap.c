#include QMK_KEYBOARD_H

enum _layer {
  _MAIN,
  _FUNC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_MAIN] = LAYOUT(
          KC_F1,  KC_F2, KC_F3, KC_F4,         \
  KC_F5,  KC_F6,  KC_F7, KC_F8, KC_F9, KC_F10, \
  KC_F11, KC_F12, KC_1,  KC_2,  KC_3,  KC_4,   \
  KC_5,   KC_6,   KC_7,  KC_8,  KC_9,  KC_0,   \
  KC_Q,   KC_W,   KC_E,  KC_R,  KC_T,  KC_Y,   \
          KC_U,   KC_I,  KC_O,  KC_P
  ),

[_FUNC] = LAYOUT(
       ___, ___, ___, ___,      \
  ___, ___, ___, ___, ___, ___, \
  ___, ___, ___, ___, ___, ___, \
  ___, ___, ___, ___, ___, ___, \
  ___, ___, ___, ___, ___, ___, \
       ___, ___, ___, ___     
  )
};

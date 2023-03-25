 /* Copyright 2021 OpenAnnePro community
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

#include QMK_KEYBOARD_H

enum anne_pro_layers {
    BASE,
    FN1,
};

// clang-format off
// Key symbols are based on QMK. Use them to remap your keyboard
/*
* Layer BASE
* ,-----------------------------------------------------------------------------------------.
* |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |    Bksp   |
* |-----------------------------------------------------------------------------------------+
* | Tab    |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  |  [  |  ]  |   \    |
* |-----------------------------------------------------------------------------------------+
* | Caps    |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |    Enter    |
* |-----------------------------------------------------------------------------------------+
* | Shift      |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |       UP       |
* |-----------------------------------------------------------------------------------------+
* | Ctrl  |  OPT  |  CMD  |               space             |  CMD  |  LEFT |  DOWN | RIGHT |
* \-----------------------------------------------------------------------------------------/
*/
 const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [BASE] = LAYOUT_60_ansi( /* Base */
    KC_GRV,    KC_1,    KC_2,    KC_3, KC_4, KC_5, KC_6,   KC_7, KC_8,    KC_9,    KC_0,             KC_MINS,          KC_EQL,        KC_BSPC,
    KC_TAB,    KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y,   KC_U, KC_I,    KC_O,    KC_P,             KC_LBRC,          KC_RBRC,       KC_BSLS,
    MO(FN1),   KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H,   KC_J, KC_K,    KC_L,    KC_SCLN,          KC_QUOT,          KC_ENT,
    KC_LSFT,            KC_Z,    KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M,    KC_COMM, KC_DOT,           KC_SLSH,          KC_UP,
    KC_LCTL,   KC_LOPT, KC_LCMD,                   KC_SPC,                KC_RCMD, KC_LEFT,          KC_DOWN,          KC_RGHT
),
  /*
  * Layer FN1
  * ,-----------------------------------------------------------------------------------------.
  * | Esc |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |           |
  * |-----------------------------------------------------------------------------------------+
  * |        | BT1 | BT2 | BT3 | BT4 |     |     |     |     |     | MUTE | V-DWN | V-UP |    |
  * |-----------------------------------------------------------------------------------------+
  * |         |     |     |     |     |     |     |     |     | MPRV | MPLY| MNXT|            |
  * |-----------------------------------------------------------------------------------------+
  * |           |      |     |     |     |     |     |     |     |     |     |                |
  * |-----------------------------------------------------------------------------------------+
  * |       |       |       |                                 |       |       |       |       |
  * \-----------------------------------------------------------------------------------------/
  *
  */
 [FN1] = LAYOUT_60_ansi( /* FN1 */
    KC_ESC,  KC_F1,      KC_F2,       KC_F3,      KC_F4,      KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  _______,
    _______, KC_AP2_BT1, KC_AP2_BT2,  KC_AP2_BT3, KC_AP2_BT4, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD,  KC_VOLU, _______,
    _______, _______,    _______,     _______,    _______,    _______, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT,  _______,
    _______,             _______,     _______,    _______,    _______, _______, _______, _______, _______, _______, _______,  _______,
    _______, _______,    _______,                            _______,                             _______, _______, _______,  _______
),
};
// clang-format on

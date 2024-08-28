/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Tap dance declarations
enum {
    TD_LSHIFT_CAPS,
};

// Tap dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [TD_LSHIFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(

   /* QWERTY
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * | Esc  |  Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |BackSP|
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |LShift/CapLock |   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |  ;:  |  '"  |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |Tab  |  Z  |   X  |   C  |   V  |   B  |--------.   .-------|   N  |   M  |  ,;  |  .:  |  -_  |AltGr |
    * `-----------------------------------------/       /     \      \-----------------------------------------'
    *                         | LCTRL |LOWER | /Space  /       \Enter \  |HIGHER| LAlt |
    *                          `---------------------'           '------''-------------'
    */

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      TD(TD_LSHIFT_CAPS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(

   /* 1
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * | LAlt  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7   |   8   |   9   |   0  | BackSP |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |LShift|      |    |Paus/play| volUp  |     |                  |  Left |  Down |  Up |  Right |PrintScreen| Del |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |Tab  |     |      |  Prev  | volDown | Next |--------..-------|  Win |  pageUp   | pageDown |         |          |      |
    * `-----------------------------------------/       /     \      \-----------------------------------------'
    *                         | LCTRL |LOWER | /Space  /       \Enter \  |HIGHER| LAlt |
    *                          `---------------------'           '------''-------------'
    */

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_LALT, XXXXXXX, KC_MPLY, KC_VOLU, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_PRINT_SCREEN, KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB, XXXXXXX, XXXXXXX, KC_MPRV, KC_VOLD, KC_MNXT,                      KC_LEFT_GUI, KC_PGDN, KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL, _______,  KC_SPC,     KC_ENT,   MO(3), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(

    /* 2
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * | `~  |   !   |   @  |   #  |   $  |   %  |                    |   ^  |   &   |   *   |   (   |   )  | BackSP |
    * |------+------+------+------+------+------|                    |------+-------+-------+-------+------+------|
    * |  F1 |  F2  |  F3  |  F4  |  F5  |  F6  |                     |  {   |   }  |   |   |   =   |  -   |  +   |
    * |------+------+------+------+------+------|                    |------+------+-------+-------+------+------|
    * |  F7 |  F8  |  F9  |  F10  |  F11  |  F12  |--------. .-------|  [   |   ]  |   \   |   _   |   = |      |
    * `-----------------------------------------/       /     \      \-------------------------------------------'
    *                         | LCTRL |LOWER | /Space  /       \Enter \  |HIGHER| LAlt |
    *                          `---------------------'           '------''-------------'
    */

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_GRV, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                      KC_LCBR, KC_RCBR, KC_PIPE, KC_EQL, KC_MINS,  KC_PLUS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                      KC_LBRC, KC_RBRC, KC_BSLS, KC_UNDS, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UG_TOGG,                      KC_PWR, KC_SLEP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_MOD,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
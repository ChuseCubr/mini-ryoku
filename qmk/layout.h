/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#pragma once

/* Mod Taps */

/* Base Layer */
#define MT_Z LGUI_T(KC_Z)
#define MT_X LALT_T(KC_X)
#define MT_C LCTL_T(KC_C)
#define MT_D LSFT_T(KC_D)
#define MT_V LCTL_T(KC_V)

#define MT_H RSFT_T(KC_H)
#define MT_COMM RCTL_T(KC_COMM)
#define MT_DOT RALT_T(KC_DOT)
#define MT_SLSH RGUI_T(KC_SLSH)

#define LT_TAB LT(_FUN, KC_TAB)
#define LT_BSPC LT(_SYM, KC_BSPC)

/* Sym Layer */
#define MT_GRV LGUI_T(KC_GRV)
#define MT_2 LALT_T(KC_2)
#define MT_3 LCTL_T(KC_3)
#define MT_4 LSFT_T(KC_4)

#define MT_ESC RCTL_T(KC_ESC)
#define MT_DEL RALT_T(KC_DEL)

/* Fun Layer */
#define MT_F1 LALT_T(KC_F1)
#define MT_F2 LCTL_T(KC_F2)
#define MT_F3 LSFT_T(KC_F3)

#define MT_MRWD RSFT_T(KC_MRWD)
#define MT_MPLY RCTL_T(KC_MPLY)
#define MT_MFFD RALT_T(KC_MFFD)
#define MT_MUTE RGUI_T(KC_MUTE)

/* Layout */

#define _BASE_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | Q       | W       | F       | P       | B       |    | J       | L       | U       | Y       | ' "     |   */\
       KC_Q    , KC_W    , KC_F    , KC_P    , KC_B    ,      KC_J    , KC_L    , KC_U    , KC_Y    , KC_QUOT ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | A       | R       | S       | T       | G       |    | M       | N       | E       | I       | O       |   */\
       KC_A    , KC_R    , KC_S    , KC_T    , KC_G    ,      KC_M    , KC_N    , KC_E    , KC_I    , KC_O    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Z       | X       | C       | D       | V       |    | K       | H       | , <     | . >     | / ?     |   */\
       MT_Z    , MT_X    , MT_C    , MT_D    , MT_V    ,      KC_K    , MT_H    , MT_COMM , MT_DOT  , MT_SLSH ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | SPACE   | TAB     |    | ENTER   | BSPC    |                                 */\
                                     KC_SPC  , LT_TAB  ,      KC_ENT  , LT_BSPC
/*                                 `-------------------'    `-------------------'                                 */

#define _SYM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | [ {     | 5 %     | 6 ^     | 7 &     | ] }     |    | PG UP   | HOME    | ▲       | END     | PSCR    |   */\
       KC_LBRC , KC_5    , KC_6    , KC_7    , KC_RBRC ,      KC_PGUP , KC_HOME , KC_UP   , KC_END  , KC_PSCR ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | ; :     | 9 (     | 0 )     | 1 !     | = +     |    | CAPS    | ◀       | ▼       | ▶       | INSERT  |   */\
       KC_SCLN , KC_9    , KC_0    , KC_1    , KC_EQL  ,      KC_CAPS , KC_LEFT , KC_DOWN , KC_RGHT , KC_INS  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | ` ~     | 2 @     | 3 #     | 4 $     | \ |     |    | PG DN   | SHIFT   | ESC     | DEL     | RGUI    |   */\
       MT_GRV  , MT_2    , MT_3    , MT_4    , KC_BSLS ,      KC_PGDN , KC_RSFT , MT_ESC  , MT_DEL  , KC_RGUI ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | - _     | 8 *     |    |         |         |                                 */\
                                     KC_MINS , KC_8    ,      KC_NO   , KC_TRNS
/*                                 `-------------------'    `-------------------'                                 */

#define _FUN_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   |         | F7      | F8      | F9      | F12     |    | ⇑       | ⇐       | ↑       | ⇒       | VOL +   |   */\
       KC_NO   , KC_F7   , KC_F8   , KC_F9   , KC_F12  ,      KC_WH_U , KC_WH_L , KC_MS_U , KC_WH_R , KC_VOLU ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | ESC     | F4      | F5      | F6      | F11     |    | MIDDLE  | ←       | ↓       | →       | VOL -   |   */\
       KC_ESC  , KC_F4   , KC_F5   , KC_F6   , KC_F11  ,      KC_BTN3 , KC_MS_L , KC_MS_D , KC_MS_R , KC_VOLD ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | LGUI    | F1      | F2      | F3      | F10     |    | ⇓       | <<      | PLAY    | >>      | MUTE    |   */\
       KC_LGUI , MT_F1   , MT_F2   , MT_F3   , KC_F10  ,      KC_WH_D , MT_MRWD , MT_MPLY , MT_MFFD , MT_MUTE ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    | RIGHT   | LEFT    |                                 */\
                                     KC_NO   , KC_TRNS ,      KC_BTN2 , KC_BTN1
/*                                 `-------------------'    `-------------------'                                 */

/* For Vial users who want blank layers to map experimental layers onto */
#define _BLANK_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   |         |         |         |         |         |    |         |         |         |         |         |   */\
       KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,      KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         |         |         |         |         |    |         |         |         |         |         |   */\
       KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,      KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         |         |         |         |         |    |         |         |         |         |         |   */\
       KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,      KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     KC_NO   , KC_NO   ,      KC_NO   , KC_NO
/*                                 `-------------------'    `-------------------'                                 */


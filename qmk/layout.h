/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include "keycodes.h"

#pragma once

/* Layout */

#define _BASE_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | Q       | W       | F       | P       | B       |    | J       | L       | U       | Y       | BSPC    |   */\
       KC_Q    , KC_W    , KC_F    , KC_P    , KC_B    ,      KC_J    , KC_L    , KC_U    , KC_Y    , KC_BSPC ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | A       | R       | S       | T       | G       |    | M       | N       | E       | I       | O       |   */\
       KC_A    , KC_R    , KC_S    , KC_T    , KC_G    ,      KC_M    , KC_N    , KC_E    , KC_I    , KC_O    ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | Z       | X       | C       | D       | V       |    | K       | H       | , <     | . >     | / ?     |   */\
       MT_Z    , MT_X    , MT_C    , MT_D    , MT_V    ,      KC_K    , MT_H    , MT_COMM , MT_DOT  , MT_SLSH ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | SPC     | TAB     |    | ENT     | OSL SYM |                                 */\
                                     KC_SPC  , LT_TAB  ,      KC_ENT  , OSL_SYM
/*                                 `-------------------'    `-------------------'                                 */

#define _SYM_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | [ {     | 5 %     | 6 ^     | 7 &     | ] }     |    | PG UP   | HOME    | UP      | END     | BSPC    |   */\
       KC_LBRC , KC_5    , KC_6    , KC_7    , KC_RBRC ,      KC_PGUP , KC_HOME , KC_UP   , KC_END  , KC_BSPC ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | ; :     | 9 (     | 0 )     | 1 !     | = +     |    | PRTSC   | LEFT    | DOWN    | RIGHT   | DEL     |   */\
       KC_SCLN , KC_9    , KC_0    , KC_1    , KC_EQL  ,      KC_PSCR , KC_LEFT , KC_DOWN , KC_RGHT , KC_DEL  ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | ` ~     | 2 @     | 3 #     | 4 $     | \ |     |    | PG DN   | SHIFT   | CTRL    | ALT     | GUI     |   */\
       MT_GRV  , MT_2    , MT_3    , MT_4    , KC_BSLS ,      KC_PGDN , KC_RSFT , KC_RCTL , KC_RALT , KC_RGUI ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | SPC     | 8 *     |    | ENTER   | OSL HOME|                                 */\
                                     KC_SPC  , KC_8    ,      KC_ENT  , OSL_COPY
/*                                 `-------------------'    `-------------------'                                 */

#define _FUN_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | TO GAME | F4      | F5      | F6      | F8      |    | F12     | WH DOWN | MS UP   | WH UP   | VOL UP  |   */\
       TO_GAME , KC_F4   , KC_F5   , KC_F6   , KC_F9   ,      KC_F12  , KC_WH_D , KC_MS_U , KC_WH_U , KC_VOLU ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         | MIDDLE  | RIGHT   | LEFT    | F7      |    | F11     | MS LEFT | MS DOWN | MS RGHT | VOL DWN |   */\
       KC_NO   , KC_BTN3 , KC_BTN2 , KC_BTN1 , KC_F8   ,      KC_F11  , KC_MS_L , KC_MS_D , KC_MS_R , KC_VOLD ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | LGUI    | F1      | F2      | F3      | F6      |    | F10     | PREV TR | PLAY    | NEXT TR | MUTE    |   */\
       KC_LGUI , MT_F1   , MT_F2   , MT_F3   , KC_F7   ,      KC_F10  , MT_MPRV , MT_MPLY , MT_MNXT , MT_MUTE ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         | OSL SYM |                                 */\
                                     KC_NO   , KC_TRNS ,      KC_NO   , OSL_SYM
/*                                 `-------------------'    `-------------------'                                 */

#define _GAME1_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | ` ~     | 1 !     | 2 @     | 3 #     | ] }     |    |         |         | UP      |         | TO HOME |   */\
       KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    ,      KC_NO   , KC_NO   , KC_UP   , KC_NO   , TO_HOME ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | TAB     | Q       | W       | E       | R       |    |         | LEFT    | DOWN    | RIGHT   |         |   */\
       KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    ,      KC_NO   , KC_LEFT , KC_DOWN , KC_RGHT , KC_NO   ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | CTRL    | A       | S       | D       | F       |    |         |         | , <     | . >     | / ?     |   */\
       KC_LCTL , KC_A    , KC_S    , KC_D    , KC_F    ,      KC_NO   , KC_NO   , KC_COMM , KC_DOT  , KC_SLSH ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 | SPACE   | OSL G2  |    | ENTER   |         |                                 */\
                                     KC_SPC  , OSL_G2  ,      KC_ENT  , KC_NO
/*                                 `-------------------'    `-------------------'                                 */

#define _GAME2_LAYOUT \
/*   ,-------------------------------------------------.    ,-------------------------------------------------.   */\
/*   | ESC     | F1      | F2      | F3      |         |    |         |         |         |         |         |   */\
       KC_ESC  , KC_F1   , KC_F2   , KC_F3   , KC_TRNS ,      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   | P       | Y       |         | H       | G       |    |         |         |         |         |         |   */\
       KC_P    , KC_Y    , KC_TRNS , KC_H    , KC_G    ,      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     \
/*   |-------------------------------------------------|    |-------------------------------------------------|   */\
/*   |         | Z       | X       | C       | B       |    |         |         |         |         |         |   */\
       KC_TRNS , KC_Z    , KC_X    , KC_C    , KC_B    ,      KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS , KC_TRNS ,     \
/*   `-------------------------------------------------|    |-------------------------------------------------'   */\
/*                                 |         |         |    |         |         |                                 */\
                                     KC_TRNS , KC_TRNS ,      KC_TRNS , KC_TRNS
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


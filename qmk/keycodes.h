/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#pragma once

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

/* Sym Layer */
#define MT_GRV LGUI_T(KC_GRV)
#define MT_2 LALT_T(KC_2)
#define MT_3 LCTL_T(KC_3)
#define MT_4 LSFT_T(KC_4)

/* Fun Layer */
#define MT_F1 LALT_T(KC_F1)
#define MT_F2 LCTL_T(KC_F2)
#define MT_F3 LSFT_T(KC_F3)

#define MT_MPRV RSFT_T(KC_MPRV)
#define MT_MPLY RCTL_T(KC_MPLY)
#define MT_MNXT RALT_T(KC_MNXT)
#define MT_MUTE RGUI_T(KC_MUTE)

/* Layers */
#define OSL_SYM OSL(_SYM)
#define OSL_COPY OSL(_HOME_COPY)
#define OSL_G2 OSL(_GAME2)
#define TO_GAME TO(_GAME1)
#define TO_HOME TO(_HOME)

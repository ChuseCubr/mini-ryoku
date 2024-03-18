/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include "keycodes.h"

/* Defining Combos for non-Vial boards */
enum combos {
  WF_ESC,
  FP_EXC,
  LU_MINS,
  UY_QUOT,

  WFP_CAPS,
  NEI_HOME,
  HCP_SYM,
  LUY_FUN
};

const uint16_t PROGMEM wf_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM fp_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM lu_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM uy_combo[] = {KC_U, KC_Y, COMBO_END};

const uint16_t PROGMEM luy_combo[] = {KC_L, KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM nei_combo[] = {KC_N, KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM hcp_combo[] = {MT_H, MT_COMM, MT_DOT, COMBO_END};
const uint16_t PROGMEM wfp_combo[] = {KC_W, KC_F, KC_P, COMBO_END};

combo_t key_combos[] = {
  [WF_ESC] = COMBO(wf_combo, KC_ESC),
  [FP_EXC] = COMBO(fp_combo, LSFT(KC_1)),
  [LU_MINS] = COMBO(lu_combo, KC_MINS),
  [UY_QUOT] = COMBO(uy_combo, KC_QUOT),

  [WFP_CAPS] = COMBO(wfp_combo, KC_CAPS),
  [NEI_HOME] = COMBO(nei_combo, TO(_HOME)),
  [HCP_SYM] = COMBO(hcp_combo, TO(_SYM)),
  [LUY_FUN] = COMBO(luy_combo, TO(_FUN))
};

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
  switch (get_highest_layer(default_layer_state)) {
		/* you can add cases for layers you would like to exclude */
		/* for example, I have gaming layers in the `layer_number` enum like so: */
		// case _GAME1:
		// case _GAME2:
		// 	return false;
		default:
			return true;
  }
}

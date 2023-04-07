/* Copyright 2023 ChuseCubr */
/* https://github.com/ChuseCubr/mini-ryoku */

/* This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include QMK_KEYBOARD_H

#include "layout.h"

/* for >34 key users, replace this line with an include statement for the mask file */
/* example mask files are included for the Lily58 and Corne keyboards for reference */
#include "masks/sweep.h"
// #include "masks/lily58.h"
// #include "masks/crkbd.h"

enum layer_number {
  _BASE = 0,
  _SYM,
  _FUN,
};

/* see https://github.com/ChuseCubr/mini-ryoku for layout details */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_mask(_BASE_LAYOUT),
  [_SYM] = LAYOUT_mask(_SYM_LAYOUT),
  [_FUN] = LAYOUT_mask(_FUN_LAYOUT),
};

#ifdef REPEAT_KEY_ENABLE
#include "repeat.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  process_repeat_key(keycode, record);

  mod_state = get_mods();
  oneshot_mod_state = get_oneshot_mods();
  return true;
}
#endif


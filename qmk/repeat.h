/* Precondition's implementation found at https://github.com/precondition/dactyl-manuform-keymap/blob/main/keymap.c#L303 */

#pragma once

uint8_t mod_state;
uint8_t oneshot_mod_state;
uint16_t last_keycode;

enum repeat_keycodes {
  REPEAT = SAFE_RANGE
};

void process_repeat_key(uint16_t keycode, const keyrecord_t *record);


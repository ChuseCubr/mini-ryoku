/* Precondition's implementation found at https://github.com/precondition/dactyl-manuform-keymap/blob/main/keymap.c#L303 */

#include QMK_KEYBOARD_H
#include "repeat.h"
 
inline uint8_t get_tap_kc(uint16_t dual_role_key) {
  // Used to extract the basic tapping keycode from a dual-role key.
  // Example: get_tap_kc(MT(MOD_RSFT, KC_E)) == KC_E
  return dual_role_key & 0xFF;
}

uint16_t last_keycode = KC_NO;
void process_repeat_key(uint16_t keycode, const keyrecord_t *record) {
  static uint8_t last_modifier = 0;
  if (keycode != REPEAT) {
    // Early return when holding down a pure layer key
    // to retain modifiers
    switch (keycode) {
      case QK_DEF_LAYER ... QK_DEF_LAYER_MAX:
      case QK_MOMENTARY ... QK_MOMENTARY_MAX:
      case QK_LAYER_MOD ... QK_LAYER_MOD_MAX:
      case QK_ONE_SHOT_LAYER ... QK_ONE_SHOT_LAYER_MAX:
      case QK_TOGGLE_LAYER ... QK_TOGGLE_LAYER_MAX:
      case QK_TO ... QK_TO_MAX:
      case QK_LAYER_TAP_TOGGLE ... QK_LAYER_TAP_TOGGLE_MAX:
        return;
    }
    last_modifier = oneshot_mod_state | mod_state;
    switch (keycode) {
      case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
      case QK_MOD_TAP ... QK_MOD_TAP_MAX:
        if (record->event.pressed) {
          last_keycode = get_tap_kc(keycode);
        }
        break;
      default:
        if (record->event.pressed) {
          last_keycode = keycode;
        }
        break;
    }
  } else { // keycode == REPEAT
    if (record->event.pressed) {
      register_mods(last_modifier);
      register_code16(last_keycode);
    } else {
      unregister_code16(last_keycode);
      unregister_mods(last_modifier);
    }
  }
}


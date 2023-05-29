#include QMK_KEYBOARD_H
#include "keymap_icelandic.h"

#define _QWERTY 0
#define _LMOD 1
#define _RMOD 2
#define _CMOD 3

enum custom_keycodes
{
	QWERTY = SAFE_RANGE,
	LMOD,
	RMOD,
	CMOD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// QWERTY is-IS
	// ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
	// |  ESC   |   1    |   2    |   3    |   4    |   5    |                          |   6    |   7    |   8    |   9    |   0    |   Ö    |
	// ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
	// |  TAB   |   Q    |   W    |   E    |   R    |   T    |                          |   Y    |   U    |   I    |   O    |   P    |   Ð    |
	// ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
	// |  BKSP  |   A    |   S    |   D    |   F    |   G    |                          |   H    |   J    |   K    |   L    |   Æ    |   ´    |
	// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
	// |  SHIFT |   Z    |   X    |   C    |   V    |   B    |   OS   |        | PRSCR  |   N    |   M    |   ,    |   .    |   Þ    |  SHIFT |
	// └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
	//                                |  CTRL  |  LMOD  | ENTER  |                 | SPACE  |  RMOD  |  ALT   |
	//                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘

	[_QWERTY] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, IS_ODIA,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, IS_ETH,
		KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, IS_AE, IS_ACUT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LGUI, KC_PSCR, KC_N, KC_M, KC_COMM, KC_DOT, IS_THRN, KC_RSFT,
		KC_LCTL, LMOD, KC_ENT, KC_SPC, RMOD, KC_LALT),

	// LMOD & RMOD LAYERS
	// ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
	// |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |                          |   F7   |   F8   |   F9   |   F10  |   F11  |   F12  |
	// ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
	// |        |   !    |   @    |   #    |   $    |   [    |                          |   ]    |   ^    |   /    |   \    |   |    |  CALC  |
	// ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
	// |  DEL   |   +    |   -    |   _    |   =    |   {    |                          |   }    |   "    |   '    |   `    |   ?    |        |
	// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
	// |        |   %    |   ~    |   &    |   *    |   (    |  BRI + |        |  VOL + |   )    |   <    |   ;    |   :    |   >    |        |
	// └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
	//                                |        | (LMOD) |  BRI - |                 |  VOL - | (RMOD) |  MUTE  |
	//                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘

	[_LMOD] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		KC_NO, IS_EXLM, IS_AT, IS_HASH, IS_DLR, IS_LBRC, IS_RBRC, IS_CIRC, IS_SLSH, IS_BSLS, IS_PIPE, KC_CALC,
		KC_DEL, IS_PLUS, IS_MINS, IS_UNDS, IS_EQL, IS_LCBR, IS_RCBR, IS_DQUO, IS_QUOT, IS_GRV, IS_QUES, KC_NO,
		KC_NO, IS_PERC, IS_TILD, IS_AMPR, IS_ASTR, IS_LPRN, KC_BRIU, KC_VOLU, IS_RPRN, IS_LABK, IS_SCLN, IS_COLN, IS_RABK, KC_NO,
		KC_NO, KC_TRNS, KC_BRID, KC_VOLD, CMOD, KC_MUTE),

	[_RMOD] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		KC_NO, IS_EXLM, IS_AT, IS_HASH, IS_DLR, IS_LBRC, IS_RBRC, IS_CIRC, IS_SLSH, IS_BSLS, IS_PIPE, KC_CALC,
		KC_DEL, IS_PLUS, IS_MINS, IS_UNDS, IS_EQL, IS_LCBR, IS_RCBR, IS_DQUO, IS_QUOT, IS_GRV, IS_QUES, KC_NO,
		KC_NO, IS_PERC, IS_TILD, IS_AMPR, IS_ASTR, IS_LPRN, KC_BRIU, KC_VOLU, IS_RPRN, IS_LABK, IS_SCLN, IS_COLN, IS_RABK, KC_NO,
		KC_NO, CMOD, KC_BRID, KC_VOLD, KC_TRNS, KC_NO),

	// CMOD (LMOD + RMOD)
	// ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
	// |  HUE - |  HUE + |  SAT - |  SAT + |  VAL - |  VAL + |                          |        |        |        |        |        |        |
	// ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
	// |        |        |  HOME  |  END   |  DEL   |        |                          |        |  PGDN  |  TAB   |  SPACE |  PGUP  |        |
	// ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
	// |  STEP  |  CTRL  |   OS   |  ALT   |  SHIFT |        |                          |        |  LEFT  |  DOWN  |   UP   |  RIGHT |        |
	// ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
	// | BL 1/0 |   1    |   2    |   3    |   4    |   5    |        |        |        |   6    |   7    |   8    |   9    |   0    |        |
	// └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
	//                                |        |        |        |                 |        |        |        |
	//                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘

	[_CMOD] = LAYOUT(
		RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_HOME, KC_END, KC_DEL, KC_NO, KC_NO, KC_PGDN, KC_TAB, KC_SPC, KC_PGUP, KC_NO,
		BL_STEP, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO,
		BL_TOGG, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
		KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO)};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
	switch (keycode)
	{
	case QWERTY:
		if (record->event.pressed)
		{
			set_single_persistent_default_layer(_QWERTY);
		}
		return false;
		break;
	case LMOD:
		if (record->event.pressed)
		{
			layer_on(_LMOD);
			update_tri_layer(_LMOD, _RMOD, _CMOD);
		}
		else
		{
			layer_off(_LMOD);
			update_tri_layer(_LMOD, _RMOD, _CMOD);
		}
		return false;
		break;
	case RMOD:
		if (record->event.pressed)
		{
			layer_on(_RMOD);
			update_tri_layer(_LMOD, _RMOD, _CMOD);
		}
		else
		{
			layer_off(_RMOD);
			update_tri_layer(_LMOD, _RMOD, _CMOD);
		}
		return false;
		break;
		// case CMOD:
		// 	if (record->event.pressed)
		// 	{
		// 		layer_on(_CMOD);
		// 		update_tri_layer(_LMOD, _RMOD, _CMOD);
		// 	}
		// 	else
		// 	{
		// 		layer_off(_CMOD);
		// 		update_tri_layer(_LMOD, _RMOD, _CMOD);
		// 	}
		// 	return false;
		// 	break;
	case CMOD:
		if (record->event.pressed)
		{
			layer_on(_CMOD);
		}
		else
		{
			layer_off(_CMOD);
		}
		return false;
		break;
	}
	return true;
}

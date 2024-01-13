/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

#define FORCE_NKRO

#define TAP_CODE_DELAY 20

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 135

#define AUTO_SHIFT_TIMEOUT 135
#define NO_AUTO_SHIFT_SPECIAL
#define NO_AUTO_SHIFT_NUMERIC
#define AUTO_SHIFT_REPEAT

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 54
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
    #define RGBLIGHT_LAYERS
    #define RGBLIGHT_SPLIT

    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
    #define RGBLIGHT_DEFAULT_HUE 180
    #define RGBLIGHT_DEFAULT_SAT UINT8_MAX
    #define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL
#endif

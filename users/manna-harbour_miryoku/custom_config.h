// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// Custom layer mapping using more of the kyria in the TAP layer
#if defined(KEYBOARD_splitkb_kyria_rev1)
#define MIRYOKU_LAYERMAPPING_TAP( \
    K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
) \
LAYOUT( \
    KC_TAB,  K00, K01, K02,   K03,   K04,                                K05, K06, K07, K08, K09, TO(U_BASE), \
    KC_LSFT, K10, K11, K12,   K13,   K14,                                K15, K16, K17, K18, K19, XXX, \
    KC_LCTL, K20, K21, K22,   K23,   K24,   KC_F5, KC_F6,      XXX, XXX, K25, K26, K27, K28, K29, KC_ESC, \
                       KC_F1, KC_F2, KC_F3, K33,   KC_F4,      K35, K36, K37, XXX, XXX \
)
#endif

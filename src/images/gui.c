/* Copyright 2022 Vulcalien
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#include "images.h"

const u8 gui_tileset[32 * 64] = {
    // fully transparent
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // blank background
    // TODO these colors are placeholders
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // logo 0
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,

    // logo 1
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x57, 0x77,
    0x55, 0x55, 0x57, 0x66,
    0x55, 0x55, 0x76, 0x66,
    0x55, 0x55, 0x76, 0x66,
    0x55, 0x57, 0x66, 0x66,
    0x55, 0x57, 0x66, 0x76,
    0x55, 0x76, 0x66, 0x76,

    // logo 2
    0x55, 0x55, 0x55, 0x55,
    0x75, 0x55, 0x55, 0x77,
    0x75, 0x55, 0x57, 0x66,
    0x78, 0x55, 0x76, 0x66,
    0x78, 0x57, 0x66, 0x67,
    0x78, 0x76, 0x66, 0x67,
    0x77, 0x66, 0x66, 0x78,
    0x66, 0x66, 0x66, 0x78,

    // logo 3
    0x55, 0x55, 0x55, 0x55,
    0x75, 0x57, 0x77, 0x75,
    0x75, 0x57, 0x66, 0x75,
    0x78, 0x76, 0x66, 0x78,
    0x88, 0x76, 0x67, 0x88,
    0x87, 0x66, 0x67, 0x87,
    0x87, 0x66, 0x78, 0x87,
    0x76, 0x66, 0x78, 0x76,

    // logo 4
    0x55, 0x55, 0x55, 0x55,
    0x57, 0x77, 0x75, 0x57,
    0x57, 0x66, 0x75, 0x57,
    0x76, 0x66, 0x78, 0x76,
    0x76, 0x66, 0x78, 0x76,
    0x66, 0x66, 0x77, 0x66,
    0x66, 0x66, 0x77, 0x66,
    0x66, 0x76, 0x76, 0x66,

    // logo 5
    0x55, 0x55, 0x55, 0x55,
    0x77, 0x75, 0x57, 0x77,
    0x66, 0x75, 0x57, 0x66,
    0x66, 0x78, 0x76, 0x66,
    0x67, 0x88, 0x76, 0x67,
    0x67, 0x87, 0x66, 0x67,
    0x78, 0x87, 0x66, 0x78,
    0x78, 0x76, 0x66, 0x78,

    // logo 6
    0x55, 0x55, 0x55, 0x55,
    0x75, 0x57, 0x77, 0x77,
    0x75, 0x57, 0x66, 0x66,
    0x78, 0x76, 0x66, 0x66,
    0x88, 0x76, 0x67, 0x77,
    0x87, 0x66, 0x67, 0x88,
    0x87, 0x66, 0x78, 0x88,
    0x76, 0x66, 0x78, 0x85,

    // logo 7
    0x55, 0x55, 0x55, 0x55,
    0x77, 0x75, 0x57, 0x77,
    0x66, 0x75, 0x57, 0x66,
    0x66, 0x78, 0x76, 0x66,
    0x77, 0x88, 0x76, 0x67,
    0x88, 0x87, 0x66, 0x66,
    0x88, 0x87, 0x66, 0x66,
    0x55, 0x76, 0x66, 0x76,

    // logo 8
    0x55, 0x55, 0x55, 0x55,
    0x77, 0x77, 0x77, 0x55,
    0x66, 0x66, 0x67, 0x55,
    0x66, 0x66, 0x67, 0x87,
    0x77, 0x66, 0x78, 0x87,
    0x66, 0x66, 0x78, 0x76,
    0x66, 0x77, 0x88, 0x76,
    0x67, 0x88, 0x87, 0x66,

    // logo 9
    0x55, 0x55, 0x55, 0x55,
    0x77, 0x77, 0x77, 0x77,
    0x76, 0x66, 0x66, 0x66,
    0x66, 0x66, 0x66, 0x66,
    0x66, 0x77, 0x76, 0x67,
    0x66, 0x66, 0x66, 0x67,
    0x66, 0x66, 0x66, 0x78,
    0x66, 0x66, 0x66, 0x78,

    // logo 10
    0x55, 0x55, 0x55, 0x55,
    0x75, 0x57, 0x77, 0x77,
    0x75, 0x57, 0x66, 0x66,
    0x78, 0x76, 0x66, 0x66,
    0x88, 0x76, 0x67, 0x77,
    0x87, 0x66, 0x67, 0x88,
    0x87, 0x66, 0x77, 0x78,
    0x76, 0x66, 0x66, 0x75,

    // logo 11
    0x55, 0x55, 0x55, 0x55,
    0x77, 0x75, 0x57, 0x77,
    0x66, 0x75, 0x57, 0x66,
    0x66, 0x78, 0x76, 0x66,
    0x77, 0x88, 0x77, 0x77,
    0x88, 0x88, 0x88, 0x87,
    0x88, 0x85, 0x58, 0x87,
    0x55, 0x55, 0x55, 0x76,

    // logo 12
    0x55, 0x55, 0x55, 0x55,
    0x77, 0x77, 0x77, 0x77,
    0x66, 0x66, 0x66, 0x67,
    0x66, 0x66, 0x66, 0x78,
    0x66, 0x67, 0x77, 0x78,
    0x66, 0x67, 0x88, 0x88,
    0x66, 0x78, 0x88, 0x88,
    0x66, 0x78, 0x85, 0x55,

    // logo 13
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x85, 0x55, 0x55, 0x55,
    0x85, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,

    // logo 14
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,

    // logo 15
    0x55, 0x76, 0x67, 0x76,
    0x57, 0x66, 0x67, 0x87,
    0x57, 0x66, 0x78, 0x88,
    0x76, 0x66, 0x78, 0x85,
    0x76, 0x67, 0x88, 0x55,
    0x77, 0x77, 0x88, 0x55,
    0x88, 0x88, 0x85, 0x55,
    0x58, 0x88, 0x85, 0x55,

    // logo 16
    0x66, 0x76, 0x67, 0x88,
    0x77, 0x66, 0x67, 0x87,
    0x87, 0x66, 0x78, 0x87,
    0x76, 0x66, 0x78, 0x76,
    0x76, 0x67, 0x88, 0x76,
    0x77, 0x77, 0x88, 0x77,
    0x88, 0x88, 0x85, 0x88,
    0x58, 0x88, 0x85, 0x58,

    // logo 17
    0x76, 0x67, 0x88, 0x76,
    0x66, 0x67, 0x87, 0x66,
    0x66, 0x78, 0x87, 0x66,
    0x66, 0x78, 0x76, 0x66,
    0x67, 0x88, 0x76, 0x67,
    0x77, 0x88, 0x77, 0x77,
    0x88, 0x85, 0x88, 0x88,
    0x88, 0x85, 0x58, 0x88,

    // logo 18
    0x67, 0x76, 0x76, 0x67,
    0x67, 0x76, 0x66, 0x67,
    0x78, 0x76, 0x66, 0x78,
    0x78, 0x76, 0x66, 0x78,
    0x88, 0x76, 0x67, 0x88,
    0x88, 0x77, 0x77, 0x88,
    0x85, 0x88, 0x88, 0x85,
    0x85, 0x58, 0x88, 0x85,

    // logo 19
    0x88, 0x76, 0x67, 0x88,
    0x87, 0x66, 0x67, 0x87,
    0x87, 0x66, 0x78, 0x87,
    0x76, 0x66, 0x78, 0x76,
    0x76, 0x67, 0x88, 0x76,
    0x77, 0x77, 0x88, 0x77,
    0x88, 0x88, 0x85, 0x88,
    0x58, 0x88, 0x88, 0x88,

    // logo 20
    0x76, 0x67, 0x88, 0x55,
    0x66, 0x67, 0x88, 0x55,
    0x66, 0x77, 0x77, 0x75,
    0x66, 0x66, 0x66, 0x75,
    0x66, 0x66, 0x67, 0x88,
    0x77, 0x77, 0x77, 0x88,
    0x88, 0x88, 0x88, 0x85,
    0x88, 0x88, 0x88, 0x85,

    // logo 21
    0x55, 0x76, 0x67, 0x76,
    0x57, 0x66, 0x67, 0x76,
    0x57, 0x66, 0x78, 0x76,
    0x76, 0x66, 0x78, 0x76,
    0x76, 0x67, 0x88, 0x76,
    0x77, 0x77, 0x88, 0x77,
    0x88, 0x88, 0x85, 0x88,
    0x58, 0x88, 0x85, 0x58,

    // logo 22
    0x67, 0x88, 0x87, 0x66,
    0x67, 0x85, 0x76, 0x66,
    0x67, 0x85, 0x76, 0x67,
    0x67, 0x87, 0x66, 0x67,
    0x67, 0x87, 0x66, 0x78,
    0x77, 0x87, 0x77, 0x78,
    0x88, 0x88, 0x88, 0x88,
    0x88, 0x85, 0x88, 0x88,

    // logo 23
    0x77, 0x66, 0x67, 0x88,
    0x77, 0x66, 0x67, 0x87,
    0x57, 0x66, 0x78, 0x87,
    0x76, 0x66, 0x78, 0x76,
    0x76, 0x67, 0x88, 0x76,
    0x77, 0x77, 0x88, 0x77,
    0x88, 0x88, 0x85, 0x88,
    0x58, 0x88, 0x85, 0x58,

    // logo 24
    0x76, 0x67, 0x77, 0x78,
    0x66, 0x67, 0x88, 0x88,
    0x66, 0x78, 0x88, 0x88,
    0x66, 0x78, 0x85, 0x55,
    0x67, 0x88, 0x55, 0x55,
    0x77, 0x88, 0x55, 0x55,
    0x88, 0x85, 0x55, 0x55,
    0x88, 0x85, 0x55, 0x55,

    // logo 25
    0x55, 0x55, 0x55, 0x76,
    0x55, 0x55, 0x57, 0x66,
    0x55, 0x55, 0x57, 0x66,
    0x55, 0x55, 0x76, 0x66,
    0x55, 0x55, 0x76, 0x67,
    0x55, 0x55, 0x77, 0x77,
    0x55, 0x55, 0x88, 0x88,
    0x55, 0x55, 0x58, 0x88,

    // logo 26
    0x67, 0x88, 0x55, 0x55,
    0x67, 0x88, 0x55, 0x55,
    0x78, 0x85, 0x55, 0x55,
    0x78, 0x85, 0x55, 0x55,
    0x88, 0x55, 0x55, 0x55,
    0x88, 0x55, 0x55, 0x55,
    0x85, 0x55, 0x55, 0x55,
    0x85, 0x55, 0x55, 0x55,

    // logo 27
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55,
};
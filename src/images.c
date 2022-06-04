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

// TODO organize this mess...
const u16 bg_palette[256] = {
    // --- palette 0 ---
    // BG color
    0x7c1f,

    // grass
    0x328c, 0x4751, 0x19c6,

    // flower (last color is shared with tree)
    0x7bde, 0x2ed6, 0x08a2,

    // tree
    0x372d, 0x2655, 0x1d8f,

    //unused
    0, 0, 0, 0, 0,

    // dirt (level-specific)
    0x35b0, // TODO make -1

    // --- palette 1 ---
    // transparent
    0,

    // rock
    0x6318, 0x4a52, 0x1ce7, 0x7bde,

    // unused
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

    // dirt (level-specific)
    0x35b0, // TODO make -1

    // --- palette 2 ---
    // transparent
    0,

    // water
    0x4442, 0x4d08,

    // unused
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

    // dirt (level specific)
    0x1cea, 0x35b0,
};

// 4bpp
const u8 level_tileset[32 * 64] = {
    // generic ground 0
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x21, 0x11, 0x11,
    0x11, 0x11, 0x12, 0x11,
    0x12, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // generic ground 1
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x12, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x12, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // generic ground 2
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x21, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x21,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x12, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // generic ground 3
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x12, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x21, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // -----

    // unconnected grass/sand top-left
    0xff, 0xff, 0xff, 0x22,
    0xff, 0xf2, 0x22, 0x11,
    0xff, 0x21, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0x21, 0x11, 0x11, 0x11,
    0x21, 0x11, 0x11, 0x11,

    // unconnected grass/sand top-right
    0x22, 0xff, 0xff, 0xff,
    0x11, 0x22, 0x2f, 0xff,
    0x11, 0x11, 0x11, 0xff,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x11, 0x13,
    0x11, 0x11, 0x11, 0x13,

    // unconnected grass/sand bottom-left
    0x21, 0x11, 0x11, 0x11,
    0x21, 0x11, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0xff, 0x11, 0x11, 0x11,
    0xff, 0xf3, 0x33, 0x11,
    0xff, 0xff, 0xff, 0x33,

    // unconnected grass/sand bottom-right
    0x11, 0x11, 0x11, 0x13,
    0x11, 0x11, 0x11, 0x13,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x13, 0xff,
    0x11, 0x33, 0x3f, 0xff,
    0x33, 0xff, 0xff, 0xff,

    // unconnected grass/sand top
    0x22, 0xff, 0xff, 0x22,
    0x11, 0x22, 0x22, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // unconnected grass/sand right
    0x11, 0x11, 0x11, 0x13,
    0x11, 0x11, 0x11, 0x13,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x11, 0x3f,
    0x11, 0x11, 0x11, 0x13,
    0x11, 0x11, 0x11, 0x13,

    // unconnected grass/sand bottom
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x33, 0x33, 0x11,
    0x33, 0xff, 0xff, 0x33,

    // unconnected grass/sand left
    0x21, 0x11, 0x11, 0x11,
    0x21, 0x11, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0xf2, 0x11, 0x11, 0x11,
    0x21, 0x11, 0x11, 0x11,
    0x21, 0x11, 0x11, 0x11,

    // -----

    // unconnected rock top-left
    0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x33,
    0xff, 0xf3, 0x33, 0x44,
    0xff, 0x34, 0x44, 0x43,
    0xf3, 0x44, 0x43, 0x31,
    0xf3, 0x44, 0x31, 0x11,
    0x34, 0x43, 0x11, 0x11,
    0x34, 0x43, 0x11, 0x11,

    // unconnected rock top-right
    0xff, 0xff, 0xff, 0xff,
    0x33, 0x3f, 0xff, 0xff,
    0x44, 0x43, 0x3f, 0xff,
    0x33, 0x44, 0x43, 0xff,
    0x11, 0x34, 0x33, 0x3f,
    0x11, 0x13, 0x33, 0x3f,
    0x11, 0x13, 0x33, 0x33,
    0x11, 0x11, 0x33, 0x33,

    // unconnected rock bottom-left
    0x34, 0x44, 0x33, 0x11,
    0x34, 0x43, 0x33, 0x33,
    0xf3, 0x43, 0x33, 0x33,
    0xf3, 0x33, 0x33, 0x33,
    0xf3, 0x33, 0x33, 0x33,
    0xff, 0x33, 0x33, 0x33,
    0xff, 0xf3, 0x33, 0x33,
    0xff, 0xff, 0xff, 0x33,

    // unconnected rock bottom-right
    0x11, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x3f,
    0x33, 0x33, 0x33, 0x3f,
    0x33, 0x33, 0x33, 0x3f,
    0x33, 0x33, 0x33, 0xff,
    0x33, 0x33, 0x3f, 0xff,
    0x33, 0xff, 0xff, 0xff,

    // unconnected rock top
    0xff, 0xff, 0xff, 0xff,
    0x33, 0x3f, 0xff, 0x33,
    0x44, 0x43, 0x33, 0x44,
    0x33, 0x44, 0x44, 0x43,
    0x11, 0x33, 0x33, 0x31,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // unconnected rock right
    0x11, 0x11, 0x33, 0x33,
    0x11, 0x11, 0x33, 0x33,
    0x11, 0x13, 0x33, 0x3f,
    0x11, 0x13, 0x33, 0x3f,
    0x11, 0x13, 0x33, 0x3f,
    0x11, 0x13, 0x33, 0x3f,
    0x11, 0x11, 0x33, 0x33,
    0x11, 0x11, 0x33, 0x33,

    // unconnected rock bottom
    0x11, 0x33, 0x33, 0x11,
    0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33,
    0x33, 0xff, 0xff, 0x33,

    // unconnected rock left
    0x34, 0x43, 0x11, 0x11,
    0x34, 0x43, 0x11, 0x11,
    0xf3, 0x44, 0x31, 0x11,
    0xf3, 0x44, 0x31, 0x11,
    0xf3, 0x44, 0x31, 0x11,
    0xf3, 0x44, 0x31, 0x11,
    0x34, 0x43, 0x11, 0x11,
    0x34, 0x43, 0x11, 0x11,

    // rock corner 0
    0x34, 0x43, 0x11, 0x11,
    0x34, 0x43, 0x11, 0x11,
    0x44, 0x31, 0x11, 0x11,
    0x33, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // rock corner 1
    0x11, 0x11, 0x33, 0x33,
    0x11, 0x11, 0x33, 0x33,
    0x11, 0x11, 0x13, 0x34,
    0x11, 0x11, 0x11, 0x33,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // rock corner 2
    0x33, 0x31, 0x11, 0x11,
    0x33, 0x33, 0x11, 0x11,
    0x33, 0x34, 0x31, 0x11,
    0x33, 0x34, 0x31, 0x11,
    0x33, 0x44, 0x31, 0x11,
    0x33, 0x43, 0x11, 0x11,
    0x34, 0x43, 0x11, 0x11,
    0x34, 0x43, 0x11, 0x11,

    // rock corner 3
    0x11, 0x11, 0x13, 0x33,
    0x11, 0x11, 0x33, 0x33,
    0x11, 0x13, 0x33, 0x33,
    0x11, 0x13, 0x33, 0x33,
    0x11, 0x13, 0x33, 0x33,
    0x11, 0x11, 0x33, 0x33,
    0x11, 0x11, 0x33, 0x33,
    0x11, 0x11, 0x33, 0x33,

    // -----

    // unconnected hole top-left
    0xff, 0xff, 0xff, 0xee,
    0xff, 0xfe, 0xee, 0xee,
    0xff, 0xee, 0xee, 0x11,
    0xfe, 0xee, 0x11, 0x11,
    0xfe, 0xe1, 0x11, 0x11,
    0xfe, 0xe1, 0x11, 0x11,
    0xee, 0x11, 0x11, 0x11,
    0xee, 0x11, 0x11, 0x11,

    // unconnected hole top-right
    0xee, 0xff, 0xff, 0xff,
    0xee, 0xee, 0xef, 0xff,
    0x11, 0xee, 0xee, 0xff,
    0x11, 0x11, 0xee, 0xef,
    0x11, 0x11, 0x1e, 0xef,
    0x11, 0x11, 0x1e, 0xef,
    0x11, 0x11, 0x11, 0xee,
    0x11, 0x11, 0x11, 0xee,

    // unconnected hole bottom-left
    0xee, 0x11, 0x11, 0x11,
    0xee, 0x11, 0x11, 0x11,
    0xfe, 0x11, 0x11, 0x11,
    0xfe, 0xe1, 0x11, 0x11,
    0xfe, 0xe1, 0x11, 0x11,
    0xff, 0xee, 0x11, 0x11,
    0xff, 0xfe, 0xee, 0x11,
    0xff, 0xff, 0xff, 0xee,

    // unconnected hole bottom-right
    0x11, 0x11, 0x11, 0xee,
    0x11, 0x11, 0x11, 0xee,
    0x11, 0x11, 0x11, 0xef,
    0x11, 0x11, 0x1e, 0xef,
    0x11, 0x11, 0x1e, 0xef,
    0x11, 0x11, 0xee, 0xff,
    0x11, 0xee, 0xef, 0xff,
    0xee, 0xff, 0xff, 0xff,

    // unconnected hole top
    0xee, 0xff, 0xff, 0xee,
    0xee, 0xee, 0xee, 0xee,
    0x11, 0xee, 0xee, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,

    // unconnected hole right
    0x11, 0x11, 0x11, 0xee,
    0x11, 0x11, 0x11, 0xee,
    0x11, 0x11, 0x11, 0xef,
    0x11, 0x11, 0x1e, 0xef,
    0x11, 0x11, 0x1e, 0xef,
    0x11, 0x11, 0x1e, 0xef,
    0x11, 0x11, 0x1e, 0xee,
    0x11, 0x11, 0x11, 0xee,

    // unconnected hole bottom
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11,
    0x11, 0xee, 0xee, 0x11,
    0xee, 0xff, 0xff, 0xee,

    // unconnected hole left
    0xee, 0x11, 0x11, 0x11,
    0xee, 0x11, 0x11, 0x11,
    0xfe, 0x11, 0x11, 0x11,
    0xfe, 0xe1, 0x11, 0x11,
    0xfe, 0xe1, 0x11, 0x11,
    0xfe, 0xe1, 0x11, 0x11,
    0xee, 0xe1, 0x11, 0x11,
    0xee, 0x11, 0x11, 0x11,

    // -----

    // fully transparent
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,

    // -----

    // flower
    0x11, 0x11, 0x11, 0x11,
    0x11, 0x14, 0x44, 0x11,
    0x11, 0x14, 0x44, 0x11,
    0x14, 0x45, 0x55, 0x44,
    0x14, 0x45, 0x55, 0x44,
    0x16, 0x64, 0x44, 0x66,
    0x11, 0x14, 0x44, 0x11,
    0x11, 0x16, 0x66, 0x11,


    // -----

    // single tree top-left
    0x11, 0x11, 0x11, 0x66,
    0x11, 0x11, 0x66, 0x33,
    0x11, 0x16, 0x33, 0x33,
    0x11, 0x63, 0x37, 0x73,
    0x11, 0x63, 0x77, 0x33,
    0x16, 0x33, 0x77, 0x33,
    0x16, 0x33, 0x77, 0x33,
    0x16, 0x33, 0x33, 0x33,

    // single tree top-right
    0x66, 0x11, 0x11, 0x11,
    0x33, 0x66, 0x11, 0x11,
    0x33, 0x33, 0x61, 0x11,
    0x33, 0x33, 0x36, 0x11,
    0x33, 0x33, 0x36, 0x11,
    0x33, 0x33, 0x33, 0x61,
    0x33, 0x33, 0x33, 0x61,
    0x33, 0x33, 0x33, 0x61,

    // single tree bottom-left
    0x16, 0x33, 0x33, 0x33,
    0x63, 0x33, 0x33, 0x33,
    0x63, 0x63, 0x33, 0x33,
    0x16, 0x16, 0x33, 0x63,
    0x11, 0x11, 0x66, 0x86,
    0x11, 0x11, 0x68, 0x88,
    0x11, 0x11, 0x68, 0x88,
    0x11, 0x11, 0x16, 0x66,

    // single tree bottom-right
    0x33, 0x33, 0x33, 0x61,
    0x33, 0x33, 0x33, 0x36,
    0x33, 0x33, 0x36, 0x36,
    0x36, 0x33, 0x61, 0x61,
    0x69, 0x66, 0x61, 0x11,
    0x99, 0x96, 0x11, 0x11,
    0x99, 0x96, 0x11, 0x11,
    0x66, 0x61, 0x11, 0x11,
};

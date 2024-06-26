/* Copyright 2022-2023 Vulcalien
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
#include "scene.h"

#include "screen.h"

// considering that checksum verification takes around 40 ticks,
// the text will be fully visible for about two seconds.
#define ADDITIONAL_DELAY (80)

static u16 counter = 0;

THUMB
static void prestart_tick(void) {
    counter++;

    if(counter == 0x20 + ADDITIONAL_DELAY)
        set_scene(&scene_start, 1);
}

THUMB
static void prestart_draw(void) {
    if(counter < 0x20) {
        u8 val = 0x20 - counter;
        u16 color = val << 10 | val << 5 | val;

        screen_set_bg_palette_color(9, 0xd, color);
    }

    screen_write(
        "MINICRAFT FOI FEITO POR MARKUS\n"
        "PERSSON PARA A 22'DO COMPETICAO\n"
        "LUDUM DARE EM DEZEMBRO\n"
        "DE 2011.\n"
        "\n"
        "ESSE DEMAKE DE GBA DO JOGO\n"
        "FOI FEITO POR VULCALIEN.\n"
        "\n"
        "A ARTWORK E OS SONS FORAM\n"
        "FEITO POR MARKUS PERSSON.\n"
        "\n"
        "\n"
        "COPYRIGHT 2024 VULCALIEN\n"
        "\n"
        "THIS IS FREE SOFTWARE\n"
        "RELEASED UNDER THE\n"
        "GNU GENERAL PUBLIC LICENSE\n"
        "EITHER VERSION 3 OR LATER.",
        9, 1, 1
    );
}

const struct Scene scene_prestart = {
    .tick = prestart_tick,
    .draw = prestart_draw
};

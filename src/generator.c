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
#include "generator.h"

#include "level.h"

void generate_levels(void) {
    // DEBUG
    for(u32 l = 0; l < 5; l++) {
        struct Level *level = &levels[l];

        for(u32 t = 0; t < LEVEL_W * LEVEL_H; t++) {
            level->tiles[t] = (t / 16 % 2) ? 11 : 2;
            level->data[t] = 0;
        }

        for(u32 i = 1; i < ENTITY_CAP; i++) {
            if(i < 256) {
                level->entities[i].type = i % 2;
                level->entities[i].x = 80;
                level->entities[i].y = 80;
            } else {
                level->entities[i].type = -1;
            }
        }
    }

    // DEBUG adding the player should not be done here
    levels[0].entities[0].type = 3;
    levels[0].entities[0].x = 40;
    levels[0].entities[0].y = 40;
    levels[0].player = &levels[0].entities[0];
}
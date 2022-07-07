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
#include "entity.h"
#include "furniture.h"

#include "level.h"

struct furniture_Data {
    i8 push_x;
    i8 push_y;

    u8 push_delay;

    u8 chest_id;

    u8 unused[4];
};

static_assert(
    sizeof(struct furniture_Data) == 8, "struct furniture_Data: wrong size"
);

// DEBUG
static u32 counter = 0;

ETICK(furniture_tick) {
    // DEBUG
    if(counter++ < 256 * 20)
        entity_move(level, data, 1, 0);

    struct furniture_Data *furn_data = (struct furniture_Data *) &data->data;

    entity_move(level, data, furn_data->push_x, furn_data->push_y);
    furn_data->push_x = 0;
    furn_data->push_y = 0;

    if(furn_data->push_delay > 0)
        furn_data->push_delay--;
}

EDRAW(furniture_draw) {
    const u8 sprite = 68 + 4 * (data->type - WORKBENCH_ENTITY);
    const u8 palette = 6;

    sprite_attribs[0] = ((data->y - 12 - level_y_offset) & 0xff);
    sprite_attribs[1] = ((data->x - 8  - level_x_offset) & 0x1ff) |
                        (1 << 14);
    sprite_attribs[2] = (sprite & 0x3ff) | (0 << 10) | (palette << 12);
}

ETOUCH_PLAYER(furniture_touch_player) {
    struct furniture_Data *furn_data = (struct furniture_Data *) &data->data;

    if(furn_data->push_delay > 0)
        return;

    struct mob_Data *mob_data = (struct mob_Data *) &player->data;
    const u8 dir = mob_data->dir;

    furn_data->push_x = (dir == 3) - (dir == 1);
    furn_data->push_y = (dir == 2) - (dir == 0);

    furn_data->push_delay = 10;
}

#define GENERATE_STRUCT(name, yr_)\
    static const struct Entity name = {\
        .tick = furniture_tick,\
        .draw = furniture_draw,\
\
        .xr = 3,\
        .yr = yr_,\
\
        .is_solid = true,\
        .touch_player = furniture_touch_player\
    }

GENERATE_STRUCT(workbench_entity, 2);
GENERATE_STRUCT(furnace_entity,   2);
GENERATE_STRUCT(oven_entity,      2);
GENERATE_STRUCT(anvil_entity,     2);
GENERATE_STRUCT(chest_entity,     3);
GENERATE_STRUCT(lantern_entity,   2);

#undef GENERATE_STRUCT

void furniture_take(struct entity_Data *data) {
    struct furniture_Data *furn_data = (struct furniture_Data *) &data->data;

    player_active_item = (struct item_Data) {
        .type = WORKBENCH_ITEM + (data->type - WORKBENCH_ENTITY),
        .chest_id = furn_data->chest_id
    };
    data->should_remove = true;
}
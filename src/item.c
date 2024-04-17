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
#include "item.h"

#include "tile.h"
#include "screen.h"

const struct Item item_list[ITEM_TYPES] = {
    // Wood
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "MADEIRA",
        .palette = 0
    },

    // Stone
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "PEDRA",
        .palette = 2
    },

    // Glass
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "VIDRO",
        .palette = 2
    },

    // Wheat
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "TRIGO",
        .palette = 1
    },

    // Slime
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "GOSMA",
        .palette = 1
    },

    // Cloth
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "PANO",
        .palette = 2
    },

    // Coal
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "CARVAO",
        .palette = 2
    },

    // Iron Ore
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "MINERIO.F",
        .palette = 0
    },

    // Gold Ore
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "MINERIO.O",
        .palette = 1
    },

    // Iron Ingot
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "FERRO",
        .palette = 0
    },

    // Gold Ingot
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "OURO",
        .palette = 1
    },

    // Gem
    {
        .class = ITEMCLASS_MATERIAL,
        .name = "GEMA",
        .palette = 2
    },

    // -----

    // Flower
    {
        .class = ITEMCLASS_PLACEABLE,
        .name = "FLOR",
        .palette = 1,

        .placed_tile = FLOWER_TILE,
        .placeable_on = { GRASS_TILE, -1 }
    },

    // Seeds
    {
        .class = ITEMCLASS_PLACEABLE,
        .name = "SEMENTE",
        .palette = 1,

        .placed_tile = WHEAT_TILE,
        .placeable_on = { FARMLAND_TILE, -1 }
    },

    // Acorn
    {
        .class = ITEMCLASS_PLACEABLE,
        .name = "BOLOTA",
        .palette = 0,

        .placed_tile = TREE_SAPLING_TILE,
        .placeable_on = { GRASS_TILE, -1 }
    },

    // Cactus
    {
        .class = ITEMCLASS_PLACEABLE,
        .name = "CACTU",
        .palette = 1,

        .placed_tile = CACTUS_SAPLING_TILE,
        .placeable_on = { SAND_TILE, -1 }
    },

    // Dirt
    {
        .class = ITEMCLASS_PLACEABLE,
        .name = "BARRO",
        .palette = 0,

        .placed_tile = DIRT_TILE,
        .placeable_on = { HOLE_TILE, LIQUID_TILE }
    },

    // Sand
    {
        .class = ITEMCLASS_PLACEABLE,
        .name = "AREIA",
        .palette = 1,

        .placed_tile = SAND_TILE,
        .placeable_on = { GRASS_TILE, DIRT_TILE }
    },

    // Cloud
    {
        .class = ITEMCLASS_PLACEABLE,
        .name = "NUVEM",
        .palette = 2,

        .placed_tile = CLOUD_TILE,
        .placeable_on = { INFINITE_FALL_TILE, -1 }
    },

    // -----

    // Apple
    {
        .class = ITEMCLASS_FOOD,
        .name = "FRUTA",
        .palette = 0,

        .hp_gain = 1
    },

    // Bread
    {
        .class = ITEMCLASS_FOOD,
        .name = "PAO",
        .palette = 1,

        .hp_gain = 2
    },

    // -----

    // Workbench
    {
        .class = ITEMCLASS_FURNITURE,
        .name = "BANCADA",
        .palette = 0
    },

    // Furnace
    {
        .class = ITEMCLASS_FURNITURE,
        .name = "FORNALHA",
        .palette = 2
    },

    // Oven
    {
        .class = ITEMCLASS_FURNITURE,
        .name = "FORNO",
        .palette = 2
    },

    // Anvil
    {
        .class = ITEMCLASS_FURNITURE,
        .name = "BIGORNA",
        .palette = 2
    },

    // Chest
    {
        .class = ITEMCLASS_FURNITURE,
        .name = "CESTA",
        .palette = 1
    },

    // Lantern
    {
        .class = ITEMCLASS_FURNITURE,
        .name = "LAMPARINA",
        .palette = 2
    },

    // -----

    // Power Glove
    {
        .class = ITEMCLASS_POWERGLOVE,
        .name = "LUVA PODEROSA",
        .palette = 0
    },

    // -----

    // Sword
    {
        .class = ITEMCLASS_TOOL,
        .name = "ESPADA",
        .palette = 3
    },

    // Axe
    {
        .class = ITEMCLASS_TOOL,
        .name = "MACHADO",
        .palette = 3
    },

    // Pick
    {
        .class = ITEMCLASS_TOOL,
        .name = "PICARETA",
        .palette = 3
    },

    // Shovel
    {
        .class = ITEMCLASS_TOOL,
        .name = "PA",
        .palette = 3
    },

    // Hoe
    {
        .class = ITEMCLASS_TOOL,
        .name = "ENXADA",
        .palette = 3
    }
};

THUMB
void item_write(struct item_Data *data, u8 palette, u32 x, u32 y) {
    const struct Item *item = ITEM_S(data);

    if(item_is_resource(data->type)) {
        u16 count = data->count;
        if(count > 999)
            count = 999;

        SCREEN_WRITE_NUMBER(count, 10, 3, false, palette + 3, x, y);
        screen_write(item->name, palette, x + 3, y);
    } else {
        item_write_name(data, palette, x, y);
    }
}

static const char level_names[5][5] = {
    "DE PAU", "DE PEDRA", "DE FERRO", "DE OURO", "DE CRISTAL"
};

THUMB
void item_write_name(struct item_Data *data, u8 palette, u32 x, u32 y) {
    const struct Item *item = ITEM_S(data);

    if(item->class == ITEMCLASS_TOOL) {
        const u8 level = data->tool_level;

        screen_write(level_names[level], palette, x, y);
        screen_write(item->name, palette, x + 4 + (level != 4), y);
    } else {
        screen_write(item->name, palette, x, y);
    }
}

THUMB
void item_draw_icon(struct item_Data *data, u32 x, u32 y, bool black_bg) {
    const struct Item *item = ITEM_S(data);

    const u16 tile = 128 + data->type +
                     (item->class == ITEMCLASS_TOOL) * (data->tool_level * 5);
    const u8 palette = (black_bg == false) * (12 + item->palette) +
                       (black_bg == true) * 11;

    BG3_TILEMAP[x + y * 32] = tile | palette << 12;
}

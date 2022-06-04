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
#include "tile.h"

#include "level.h"

#define SPR(id, palette) ((id) | ((palette) << 12))

#define FTICK(name)\
    static void name(struct Level *level, u32 xt, u32 yt)

#define FDRAW(name)\
    IWRAM_SECTION\
    static void name(struct Level *level, u32 xt, u32 yt,\
                     u16 tiles[4], u16 tiles2[4])

// Grass Tile
FTICK(grass_tick) {
}

FDRAW(grass_draw) {
    bool u = LEVEL_GET_TILE_S(level, xt,     yt - 1)->connects_to.grass;
    bool d = LEVEL_GET_TILE_S(level, xt,     yt + 1)->connects_to.grass;
    bool l = LEVEL_GET_TILE_S(level, xt - 1, yt    )->connects_to.grass;
    bool r = LEVEL_GET_TILE_S(level, xt + 1, yt    )->connects_to.grass;

    // TODO does tiles[0] = 0 + (u && l) * (...) improve performance?
    if(u && l)
        tiles[0] = SPR(0, 0);
    else
        tiles[0] = SPR(4 + u * 7 + l * 4, 0);

    if(u && r)
        tiles[1] = SPR(1, 0);
    else
        tiles[1] = SPR(5 + u * 4 + r * 3, 0);

    if(d && l)
        tiles[2] = SPR(2, 0);
    else
        tiles[2] = SPR(6 + d * 5 + l * 4, 0);

    if(d && r)
        tiles[3] = SPR(3, 0);
    else
        tiles[3] = SPR(7 + d * 2 + r * 3, 0);
}

// Rock Tile
FTICK(rock_tick) {
}

FDRAW(rock_draw) {
    bool u = LEVEL_GET_TILE(level, xt,     yt - 1) == ROCK_TILE;
    bool d = LEVEL_GET_TILE(level, xt,     yt + 1) == ROCK_TILE;
    bool l = LEVEL_GET_TILE(level, xt - 1, yt    ) == ROCK_TILE;
    bool r = LEVEL_GET_TILE(level, xt + 1, yt    ) == ROCK_TILE;

    bool ul = LEVEL_GET_TILE(level, xt - 1, yt - 1) == ROCK_TILE;
    bool dl = LEVEL_GET_TILE(level, xt - 1, yt + 1) == ROCK_TILE;
    bool ur = LEVEL_GET_TILE(level, xt + 1, yt - 1) == ROCK_TILE;
    bool dr = LEVEL_GET_TILE(level, xt + 1, yt + 1) == ROCK_TILE;

    if(u && l)
        tiles[0] = SPR(0 + !ul * 20, 1);
    else
        tiles[0] = SPR(12 + u * 7 + l * 4, 1);

    if(u && r)
        tiles[1] = SPR(1 + !ur * 20, 1);
    else
        tiles[1] = SPR(13 + u * 4 + r * 3, 1);

    if(d && l)
        tiles[2] = SPR(2 + !dl * 20, 1);
    else
        tiles[2] = SPR(14 + d * 5 + l * 4, 1);

    if(d && r)
        tiles[3] = SPR(3 + !dr * 20, 1);
    else
        tiles[3] = SPR(15 + d * 2 + r * 3, 1);
}

// Water Tile
FTICK(water_tick) {
}

FDRAW(water_draw) {
    bool u = LEVEL_GET_TILE_S(level, xt,     yt - 1)->connects_to.water;
    bool d = LEVEL_GET_TILE_S(level, xt,     yt + 1)->connects_to.water;
    bool l = LEVEL_GET_TILE_S(level, xt - 1, yt    )->connects_to.water;
    bool r = LEVEL_GET_TILE_S(level, xt + 1, yt    )->connects_to.water;

    bool su = LEVEL_GET_TILE_S(level, xt,     yt - 1)->connects_to.sand;
    bool sd = LEVEL_GET_TILE_S(level, xt,     yt + 1)->connects_to.sand;
    bool sl = LEVEL_GET_TILE_S(level, xt - 1, yt    )->connects_to.sand;
    bool sr = LEVEL_GET_TILE_S(level, xt + 1, yt    )->connects_to.sand;

    // TODO animation and sand connection

    if(u && l)
        tiles[0] = SPR(0, 2);
    else
        tiles[0] = SPR(24 + u * 7 + l * 4, 2);

    if(u && r)
        tiles[1] = SPR(1, 2);
    else
        tiles[1] = SPR(25 + u * 4 + r * 3, 2);

    if(d && l)
        tiles[2] = SPR(2, 2);
    else
        tiles[2] = SPR(26 + d * 5 + l * 4, 2);

    if(d && r)
        tiles[3] = SPR(3, 2);
    else
        tiles[3] = SPR(27 + d * 2 + r * 3, 2);
}

// Flower Tile
FTICK(flower_tick) {
}

FDRAW(flower_draw) {
    // TODO it should be easy to copy the important
    // code from this function instead of calling it
    grass_draw(level, xt, yt, tiles, tiles2);

    bool shape = (LEVEL_GET_DATA(level, xt, yt) >> 5) & 0x01;

    if(shape) {
        tiles[1] = SPR(33, 0);
        tiles[2] = SPR(33, 0);
    } else {
        tiles[0] = SPR(33, 0);
        tiles[3] = SPR(33, 0);
    }
}

// Tree Tile
FTICK(tree_tick) {
}

FDRAW(tree_draw) {
    bool u = LEVEL_GET_TILE(level, xt,     yt - 1) == TREE_TILE;
    bool d = LEVEL_GET_TILE(level, xt,     yt + 1) == TREE_TILE;
    bool l = LEVEL_GET_TILE(level, xt - 1, yt    ) == TREE_TILE;
    bool r = LEVEL_GET_TILE(level, xt + 1, yt    ) == TREE_TILE;

    bool ul = LEVEL_GET_TILE(level, xt - 1, yt - 1) == TREE_TILE;
    bool dl = LEVEL_GET_TILE(level, xt - 1, yt + 1) == TREE_TILE;
    bool ur = LEVEL_GET_TILE(level, xt + 1, yt - 1) == TREE_TILE;
    bool dr = LEVEL_GET_TILE(level, xt + 1, yt + 1) == TREE_TILE;

    if(u && l && ul)
        ; // TODO
    else
        tiles[0] = SPR(34, 0);

    if(u && r && ur)
        ; // TODO
    else
        tiles[1] = SPR(35, 0);

    if(d && l && dl)
        ; // TODO
    else
        tiles[2] = SPR(36, 0);

    if(d && r && dr)
        ; // TODO
    else
        tiles[3] = SPR(37, 0);
}

// Tile List
const struct Tile tile_list[TILES_COUNT] = {
    // Grass
    {
        .tick = grass_tick,
        .draw = grass_draw,

        .connects_to = {
            .grass = true
        }
    },

    // Rock
    {
        .tick = rock_tick,
        .draw = rock_draw
    },

    // Water
    {
        .tick = water_tick,
        .draw = water_draw,

        .connects_to = {
            .sand = true,
            .water = true
        }
    },

    // Flower
    {
        .tick = flower_tick,
        .draw = flower_draw,

        .connects_to = {
            .grass = true
        }
    },

    // Tree
    {
        .tick = tree_tick,
        .draw = tree_draw,

        .connects_to = {
            .grass = true
        }
    }
};

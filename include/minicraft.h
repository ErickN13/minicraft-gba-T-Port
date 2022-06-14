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
#ifndef MINICRAFT_CORE
#define MINICRAFT_CORE

#include "types.h"
#include "util.h"

#define EWRAM_BSS_SECTION __attribute__((section(".bss.ewram")))
#define IWRAM_SECTION     __attribute__((section(".iwram")))

#ifndef NULL
    #define NULL ((void *) 0)
#endif

extern u32 tick_counter;

#endif // MINICRAFT_CORE

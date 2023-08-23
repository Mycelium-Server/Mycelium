/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "item_registry.h"

#include "verdant_froglight_item.h"
#include "vex_spawn_egg_item.h"
#include "villager_spawn_egg_item.h"
#include "vindicator_spawn_egg_item.h"
#include "vine_item.h"

void ItemRegistry::generateV() {

  { // ID: 314
    registry[314] = std::make_shared<VineItem>();
  }

  { // ID: 970
    registry[970] = std::make_shared<VexSpawnEggItem>();
  }

  { // ID: 971
    registry[971] = std::make_shared<VillagerSpawnEggItem>();
  }

  { // ID: 972
    registry[972] = std::make_shared<VindicatorSpawnEggItem>();
  }

  { // ID: 1148
    registry[1148] = std::make_shared<VerdantFroglightItem>();
  }
}
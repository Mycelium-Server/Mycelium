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

#include "zoglin_spawn_egg_item.h"
#include "zombie_head_item.h"
#include "zombie_horse_spawn_egg_item.h"
#include "zombie_spawn_egg_item.h"
#include "zombie_villager_spawn_egg_item.h"
#include "zombified_piglin_spawn_egg_item.h"

void ItemRegistry::generateZ() {

  { // ID: 978
    registry[978] = std::make_shared<ZoglinSpawnEggItem>();
  }

  { // ID: 979
    registry[979] = std::make_shared<ZombieSpawnEggItem>();
  }

  { // ID: 980
    registry[980] = std::make_shared<ZombieHorseSpawnEggItem>();
  }

  { // ID: 981
    registry[981] = std::make_shared<ZombieVillagerSpawnEggItem>();
  }

  { // ID: 982
    registry[982] = std::make_shared<ZombifiedPiglinSpawnEggItem>();
  }

  { // ID: 999
    registry[999] = std::make_shared<ZombieHeadItem>();
  }
}
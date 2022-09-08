/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
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

#include "quartz_item.h"
#include "quartz_block_item.h"
#include "quartz_bricks_item.h"
#include "quartz_pillar_item.h"
#include "quartz_slab_item.h"
#include "quartz_stairs_item.h"

void ItemRegistry::generateQ() {

  { // ID: 233
    registry[233] = std::make_shared<QuartzSlabItem>();
  }

  { // ID: 375
    registry[375] = std::make_shared<QuartzBlockItem>();
  }

  { // ID: 376
    registry[376] = std::make_shared<QuartzBricksItem>();
  }

  { // ID: 377
    registry[377] = std::make_shared<QuartzPillarItem>();
  }

  { // ID: 378
    registry[378] = std::make_shared<QuartzStairsItem>();
  }

  { // ID: 725
    registry[725] = std::make_shared<QuartzItem>();
  }
}
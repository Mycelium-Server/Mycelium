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

#include "ice_item.h"
#include "infested_chiseled_stone_bricks_item.h"
#include "infested_cobblestone_item.h"
#include "infested_cracked_stone_bricks_item.h"
#include "infested_deepslate_item.h"
#include "infested_mossy_stone_bricks_item.h"
#include "infested_stone_item.h"
#include "infested_stone_bricks_item.h"
#include "ink_sac_item.h"
#include "iron_axe_item.h"
#include "iron_bars_item.h"
#include "iron_block_item.h"
#include "iron_boots_item.h"
#include "iron_chestplate_item.h"
#include "iron_door_item.h"
#include "iron_helmet_item.h"
#include "iron_hoe_item.h"
#include "iron_horse_armor_item.h"
#include "iron_ingot_item.h"
#include "iron_leggings_item.h"
#include "iron_nugget_item.h"
#include "iron_ore_item.h"
#include "iron_pickaxe_item.h"
#include "iron_shovel_item.h"
#include "iron_sword_item.h"
#include "iron_trapdoor_item.h"
#include "item_frame_item.h"

void ItemRegistry::generateI() {

  { // ID: 45
    registry[45] = std::make_shared<IronOreItem>();
  }

  { // ID: 68
    registry[68] = std::make_shared<IronBlockItem>();
  }

  { // ID: 263
    registry[263] = std::make_shared<IceItem>();
  }

  { // ID: 288
    registry[288] = std::make_shared<InfestedStoneItem>();
  }

  { // ID: 289
    registry[289] = std::make_shared<InfestedCobblestoneItem>();
  }

  { // ID: 290
    registry[290] = std::make_shared<InfestedStoneBricksItem>();
  }

  { // ID: 291
    registry[291] = std::make_shared<InfestedMossyStoneBricksItem>();
  }

  { // ID: 292
    registry[292] = std::make_shared<InfestedCrackedStoneBricksItem>();
  }

  { // ID: 293
    registry[293] = std::make_shared<InfestedChiseledStoneBricksItem>();
  }

  { // ID: 294
    registry[294] = std::make_shared<InfestedDeepslateItem>();
  }

  { // ID: 310
    registry[310] = std::make_shared<IronBarsItem>();
  }

  { // ID: 656
    registry[656] = std::make_shared<IronDoorItem>();
  }

  { // ID: 666
    registry[666] = std::make_shared<IronTrapdoorItem>();
  }

  { // ID: 728
    registry[728] = std::make_shared<IronIngotItem>();
  }

  { // ID: 750
    registry[750] = std::make_shared<IronSwordItem>();
  }

  { // ID: 751
    registry[751] = std::make_shared<IronShovelItem>();
  }

  { // ID: 752
    registry[752] = std::make_shared<IronPickaxeItem>();
  }

  { // ID: 753
    registry[753] = std::make_shared<IronAxeItem>();
  }

  { // ID: 754
    registry[754] = std::make_shared<IronHoeItem>();
  }

  { // ID: 782
    registry[782] = std::make_shared<IronHelmetItem>();
  }

  { // ID: 783
    registry[783] = std::make_shared<IronChestplateItem>();
  }

  { // ID: 784
    registry[784] = std::make_shared<IronLeggingsItem>();
  }

  { // ID: 785
    registry[785] = std::make_shared<IronBootsItem>();
  }

  { // ID: 846
    registry[846] = std::make_shared<InkSacItem>();
  }

  { // ID: 987
    registry[987] = std::make_shared<ItemFrameItem>();
  }

  { // ID: 1016
    registry[1016] = std::make_shared<IronHorseArmorItem>();
  }

  { // ID: 1055
    registry[1055] = std::make_shared<IronNuggetItem>();
  }
}
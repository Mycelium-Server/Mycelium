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

#include "rabbit_item.h"
#include "rabbit_foot_item.h"
#include "rabbit_hide_item.h"
#include "rabbit_spawn_egg_item.h"
#include "rabbit_stew_item.h"
#include "rail_item.h"
#include "ravager_spawn_egg_item.h"
#include "raw_copper_item.h"
#include "raw_copper_block_item.h"
#include "raw_gold_item.h"
#include "raw_gold_block_item.h"
#include "raw_iron_item.h"
#include "raw_iron_block_item.h"
#include "recovery_compass_item.h"
#include "red_banner_item.h"
#include "red_bed_item.h"
#include "red_candle_item.h"
#include "red_carpet_item.h"
#include "red_concrete_item.h"
#include "red_concrete_powder_item.h"
#include "red_dye_item.h"
#include "red_glazed_terracotta_item.h"
#include "red_mushroom_item.h"
#include "red_mushroom_block_item.h"
#include "red_nether_brick_slab_item.h"
#include "red_nether_brick_stairs_item.h"
#include "red_nether_brick_wall_item.h"
#include "red_nether_bricks_item.h"
#include "red_sand_item.h"
#include "red_sandstone_item.h"
#include "red_sandstone_slab_item.h"
#include "red_sandstone_stairs_item.h"
#include "red_sandstone_wall_item.h"
#include "red_shulker_box_item.h"
#include "red_stained_glass_item.h"
#include "red_stained_glass_pane_item.h"
#include "red_terracotta_item.h"
#include "red_tulip_item.h"
#include "red_wool_item.h"
#include "redstone_item.h"
#include "redstone_block_item.h"
#include "redstone_lamp_item.h"
#include "redstone_ore_item.h"
#include "redstone_torch_item.h"
#include "reinforced_deepslate_item.h"
#include "repeater_item.h"
#include "repeating_command_block_item.h"
#include "respawn_anchor_item.h"
#include "rooted_dirt_item.h"
#include "rose_bush_item.h"
#include "rotten_flesh_item.h"

void ItemRegistry::generateR() {

  { // ID: 18
    registry[18] = std::make_shared<RootedDirtItem>();
  }

  { // ID: 41
    registry[41] = std::make_shared<RedSandItem>();
  }

  { // ID: 51
    registry[51] = std::make_shared<RedstoneOreItem>();
  }

  { // ID: 63
    registry[63] = std::make_shared<RawIronBlockItem>();
  }

  { // ID: 64
    registry[64] = std::make_shared<RawCopperBlockItem>();
  }

  { // ID: 65
    registry[65] = std::make_shared<RawGoldBlockItem>();
  }

  { // ID: 181
    registry[181] = std::make_shared<RedWoolItem>();
  }

  { // ID: 188
    registry[188] = std::make_shared<RedTulipItem>();
  }

  { // ID: 198
    registry[198] = std::make_shared<RedMushroomItem>();
  }

  { // ID: 234
    registry[234] = std::make_shared<RedSandstoneSlabItem>();
  }

  { // ID: 306
    registry[306] = std::make_shared<ReinforcedDeepslateItem>();
  }

  { // ID: 308
    registry[308] = std::make_shared<RedMushroomBlockItem>();
  }

  { // ID: 353
    registry[353] = std::make_shared<RedSandstoneWallItem>();
  }

  { // ID: 360
    registry[360] = std::make_shared<RedNetherBrickWallItem>();
  }

  { // ID: 393
    registry[393] = std::make_shared<RedTerracottaItem>();
  }

  { // ID: 412
    registry[412] = std::make_shared<RedCarpetItem>();
  }

  { // ID: 419
    registry[419] = std::make_shared<RoseBushItem>();
  }

  { // ID: 437
    registry[437] = std::make_shared<RedStainedGlassItem>();
  }

  { // ID: 453
    registry[453] = std::make_shared<RedStainedGlassPaneItem>();
  }

  { // ID: 462
    registry[462] = std::make_shared<RedSandstoneItem>();
  }

  { // ID: 465
    registry[465] = std::make_shared<RedSandstoneStairsItem>();
  }

  { // ID: 466
    registry[466] = std::make_shared<RepeatingCommandBlockItem>();
  }

  { // ID: 471
    registry[471] = std::make_shared<RedNetherBricksItem>();
  }

  { // ID: 489
    registry[489] = std::make_shared<RedShulkerBoxItem>();
  }

  { // ID: 505
    registry[505] = std::make_shared<RedGlazedTerracottaItem>();
  }

  { // ID: 521
    registry[521] = std::make_shared<RedConcreteItem>();
  }

  { // ID: 537
    registry[537] = std::make_shared<RedConcretePowderItem>();
  }

  { // ID: 583
    registry[583] = std::make_shared<RedNetherBrickStairsItem>();
  }

  { // ID: 600
    registry[600] = std::make_shared<RedNetherBrickSlabItem>();
  }

  { // ID: 608
    registry[608] = std::make_shared<RedstoneItem>();
  }

  { // ID: 609
    registry[609] = std::make_shared<RedstoneTorchItem>();
  }

  { // ID: 610
    registry[610] = std::make_shared<RedstoneBlockItem>();
  }

  { // ID: 611
    registry[611] = std::make_shared<RepeaterItem>();
  }

  { // ID: 630
    registry[630] = std::make_shared<RedstoneLampItem>();
  }

  { // ID: 687
    registry[687] = std::make_shared<RailItem>();
  }

  { // ID: 727
    registry[727] = std::make_shared<RawIronItem>();
  }

  { // ID: 729
    registry[729] = std::make_shared<RawCopperItem>();
  }

  { // ID: 731
    registry[731] = std::make_shared<RawGoldItem>();
  }

  { // ID: 834
    registry[834] = std::make_shared<RecoveryCompassItem>();
  }

  { // ID: 863
    registry[863] = std::make_shared<RedDyeItem>();
  }

  { // ID: 883
    registry[883] = std::make_shared<RedBedItem>();
  }

  { // ID: 896
    registry[896] = std::make_shared<RottenFleshItem>();
  }

  { // ID: 953
    registry[953] = std::make_shared<RabbitSpawnEggItem>();
  }

  { // ID: 954
    registry[954] = std::make_shared<RavagerSpawnEggItem>();
  }

  { // ID: 1010
    registry[1010] = std::make_shared<RabbitItem>();
  }

  { // ID: 1012
    registry[1012] = std::make_shared<RabbitStewItem>();
  }

  { // ID: 1013
    registry[1013] = std::make_shared<RabbitFootItem>();
  }

  { // ID: 1014
    registry[1014] = std::make_shared<RabbitHideItem>();
  }

  { // ID: 1039
    registry[1039] = std::make_shared<RedBannerItem>();
  }

  { // ID: 1124
    registry[1124] = std::make_shared<RespawnAnchorItem>();
  }

  { // ID: 1140
    registry[1140] = std::make_shared<RedCandleItem>();
  }
}
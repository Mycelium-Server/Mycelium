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


#include "block_registry.h"

#include "cactus_block.h"
#include "cake_block.h"
#include "calcite_block.h"
#include "campfire_block.h"
#include "candle_block.h"
#include "candle_cake_block.h"
#include "carrots_block.h"
#include "cartography_table_block.h"
#include "carved_pumpkin_block.h"
#include "cauldron_block.h"
#include "cave_air_block.h"
#include "cave_vines_block.h"
#include "cave_vines_plant_block.h"
#include "chain_block.h"
#include "chain_command_block_block.h"
#include "chest_block.h"
#include "chipped_anvil_block.h"
#include "chiseled_deepslate_block.h"
#include "chiseled_nether_bricks_block.h"
#include "chiseled_polished_blackstone_block.h"
#include "chiseled_quartz_block_block.h"
#include "chiseled_red_sandstone_block.h"
#include "chiseled_sandstone_block.h"
#include "chiseled_stone_bricks_block.h"
#include "chorus_flower_block.h"
#include "chorus_plant_block.h"
#include "clay_block.h"
#include "coal_block_block.h"
#include "coal_ore_block.h"
#include "coarse_dirt_block.h"
#include "cobbled_deepslate_block.h"
#include "cobbled_deepslate_slab_block.h"
#include "cobbled_deepslate_stairs_block.h"
#include "cobbled_deepslate_wall_block.h"
#include "cobblestone_block.h"
#include "cobblestone_slab_block.h"
#include "cobblestone_stairs_block.h"
#include "cobblestone_wall_block.h"
#include "cobweb_block.h"
#include "cocoa_block.h"
#include "command_block_block.h"
#include "comparator_block.h"
#include "composter_block.h"
#include "conduit_block.h"
#include "copper_block_block.h"
#include "copper_ore_block.h"
#include "cornflower_block.h"
#include "cracked_deepslate_bricks_block.h"
#include "cracked_deepslate_tiles_block.h"
#include "cracked_nether_bricks_block.h"
#include "cracked_polished_blackstone_bricks_block.h"
#include "cracked_stone_bricks_block.h"
#include "crafting_table_block.h"
#include "creeper_head_block.h"
#include "creeper_wall_head_block.h"
#include "crimson_button_block.h"
#include "crimson_door_block.h"
#include "crimson_fence_block.h"
#include "crimson_fence_gate_block.h"
#include "crimson_fungus_block.h"
#include "crimson_hyphae_block.h"
#include "crimson_nylium_block.h"
#include "crimson_planks_block.h"
#include "crimson_pressure_plate_block.h"
#include "crimson_roots_block.h"
#include "crimson_sign_block.h"
#include "crimson_slab_block.h"
#include "crimson_stairs_block.h"
#include "crimson_stem_block.h"
#include "crimson_trapdoor_block.h"
#include "crimson_wall_sign_block.h"
#include "crying_obsidian_block.h"
#include "cut_copper_block.h"
#include "cut_copper_slab_block.h"
#include "cut_copper_stairs_block.h"
#include "cut_red_sandstone_block.h"
#include "cut_red_sandstone_slab_block.h"
#include "cut_sandstone_block.h"
#include "cut_sandstone_slab_block.h"
#include "cyan_banner_block.h"
#include "cyan_bed_block.h"
#include "cyan_candle_block.h"
#include "cyan_candle_cake_block.h"
#include "cyan_carpet_block.h"
#include "cyan_concrete_block.h"
#include "cyan_concrete_powder_block.h"
#include "cyan_glazed_terracotta_block.h"
#include "cyan_shulker_box_block.h"
#include "cyan_stained_glass_block.h"
#include "cyan_stained_glass_pane_block.h"
#include "cyan_terracotta_block.h"
#include "cyan_wall_banner_block.h"
#include "cyan_wool_block.h"

void BlockRegistry::generateC() {

  { // ID: 11
    std::shared_ptr<CoarseDirtBlock> block = std::make_shared<CoarseDirtBlock>();
    registry[11] = block;
  }

  { // ID: 14
    std::shared_ptr<CobblestoneBlock> block = std::make_shared<CobblestoneBlock>();
    registry[14] = block;
  }

  { // ID: 114
    std::shared_ptr<CoalOreBlock> block = std::make_shared<CoalOreBlock>();
    registry[114] = block;
  }

  { // ID: 477
    std::shared_ptr<ChiseledSandstoneBlock> block = std::make_shared<ChiseledSandstoneBlock>();
    registry[477] = block;
  }

  { // ID: 478
    std::shared_ptr<CutSandstoneBlock> block = std::make_shared<CutSandstoneBlock>();
    registry[478] = block;
  }

  { // ID: 1423
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_NORTH;
    block->occupied = CyanBedBlock::OCCUPIED_TRUE;
    block->part = CyanBedBlock::PART_HEAD;
    registry[1423] = block;
  }

  { // ID: 1424
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_NORTH;
    block->occupied = CyanBedBlock::OCCUPIED_TRUE;
    block->part = CyanBedBlock::PART_FOOT;
    registry[1424] = block;
  }

  { // ID: 1425
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_NORTH;
    block->occupied = CyanBedBlock::OCCUPIED_FALSE;
    block->part = CyanBedBlock::PART_HEAD;
    registry[1425] = block;
  }

  { // ID: 1426
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_NORTH;
    block->occupied = CyanBedBlock::OCCUPIED_FALSE;
    block->part = CyanBedBlock::PART_FOOT;
    registry[1426] = block;
  }

  { // ID: 1427
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_SOUTH;
    block->occupied = CyanBedBlock::OCCUPIED_TRUE;
    block->part = CyanBedBlock::PART_HEAD;
    registry[1427] = block;
  }

  { // ID: 1428
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_SOUTH;
    block->occupied = CyanBedBlock::OCCUPIED_TRUE;
    block->part = CyanBedBlock::PART_FOOT;
    registry[1428] = block;
  }

  { // ID: 1429
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_SOUTH;
    block->occupied = CyanBedBlock::OCCUPIED_FALSE;
    block->part = CyanBedBlock::PART_HEAD;
    registry[1429] = block;
  }

  { // ID: 1430
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_SOUTH;
    block->occupied = CyanBedBlock::OCCUPIED_FALSE;
    block->part = CyanBedBlock::PART_FOOT;
    registry[1430] = block;
  }

  { // ID: 1431
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_WEST;
    block->occupied = CyanBedBlock::OCCUPIED_TRUE;
    block->part = CyanBedBlock::PART_HEAD;
    registry[1431] = block;
  }

  { // ID: 1432
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_WEST;
    block->occupied = CyanBedBlock::OCCUPIED_TRUE;
    block->part = CyanBedBlock::PART_FOOT;
    registry[1432] = block;
  }

  { // ID: 1433
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_WEST;
    block->occupied = CyanBedBlock::OCCUPIED_FALSE;
    block->part = CyanBedBlock::PART_HEAD;
    registry[1433] = block;
  }

  { // ID: 1434
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_WEST;
    block->occupied = CyanBedBlock::OCCUPIED_FALSE;
    block->part = CyanBedBlock::PART_FOOT;
    registry[1434] = block;
  }

  { // ID: 1435
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_EAST;
    block->occupied = CyanBedBlock::OCCUPIED_TRUE;
    block->part = CyanBedBlock::PART_HEAD;
    registry[1435] = block;
  }

  { // ID: 1436
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_EAST;
    block->occupied = CyanBedBlock::OCCUPIED_TRUE;
    block->part = CyanBedBlock::PART_FOOT;
    registry[1436] = block;
  }

  { // ID: 1437
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_EAST;
    block->occupied = CyanBedBlock::OCCUPIED_FALSE;
    block->part = CyanBedBlock::PART_HEAD;
    registry[1437] = block;
  }

  { // ID: 1438
    std::shared_ptr<CyanBedBlock> block = std::make_shared<CyanBedBlock>();
    block->facing = CyanBedBlock::FACING_EAST;
    block->occupied = CyanBedBlock::OCCUPIED_FALSE;
    block->part = CyanBedBlock::PART_FOOT;
    registry[1438] = block;
  }

  { // ID: 1595
    std::shared_ptr<CobwebBlock> block = std::make_shared<CobwebBlock>();
    registry[1595] = block;
  }

  { // ID: 1647
    std::shared_ptr<CyanWoolBlock> block = std::make_shared<CyanWoolBlock>();
    registry[1647] = block;
  }

  { // ID: 1676
    std::shared_ptr<CornflowerBlock> block = std::make_shared<CornflowerBlock>();
    registry[1676] = block;
  }

  { // ID: 2288
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_SINGLE;
    block->facing = ChestBlock::FACING_NORTH;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2288] = block;
  }

  { // ID: 2289
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_SINGLE;
    block->facing = ChestBlock::FACING_NORTH;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2289] = block;
  }

  { // ID: 2290
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_LEFT;
    block->facing = ChestBlock::FACING_NORTH;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2290] = block;
  }

  { // ID: 2291
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_LEFT;
    block->facing = ChestBlock::FACING_NORTH;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2291] = block;
  }

  { // ID: 2292
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_RIGHT;
    block->facing = ChestBlock::FACING_NORTH;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2292] = block;
  }

  { // ID: 2293
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_RIGHT;
    block->facing = ChestBlock::FACING_NORTH;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2293] = block;
  }

  { // ID: 2294
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_SINGLE;
    block->facing = ChestBlock::FACING_SOUTH;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2294] = block;
  }

  { // ID: 2295
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_SINGLE;
    block->facing = ChestBlock::FACING_SOUTH;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2295] = block;
  }

  { // ID: 2296
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_LEFT;
    block->facing = ChestBlock::FACING_SOUTH;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2296] = block;
  }

  { // ID: 2297
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_LEFT;
    block->facing = ChestBlock::FACING_SOUTH;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2297] = block;
  }

  { // ID: 2298
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_RIGHT;
    block->facing = ChestBlock::FACING_SOUTH;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2298] = block;
  }

  { // ID: 2299
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_RIGHT;
    block->facing = ChestBlock::FACING_SOUTH;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2299] = block;
  }

  { // ID: 2300
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_SINGLE;
    block->facing = ChestBlock::FACING_WEST;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2300] = block;
  }

  { // ID: 2301
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_SINGLE;
    block->facing = ChestBlock::FACING_WEST;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2301] = block;
  }

  { // ID: 2302
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_LEFT;
    block->facing = ChestBlock::FACING_WEST;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2302] = block;
  }

  { // ID: 2303
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_LEFT;
    block->facing = ChestBlock::FACING_WEST;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2303] = block;
  }

  { // ID: 2304
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_RIGHT;
    block->facing = ChestBlock::FACING_WEST;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2304] = block;
  }

  { // ID: 2305
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_RIGHT;
    block->facing = ChestBlock::FACING_WEST;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2305] = block;
  }

  { // ID: 2306
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_SINGLE;
    block->facing = ChestBlock::FACING_EAST;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2306] = block;
  }

  { // ID: 2307
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_SINGLE;
    block->facing = ChestBlock::FACING_EAST;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2307] = block;
  }

  { // ID: 2308
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_LEFT;
    block->facing = ChestBlock::FACING_EAST;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2308] = block;
  }

  { // ID: 2309
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_LEFT;
    block->facing = ChestBlock::FACING_EAST;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2309] = block;
  }

  { // ID: 2310
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_RIGHT;
    block->facing = ChestBlock::FACING_EAST;
    block->waterlogged = ChestBlock::WATERLOGGED_TRUE;
    registry[2310] = block;
  }

  { // ID: 2311
    std::shared_ptr<ChestBlock> block = std::make_shared<ChestBlock>();
    block->type = ChestBlock::TYPE_RIGHT;
    block->facing = ChestBlock::FACING_EAST;
    block->waterlogged = ChestBlock::WATERLOGGED_FALSE;
    registry[2311] = block;
  }

  { // ID: 3611
    std::shared_ptr<CraftingTableBlock> block = std::make_shared<CraftingTableBlock>();
    registry[3611] = block;
  }

  { // ID: 3952
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3952] = block;
  }

  { // ID: 3953
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3953] = block;
  }

  { // ID: 3954
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3954] = block;
  }

  { // ID: 3955
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3955] = block;
  }

  { // ID: 3956
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3956] = block;
  }

  { // ID: 3957
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3957] = block;
  }

  { // ID: 3958
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3958] = block;
  }

  { // ID: 3959
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3959] = block;
  }

  { // ID: 3960
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3960] = block;
  }

  { // ID: 3961
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3961] = block;
  }

  { // ID: 3962
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3962] = block;
  }

  { // ID: 3963
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3963] = block;
  }

  { // ID: 3964
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3964] = block;
  }

  { // ID: 3965
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3965] = block;
  }

  { // ID: 3966
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3966] = block;
  }

  { // ID: 3967
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3967] = block;
  }

  { // ID: 3968
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3968] = block;
  }

  { // ID: 3969
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3969] = block;
  }

  { // ID: 3970
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3970] = block;
  }

  { // ID: 3971
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_NORTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3971] = block;
  }

  { // ID: 3972
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3972] = block;
  }

  { // ID: 3973
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3973] = block;
  }

  { // ID: 3974
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3974] = block;
  }

  { // ID: 3975
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3975] = block;
  }

  { // ID: 3976
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3976] = block;
  }

  { // ID: 3977
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3977] = block;
  }

  { // ID: 3978
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3978] = block;
  }

  { // ID: 3979
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3979] = block;
  }

  { // ID: 3980
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3980] = block;
  }

  { // ID: 3981
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3981] = block;
  }

  { // ID: 3982
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3982] = block;
  }

  { // ID: 3983
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3983] = block;
  }

  { // ID: 3984
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3984] = block;
  }

  { // ID: 3985
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3985] = block;
  }

  { // ID: 3986
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3986] = block;
  }

  { // ID: 3987
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3987] = block;
  }

  { // ID: 3988
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3988] = block;
  }

  { // ID: 3989
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3989] = block;
  }

  { // ID: 3990
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3990] = block;
  }

  { // ID: 3991
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_SOUTH;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3991] = block;
  }

  { // ID: 3992
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3992] = block;
  }

  { // ID: 3993
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3993] = block;
  }

  { // ID: 3994
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3994] = block;
  }

  { // ID: 3995
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3995] = block;
  }

  { // ID: 3996
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3996] = block;
  }

  { // ID: 3997
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3997] = block;
  }

  { // ID: 3998
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[3998] = block;
  }

  { // ID: 3999
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[3999] = block;
  }

  { // ID: 4000
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4000] = block;
  }

  { // ID: 4001
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4001] = block;
  }

  { // ID: 4002
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4002] = block;
  }

  { // ID: 4003
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4003] = block;
  }

  { // ID: 4004
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4004] = block;
  }

  { // ID: 4005
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4005] = block;
  }

  { // ID: 4006
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4006] = block;
  }

  { // ID: 4007
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4007] = block;
  }

  { // ID: 4008
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4008] = block;
  }

  { // ID: 4009
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4009] = block;
  }

  { // ID: 4010
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4010] = block;
  }

  { // ID: 4011
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_WEST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4011] = block;
  }

  { // ID: 4012
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4012] = block;
  }

  { // ID: 4013
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4013] = block;
  }

  { // ID: 4014
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4014] = block;
  }

  { // ID: 4015
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4015] = block;
  }

  { // ID: 4016
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4016] = block;
  }

  { // ID: 4017
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4017] = block;
  }

  { // ID: 4018
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4018] = block;
  }

  { // ID: 4019
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4019] = block;
  }

  { // ID: 4020
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4020] = block;
  }

  { // ID: 4021
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_TOP;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4021] = block;
  }

  { // ID: 4022
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4022] = block;
  }

  { // ID: 4023
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4023] = block;
  }

  { // ID: 4024
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4024] = block;
  }

  { // ID: 4025
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4025] = block;
  }

  { // ID: 4026
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4026] = block;
  }

  { // ID: 4027
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4027] = block;
  }

  { // ID: 4028
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4028] = block;
  }

  { // ID: 4029
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4029] = block;
  }

  { // ID: 4030
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_TRUE;
    registry[4030] = block;
  }

  { // ID: 4031
    std::shared_ptr<CobblestoneStairsBlock> block = std::make_shared<CobblestoneStairsBlock>();
    block->facing = CobblestoneStairsBlock::FACING_EAST;
    block->half = CobblestoneStairsBlock::HALF_BOTTOM;
    block->shape = CobblestoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobblestoneStairsBlock::WATERLOGGED_FALSE;
    registry[4031] = block;
  }

  { // ID: 4240
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_0;
    registry[4240] = block;
  }

  { // ID: 4241
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_1;
    registry[4241] = block;
  }

  { // ID: 4242
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_2;
    registry[4242] = block;
  }

  { // ID: 4243
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_3;
    registry[4243] = block;
  }

  { // ID: 4244
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_4;
    registry[4244] = block;
  }

  { // ID: 4245
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_5;
    registry[4245] = block;
  }

  { // ID: 4246
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_6;
    registry[4246] = block;
  }

  { // ID: 4247
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_7;
    registry[4247] = block;
  }

  { // ID: 4248
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_8;
    registry[4248] = block;
  }

  { // ID: 4249
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_9;
    registry[4249] = block;
  }

  { // ID: 4250
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_10;
    registry[4250] = block;
  }

  { // ID: 4251
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_11;
    registry[4251] = block;
  }

  { // ID: 4252
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_12;
    registry[4252] = block;
  }

  { // ID: 4253
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_13;
    registry[4253] = block;
  }

  { // ID: 4254
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_14;
    registry[4254] = block;
  }

  { // ID: 4255
    std::shared_ptr<CactusBlock> block = std::make_shared<CactusBlock>();
    block->age = CactusBlock::AGE_15;
    registry[4255] = block;
  }

  { // ID: 4256
    std::shared_ptr<ClayBlock> block = std::make_shared<ClayBlock>();
    registry[4256] = block;
  }

  { // ID: 4325
    std::shared_ptr<CarvedPumpkinBlock> block = std::make_shared<CarvedPumpkinBlock>();
    block->facing = CarvedPumpkinBlock::FACING_NORTH;
    registry[4325] = block;
  }

  { // ID: 4326
    std::shared_ptr<CarvedPumpkinBlock> block = std::make_shared<CarvedPumpkinBlock>();
    block->facing = CarvedPumpkinBlock::FACING_SOUTH;
    registry[4326] = block;
  }

  { // ID: 4327
    std::shared_ptr<CarvedPumpkinBlock> block = std::make_shared<CarvedPumpkinBlock>();
    block->facing = CarvedPumpkinBlock::FACING_WEST;
    registry[4327] = block;
  }

  { // ID: 4328
    std::shared_ptr<CarvedPumpkinBlock> block = std::make_shared<CarvedPumpkinBlock>();
    block->facing = CarvedPumpkinBlock::FACING_EAST;
    registry[4328] = block;
  }

  { // ID: 4333
    std::shared_ptr<CakeBlock> block = std::make_shared<CakeBlock>();
    block->bites = CakeBlock::BITES_0;
    registry[4333] = block;
  }

  { // ID: 4334
    std::shared_ptr<CakeBlock> block = std::make_shared<CakeBlock>();
    block->bites = CakeBlock::BITES_1;
    registry[4334] = block;
  }

  { // ID: 4335
    std::shared_ptr<CakeBlock> block = std::make_shared<CakeBlock>();
    block->bites = CakeBlock::BITES_2;
    registry[4335] = block;
  }

  { // ID: 4336
    std::shared_ptr<CakeBlock> block = std::make_shared<CakeBlock>();
    block->bites = CakeBlock::BITES_3;
    registry[4336] = block;
  }

  { // ID: 4337
    std::shared_ptr<CakeBlock> block = std::make_shared<CakeBlock>();
    block->bites = CakeBlock::BITES_4;
    registry[4337] = block;
  }

  { // ID: 4338
    std::shared_ptr<CakeBlock> block = std::make_shared<CakeBlock>();
    block->bites = CakeBlock::BITES_5;
    registry[4338] = block;
  }

  { // ID: 4339
    std::shared_ptr<CakeBlock> block = std::make_shared<CakeBlock>();
    block->bites = CakeBlock::BITES_6;
    registry[4339] = block;
  }

  { // ID: 4413
    std::shared_ptr<CyanStainedGlassBlock> block = std::make_shared<CyanStainedGlassBlock>();
    registry[4413] = block;
  }

  { // ID: 4870
    std::shared_ptr<CrackedStoneBricksBlock> block = std::make_shared<CrackedStoneBricksBlock>();
    registry[4870] = block;
  }

  { // ID: 4871
    std::shared_ptr<ChiseledStoneBricksBlock> block = std::make_shared<ChiseledStoneBricksBlock>();
    registry[4871] = block;
  }

  { // ID: 5104
    std::shared_ptr<ChainBlock> block = std::make_shared<ChainBlock>();
    block->axis = ChainBlock::AXIS_X;
    block->waterlogged = ChainBlock::WATERLOGGED_TRUE;
    registry[5104] = block;
  }

  { // ID: 5105
    std::shared_ptr<ChainBlock> block = std::make_shared<ChainBlock>();
    block->axis = ChainBlock::AXIS_X;
    block->waterlogged = ChainBlock::WATERLOGGED_FALSE;
    registry[5105] = block;
  }

  { // ID: 5106
    std::shared_ptr<ChainBlock> block = std::make_shared<ChainBlock>();
    block->axis = ChainBlock::AXIS_Y;
    block->waterlogged = ChainBlock::WATERLOGGED_TRUE;
    registry[5106] = block;
  }

  { // ID: 5107
    std::shared_ptr<ChainBlock> block = std::make_shared<ChainBlock>();
    block->axis = ChainBlock::AXIS_Y;
    block->waterlogged = ChainBlock::WATERLOGGED_FALSE;
    registry[5107] = block;
  }

  { // ID: 5108
    std::shared_ptr<ChainBlock> block = std::make_shared<ChainBlock>();
    block->axis = ChainBlock::AXIS_Z;
    block->waterlogged = ChainBlock::WATERLOGGED_TRUE;
    registry[5108] = block;
  }

  { // ID: 5109
    std::shared_ptr<ChainBlock> block = std::make_shared<ChainBlock>();
    block->axis = ChainBlock::AXIS_Z;
    block->waterlogged = ChainBlock::WATERLOGGED_FALSE;
    registry[5109] = block;
  }

  { // ID: 5728
    std::shared_ptr<CauldronBlock> block = std::make_shared<CauldronBlock>();
    registry[5728] = block;
  }

  { // ID: 5749
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_0;
    block->facing = CocoaBlock::FACING_NORTH;
    registry[5749] = block;
  }

  { // ID: 5750
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_0;
    block->facing = CocoaBlock::FACING_SOUTH;
    registry[5750] = block;
  }

  { // ID: 5751
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_0;
    block->facing = CocoaBlock::FACING_WEST;
    registry[5751] = block;
  }

  { // ID: 5752
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_0;
    block->facing = CocoaBlock::FACING_EAST;
    registry[5752] = block;
  }

  { // ID: 5753
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_1;
    block->facing = CocoaBlock::FACING_NORTH;
    registry[5753] = block;
  }

  { // ID: 5754
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_1;
    block->facing = CocoaBlock::FACING_SOUTH;
    registry[5754] = block;
  }

  { // ID: 5755
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_1;
    block->facing = CocoaBlock::FACING_WEST;
    registry[5755] = block;
  }

  { // ID: 5756
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_1;
    block->facing = CocoaBlock::FACING_EAST;
    registry[5756] = block;
  }

  { // ID: 5757
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_2;
    block->facing = CocoaBlock::FACING_NORTH;
    registry[5757] = block;
  }

  { // ID: 5758
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_2;
    block->facing = CocoaBlock::FACING_SOUTH;
    registry[5758] = block;
  }

  { // ID: 5759
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_2;
    block->facing = CocoaBlock::FACING_WEST;
    registry[5759] = block;
  }

  { // ID: 5760
    std::shared_ptr<CocoaBlock> block = std::make_shared<CocoaBlock>();
    block->age = CocoaBlock::AGE_2;
    block->facing = CocoaBlock::FACING_EAST;
    registry[5760] = block;
  }

  { // ID: 6236
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = CommandBlockBlock::FACING_NORTH;
    registry[6236] = block;
  }

  { // ID: 6237
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = CommandBlockBlock::FACING_EAST;
    registry[6237] = block;
  }

  { // ID: 6238
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = CommandBlockBlock::FACING_SOUTH;
    registry[6238] = block;
  }

  { // ID: 6239
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = CommandBlockBlock::FACING_WEST;
    registry[6239] = block;
  }

  { // ID: 6240
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = CommandBlockBlock::FACING_UP;
    registry[6240] = block;
  }

  { // ID: 6241
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = CommandBlockBlock::FACING_DOWN;
    registry[6241] = block;
  }

  { // ID: 6242
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = CommandBlockBlock::FACING_NORTH;
    registry[6242] = block;
  }

  { // ID: 6243
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = CommandBlockBlock::FACING_EAST;
    registry[6243] = block;
  }

  { // ID: 6244
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = CommandBlockBlock::FACING_SOUTH;
    registry[6244] = block;
  }

  { // ID: 6245
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = CommandBlockBlock::FACING_WEST;
    registry[6245] = block;
  }

  { // ID: 6246
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = CommandBlockBlock::FACING_UP;
    registry[6246] = block;
  }

  { // ID: 6247
    std::shared_ptr<CommandBlockBlock> block = std::make_shared<CommandBlockBlock>();
    block->conditional = CommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = CommandBlockBlock::FACING_DOWN;
    registry[6247] = block;
  }

  { // ID: 6249
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6249] = block;
  }

  { // ID: 6250
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6250] = block;
  }

  { // ID: 6251
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6251] = block;
  }

  { // ID: 6252
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6252] = block;
  }

  { // ID: 6253
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6253] = block;
  }

  { // ID: 6254
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6254] = block;
  }

  { // ID: 6255
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6255] = block;
  }

  { // ID: 6256
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6256] = block;
  }

  { // ID: 6257
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6257] = block;
  }

  { // ID: 6258
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6258] = block;
  }

  { // ID: 6259
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6259] = block;
  }

  { // ID: 6260
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6260] = block;
  }

  { // ID: 6261
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6261] = block;
  }

  { // ID: 6262
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6262] = block;
  }

  { // ID: 6263
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6263] = block;
  }

  { // ID: 6264
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6264] = block;
  }

  { // ID: 6265
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6265] = block;
  }

  { // ID: 6266
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6266] = block;
  }

  { // ID: 6267
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6267] = block;
  }

  { // ID: 6268
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6268] = block;
  }

  { // ID: 6269
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6269] = block;
  }

  { // ID: 6270
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6270] = block;
  }

  { // ID: 6271
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6271] = block;
  }

  { // ID: 6272
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6272] = block;
  }

  { // ID: 6273
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6273] = block;
  }

  { // ID: 6274
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6274] = block;
  }

  { // ID: 6275
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6275] = block;
  }

  { // ID: 6276
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6276] = block;
  }

  { // ID: 6277
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6277] = block;
  }

  { // ID: 6278
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6278] = block;
  }

  { // ID: 6279
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6279] = block;
  }

  { // ID: 6280
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6280] = block;
  }

  { // ID: 6281
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6281] = block;
  }

  { // ID: 6282
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6282] = block;
  }

  { // ID: 6283
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6283] = block;
  }

  { // ID: 6284
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6284] = block;
  }

  { // ID: 6285
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6285] = block;
  }

  { // ID: 6286
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6286] = block;
  }

  { // ID: 6287
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6287] = block;
  }

  { // ID: 6288
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6288] = block;
  }

  { // ID: 6289
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6289] = block;
  }

  { // ID: 6290
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6290] = block;
  }

  { // ID: 6291
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6291] = block;
  }

  { // ID: 6292
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6292] = block;
  }

  { // ID: 6293
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6293] = block;
  }

  { // ID: 6294
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6294] = block;
  }

  { // ID: 6295
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6295] = block;
  }

  { // ID: 6296
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6296] = block;
  }

  { // ID: 6297
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6297] = block;
  }

  { // ID: 6298
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6298] = block;
  }

  { // ID: 6299
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6299] = block;
  }

  { // ID: 6300
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6300] = block;
  }

  { // ID: 6301
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6301] = block;
  }

  { // ID: 6302
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6302] = block;
  }

  { // ID: 6303
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6303] = block;
  }

  { // ID: 6304
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6304] = block;
  }

  { // ID: 6305
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6305] = block;
  }

  { // ID: 6306
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6306] = block;
  }

  { // ID: 6307
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6307] = block;
  }

  { // ID: 6308
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6308] = block;
  }

  { // ID: 6309
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6309] = block;
  }

  { // ID: 6310
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6310] = block;
  }

  { // ID: 6311
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6311] = block;
  }

  { // ID: 6312
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6312] = block;
  }

  { // ID: 6313
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6313] = block;
  }

  { // ID: 6314
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6314] = block;
  }

  { // ID: 6315
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6315] = block;
  }

  { // ID: 6316
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6316] = block;
  }

  { // ID: 6317
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6317] = block;
  }

  { // ID: 6318
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6318] = block;
  }

  { // ID: 6319
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6319] = block;
  }

  { // ID: 6320
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6320] = block;
  }

  { // ID: 6321
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6321] = block;
  }

  { // ID: 6322
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6322] = block;
  }

  { // ID: 6323
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6323] = block;
  }

  { // ID: 6324
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6324] = block;
  }

  { // ID: 6325
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6325] = block;
  }

  { // ID: 6326
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6326] = block;
  }

  { // ID: 6327
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6327] = block;
  }

  { // ID: 6328
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6328] = block;
  }

  { // ID: 6329
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6329] = block;
  }

  { // ID: 6330
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6330] = block;
  }

  { // ID: 6331
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6331] = block;
  }

  { // ID: 6332
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6332] = block;
  }

  { // ID: 6333
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6333] = block;
  }

  { // ID: 6334
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6334] = block;
  }

  { // ID: 6335
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6335] = block;
  }

  { // ID: 6336
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6336] = block;
  }

  { // ID: 6337
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6337] = block;
  }

  { // ID: 6338
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6338] = block;
  }

  { // ID: 6339
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6339] = block;
  }

  { // ID: 6340
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6340] = block;
  }

  { // ID: 6341
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6341] = block;
  }

  { // ID: 6342
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6342] = block;
  }

  { // ID: 6343
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6343] = block;
  }

  { // ID: 6344
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6344] = block;
  }

  { // ID: 6345
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6345] = block;
  }

  { // ID: 6346
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6346] = block;
  }

  { // ID: 6347
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6347] = block;
  }

  { // ID: 6348
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6348] = block;
  }

  { // ID: 6349
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6349] = block;
  }

  { // ID: 6350
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6350] = block;
  }

  { // ID: 6351
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6351] = block;
  }

  { // ID: 6352
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6352] = block;
  }

  { // ID: 6353
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6353] = block;
  }

  { // ID: 6354
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6354] = block;
  }

  { // ID: 6355
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6355] = block;
  }

  { // ID: 6356
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_NONE;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6356] = block;
  }

  { // ID: 6357
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6357] = block;
  }

  { // ID: 6358
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6358] = block;
  }

  { // ID: 6359
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6359] = block;
  }

  { // ID: 6360
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6360] = block;
  }

  { // ID: 6361
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6361] = block;
  }

  { // ID: 6362
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6362] = block;
  }

  { // ID: 6363
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6363] = block;
  }

  { // ID: 6364
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6364] = block;
  }

  { // ID: 6365
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6365] = block;
  }

  { // ID: 6366
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6366] = block;
  }

  { // ID: 6367
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6367] = block;
  }

  { // ID: 6368
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6368] = block;
  }

  { // ID: 6369
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6369] = block;
  }

  { // ID: 6370
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6370] = block;
  }

  { // ID: 6371
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6371] = block;
  }

  { // ID: 6372
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6372] = block;
  }

  { // ID: 6373
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6373] = block;
  }

  { // ID: 6374
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6374] = block;
  }

  { // ID: 6375
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6375] = block;
  }

  { // ID: 6376
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6376] = block;
  }

  { // ID: 6377
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6377] = block;
  }

  { // ID: 6378
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6378] = block;
  }

  { // ID: 6379
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6379] = block;
  }

  { // ID: 6380
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6380] = block;
  }

  { // ID: 6381
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6381] = block;
  }

  { // ID: 6382
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6382] = block;
  }

  { // ID: 6383
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6383] = block;
  }

  { // ID: 6384
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6384] = block;
  }

  { // ID: 6385
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6385] = block;
  }

  { // ID: 6386
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6386] = block;
  }

  { // ID: 6387
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6387] = block;
  }

  { // ID: 6388
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6388] = block;
  }

  { // ID: 6389
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6389] = block;
  }

  { // ID: 6390
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6390] = block;
  }

  { // ID: 6391
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6391] = block;
  }

  { // ID: 6392
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6392] = block;
  }

  { // ID: 6393
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6393] = block;
  }

  { // ID: 6394
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6394] = block;
  }

  { // ID: 6395
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6395] = block;
  }

  { // ID: 6396
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6396] = block;
  }

  { // ID: 6397
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6397] = block;
  }

  { // ID: 6398
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6398] = block;
  }

  { // ID: 6399
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6399] = block;
  }

  { // ID: 6400
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6400] = block;
  }

  { // ID: 6401
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6401] = block;
  }

  { // ID: 6402
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6402] = block;
  }

  { // ID: 6403
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6403] = block;
  }

  { // ID: 6404
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6404] = block;
  }

  { // ID: 6405
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6405] = block;
  }

  { // ID: 6406
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6406] = block;
  }

  { // ID: 6407
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6407] = block;
  }

  { // ID: 6408
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6408] = block;
  }

  { // ID: 6409
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6409] = block;
  }

  { // ID: 6410
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6410] = block;
  }

  { // ID: 6411
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6411] = block;
  }

  { // ID: 6412
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6412] = block;
  }

  { // ID: 6413
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6413] = block;
  }

  { // ID: 6414
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6414] = block;
  }

  { // ID: 6415
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6415] = block;
  }

  { // ID: 6416
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6416] = block;
  }

  { // ID: 6417
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6417] = block;
  }

  { // ID: 6418
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6418] = block;
  }

  { // ID: 6419
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6419] = block;
  }

  { // ID: 6420
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6420] = block;
  }

  { // ID: 6421
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6421] = block;
  }

  { // ID: 6422
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6422] = block;
  }

  { // ID: 6423
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6423] = block;
  }

  { // ID: 6424
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6424] = block;
  }

  { // ID: 6425
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6425] = block;
  }

  { // ID: 6426
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6426] = block;
  }

  { // ID: 6427
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6427] = block;
  }

  { // ID: 6428
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6428] = block;
  }

  { // ID: 6429
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6429] = block;
  }

  { // ID: 6430
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6430] = block;
  }

  { // ID: 6431
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6431] = block;
  }

  { // ID: 6432
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6432] = block;
  }

  { // ID: 6433
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6433] = block;
  }

  { // ID: 6434
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6434] = block;
  }

  { // ID: 6435
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6435] = block;
  }

  { // ID: 6436
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6436] = block;
  }

  { // ID: 6437
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6437] = block;
  }

  { // ID: 6438
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6438] = block;
  }

  { // ID: 6439
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6439] = block;
  }

  { // ID: 6440
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6440] = block;
  }

  { // ID: 6441
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6441] = block;
  }

  { // ID: 6442
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6442] = block;
  }

  { // ID: 6443
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6443] = block;
  }

  { // ID: 6444
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6444] = block;
  }

  { // ID: 6445
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6445] = block;
  }

  { // ID: 6446
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6446] = block;
  }

  { // ID: 6447
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6447] = block;
  }

  { // ID: 6448
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6448] = block;
  }

  { // ID: 6449
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6449] = block;
  }

  { // ID: 6450
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6450] = block;
  }

  { // ID: 6451
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6451] = block;
  }

  { // ID: 6452
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6452] = block;
  }

  { // ID: 6453
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6453] = block;
  }

  { // ID: 6454
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6454] = block;
  }

  { // ID: 6455
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6455] = block;
  }

  { // ID: 6456
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6456] = block;
  }

  { // ID: 6457
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6457] = block;
  }

  { // ID: 6458
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6458] = block;
  }

  { // ID: 6459
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6459] = block;
  }

  { // ID: 6460
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6460] = block;
  }

  { // ID: 6461
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6461] = block;
  }

  { // ID: 6462
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6462] = block;
  }

  { // ID: 6463
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6463] = block;
  }

  { // ID: 6464
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_LOW;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6464] = block;
  }

  { // ID: 6465
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6465] = block;
  }

  { // ID: 6466
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6466] = block;
  }

  { // ID: 6467
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6467] = block;
  }

  { // ID: 6468
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6468] = block;
  }

  { // ID: 6469
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6469] = block;
  }

  { // ID: 6470
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6470] = block;
  }

  { // ID: 6471
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6471] = block;
  }

  { // ID: 6472
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6472] = block;
  }

  { // ID: 6473
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6473] = block;
  }

  { // ID: 6474
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6474] = block;
  }

  { // ID: 6475
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6475] = block;
  }

  { // ID: 6476
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6476] = block;
  }

  { // ID: 6477
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6477] = block;
  }

  { // ID: 6478
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6478] = block;
  }

  { // ID: 6479
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6479] = block;
  }

  { // ID: 6480
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6480] = block;
  }

  { // ID: 6481
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6481] = block;
  }

  { // ID: 6482
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6482] = block;
  }

  { // ID: 6483
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6483] = block;
  }

  { // ID: 6484
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6484] = block;
  }

  { // ID: 6485
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6485] = block;
  }

  { // ID: 6486
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6486] = block;
  }

  { // ID: 6487
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6487] = block;
  }

  { // ID: 6488
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6488] = block;
  }

  { // ID: 6489
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6489] = block;
  }

  { // ID: 6490
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6490] = block;
  }

  { // ID: 6491
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6491] = block;
  }

  { // ID: 6492
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6492] = block;
  }

  { // ID: 6493
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6493] = block;
  }

  { // ID: 6494
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6494] = block;
  }

  { // ID: 6495
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6495] = block;
  }

  { // ID: 6496
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6496] = block;
  }

  { // ID: 6497
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6497] = block;
  }

  { // ID: 6498
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6498] = block;
  }

  { // ID: 6499
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6499] = block;
  }

  { // ID: 6500
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_NONE;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6500] = block;
  }

  { // ID: 6501
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6501] = block;
  }

  { // ID: 6502
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6502] = block;
  }

  { // ID: 6503
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6503] = block;
  }

  { // ID: 6504
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6504] = block;
  }

  { // ID: 6505
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6505] = block;
  }

  { // ID: 6506
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6506] = block;
  }

  { // ID: 6507
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6507] = block;
  }

  { // ID: 6508
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6508] = block;
  }

  { // ID: 6509
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6509] = block;
  }

  { // ID: 6510
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6510] = block;
  }

  { // ID: 6511
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6511] = block;
  }

  { // ID: 6512
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6512] = block;
  }

  { // ID: 6513
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6513] = block;
  }

  { // ID: 6514
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6514] = block;
  }

  { // ID: 6515
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6515] = block;
  }

  { // ID: 6516
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6516] = block;
  }

  { // ID: 6517
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6517] = block;
  }

  { // ID: 6518
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6518] = block;
  }

  { // ID: 6519
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6519] = block;
  }

  { // ID: 6520
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6520] = block;
  }

  { // ID: 6521
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6521] = block;
  }

  { // ID: 6522
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6522] = block;
  }

  { // ID: 6523
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6523] = block;
  }

  { // ID: 6524
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6524] = block;
  }

  { // ID: 6525
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6525] = block;
  }

  { // ID: 6526
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6526] = block;
  }

  { // ID: 6527
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6527] = block;
  }

  { // ID: 6528
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6528] = block;
  }

  { // ID: 6529
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6529] = block;
  }

  { // ID: 6530
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6530] = block;
  }

  { // ID: 6531
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6531] = block;
  }

  { // ID: 6532
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6532] = block;
  }

  { // ID: 6533
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6533] = block;
  }

  { // ID: 6534
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6534] = block;
  }

  { // ID: 6535
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6535] = block;
  }

  { // ID: 6536
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_LOW;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6536] = block;
  }

  { // ID: 6537
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6537] = block;
  }

  { // ID: 6538
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6538] = block;
  }

  { // ID: 6539
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6539] = block;
  }

  { // ID: 6540
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6540] = block;
  }

  { // ID: 6541
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6541] = block;
  }

  { // ID: 6542
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6542] = block;
  }

  { // ID: 6543
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6543] = block;
  }

  { // ID: 6544
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6544] = block;
  }

  { // ID: 6545
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6545] = block;
  }

  { // ID: 6546
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6546] = block;
  }

  { // ID: 6547
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6547] = block;
  }

  { // ID: 6548
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_NONE;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6548] = block;
  }

  { // ID: 6549
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6549] = block;
  }

  { // ID: 6550
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6550] = block;
  }

  { // ID: 6551
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6551] = block;
  }

  { // ID: 6552
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6552] = block;
  }

  { // ID: 6553
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6553] = block;
  }

  { // ID: 6554
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6554] = block;
  }

  { // ID: 6555
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6555] = block;
  }

  { // ID: 6556
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6556] = block;
  }

  { // ID: 6557
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6557] = block;
  }

  { // ID: 6558
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6558] = block;
  }

  { // ID: 6559
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6559] = block;
  }

  { // ID: 6560
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_LOW;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6560] = block;
  }

  { // ID: 6561
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6561] = block;
  }

  { // ID: 6562
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6562] = block;
  }

  { // ID: 6563
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6563] = block;
  }

  { // ID: 6564
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6564] = block;
  }

  { // ID: 6565
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6565] = block;
  }

  { // ID: 6566
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_TRUE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6566] = block;
  }

  { // ID: 6567
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6567] = block;
  }

  { // ID: 6568
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6568] = block;
  }

  { // ID: 6569
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_TRUE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6569] = block;
  }

  { // ID: 6570
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_NONE;
    registry[6570] = block;
  }

  { // ID: 6571
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_LOW;
    registry[6571] = block;
  }

  { // ID: 6572
    std::shared_ptr<CobblestoneWallBlock> block = std::make_shared<CobblestoneWallBlock>();
    block->east = CobblestoneWallBlock::EAST_TALL;
    block->north = CobblestoneWallBlock::NORTH_TALL;
    block->south = CobblestoneWallBlock::SOUTH_TALL;
    block->up = CobblestoneWallBlock::UP_FALSE;
    block->waterlogged = CobblestoneWallBlock::WATERLOGGED_FALSE;
    block->west = CobblestoneWallBlock::WEST_TALL;
    registry[6572] = block;
  }

  { // ID: 6923
    std::shared_ptr<CarrotsBlock> block = std::make_shared<CarrotsBlock>();
    block->age = CarrotsBlock::AGE_0;
    registry[6923] = block;
  }

  { // ID: 6924
    std::shared_ptr<CarrotsBlock> block = std::make_shared<CarrotsBlock>();
    block->age = CarrotsBlock::AGE_1;
    registry[6924] = block;
  }

  { // ID: 6925
    std::shared_ptr<CarrotsBlock> block = std::make_shared<CarrotsBlock>();
    block->age = CarrotsBlock::AGE_2;
    registry[6925] = block;
  }

  { // ID: 6926
    std::shared_ptr<CarrotsBlock> block = std::make_shared<CarrotsBlock>();
    block->age = CarrotsBlock::AGE_3;
    registry[6926] = block;
  }

  { // ID: 6927
    std::shared_ptr<CarrotsBlock> block = std::make_shared<CarrotsBlock>();
    block->age = CarrotsBlock::AGE_4;
    registry[6927] = block;
  }

  { // ID: 6928
    std::shared_ptr<CarrotsBlock> block = std::make_shared<CarrotsBlock>();
    block->age = CarrotsBlock::AGE_5;
    registry[6928] = block;
  }

  { // ID: 6929
    std::shared_ptr<CarrotsBlock> block = std::make_shared<CarrotsBlock>();
    block->age = CarrotsBlock::AGE_6;
    registry[6929] = block;
  }

  { // ID: 6930
    std::shared_ptr<CarrotsBlock> block = std::make_shared<CarrotsBlock>();
    block->age = CarrotsBlock::AGE_7;
    registry[6930] = block;
  }

  { // ID: 7187
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_0;
    registry[7187] = block;
  }

  { // ID: 7188
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_1;
    registry[7188] = block;
  }

  { // ID: 7189
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_2;
    registry[7189] = block;
  }

  { // ID: 7190
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_3;
    registry[7190] = block;
  }

  { // ID: 7191
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_4;
    registry[7191] = block;
  }

  { // ID: 7192
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_5;
    registry[7192] = block;
  }

  { // ID: 7193
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_6;
    registry[7193] = block;
  }

  { // ID: 7194
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_7;
    registry[7194] = block;
  }

  { // ID: 7195
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_8;
    registry[7195] = block;
  }

  { // ID: 7196
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_9;
    registry[7196] = block;
  }

  { // ID: 7197
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_10;
    registry[7197] = block;
  }

  { // ID: 7198
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_11;
    registry[7198] = block;
  }

  { // ID: 7199
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_12;
    registry[7199] = block;
  }

  { // ID: 7200
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_13;
    registry[7200] = block;
  }

  { // ID: 7201
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_14;
    registry[7201] = block;
  }

  { // ID: 7202
    std::shared_ptr<CreeperHeadBlock> block = std::make_shared<CreeperHeadBlock>();
    block->rotation = CreeperHeadBlock::ROTATION_15;
    registry[7202] = block;
  }

  { // ID: 7203
    std::shared_ptr<CreeperWallHeadBlock> block = std::make_shared<CreeperWallHeadBlock>();
    block->facing = CreeperWallHeadBlock::FACING_NORTH;
    registry[7203] = block;
  }

  { // ID: 7204
    std::shared_ptr<CreeperWallHeadBlock> block = std::make_shared<CreeperWallHeadBlock>();
    block->facing = CreeperWallHeadBlock::FACING_SOUTH;
    registry[7204] = block;
  }

  { // ID: 7205
    std::shared_ptr<CreeperWallHeadBlock> block = std::make_shared<CreeperWallHeadBlock>();
    block->facing = CreeperWallHeadBlock::FACING_WEST;
    registry[7205] = block;
  }

  { // ID: 7206
    std::shared_ptr<CreeperWallHeadBlock> block = std::make_shared<CreeperWallHeadBlock>();
    block->facing = CreeperWallHeadBlock::FACING_EAST;
    registry[7206] = block;
  }

  { // ID: 7231
    std::shared_ptr<ChippedAnvilBlock> block = std::make_shared<ChippedAnvilBlock>();
    block->facing = ChippedAnvilBlock::FACING_NORTH;
    registry[7231] = block;
  }

  { // ID: 7232
    std::shared_ptr<ChippedAnvilBlock> block = std::make_shared<ChippedAnvilBlock>();
    block->facing = ChippedAnvilBlock::FACING_SOUTH;
    registry[7232] = block;
  }

  { // ID: 7233
    std::shared_ptr<ChippedAnvilBlock> block = std::make_shared<ChippedAnvilBlock>();
    block->facing = ChippedAnvilBlock::FACING_WEST;
    registry[7233] = block;
  }

  { // ID: 7234
    std::shared_ptr<ChippedAnvilBlock> block = std::make_shared<ChippedAnvilBlock>();
    block->facing = ChippedAnvilBlock::FACING_EAST;
    registry[7234] = block;
  }

  { // ID: 7295
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_NORTH;
    block->mode = ComparatorBlock::MODE_COMPARE;
    block->powered = ComparatorBlock::POWERED_TRUE;
    registry[7295] = block;
  }

  { // ID: 7296
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_NORTH;
    block->mode = ComparatorBlock::MODE_COMPARE;
    block->powered = ComparatorBlock::POWERED_FALSE;
    registry[7296] = block;
  }

  { // ID: 7297
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_NORTH;
    block->mode = ComparatorBlock::MODE_SUBTRACT;
    block->powered = ComparatorBlock::POWERED_TRUE;
    registry[7297] = block;
  }

  { // ID: 7298
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_NORTH;
    block->mode = ComparatorBlock::MODE_SUBTRACT;
    block->powered = ComparatorBlock::POWERED_FALSE;
    registry[7298] = block;
  }

  { // ID: 7299
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_SOUTH;
    block->mode = ComparatorBlock::MODE_COMPARE;
    block->powered = ComparatorBlock::POWERED_TRUE;
    registry[7299] = block;
  }

  { // ID: 7300
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_SOUTH;
    block->mode = ComparatorBlock::MODE_COMPARE;
    block->powered = ComparatorBlock::POWERED_FALSE;
    registry[7300] = block;
  }

  { // ID: 7301
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_SOUTH;
    block->mode = ComparatorBlock::MODE_SUBTRACT;
    block->powered = ComparatorBlock::POWERED_TRUE;
    registry[7301] = block;
  }

  { // ID: 7302
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_SOUTH;
    block->mode = ComparatorBlock::MODE_SUBTRACT;
    block->powered = ComparatorBlock::POWERED_FALSE;
    registry[7302] = block;
  }

  { // ID: 7303
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_WEST;
    block->mode = ComparatorBlock::MODE_COMPARE;
    block->powered = ComparatorBlock::POWERED_TRUE;
    registry[7303] = block;
  }

  { // ID: 7304
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_WEST;
    block->mode = ComparatorBlock::MODE_COMPARE;
    block->powered = ComparatorBlock::POWERED_FALSE;
    registry[7304] = block;
  }

  { // ID: 7305
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_WEST;
    block->mode = ComparatorBlock::MODE_SUBTRACT;
    block->powered = ComparatorBlock::POWERED_TRUE;
    registry[7305] = block;
  }

  { // ID: 7306
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_WEST;
    block->mode = ComparatorBlock::MODE_SUBTRACT;
    block->powered = ComparatorBlock::POWERED_FALSE;
    registry[7306] = block;
  }

  { // ID: 7307
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_EAST;
    block->mode = ComparatorBlock::MODE_COMPARE;
    block->powered = ComparatorBlock::POWERED_TRUE;
    registry[7307] = block;
  }

  { // ID: 7308
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_EAST;
    block->mode = ComparatorBlock::MODE_COMPARE;
    block->powered = ComparatorBlock::POWERED_FALSE;
    registry[7308] = block;
  }

  { // ID: 7309
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_EAST;
    block->mode = ComparatorBlock::MODE_SUBTRACT;
    block->powered = ComparatorBlock::POWERED_TRUE;
    registry[7309] = block;
  }

  { // ID: 7310
    std::shared_ptr<ComparatorBlock> block = std::make_shared<ComparatorBlock>();
    block->facing = ComparatorBlock::FACING_EAST;
    block->mode = ComparatorBlock::MODE_SUBTRACT;
    block->powered = ComparatorBlock::POWERED_FALSE;
    registry[7310] = block;
  }

  { // ID: 7356
    std::shared_ptr<ChiseledQuartzBlockBlock> block = std::make_shared<ChiseledQuartzBlockBlock>();
    registry[7356] = block;
  }

  { // ID: 7485
    std::shared_ptr<CyanTerracottaBlock> block = std::make_shared<CyanTerracottaBlock>();
    registry[7485] = block;
  }

  { // ID: 7780
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7780] = block;
  }

  { // ID: 7781
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7781] = block;
  }

  { // ID: 7782
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7782] = block;
  }

  { // ID: 7783
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7783] = block;
  }

  { // ID: 7784
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7784] = block;
  }

  { // ID: 7785
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7785] = block;
  }

  { // ID: 7786
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7786] = block;
  }

  { // ID: 7787
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7787] = block;
  }

  { // ID: 7788
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7788] = block;
  }

  { // ID: 7789
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7789] = block;
  }

  { // ID: 7790
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7790] = block;
  }

  { // ID: 7791
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7791] = block;
  }

  { // ID: 7792
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7792] = block;
  }

  { // ID: 7793
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7793] = block;
  }

  { // ID: 7794
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7794] = block;
  }

  { // ID: 7795
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_TRUE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7795] = block;
  }

  { // ID: 7796
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7796] = block;
  }

  { // ID: 7797
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7797] = block;
  }

  { // ID: 7798
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7798] = block;
  }

  { // ID: 7799
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7799] = block;
  }

  { // ID: 7800
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7800] = block;
  }

  { // ID: 7801
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7801] = block;
  }

  { // ID: 7802
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7802] = block;
  }

  { // ID: 7803
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_TRUE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7803] = block;
  }

  { // ID: 7804
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7804] = block;
  }

  { // ID: 7805
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7805] = block;
  }

  { // ID: 7806
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7806] = block;
  }

  { // ID: 7807
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7807] = block;
  }

  { // ID: 7808
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7808] = block;
  }

  { // ID: 7809
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7809] = block;
  }

  { // ID: 7810
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_TRUE;
    registry[7810] = block;
  }

  { // ID: 7811
    std::shared_ptr<CyanStainedGlassPaneBlock> block = std::make_shared<CyanStainedGlassPaneBlock>();
    block->east = CyanStainedGlassPaneBlock::EAST_FALSE;
    block->north = CyanStainedGlassPaneBlock::NORTH_FALSE;
    block->south = CyanStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = CyanStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = CyanStainedGlassPaneBlock::WEST_FALSE;
    registry[7811] = block;
  }

  { // ID: 8616
    std::shared_ptr<CyanCarpetBlock> block = std::make_shared<CyanCarpetBlock>();
    registry[8616] = block;
  }

  { // ID: 8624
    std::shared_ptr<CoalBlockBlock> block = std::make_shared<CoalBlockBlock>();
    registry[8624] = block;
  }

  { // ID: 8782
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_0;
    registry[8782] = block;
  }

  { // ID: 8783
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_1;
    registry[8783] = block;
  }

  { // ID: 8784
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_2;
    registry[8784] = block;
  }

  { // ID: 8785
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_3;
    registry[8785] = block;
  }

  { // ID: 8786
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_4;
    registry[8786] = block;
  }

  { // ID: 8787
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_5;
    registry[8787] = block;
  }

  { // ID: 8788
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_6;
    registry[8788] = block;
  }

  { // ID: 8789
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_7;
    registry[8789] = block;
  }

  { // ID: 8790
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_8;
    registry[8790] = block;
  }

  { // ID: 8791
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_9;
    registry[8791] = block;
  }

  { // ID: 8792
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_10;
    registry[8792] = block;
  }

  { // ID: 8793
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_11;
    registry[8793] = block;
  }

  { // ID: 8794
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_12;
    registry[8794] = block;
  }

  { // ID: 8795
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_13;
    registry[8795] = block;
  }

  { // ID: 8796
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_14;
    registry[8796] = block;
  }

  { // ID: 8797
    std::shared_ptr<CyanBannerBlock> block = std::make_shared<CyanBannerBlock>();
    block->rotation = CyanBannerBlock::ROTATION_15;
    registry[8797] = block;
  }

  { // ID: 8930
    std::shared_ptr<CyanWallBannerBlock> block = std::make_shared<CyanWallBannerBlock>();
    block->facing = CyanWallBannerBlock::FACING_NORTH;
    registry[8930] = block;
  }

  { // ID: 8931
    std::shared_ptr<CyanWallBannerBlock> block = std::make_shared<CyanWallBannerBlock>();
    block->facing = CyanWallBannerBlock::FACING_SOUTH;
    registry[8931] = block;
  }

  { // ID: 8932
    std::shared_ptr<CyanWallBannerBlock> block = std::make_shared<CyanWallBannerBlock>();
    block->facing = CyanWallBannerBlock::FACING_WEST;
    registry[8932] = block;
  }

  { // ID: 8933
    std::shared_ptr<CyanWallBannerBlock> block = std::make_shared<CyanWallBannerBlock>();
    block->facing = CyanWallBannerBlock::FACING_EAST;
    registry[8933] = block;
  }

  { // ID: 8959
    std::shared_ptr<ChiseledRedSandstoneBlock> block = std::make_shared<ChiseledRedSandstoneBlock>();
    registry[8959] = block;
  }

  { // ID: 8960
    std::shared_ptr<CutRedSandstoneBlock> block = std::make_shared<CutRedSandstoneBlock>();
    registry[8960] = block;
  }

  { // ID: 9101
    std::shared_ptr<CutSandstoneSlabBlock> block = std::make_shared<CutSandstoneSlabBlock>();
    block->type = CutSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = CutSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9101] = block;
  }

  { // ID: 9102
    std::shared_ptr<CutSandstoneSlabBlock> block = std::make_shared<CutSandstoneSlabBlock>();
    block->type = CutSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = CutSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9102] = block;
  }

  { // ID: 9103
    std::shared_ptr<CutSandstoneSlabBlock> block = std::make_shared<CutSandstoneSlabBlock>();
    block->type = CutSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CutSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9103] = block;
  }

  { // ID: 9104
    std::shared_ptr<CutSandstoneSlabBlock> block = std::make_shared<CutSandstoneSlabBlock>();
    block->type = CutSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CutSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9104] = block;
  }

  { // ID: 9105
    std::shared_ptr<CutSandstoneSlabBlock> block = std::make_shared<CutSandstoneSlabBlock>();
    block->type = CutSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CutSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9105] = block;
  }

  { // ID: 9106
    std::shared_ptr<CutSandstoneSlabBlock> block = std::make_shared<CutSandstoneSlabBlock>();
    block->type = CutSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CutSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9106] = block;
  }

  { // ID: 9113
    std::shared_ptr<CobblestoneSlabBlock> block = std::make_shared<CobblestoneSlabBlock>();
    block->type = CobblestoneSlabBlock::TYPE_TOP;
    block->waterlogged = CobblestoneSlabBlock::WATERLOGGED_TRUE;
    registry[9113] = block;
  }

  { // ID: 9114
    std::shared_ptr<CobblestoneSlabBlock> block = std::make_shared<CobblestoneSlabBlock>();
    block->type = CobblestoneSlabBlock::TYPE_TOP;
    block->waterlogged = CobblestoneSlabBlock::WATERLOGGED_FALSE;
    registry[9114] = block;
  }

  { // ID: 9115
    std::shared_ptr<CobblestoneSlabBlock> block = std::make_shared<CobblestoneSlabBlock>();
    block->type = CobblestoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CobblestoneSlabBlock::WATERLOGGED_TRUE;
    registry[9115] = block;
  }

  { // ID: 9116
    std::shared_ptr<CobblestoneSlabBlock> block = std::make_shared<CobblestoneSlabBlock>();
    block->type = CobblestoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CobblestoneSlabBlock::WATERLOGGED_FALSE;
    registry[9116] = block;
  }

  { // ID: 9117
    std::shared_ptr<CobblestoneSlabBlock> block = std::make_shared<CobblestoneSlabBlock>();
    block->type = CobblestoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CobblestoneSlabBlock::WATERLOGGED_TRUE;
    registry[9117] = block;
  }

  { // ID: 9118
    std::shared_ptr<CobblestoneSlabBlock> block = std::make_shared<CobblestoneSlabBlock>();
    block->type = CobblestoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CobblestoneSlabBlock::WATERLOGGED_FALSE;
    registry[9118] = block;
  }

  { // ID: 9155
    std::shared_ptr<CutRedSandstoneSlabBlock> block = std::make_shared<CutRedSandstoneSlabBlock>();
    block->type = CutRedSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = CutRedSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9155] = block;
  }

  { // ID: 9156
    std::shared_ptr<CutRedSandstoneSlabBlock> block = std::make_shared<CutRedSandstoneSlabBlock>();
    block->type = CutRedSandstoneSlabBlock::TYPE_TOP;
    block->waterlogged = CutRedSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9156] = block;
  }

  { // ID: 9157
    std::shared_ptr<CutRedSandstoneSlabBlock> block = std::make_shared<CutRedSandstoneSlabBlock>();
    block->type = CutRedSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CutRedSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9157] = block;
  }

  { // ID: 9158
    std::shared_ptr<CutRedSandstoneSlabBlock> block = std::make_shared<CutRedSandstoneSlabBlock>();
    block->type = CutRedSandstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CutRedSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9158] = block;
  }

  { // ID: 9159
    std::shared_ptr<CutRedSandstoneSlabBlock> block = std::make_shared<CutRedSandstoneSlabBlock>();
    block->type = CutRedSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CutRedSandstoneSlabBlock::WATERLOGGED_TRUE;
    registry[9159] = block;
  }

  { // ID: 9160
    std::shared_ptr<CutRedSandstoneSlabBlock> block = std::make_shared<CutRedSandstoneSlabBlock>();
    block->type = CutRedSandstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CutRedSandstoneSlabBlock::WATERLOGGED_FALSE;
    registry[9160] = block;
  }

  { // ID: 9945
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9945] = block;
  }

  { // ID: 9946
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9946] = block;
  }

  { // ID: 9947
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9947] = block;
  }

  { // ID: 9948
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9948] = block;
  }

  { // ID: 9949
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9949] = block;
  }

  { // ID: 9950
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9950] = block;
  }

  { // ID: 9951
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9951] = block;
  }

  { // ID: 9952
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9952] = block;
  }

  { // ID: 9953
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9953] = block;
  }

  { // ID: 9954
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9954] = block;
  }

  { // ID: 9955
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9955] = block;
  }

  { // ID: 9956
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9956] = block;
  }

  { // ID: 9957
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9957] = block;
  }

  { // ID: 9958
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9958] = block;
  }

  { // ID: 9959
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9959] = block;
  }

  { // ID: 9960
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9960] = block;
  }

  { // ID: 9961
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9961] = block;
  }

  { // ID: 9962
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9962] = block;
  }

  { // ID: 9963
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9963] = block;
  }

  { // ID: 9964
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9964] = block;
  }

  { // ID: 9965
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9965] = block;
  }

  { // ID: 9966
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9966] = block;
  }

  { // ID: 9967
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9967] = block;
  }

  { // ID: 9968
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9968] = block;
  }

  { // ID: 9969
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9969] = block;
  }

  { // ID: 9970
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9970] = block;
  }

  { // ID: 9971
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9971] = block;
  }

  { // ID: 9972
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9972] = block;
  }

  { // ID: 9973
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9973] = block;
  }

  { // ID: 9974
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9974] = block;
  }

  { // ID: 9975
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9975] = block;
  }

  { // ID: 9976
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_TRUE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9976] = block;
  }

  { // ID: 9977
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9977] = block;
  }

  { // ID: 9978
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9978] = block;
  }

  { // ID: 9979
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9979] = block;
  }

  { // ID: 9980
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9980] = block;
  }

  { // ID: 9981
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9981] = block;
  }

  { // ID: 9982
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9982] = block;
  }

  { // ID: 9983
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9983] = block;
  }

  { // ID: 9984
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9984] = block;
  }

  { // ID: 9985
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9985] = block;
  }

  { // ID: 9986
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9986] = block;
  }

  { // ID: 9987
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9987] = block;
  }

  { // ID: 9988
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9988] = block;
  }

  { // ID: 9989
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9989] = block;
  }

  { // ID: 9990
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9990] = block;
  }

  { // ID: 9991
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9991] = block;
  }

  { // ID: 9992
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_TRUE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9992] = block;
  }

  { // ID: 9993
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9993] = block;
  }

  { // ID: 9994
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9994] = block;
  }

  { // ID: 9995
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9995] = block;
  }

  { // ID: 9996
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9996] = block;
  }

  { // ID: 9997
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9997] = block;
  }

  { // ID: 9998
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[9998] = block;
  }

  { // ID: 9999
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[9999] = block;
  }

  { // ID: 10000
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_TRUE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[10000] = block;
  }

  { // ID: 10001
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[10001] = block;
  }

  { // ID: 10002
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[10002] = block;
  }

  { // ID: 10003
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[10003] = block;
  }

  { // ID: 10004
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_TRUE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[10004] = block;
  }

  { // ID: 10005
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[10005] = block;
  }

  { // ID: 10006
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_TRUE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[10006] = block;
  }

  { // ID: 10007
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_TRUE;
    registry[10007] = block;
  }

  { // ID: 10008
    std::shared_ptr<ChorusPlantBlock> block = std::make_shared<ChorusPlantBlock>();
    block->down = ChorusPlantBlock::DOWN_FALSE;
    block->east = ChorusPlantBlock::EAST_FALSE;
    block->north = ChorusPlantBlock::NORTH_FALSE;
    block->south = ChorusPlantBlock::SOUTH_FALSE;
    block->up = ChorusPlantBlock::UP_FALSE;
    block->west = ChorusPlantBlock::WEST_FALSE;
    registry[10008] = block;
  }

  { // ID: 10009
    std::shared_ptr<ChorusFlowerBlock> block = std::make_shared<ChorusFlowerBlock>();
    block->age = ChorusFlowerBlock::AGE_0;
    registry[10009] = block;
  }

  { // ID: 10010
    std::shared_ptr<ChorusFlowerBlock> block = std::make_shared<ChorusFlowerBlock>();
    block->age = ChorusFlowerBlock::AGE_1;
    registry[10010] = block;
  }

  { // ID: 10011
    std::shared_ptr<ChorusFlowerBlock> block = std::make_shared<ChorusFlowerBlock>();
    block->age = ChorusFlowerBlock::AGE_2;
    registry[10011] = block;
  }

  { // ID: 10012
    std::shared_ptr<ChorusFlowerBlock> block = std::make_shared<ChorusFlowerBlock>();
    block->age = ChorusFlowerBlock::AGE_3;
    registry[10012] = block;
  }

  { // ID: 10013
    std::shared_ptr<ChorusFlowerBlock> block = std::make_shared<ChorusFlowerBlock>();
    block->age = ChorusFlowerBlock::AGE_4;
    registry[10013] = block;
  }

  { // ID: 10014
    std::shared_ptr<ChorusFlowerBlock> block = std::make_shared<ChorusFlowerBlock>();
    block->age = ChorusFlowerBlock::AGE_5;
    registry[10014] = block;
  }

  { // ID: 10118
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = ChainCommandBlockBlock::FACING_NORTH;
    registry[10118] = block;
  }

  { // ID: 10119
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = ChainCommandBlockBlock::FACING_EAST;
    registry[10119] = block;
  }

  { // ID: 10120
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = ChainCommandBlockBlock::FACING_SOUTH;
    registry[10120] = block;
  }

  { // ID: 10121
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = ChainCommandBlockBlock::FACING_WEST;
    registry[10121] = block;
  }

  { // ID: 10122
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = ChainCommandBlockBlock::FACING_UP;
    registry[10122] = block;
  }

  { // ID: 10123
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_TRUE;
    block->facing = ChainCommandBlockBlock::FACING_DOWN;
    registry[10123] = block;
  }

  { // ID: 10124
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = ChainCommandBlockBlock::FACING_NORTH;
    registry[10124] = block;
  }

  { // ID: 10125
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = ChainCommandBlockBlock::FACING_EAST;
    registry[10125] = block;
  }

  { // ID: 10126
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = ChainCommandBlockBlock::FACING_SOUTH;
    registry[10126] = block;
  }

  { // ID: 10127
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = ChainCommandBlockBlock::FACING_WEST;
    registry[10127] = block;
  }

  { // ID: 10128
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = ChainCommandBlockBlock::FACING_UP;
    registry[10128] = block;
  }

  { // ID: 10129
    std::shared_ptr<ChainCommandBlockBlock> block = std::make_shared<ChainCommandBlockBlock>();
    block->conditional = ChainCommandBlockBlock::CONDITIONAL_FALSE;
    block->facing = ChainCommandBlockBlock::FACING_DOWN;
    registry[10129] = block;
  }

  { // ID: 10213
    std::shared_ptr<CyanShulkerBoxBlock> block = std::make_shared<CyanShulkerBoxBlock>();
    block->facing = CyanShulkerBoxBlock::FACING_NORTH;
    registry[10213] = block;
  }

  { // ID: 10214
    std::shared_ptr<CyanShulkerBoxBlock> block = std::make_shared<CyanShulkerBoxBlock>();
    block->facing = CyanShulkerBoxBlock::FACING_EAST;
    registry[10214] = block;
  }

  { // ID: 10215
    std::shared_ptr<CyanShulkerBoxBlock> block = std::make_shared<CyanShulkerBoxBlock>();
    block->facing = CyanShulkerBoxBlock::FACING_SOUTH;
    registry[10215] = block;
  }

  { // ID: 10216
    std::shared_ptr<CyanShulkerBoxBlock> block = std::make_shared<CyanShulkerBoxBlock>();
    block->facing = CyanShulkerBoxBlock::FACING_WEST;
    registry[10216] = block;
  }

  { // ID: 10217
    std::shared_ptr<CyanShulkerBoxBlock> block = std::make_shared<CyanShulkerBoxBlock>();
    block->facing = CyanShulkerBoxBlock::FACING_UP;
    registry[10217] = block;
  }

  { // ID: 10218
    std::shared_ptr<CyanShulkerBoxBlock> block = std::make_shared<CyanShulkerBoxBlock>();
    block->facing = CyanShulkerBoxBlock::FACING_DOWN;
    registry[10218] = block;
  }

  { // ID: 10291
    std::shared_ptr<CyanGlazedTerracottaBlock> block = std::make_shared<CyanGlazedTerracottaBlock>();
    block->facing = CyanGlazedTerracottaBlock::FACING_NORTH;
    registry[10291] = block;
  }

  { // ID: 10292
    std::shared_ptr<CyanGlazedTerracottaBlock> block = std::make_shared<CyanGlazedTerracottaBlock>();
    block->facing = CyanGlazedTerracottaBlock::FACING_SOUTH;
    registry[10292] = block;
  }

  { // ID: 10293
    std::shared_ptr<CyanGlazedTerracottaBlock> block = std::make_shared<CyanGlazedTerracottaBlock>();
    block->facing = CyanGlazedTerracottaBlock::FACING_WEST;
    registry[10293] = block;
  }

  { // ID: 10294
    std::shared_ptr<CyanGlazedTerracottaBlock> block = std::make_shared<CyanGlazedTerracottaBlock>();
    block->facing = CyanGlazedTerracottaBlock::FACING_EAST;
    registry[10294] = block;
  }

  { // ID: 10328
    std::shared_ptr<CyanConcreteBlock> block = std::make_shared<CyanConcreteBlock>();
    registry[10328] = block;
  }

  { // ID: 10344
    std::shared_ptr<CyanConcretePowderBlock> block = std::make_shared<CyanConcretePowderBlock>();
    registry[10344] = block;
  }

  { // ID: 10530
    std::shared_ptr<ConduitBlock> block = std::make_shared<ConduitBlock>();
    block->waterlogged = ConduitBlock::WATERLOGGED_TRUE;
    registry[10530] = block;
  }

  { // ID: 10531
    std::shared_ptr<ConduitBlock> block = std::make_shared<ConduitBlock>();
    block->waterlogged = ConduitBlock::WATERLOGGED_FALSE;
    registry[10531] = block;
  }

  { // ID: 10547
    std::shared_ptr<CaveAirBlock> block = std::make_shared<CaveAirBlock>();
    registry[10547] = block;
  }

  { // ID: 16024
    std::shared_ptr<CartographyTableBlock> block = std::make_shared<CartographyTableBlock>();
    registry[16024] = block;
  }

  { // ID: 16099
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_NORTH;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16099] = block;
  }

  { // ID: 16100
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_NORTH;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16100] = block;
  }

  { // ID: 16101
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_NORTH;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16101] = block;
  }

  { // ID: 16102
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_NORTH;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16102] = block;
  }

  { // ID: 16103
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_NORTH;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16103] = block;
  }

  { // ID: 16104
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_NORTH;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16104] = block;
  }

  { // ID: 16105
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_NORTH;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16105] = block;
  }

  { // ID: 16106
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_NORTH;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16106] = block;
  }

  { // ID: 16107
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_SOUTH;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16107] = block;
  }

  { // ID: 16108
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_SOUTH;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16108] = block;
  }

  { // ID: 16109
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_SOUTH;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16109] = block;
  }

  { // ID: 16110
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_SOUTH;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16110] = block;
  }

  { // ID: 16111
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_SOUTH;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16111] = block;
  }

  { // ID: 16112
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_SOUTH;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16112] = block;
  }

  { // ID: 16113
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_SOUTH;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16113] = block;
  }

  { // ID: 16114
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_SOUTH;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16114] = block;
  }

  { // ID: 16115
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_WEST;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16115] = block;
  }

  { // ID: 16116
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_WEST;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16116] = block;
  }

  { // ID: 16117
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_WEST;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16117] = block;
  }

  { // ID: 16118
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_WEST;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16118] = block;
  }

  { // ID: 16119
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_WEST;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16119] = block;
  }

  { // ID: 16120
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_WEST;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16120] = block;
  }

  { // ID: 16121
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_WEST;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16121] = block;
  }

  { // ID: 16122
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_WEST;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16122] = block;
  }

  { // ID: 16123
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_EAST;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16123] = block;
  }

  { // ID: 16124
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_EAST;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16124] = block;
  }

  { // ID: 16125
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_EAST;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16125] = block;
  }

  { // ID: 16126
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_EAST;
    block->lit = CampfireBlock::LIT_TRUE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16126] = block;
  }

  { // ID: 16127
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_EAST;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16127] = block;
  }

  { // ID: 16128
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_EAST;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_TRUE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16128] = block;
  }

  { // ID: 16129
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_EAST;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_TRUE;
    registry[16129] = block;
  }

  { // ID: 16130
    std::shared_ptr<CampfireBlock> block = std::make_shared<CampfireBlock>();
    block->facing = CampfireBlock::FACING_EAST;
    block->lit = CampfireBlock::LIT_FALSE;
    block->signal_fire = CampfireBlock::SIGNAL_FIRE_FALSE;
    block->waterlogged = CampfireBlock::WATERLOGGED_FALSE;
    registry[16130] = block;
  }

  { // ID: 16184
    std::shared_ptr<CrimsonStemBlock> block = std::make_shared<CrimsonStemBlock>();
    block->axis = CrimsonStemBlock::AXIS_X;
    registry[16184] = block;
  }

  { // ID: 16185
    std::shared_ptr<CrimsonStemBlock> block = std::make_shared<CrimsonStemBlock>();
    block->axis = CrimsonStemBlock::AXIS_Y;
    registry[16185] = block;
  }

  { // ID: 16186
    std::shared_ptr<CrimsonStemBlock> block = std::make_shared<CrimsonStemBlock>();
    block->axis = CrimsonStemBlock::AXIS_Z;
    registry[16186] = block;
  }

  { // ID: 16190
    std::shared_ptr<CrimsonHyphaeBlock> block = std::make_shared<CrimsonHyphaeBlock>();
    block->axis = CrimsonHyphaeBlock::AXIS_X;
    registry[16190] = block;
  }

  { // ID: 16191
    std::shared_ptr<CrimsonHyphaeBlock> block = std::make_shared<CrimsonHyphaeBlock>();
    block->axis = CrimsonHyphaeBlock::AXIS_Y;
    registry[16191] = block;
  }

  { // ID: 16192
    std::shared_ptr<CrimsonHyphaeBlock> block = std::make_shared<CrimsonHyphaeBlock>();
    block->axis = CrimsonHyphaeBlock::AXIS_Z;
    registry[16192] = block;
  }

  { // ID: 16196
    std::shared_ptr<CrimsonNyliumBlock> block = std::make_shared<CrimsonNyliumBlock>();
    registry[16196] = block;
  }

  { // ID: 16197
    std::shared_ptr<CrimsonFungusBlock> block = std::make_shared<CrimsonFungusBlock>();
    registry[16197] = block;
  }

  { // ID: 16253
    std::shared_ptr<CrimsonRootsBlock> block = std::make_shared<CrimsonRootsBlock>();
    registry[16253] = block;
  }

  { // ID: 16254
    std::shared_ptr<CrimsonPlanksBlock> block = std::make_shared<CrimsonPlanksBlock>();
    registry[16254] = block;
  }

  { // ID: 16256
    std::shared_ptr<CrimsonSlabBlock> block = std::make_shared<CrimsonSlabBlock>();
    block->type = CrimsonSlabBlock::TYPE_TOP;
    block->waterlogged = CrimsonSlabBlock::WATERLOGGED_TRUE;
    registry[16256] = block;
  }

  { // ID: 16257
    std::shared_ptr<CrimsonSlabBlock> block = std::make_shared<CrimsonSlabBlock>();
    block->type = CrimsonSlabBlock::TYPE_TOP;
    block->waterlogged = CrimsonSlabBlock::WATERLOGGED_FALSE;
    registry[16257] = block;
  }

  { // ID: 16258
    std::shared_ptr<CrimsonSlabBlock> block = std::make_shared<CrimsonSlabBlock>();
    block->type = CrimsonSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CrimsonSlabBlock::WATERLOGGED_TRUE;
    registry[16258] = block;
  }

  { // ID: 16259
    std::shared_ptr<CrimsonSlabBlock> block = std::make_shared<CrimsonSlabBlock>();
    block->type = CrimsonSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CrimsonSlabBlock::WATERLOGGED_FALSE;
    registry[16259] = block;
  }

  { // ID: 16260
    std::shared_ptr<CrimsonSlabBlock> block = std::make_shared<CrimsonSlabBlock>();
    block->type = CrimsonSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CrimsonSlabBlock::WATERLOGGED_TRUE;
    registry[16260] = block;
  }

  { // ID: 16261
    std::shared_ptr<CrimsonSlabBlock> block = std::make_shared<CrimsonSlabBlock>();
    block->type = CrimsonSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CrimsonSlabBlock::WATERLOGGED_FALSE;
    registry[16261] = block;
  }

  { // ID: 16268
    std::shared_ptr<CrimsonPressurePlateBlock> block = std::make_shared<CrimsonPressurePlateBlock>();
    block->powered = CrimsonPressurePlateBlock::POWERED_TRUE;
    registry[16268] = block;
  }

  { // ID: 16269
    std::shared_ptr<CrimsonPressurePlateBlock> block = std::make_shared<CrimsonPressurePlateBlock>();
    block->powered = CrimsonPressurePlateBlock::POWERED_FALSE;
    registry[16269] = block;
  }

  { // ID: 16272
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16272] = block;
  }

  { // ID: 16273
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16273] = block;
  }

  { // ID: 16274
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16274] = block;
  }

  { // ID: 16275
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16275] = block;
  }

  { // ID: 16276
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16276] = block;
  }

  { // ID: 16277
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16277] = block;
  }

  { // ID: 16278
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16278] = block;
  }

  { // ID: 16279
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16279] = block;
  }

  { // ID: 16280
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16280] = block;
  }

  { // ID: 16281
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16281] = block;
  }

  { // ID: 16282
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16282] = block;
  }

  { // ID: 16283
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16283] = block;
  }

  { // ID: 16284
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16284] = block;
  }

  { // ID: 16285
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16285] = block;
  }

  { // ID: 16286
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16286] = block;
  }

  { // ID: 16287
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_TRUE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16287] = block;
  }

  { // ID: 16288
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16288] = block;
  }

  { // ID: 16289
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16289] = block;
  }

  { // ID: 16290
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16290] = block;
  }

  { // ID: 16291
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16291] = block;
  }

  { // ID: 16292
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16292] = block;
  }

  { // ID: 16293
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16293] = block;
  }

  { // ID: 16294
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16294] = block;
  }

  { // ID: 16295
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_TRUE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16295] = block;
  }

  { // ID: 16296
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16296] = block;
  }

  { // ID: 16297
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16297] = block;
  }

  { // ID: 16298
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16298] = block;
  }

  { // ID: 16299
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_TRUE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16299] = block;
  }

  { // ID: 16300
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16300] = block;
  }

  { // ID: 16301
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_TRUE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16301] = block;
  }

  { // ID: 16302
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_TRUE;
    registry[16302] = block;
  }

  { // ID: 16303
    std::shared_ptr<CrimsonFenceBlock> block = std::make_shared<CrimsonFenceBlock>();
    block->east = CrimsonFenceBlock::EAST_FALSE;
    block->north = CrimsonFenceBlock::NORTH_FALSE;
    block->south = CrimsonFenceBlock::SOUTH_FALSE;
    block->waterlogged = CrimsonFenceBlock::WATERLOGGED_FALSE;
    block->west = CrimsonFenceBlock::WEST_FALSE;
    registry[16303] = block;
  }

  { // ID: 16336
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16336] = block;
  }

  { // ID: 16337
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16337] = block;
  }

  { // ID: 16338
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16338] = block;
  }

  { // ID: 16339
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16339] = block;
  }

  { // ID: 16340
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16340] = block;
  }

  { // ID: 16341
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16341] = block;
  }

  { // ID: 16342
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16342] = block;
  }

  { // ID: 16343
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16343] = block;
  }

  { // ID: 16344
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16344] = block;
  }

  { // ID: 16345
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16345] = block;
  }

  { // ID: 16346
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16346] = block;
  }

  { // ID: 16347
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16347] = block;
  }

  { // ID: 16348
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16348] = block;
  }

  { // ID: 16349
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16349] = block;
  }

  { // ID: 16350
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16350] = block;
  }

  { // ID: 16351
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_NORTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16351] = block;
  }

  { // ID: 16352
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16352] = block;
  }

  { // ID: 16353
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16353] = block;
  }

  { // ID: 16354
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16354] = block;
  }

  { // ID: 16355
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16355] = block;
  }

  { // ID: 16356
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16356] = block;
  }

  { // ID: 16357
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16357] = block;
  }

  { // ID: 16358
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16358] = block;
  }

  { // ID: 16359
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16359] = block;
  }

  { // ID: 16360
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16360] = block;
  }

  { // ID: 16361
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16361] = block;
  }

  { // ID: 16362
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16362] = block;
  }

  { // ID: 16363
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16363] = block;
  }

  { // ID: 16364
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16364] = block;
  }

  { // ID: 16365
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16365] = block;
  }

  { // ID: 16366
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16366] = block;
  }

  { // ID: 16367
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_SOUTH;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16367] = block;
  }

  { // ID: 16368
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16368] = block;
  }

  { // ID: 16369
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16369] = block;
  }

  { // ID: 16370
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16370] = block;
  }

  { // ID: 16371
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16371] = block;
  }

  { // ID: 16372
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16372] = block;
  }

  { // ID: 16373
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16373] = block;
  }

  { // ID: 16374
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16374] = block;
  }

  { // ID: 16375
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16375] = block;
  }

  { // ID: 16376
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16376] = block;
  }

  { // ID: 16377
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16377] = block;
  }

  { // ID: 16378
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16378] = block;
  }

  { // ID: 16379
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16379] = block;
  }

  { // ID: 16380
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16380] = block;
  }

  { // ID: 16381
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16381] = block;
  }

  { // ID: 16382
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16382] = block;
  }

  { // ID: 16383
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_WEST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16383] = block;
  }

  { // ID: 16384
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16384] = block;
  }

  { // ID: 16385
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16385] = block;
  }

  { // ID: 16386
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16386] = block;
  }

  { // ID: 16387
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16387] = block;
  }

  { // ID: 16388
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16388] = block;
  }

  { // ID: 16389
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16389] = block;
  }

  { // ID: 16390
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16390] = block;
  }

  { // ID: 16391
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_TOP;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16391] = block;
  }

  { // ID: 16392
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16392] = block;
  }

  { // ID: 16393
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16393] = block;
  }

  { // ID: 16394
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16394] = block;
  }

  { // ID: 16395
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_TRUE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16395] = block;
  }

  { // ID: 16396
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16396] = block;
  }

  { // ID: 16397
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16397] = block;
  }

  { // ID: 16398
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16398] = block;
  }

  { // ID: 16399
    std::shared_ptr<CrimsonTrapdoorBlock> block = std::make_shared<CrimsonTrapdoorBlock>();
    block->facing = CrimsonTrapdoorBlock::FACING_EAST;
    block->half = CrimsonTrapdoorBlock::HALF_BOTTOM;
    block->open = CrimsonTrapdoorBlock::OPEN_FALSE;
    block->powered = CrimsonTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = CrimsonTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16399] = block;
  }

  { // ID: 16464
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_NORTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16464] = block;
  }

  { // ID: 16465
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_NORTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16465] = block;
  }

  { // ID: 16466
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_NORTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16466] = block;
  }

  { // ID: 16467
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_NORTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16467] = block;
  }

  { // ID: 16468
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_NORTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16468] = block;
  }

  { // ID: 16469
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_NORTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16469] = block;
  }

  { // ID: 16470
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_NORTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16470] = block;
  }

  { // ID: 16471
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_NORTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16471] = block;
  }

  { // ID: 16472
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_SOUTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16472] = block;
  }

  { // ID: 16473
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_SOUTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16473] = block;
  }

  { // ID: 16474
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_SOUTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16474] = block;
  }

  { // ID: 16475
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_SOUTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16475] = block;
  }

  { // ID: 16476
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_SOUTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16476] = block;
  }

  { // ID: 16477
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_SOUTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16477] = block;
  }

  { // ID: 16478
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_SOUTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16478] = block;
  }

  { // ID: 16479
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_SOUTH;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16479] = block;
  }

  { // ID: 16480
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_WEST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16480] = block;
  }

  { // ID: 16481
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_WEST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16481] = block;
  }

  { // ID: 16482
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_WEST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16482] = block;
  }

  { // ID: 16483
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_WEST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16483] = block;
  }

  { // ID: 16484
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_WEST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16484] = block;
  }

  { // ID: 16485
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_WEST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16485] = block;
  }

  { // ID: 16486
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_WEST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16486] = block;
  }

  { // ID: 16487
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_WEST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16487] = block;
  }

  { // ID: 16488
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_EAST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16488] = block;
  }

  { // ID: 16489
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_EAST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16489] = block;
  }

  { // ID: 16490
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_EAST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16490] = block;
  }

  { // ID: 16491
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_EAST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_TRUE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16491] = block;
  }

  { // ID: 16492
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_EAST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16492] = block;
  }

  { // ID: 16493
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_EAST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_TRUE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16493] = block;
  }

  { // ID: 16494
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_EAST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_TRUE;
    registry[16494] = block;
  }

  { // ID: 16495
    std::shared_ptr<CrimsonFenceGateBlock> block = std::make_shared<CrimsonFenceGateBlock>();
    block->facing = CrimsonFenceGateBlock::FACING_EAST;
    block->in_wall = CrimsonFenceGateBlock::IN_WALL_FALSE;
    block->open = CrimsonFenceGateBlock::OPEN_FALSE;
    block->powered = CrimsonFenceGateBlock::POWERED_FALSE;
    registry[16495] = block;
  }

  { // ID: 16528
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16528] = block;
  }

  { // ID: 16529
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16529] = block;
  }

  { // ID: 16530
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16530] = block;
  }

  { // ID: 16531
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16531] = block;
  }

  { // ID: 16532
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16532] = block;
  }

  { // ID: 16533
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16533] = block;
  }

  { // ID: 16534
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16534] = block;
  }

  { // ID: 16535
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16535] = block;
  }

  { // ID: 16536
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16536] = block;
  }

  { // ID: 16537
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16537] = block;
  }

  { // ID: 16538
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16538] = block;
  }

  { // ID: 16539
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16539] = block;
  }

  { // ID: 16540
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16540] = block;
  }

  { // ID: 16541
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16541] = block;
  }

  { // ID: 16542
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16542] = block;
  }

  { // ID: 16543
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16543] = block;
  }

  { // ID: 16544
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16544] = block;
  }

  { // ID: 16545
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16545] = block;
  }

  { // ID: 16546
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16546] = block;
  }

  { // ID: 16547
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_NORTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16547] = block;
  }

  { // ID: 16548
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16548] = block;
  }

  { // ID: 16549
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16549] = block;
  }

  { // ID: 16550
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16550] = block;
  }

  { // ID: 16551
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16551] = block;
  }

  { // ID: 16552
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16552] = block;
  }

  { // ID: 16553
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16553] = block;
  }

  { // ID: 16554
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16554] = block;
  }

  { // ID: 16555
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16555] = block;
  }

  { // ID: 16556
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16556] = block;
  }

  { // ID: 16557
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16557] = block;
  }

  { // ID: 16558
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16558] = block;
  }

  { // ID: 16559
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16559] = block;
  }

  { // ID: 16560
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16560] = block;
  }

  { // ID: 16561
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16561] = block;
  }

  { // ID: 16562
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16562] = block;
  }

  { // ID: 16563
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16563] = block;
  }

  { // ID: 16564
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16564] = block;
  }

  { // ID: 16565
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16565] = block;
  }

  { // ID: 16566
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16566] = block;
  }

  { // ID: 16567
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_SOUTH;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16567] = block;
  }

  { // ID: 16568
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16568] = block;
  }

  { // ID: 16569
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16569] = block;
  }

  { // ID: 16570
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16570] = block;
  }

  { // ID: 16571
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16571] = block;
  }

  { // ID: 16572
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16572] = block;
  }

  { // ID: 16573
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16573] = block;
  }

  { // ID: 16574
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16574] = block;
  }

  { // ID: 16575
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16575] = block;
  }

  { // ID: 16576
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16576] = block;
  }

  { // ID: 16577
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16577] = block;
  }

  { // ID: 16578
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16578] = block;
  }

  { // ID: 16579
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16579] = block;
  }

  { // ID: 16580
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16580] = block;
  }

  { // ID: 16581
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16581] = block;
  }

  { // ID: 16582
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16582] = block;
  }

  { // ID: 16583
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16583] = block;
  }

  { // ID: 16584
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16584] = block;
  }

  { // ID: 16585
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16585] = block;
  }

  { // ID: 16586
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16586] = block;
  }

  { // ID: 16587
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_WEST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16587] = block;
  }

  { // ID: 16588
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16588] = block;
  }

  { // ID: 16589
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16589] = block;
  }

  { // ID: 16590
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16590] = block;
  }

  { // ID: 16591
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16591] = block;
  }

  { // ID: 16592
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16592] = block;
  }

  { // ID: 16593
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16593] = block;
  }

  { // ID: 16594
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16594] = block;
  }

  { // ID: 16595
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16595] = block;
  }

  { // ID: 16596
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16596] = block;
  }

  { // ID: 16597
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_TOP;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16597] = block;
  }

  { // ID: 16598
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16598] = block;
  }

  { // ID: 16599
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16599] = block;
  }

  { // ID: 16600
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16600] = block;
  }

  { // ID: 16601
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16601] = block;
  }

  { // ID: 16602
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16602] = block;
  }

  { // ID: 16603
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16603] = block;
  }

  { // ID: 16604
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16604] = block;
  }

  { // ID: 16605
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16605] = block;
  }

  { // ID: 16606
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_TRUE;
    registry[16606] = block;
  }

  { // ID: 16607
    std::shared_ptr<CrimsonStairsBlock> block = std::make_shared<CrimsonStairsBlock>();
    block->facing = CrimsonStairsBlock::FACING_EAST;
    block->half = CrimsonStairsBlock::HALF_BOTTOM;
    block->shape = CrimsonStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CrimsonStairsBlock::WATERLOGGED_FALSE;
    registry[16607] = block;
  }

  { // ID: 16688
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_FLOOR;
    block->facing = CrimsonButtonBlock::FACING_NORTH;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16688] = block;
  }

  { // ID: 16689
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_FLOOR;
    block->facing = CrimsonButtonBlock::FACING_NORTH;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16689] = block;
  }

  { // ID: 16690
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_FLOOR;
    block->facing = CrimsonButtonBlock::FACING_SOUTH;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16690] = block;
  }

  { // ID: 16691
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_FLOOR;
    block->facing = CrimsonButtonBlock::FACING_SOUTH;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16691] = block;
  }

  { // ID: 16692
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_FLOOR;
    block->facing = CrimsonButtonBlock::FACING_WEST;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16692] = block;
  }

  { // ID: 16693
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_FLOOR;
    block->facing = CrimsonButtonBlock::FACING_WEST;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16693] = block;
  }

  { // ID: 16694
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_FLOOR;
    block->facing = CrimsonButtonBlock::FACING_EAST;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16694] = block;
  }

  { // ID: 16695
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_FLOOR;
    block->facing = CrimsonButtonBlock::FACING_EAST;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16695] = block;
  }

  { // ID: 16696
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_WALL;
    block->facing = CrimsonButtonBlock::FACING_NORTH;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16696] = block;
  }

  { // ID: 16697
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_WALL;
    block->facing = CrimsonButtonBlock::FACING_NORTH;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16697] = block;
  }

  { // ID: 16698
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_WALL;
    block->facing = CrimsonButtonBlock::FACING_SOUTH;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16698] = block;
  }

  { // ID: 16699
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_WALL;
    block->facing = CrimsonButtonBlock::FACING_SOUTH;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16699] = block;
  }

  { // ID: 16700
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_WALL;
    block->facing = CrimsonButtonBlock::FACING_WEST;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16700] = block;
  }

  { // ID: 16701
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_WALL;
    block->facing = CrimsonButtonBlock::FACING_WEST;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16701] = block;
  }

  { // ID: 16702
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_WALL;
    block->facing = CrimsonButtonBlock::FACING_EAST;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16702] = block;
  }

  { // ID: 16703
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_WALL;
    block->facing = CrimsonButtonBlock::FACING_EAST;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16703] = block;
  }

  { // ID: 16704
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_CEILING;
    block->facing = CrimsonButtonBlock::FACING_NORTH;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16704] = block;
  }

  { // ID: 16705
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_CEILING;
    block->facing = CrimsonButtonBlock::FACING_NORTH;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16705] = block;
  }

  { // ID: 16706
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_CEILING;
    block->facing = CrimsonButtonBlock::FACING_SOUTH;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16706] = block;
  }

  { // ID: 16707
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_CEILING;
    block->facing = CrimsonButtonBlock::FACING_SOUTH;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16707] = block;
  }

  { // ID: 16708
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_CEILING;
    block->facing = CrimsonButtonBlock::FACING_WEST;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16708] = block;
  }

  { // ID: 16709
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_CEILING;
    block->facing = CrimsonButtonBlock::FACING_WEST;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16709] = block;
  }

  { // ID: 16710
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_CEILING;
    block->facing = CrimsonButtonBlock::FACING_EAST;
    block->powered = CrimsonButtonBlock::POWERED_TRUE;
    registry[16710] = block;
  }

  { // ID: 16711
    std::shared_ptr<CrimsonButtonBlock> block = std::make_shared<CrimsonButtonBlock>();
    block->face = CrimsonButtonBlock::FACE_CEILING;
    block->facing = CrimsonButtonBlock::FACING_EAST;
    block->powered = CrimsonButtonBlock::POWERED_FALSE;
    registry[16711] = block;
  }

  { // ID: 16736
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16736] = block;
  }

  { // ID: 16737
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16737] = block;
  }

  { // ID: 16738
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16738] = block;
  }

  { // ID: 16739
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16739] = block;
  }

  { // ID: 16740
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16740] = block;
  }

  { // ID: 16741
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16741] = block;
  }

  { // ID: 16742
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16742] = block;
  }

  { // ID: 16743
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16743] = block;
  }

  { // ID: 16744
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16744] = block;
  }

  { // ID: 16745
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16745] = block;
  }

  { // ID: 16746
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16746] = block;
  }

  { // ID: 16747
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16747] = block;
  }

  { // ID: 16748
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16748] = block;
  }

  { // ID: 16749
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16749] = block;
  }

  { // ID: 16750
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16750] = block;
  }

  { // ID: 16751
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_NORTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16751] = block;
  }

  { // ID: 16752
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16752] = block;
  }

  { // ID: 16753
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16753] = block;
  }

  { // ID: 16754
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16754] = block;
  }

  { // ID: 16755
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16755] = block;
  }

  { // ID: 16756
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16756] = block;
  }

  { // ID: 16757
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16757] = block;
  }

  { // ID: 16758
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16758] = block;
  }

  { // ID: 16759
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16759] = block;
  }

  { // ID: 16760
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16760] = block;
  }

  { // ID: 16761
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16761] = block;
  }

  { // ID: 16762
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16762] = block;
  }

  { // ID: 16763
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16763] = block;
  }

  { // ID: 16764
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16764] = block;
  }

  { // ID: 16765
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16765] = block;
  }

  { // ID: 16766
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16766] = block;
  }

  { // ID: 16767
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_SOUTH;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16767] = block;
  }

  { // ID: 16768
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16768] = block;
  }

  { // ID: 16769
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16769] = block;
  }

  { // ID: 16770
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16770] = block;
  }

  { // ID: 16771
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16771] = block;
  }

  { // ID: 16772
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16772] = block;
  }

  { // ID: 16773
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16773] = block;
  }

  { // ID: 16774
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16774] = block;
  }

  { // ID: 16775
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16775] = block;
  }

  { // ID: 16776
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16776] = block;
  }

  { // ID: 16777
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16777] = block;
  }

  { // ID: 16778
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16778] = block;
  }

  { // ID: 16779
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16779] = block;
  }

  { // ID: 16780
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16780] = block;
  }

  { // ID: 16781
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16781] = block;
  }

  { // ID: 16782
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16782] = block;
  }

  { // ID: 16783
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_WEST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16783] = block;
  }

  { // ID: 16784
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16784] = block;
  }

  { // ID: 16785
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16785] = block;
  }

  { // ID: 16786
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16786] = block;
  }

  { // ID: 16787
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16787] = block;
  }

  { // ID: 16788
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16788] = block;
  }

  { // ID: 16789
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16789] = block;
  }

  { // ID: 16790
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16790] = block;
  }

  { // ID: 16791
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_UPPER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16791] = block;
  }

  { // ID: 16792
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16792] = block;
  }

  { // ID: 16793
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16793] = block;
  }

  { // ID: 16794
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16794] = block;
  }

  { // ID: 16795
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_LEFT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16795] = block;
  }

  { // ID: 16796
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16796] = block;
  }

  { // ID: 16797
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_TRUE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16797] = block;
  }

  { // ID: 16798
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_TRUE;
    registry[16798] = block;
  }

  { // ID: 16799
    std::shared_ptr<CrimsonDoorBlock> block = std::make_shared<CrimsonDoorBlock>();
    block->facing = CrimsonDoorBlock::FACING_EAST;
    block->half = CrimsonDoorBlock::HALF_LOWER;
    block->hinge = CrimsonDoorBlock::HINGE_RIGHT;
    block->open = CrimsonDoorBlock::OPEN_FALSE;
    block->powered = CrimsonDoorBlock::POWERED_FALSE;
    registry[16799] = block;
  }

  { // ID: 16864
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_0;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16864] = block;
  }

  { // ID: 16865
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_0;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16865] = block;
  }

  { // ID: 16866
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_1;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16866] = block;
  }

  { // ID: 16867
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_1;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16867] = block;
  }

  { // ID: 16868
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_2;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16868] = block;
  }

  { // ID: 16869
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_2;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16869] = block;
  }

  { // ID: 16870
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_3;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16870] = block;
  }

  { // ID: 16871
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_3;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16871] = block;
  }

  { // ID: 16872
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_4;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16872] = block;
  }

  { // ID: 16873
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_4;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16873] = block;
  }

  { // ID: 16874
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_5;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16874] = block;
  }

  { // ID: 16875
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_5;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16875] = block;
  }

  { // ID: 16876
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_6;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16876] = block;
  }

  { // ID: 16877
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_6;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16877] = block;
  }

  { // ID: 16878
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_7;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16878] = block;
  }

  { // ID: 16879
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_7;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16879] = block;
  }

  { // ID: 16880
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_8;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16880] = block;
  }

  { // ID: 16881
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_8;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16881] = block;
  }

  { // ID: 16882
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_9;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16882] = block;
  }

  { // ID: 16883
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_9;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16883] = block;
  }

  { // ID: 16884
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_10;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16884] = block;
  }

  { // ID: 16885
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_10;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16885] = block;
  }

  { // ID: 16886
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_11;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16886] = block;
  }

  { // ID: 16887
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_11;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16887] = block;
  }

  { // ID: 16888
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_12;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16888] = block;
  }

  { // ID: 16889
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_12;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16889] = block;
  }

  { // ID: 16890
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_13;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16890] = block;
  }

  { // ID: 16891
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_13;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16891] = block;
  }

  { // ID: 16892
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_14;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16892] = block;
  }

  { // ID: 16893
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_14;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16893] = block;
  }

  { // ID: 16894
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_15;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_TRUE;
    registry[16894] = block;
  }

  { // ID: 16895
    std::shared_ptr<CrimsonSignBlock> block = std::make_shared<CrimsonSignBlock>();
    block->rotation = CrimsonSignBlock::ROTATION_15;
    block->waterlogged = CrimsonSignBlock::WATERLOGGED_FALSE;
    registry[16895] = block;
  }

  { // ID: 16928
    std::shared_ptr<CrimsonWallSignBlock> block = std::make_shared<CrimsonWallSignBlock>();
    block->facing = CrimsonWallSignBlock::FACING_NORTH;
    block->waterlogged = CrimsonWallSignBlock::WATERLOGGED_TRUE;
    registry[16928] = block;
  }

  { // ID: 16929
    std::shared_ptr<CrimsonWallSignBlock> block = std::make_shared<CrimsonWallSignBlock>();
    block->facing = CrimsonWallSignBlock::FACING_NORTH;
    block->waterlogged = CrimsonWallSignBlock::WATERLOGGED_FALSE;
    registry[16929] = block;
  }

  { // ID: 16930
    std::shared_ptr<CrimsonWallSignBlock> block = std::make_shared<CrimsonWallSignBlock>();
    block->facing = CrimsonWallSignBlock::FACING_SOUTH;
    block->waterlogged = CrimsonWallSignBlock::WATERLOGGED_TRUE;
    registry[16930] = block;
  }

  { // ID: 16931
    std::shared_ptr<CrimsonWallSignBlock> block = std::make_shared<CrimsonWallSignBlock>();
    block->facing = CrimsonWallSignBlock::FACING_SOUTH;
    block->waterlogged = CrimsonWallSignBlock::WATERLOGGED_FALSE;
    registry[16931] = block;
  }

  { // ID: 16932
    std::shared_ptr<CrimsonWallSignBlock> block = std::make_shared<CrimsonWallSignBlock>();
    block->facing = CrimsonWallSignBlock::FACING_WEST;
    block->waterlogged = CrimsonWallSignBlock::WATERLOGGED_TRUE;
    registry[16932] = block;
  }

  { // ID: 16933
    std::shared_ptr<CrimsonWallSignBlock> block = std::make_shared<CrimsonWallSignBlock>();
    block->facing = CrimsonWallSignBlock::FACING_WEST;
    block->waterlogged = CrimsonWallSignBlock::WATERLOGGED_FALSE;
    registry[16933] = block;
  }

  { // ID: 16934
    std::shared_ptr<CrimsonWallSignBlock> block = std::make_shared<CrimsonWallSignBlock>();
    block->facing = CrimsonWallSignBlock::FACING_EAST;
    block->waterlogged = CrimsonWallSignBlock::WATERLOGGED_TRUE;
    registry[16934] = block;
  }

  { // ID: 16935
    std::shared_ptr<CrimsonWallSignBlock> block = std::make_shared<CrimsonWallSignBlock>();
    block->facing = CrimsonWallSignBlock::FACING_EAST;
    block->waterlogged = CrimsonWallSignBlock::WATERLOGGED_FALSE;
    registry[16935] = block;
  }

  { // ID: 16960
    std::shared_ptr<ComposterBlock> block = std::make_shared<ComposterBlock>();
    block->level = ComposterBlock::LEVEL_0;
    registry[16960] = block;
  }

  { // ID: 16961
    std::shared_ptr<ComposterBlock> block = std::make_shared<ComposterBlock>();
    block->level = ComposterBlock::LEVEL_1;
    registry[16961] = block;
  }

  { // ID: 16962
    std::shared_ptr<ComposterBlock> block = std::make_shared<ComposterBlock>();
    block->level = ComposterBlock::LEVEL_2;
    registry[16962] = block;
  }

  { // ID: 16963
    std::shared_ptr<ComposterBlock> block = std::make_shared<ComposterBlock>();
    block->level = ComposterBlock::LEVEL_3;
    registry[16963] = block;
  }

  { // ID: 16964
    std::shared_ptr<ComposterBlock> block = std::make_shared<ComposterBlock>();
    block->level = ComposterBlock::LEVEL_4;
    registry[16964] = block;
  }

  { // ID: 16965
    std::shared_ptr<ComposterBlock> block = std::make_shared<ComposterBlock>();
    block->level = ComposterBlock::LEVEL_5;
    registry[16965] = block;
  }

  { // ID: 16966
    std::shared_ptr<ComposterBlock> block = std::make_shared<ComposterBlock>();
    block->level = ComposterBlock::LEVEL_6;
    registry[16966] = block;
  }

  { // ID: 16967
    std::shared_ptr<ComposterBlock> block = std::make_shared<ComposterBlock>();
    block->level = ComposterBlock::LEVEL_7;
    registry[16967] = block;
  }

  { // ID: 16968
    std::shared_ptr<ComposterBlock> block = std::make_shared<ComposterBlock>();
    block->level = ComposterBlock::LEVEL_8;
    registry[16968] = block;
  }

  { // ID: 17037
    std::shared_ptr<CryingObsidianBlock> block = std::make_shared<CryingObsidianBlock>();
    registry[17037] = block;
  }

  { // ID: 17461
    std::shared_ptr<CrackedPolishedBlackstoneBricksBlock> block = std::make_shared<CrackedPolishedBlackstoneBricksBlock>();
    registry[17461] = block;
  }

  { // ID: 17462
    std::shared_ptr<ChiseledPolishedBlackstoneBlock> block = std::make_shared<ChiseledPolishedBlackstoneBlock>();
    registry[17462] = block;
  }

  { // ID: 18310
    std::shared_ptr<ChiseledNetherBricksBlock> block = std::make_shared<ChiseledNetherBricksBlock>();
    registry[18310] = block;
  }

  { // ID: 18311
    std::shared_ptr<CrackedNetherBricksBlock> block = std::make_shared<CrackedNetherBricksBlock>();
    registry[18311] = block;
  }

  { // ID: 18313
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_1;
    block->lit = CandleBlock::LIT_TRUE;
    block->waterlogged = CandleBlock::WATERLOGGED_TRUE;
    registry[18313] = block;
  }

  { // ID: 18314
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_1;
    block->lit = CandleBlock::LIT_TRUE;
    block->waterlogged = CandleBlock::WATERLOGGED_FALSE;
    registry[18314] = block;
  }

  { // ID: 18315
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_1;
    block->lit = CandleBlock::LIT_FALSE;
    block->waterlogged = CandleBlock::WATERLOGGED_TRUE;
    registry[18315] = block;
  }

  { // ID: 18316
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_1;
    block->lit = CandleBlock::LIT_FALSE;
    block->waterlogged = CandleBlock::WATERLOGGED_FALSE;
    registry[18316] = block;
  }

  { // ID: 18317
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_2;
    block->lit = CandleBlock::LIT_TRUE;
    block->waterlogged = CandleBlock::WATERLOGGED_TRUE;
    registry[18317] = block;
  }

  { // ID: 18318
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_2;
    block->lit = CandleBlock::LIT_TRUE;
    block->waterlogged = CandleBlock::WATERLOGGED_FALSE;
    registry[18318] = block;
  }

  { // ID: 18319
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_2;
    block->lit = CandleBlock::LIT_FALSE;
    block->waterlogged = CandleBlock::WATERLOGGED_TRUE;
    registry[18319] = block;
  }

  { // ID: 18320
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_2;
    block->lit = CandleBlock::LIT_FALSE;
    block->waterlogged = CandleBlock::WATERLOGGED_FALSE;
    registry[18320] = block;
  }

  { // ID: 18321
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_3;
    block->lit = CandleBlock::LIT_TRUE;
    block->waterlogged = CandleBlock::WATERLOGGED_TRUE;
    registry[18321] = block;
  }

  { // ID: 18322
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_3;
    block->lit = CandleBlock::LIT_TRUE;
    block->waterlogged = CandleBlock::WATERLOGGED_FALSE;
    registry[18322] = block;
  }

  { // ID: 18323
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_3;
    block->lit = CandleBlock::LIT_FALSE;
    block->waterlogged = CandleBlock::WATERLOGGED_TRUE;
    registry[18323] = block;
  }

  { // ID: 18324
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_3;
    block->lit = CandleBlock::LIT_FALSE;
    block->waterlogged = CandleBlock::WATERLOGGED_FALSE;
    registry[18324] = block;
  }

  { // ID: 18325
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_4;
    block->lit = CandleBlock::LIT_TRUE;
    block->waterlogged = CandleBlock::WATERLOGGED_TRUE;
    registry[18325] = block;
  }

  { // ID: 18326
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_4;
    block->lit = CandleBlock::LIT_TRUE;
    block->waterlogged = CandleBlock::WATERLOGGED_FALSE;
    registry[18326] = block;
  }

  { // ID: 18327
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_4;
    block->lit = CandleBlock::LIT_FALSE;
    block->waterlogged = CandleBlock::WATERLOGGED_TRUE;
    registry[18327] = block;
  }

  { // ID: 18328
    std::shared_ptr<CandleBlock> block = std::make_shared<CandleBlock>();
    block->candles = CandleBlock::CANDLES_4;
    block->lit = CandleBlock::LIT_FALSE;
    block->waterlogged = CandleBlock::WATERLOGGED_FALSE;
    registry[18328] = block;
  }

  { // ID: 18473
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_1;
    block->lit = CyanCandleBlock::LIT_TRUE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_TRUE;
    registry[18473] = block;
  }

  { // ID: 18474
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_1;
    block->lit = CyanCandleBlock::LIT_TRUE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_FALSE;
    registry[18474] = block;
  }

  { // ID: 18475
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_1;
    block->lit = CyanCandleBlock::LIT_FALSE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_TRUE;
    registry[18475] = block;
  }

  { // ID: 18476
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_1;
    block->lit = CyanCandleBlock::LIT_FALSE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_FALSE;
    registry[18476] = block;
  }

  { // ID: 18477
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_2;
    block->lit = CyanCandleBlock::LIT_TRUE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_TRUE;
    registry[18477] = block;
  }

  { // ID: 18478
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_2;
    block->lit = CyanCandleBlock::LIT_TRUE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_FALSE;
    registry[18478] = block;
  }

  { // ID: 18479
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_2;
    block->lit = CyanCandleBlock::LIT_FALSE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_TRUE;
    registry[18479] = block;
  }

  { // ID: 18480
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_2;
    block->lit = CyanCandleBlock::LIT_FALSE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_FALSE;
    registry[18480] = block;
  }

  { // ID: 18481
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_3;
    block->lit = CyanCandleBlock::LIT_TRUE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_TRUE;
    registry[18481] = block;
  }

  { // ID: 18482
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_3;
    block->lit = CyanCandleBlock::LIT_TRUE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_FALSE;
    registry[18482] = block;
  }

  { // ID: 18483
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_3;
    block->lit = CyanCandleBlock::LIT_FALSE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_TRUE;
    registry[18483] = block;
  }

  { // ID: 18484
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_3;
    block->lit = CyanCandleBlock::LIT_FALSE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_FALSE;
    registry[18484] = block;
  }

  { // ID: 18485
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_4;
    block->lit = CyanCandleBlock::LIT_TRUE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_TRUE;
    registry[18485] = block;
  }

  { // ID: 18486
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_4;
    block->lit = CyanCandleBlock::LIT_TRUE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_FALSE;
    registry[18486] = block;
  }

  { // ID: 18487
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_4;
    block->lit = CyanCandleBlock::LIT_FALSE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_TRUE;
    registry[18487] = block;
  }

  { // ID: 18488
    std::shared_ptr<CyanCandleBlock> block = std::make_shared<CyanCandleBlock>();
    block->candles = CyanCandleBlock::CANDLES_4;
    block->lit = CyanCandleBlock::LIT_FALSE;
    block->waterlogged = CyanCandleBlock::WATERLOGGED_FALSE;
    registry[18488] = block;
  }

  { // ID: 18585
    std::shared_ptr<CandleCakeBlock> block = std::make_shared<CandleCakeBlock>();
    block->lit = CandleCakeBlock::LIT_TRUE;
    registry[18585] = block;
  }

  { // ID: 18586
    std::shared_ptr<CandleCakeBlock> block = std::make_shared<CandleCakeBlock>();
    block->lit = CandleCakeBlock::LIT_FALSE;
    registry[18586] = block;
  }

  { // ID: 18605
    std::shared_ptr<CyanCandleCakeBlock> block = std::make_shared<CyanCandleCakeBlock>();
    block->lit = CyanCandleCakeBlock::LIT_TRUE;
    registry[18605] = block;
  }

  { // ID: 18606
    std::shared_ptr<CyanCandleCakeBlock> block = std::make_shared<CyanCandleCakeBlock>();
    block->lit = CyanCandleCakeBlock::LIT_FALSE;
    registry[18606] = block;
  }

  { // ID: 18670
    std::shared_ptr<CalciteBlock> block = std::make_shared<CalciteBlock>();
    registry[18670] = block;
  }

  { // ID: 18911
    std::shared_ptr<CopperBlockBlock> block = std::make_shared<CopperBlockBlock>();
    registry[18911] = block;
  }

  { // ID: 18912
    std::shared_ptr<CopperOreBlock> block = std::make_shared<CopperOreBlock>();
    registry[18912] = block;
  }

  { // ID: 18917
    std::shared_ptr<CutCopperBlock> block = std::make_shared<CutCopperBlock>();
    registry[18917] = block;
  }

  { // ID: 19158
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19158] = block;
  }

  { // ID: 19159
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19159] = block;
  }

  { // ID: 19160
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19160] = block;
  }

  { // ID: 19161
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19161] = block;
  }

  { // ID: 19162
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19162] = block;
  }

  { // ID: 19163
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19163] = block;
  }

  { // ID: 19164
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19164] = block;
  }

  { // ID: 19165
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19165] = block;
  }

  { // ID: 19166
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19166] = block;
  }

  { // ID: 19167
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19167] = block;
  }

  { // ID: 19168
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19168] = block;
  }

  { // ID: 19169
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19169] = block;
  }

  { // ID: 19170
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19170] = block;
  }

  { // ID: 19171
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19171] = block;
  }

  { // ID: 19172
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19172] = block;
  }

  { // ID: 19173
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19173] = block;
  }

  { // ID: 19174
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19174] = block;
  }

  { // ID: 19175
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19175] = block;
  }

  { // ID: 19176
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19176] = block;
  }

  { // ID: 19177
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_NORTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19177] = block;
  }

  { // ID: 19178
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19178] = block;
  }

  { // ID: 19179
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19179] = block;
  }

  { // ID: 19180
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19180] = block;
  }

  { // ID: 19181
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19181] = block;
  }

  { // ID: 19182
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19182] = block;
  }

  { // ID: 19183
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19183] = block;
  }

  { // ID: 19184
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19184] = block;
  }

  { // ID: 19185
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19185] = block;
  }

  { // ID: 19186
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19186] = block;
  }

  { // ID: 19187
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19187] = block;
  }

  { // ID: 19188
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19188] = block;
  }

  { // ID: 19189
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19189] = block;
  }

  { // ID: 19190
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19190] = block;
  }

  { // ID: 19191
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19191] = block;
  }

  { // ID: 19192
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19192] = block;
  }

  { // ID: 19193
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19193] = block;
  }

  { // ID: 19194
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19194] = block;
  }

  { // ID: 19195
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19195] = block;
  }

  { // ID: 19196
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19196] = block;
  }

  { // ID: 19197
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_SOUTH;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19197] = block;
  }

  { // ID: 19198
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19198] = block;
  }

  { // ID: 19199
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19199] = block;
  }

  { // ID: 19200
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19200] = block;
  }

  { // ID: 19201
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19201] = block;
  }

  { // ID: 19202
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19202] = block;
  }

  { // ID: 19203
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19203] = block;
  }

  { // ID: 19204
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19204] = block;
  }

  { // ID: 19205
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19205] = block;
  }

  { // ID: 19206
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19206] = block;
  }

  { // ID: 19207
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19207] = block;
  }

  { // ID: 19208
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19208] = block;
  }

  { // ID: 19209
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19209] = block;
  }

  { // ID: 19210
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19210] = block;
  }

  { // ID: 19211
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19211] = block;
  }

  { // ID: 19212
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19212] = block;
  }

  { // ID: 19213
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19213] = block;
  }

  { // ID: 19214
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19214] = block;
  }

  { // ID: 19215
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19215] = block;
  }

  { // ID: 19216
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19216] = block;
  }

  { // ID: 19217
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_WEST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19217] = block;
  }

  { // ID: 19218
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19218] = block;
  }

  { // ID: 19219
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19219] = block;
  }

  { // ID: 19220
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19220] = block;
  }

  { // ID: 19221
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19221] = block;
  }

  { // ID: 19222
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19222] = block;
  }

  { // ID: 19223
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19223] = block;
  }

  { // ID: 19224
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19224] = block;
  }

  { // ID: 19225
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19225] = block;
  }

  { // ID: 19226
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19226] = block;
  }

  { // ID: 19227
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_TOP;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19227] = block;
  }

  { // ID: 19228
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19228] = block;
  }

  { // ID: 19229
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19229] = block;
  }

  { // ID: 19230
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19230] = block;
  }

  { // ID: 19231
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19231] = block;
  }

  { // ID: 19232
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19232] = block;
  }

  { // ID: 19233
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19233] = block;
  }

  { // ID: 19234
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19234] = block;
  }

  { // ID: 19235
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19235] = block;
  }

  { // ID: 19236
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19236] = block;
  }

  { // ID: 19237
    std::shared_ptr<CutCopperStairsBlock> block = std::make_shared<CutCopperStairsBlock>();
    block->facing = CutCopperStairsBlock::FACING_EAST;
    block->half = CutCopperStairsBlock::HALF_BOTTOM;
    block->shape = CutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19237] = block;
  }

  { // ID: 19256
    std::shared_ptr<CutCopperSlabBlock> block = std::make_shared<CutCopperSlabBlock>();
    block->type = CutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = CutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19256] = block;
  }

  { // ID: 19257
    std::shared_ptr<CutCopperSlabBlock> block = std::make_shared<CutCopperSlabBlock>();
    block->type = CutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = CutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19257] = block;
  }

  { // ID: 19258
    std::shared_ptr<CutCopperSlabBlock> block = std::make_shared<CutCopperSlabBlock>();
    block->type = CutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19258] = block;
  }

  { // ID: 19259
    std::shared_ptr<CutCopperSlabBlock> block = std::make_shared<CutCopperSlabBlock>();
    block->type = CutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19259] = block;
  }

  { // ID: 19260
    std::shared_ptr<CutCopperSlabBlock> block = std::make_shared<CutCopperSlabBlock>();
    block->type = CutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19260] = block;
  }

  { // ID: 19261
    std::shared_ptr<CutCopperSlabBlock> block = std::make_shared<CutCopperSlabBlock>();
    block->type = CutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19261] = block;
  }

  { // ID: 19659
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_0;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19659] = block;
  }

  { // ID: 19660
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_0;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19660] = block;
  }

  { // ID: 19661
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_1;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19661] = block;
  }

  { // ID: 19662
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_1;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19662] = block;
  }

  { // ID: 19663
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_2;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19663] = block;
  }

  { // ID: 19664
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_2;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19664] = block;
  }

  { // ID: 19665
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_3;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19665] = block;
  }

  { // ID: 19666
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_3;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19666] = block;
  }

  { // ID: 19667
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_4;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19667] = block;
  }

  { // ID: 19668
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_4;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19668] = block;
  }

  { // ID: 19669
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_5;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19669] = block;
  }

  { // ID: 19670
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_5;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19670] = block;
  }

  { // ID: 19671
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_6;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19671] = block;
  }

  { // ID: 19672
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_6;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19672] = block;
  }

  { // ID: 19673
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_7;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19673] = block;
  }

  { // ID: 19674
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_7;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19674] = block;
  }

  { // ID: 19675
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_8;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19675] = block;
  }

  { // ID: 19676
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_8;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19676] = block;
  }

  { // ID: 19677
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_9;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19677] = block;
  }

  { // ID: 19678
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_9;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19678] = block;
  }

  { // ID: 19679
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_10;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19679] = block;
  }

  { // ID: 19680
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_10;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19680] = block;
  }

  { // ID: 19681
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_11;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19681] = block;
  }

  { // ID: 19682
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_11;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19682] = block;
  }

  { // ID: 19683
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_12;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19683] = block;
  }

  { // ID: 19684
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_12;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19684] = block;
  }

  { // ID: 19685
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_13;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19685] = block;
  }

  { // ID: 19686
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_13;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19686] = block;
  }

  { // ID: 19687
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_14;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19687] = block;
  }

  { // ID: 19688
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_14;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19688] = block;
  }

  { // ID: 19689
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_15;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19689] = block;
  }

  { // ID: 19690
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_15;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19690] = block;
  }

  { // ID: 19691
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_16;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19691] = block;
  }

  { // ID: 19692
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_16;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19692] = block;
  }

  { // ID: 19693
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_17;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19693] = block;
  }

  { // ID: 19694
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_17;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19694] = block;
  }

  { // ID: 19695
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_18;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19695] = block;
  }

  { // ID: 19696
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_18;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19696] = block;
  }

  { // ID: 19697
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_19;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19697] = block;
  }

  { // ID: 19698
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_19;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19698] = block;
  }

  { // ID: 19699
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_20;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19699] = block;
  }

  { // ID: 19700
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_20;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19700] = block;
  }

  { // ID: 19701
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_21;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19701] = block;
  }

  { // ID: 19702
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_21;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19702] = block;
  }

  { // ID: 19703
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_22;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19703] = block;
  }

  { // ID: 19704
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_22;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19704] = block;
  }

  { // ID: 19705
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_23;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19705] = block;
  }

  { // ID: 19706
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_23;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19706] = block;
  }

  { // ID: 19707
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_24;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19707] = block;
  }

  { // ID: 19708
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_24;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19708] = block;
  }

  { // ID: 19709
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_25;
    block->berries = CaveVinesBlock::BERRIES_TRUE;
    registry[19709] = block;
  }

  { // ID: 19710
    std::shared_ptr<CaveVinesBlock> block = std::make_shared<CaveVinesBlock>();
    block->age = CaveVinesBlock::AGE_25;
    block->berries = CaveVinesBlock::BERRIES_FALSE;
    registry[19710] = block;
  }

  { // ID: 19711
    std::shared_ptr<CaveVinesPlantBlock> block = std::make_shared<CaveVinesPlantBlock>();
    block->berries = CaveVinesPlantBlock::BERRIES_TRUE;
    registry[19711] = block;
  }

  { // ID: 19712
    std::shared_ptr<CaveVinesPlantBlock> block = std::make_shared<CaveVinesPlantBlock>();
    block->berries = CaveVinesPlantBlock::BERRIES_FALSE;
    registry[19712] = block;
  }

  { // ID: 19781
    std::shared_ptr<CobbledDeepslateBlock> block = std::make_shared<CobbledDeepslateBlock>();
    registry[19781] = block;
  }

  { // ID: 19782
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19782] = block;
  }

  { // ID: 19783
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19783] = block;
  }

  { // ID: 19784
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19784] = block;
  }

  { // ID: 19785
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19785] = block;
  }

  { // ID: 19786
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19786] = block;
  }

  { // ID: 19787
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19787] = block;
  }

  { // ID: 19788
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19788] = block;
  }

  { // ID: 19789
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19789] = block;
  }

  { // ID: 19790
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19790] = block;
  }

  { // ID: 19791
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19791] = block;
  }

  { // ID: 19792
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19792] = block;
  }

  { // ID: 19793
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19793] = block;
  }

  { // ID: 19794
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19794] = block;
  }

  { // ID: 19795
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19795] = block;
  }

  { // ID: 19796
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19796] = block;
  }

  { // ID: 19797
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19797] = block;
  }

  { // ID: 19798
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19798] = block;
  }

  { // ID: 19799
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19799] = block;
  }

  { // ID: 19800
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19800] = block;
  }

  { // ID: 19801
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_NORTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19801] = block;
  }

  { // ID: 19802
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19802] = block;
  }

  { // ID: 19803
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19803] = block;
  }

  { // ID: 19804
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19804] = block;
  }

  { // ID: 19805
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19805] = block;
  }

  { // ID: 19806
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19806] = block;
  }

  { // ID: 19807
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19807] = block;
  }

  { // ID: 19808
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19808] = block;
  }

  { // ID: 19809
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19809] = block;
  }

  { // ID: 19810
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19810] = block;
  }

  { // ID: 19811
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19811] = block;
  }

  { // ID: 19812
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19812] = block;
  }

  { // ID: 19813
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19813] = block;
  }

  { // ID: 19814
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19814] = block;
  }

  { // ID: 19815
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19815] = block;
  }

  { // ID: 19816
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19816] = block;
  }

  { // ID: 19817
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19817] = block;
  }

  { // ID: 19818
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19818] = block;
  }

  { // ID: 19819
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19819] = block;
  }

  { // ID: 19820
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19820] = block;
  }

  { // ID: 19821
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_SOUTH;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19821] = block;
  }

  { // ID: 19822
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19822] = block;
  }

  { // ID: 19823
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19823] = block;
  }

  { // ID: 19824
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19824] = block;
  }

  { // ID: 19825
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19825] = block;
  }

  { // ID: 19826
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19826] = block;
  }

  { // ID: 19827
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19827] = block;
  }

  { // ID: 19828
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19828] = block;
  }

  { // ID: 19829
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19829] = block;
  }

  { // ID: 19830
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19830] = block;
  }

  { // ID: 19831
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19831] = block;
  }

  { // ID: 19832
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19832] = block;
  }

  { // ID: 19833
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19833] = block;
  }

  { // ID: 19834
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19834] = block;
  }

  { // ID: 19835
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19835] = block;
  }

  { // ID: 19836
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19836] = block;
  }

  { // ID: 19837
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19837] = block;
  }

  { // ID: 19838
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19838] = block;
  }

  { // ID: 19839
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19839] = block;
  }

  { // ID: 19840
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19840] = block;
  }

  { // ID: 19841
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_WEST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19841] = block;
  }

  { // ID: 19842
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19842] = block;
  }

  { // ID: 19843
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19843] = block;
  }

  { // ID: 19844
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19844] = block;
  }

  { // ID: 19845
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19845] = block;
  }

  { // ID: 19846
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19846] = block;
  }

  { // ID: 19847
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19847] = block;
  }

  { // ID: 19848
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19848] = block;
  }

  { // ID: 19849
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19849] = block;
  }

  { // ID: 19850
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19850] = block;
  }

  { // ID: 19851
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_TOP;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19851] = block;
  }

  { // ID: 19852
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19852] = block;
  }

  { // ID: 19853
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19853] = block;
  }

  { // ID: 19854
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19854] = block;
  }

  { // ID: 19855
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19855] = block;
  }

  { // ID: 19856
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19856] = block;
  }

  { // ID: 19857
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19857] = block;
  }

  { // ID: 19858
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19858] = block;
  }

  { // ID: 19859
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19859] = block;
  }

  { // ID: 19860
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_TRUE;
    registry[19860] = block;
  }

  { // ID: 19861
    std::shared_ptr<CobbledDeepslateStairsBlock> block = std::make_shared<CobbledDeepslateStairsBlock>();
    block->facing = CobbledDeepslateStairsBlock::FACING_EAST;
    block->half = CobbledDeepslateStairsBlock::HALF_BOTTOM;
    block->shape = CobbledDeepslateStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = CobbledDeepslateStairsBlock::WATERLOGGED_FALSE;
    registry[19861] = block;
  }

  { // ID: 19862
    std::shared_ptr<CobbledDeepslateSlabBlock> block = std::make_shared<CobbledDeepslateSlabBlock>();
    block->type = CobbledDeepslateSlabBlock::TYPE_TOP;
    block->waterlogged = CobbledDeepslateSlabBlock::WATERLOGGED_TRUE;
    registry[19862] = block;
  }

  { // ID: 19863
    std::shared_ptr<CobbledDeepslateSlabBlock> block = std::make_shared<CobbledDeepslateSlabBlock>();
    block->type = CobbledDeepslateSlabBlock::TYPE_TOP;
    block->waterlogged = CobbledDeepslateSlabBlock::WATERLOGGED_FALSE;
    registry[19863] = block;
  }

  { // ID: 19864
    std::shared_ptr<CobbledDeepslateSlabBlock> block = std::make_shared<CobbledDeepslateSlabBlock>();
    block->type = CobbledDeepslateSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CobbledDeepslateSlabBlock::WATERLOGGED_TRUE;
    registry[19864] = block;
  }

  { // ID: 19865
    std::shared_ptr<CobbledDeepslateSlabBlock> block = std::make_shared<CobbledDeepslateSlabBlock>();
    block->type = CobbledDeepslateSlabBlock::TYPE_BOTTOM;
    block->waterlogged = CobbledDeepslateSlabBlock::WATERLOGGED_FALSE;
    registry[19865] = block;
  }

  { // ID: 19866
    std::shared_ptr<CobbledDeepslateSlabBlock> block = std::make_shared<CobbledDeepslateSlabBlock>();
    block->type = CobbledDeepslateSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CobbledDeepslateSlabBlock::WATERLOGGED_TRUE;
    registry[19866] = block;
  }

  { // ID: 19867
    std::shared_ptr<CobbledDeepslateSlabBlock> block = std::make_shared<CobbledDeepslateSlabBlock>();
    block->type = CobbledDeepslateSlabBlock::TYPE_DOUBLE;
    block->waterlogged = CobbledDeepslateSlabBlock::WATERLOGGED_FALSE;
    registry[19867] = block;
  }

  { // ID: 19868
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19868] = block;
  }

  { // ID: 19869
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19869] = block;
  }

  { // ID: 19870
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19870] = block;
  }

  { // ID: 19871
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19871] = block;
  }

  { // ID: 19872
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19872] = block;
  }

  { // ID: 19873
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19873] = block;
  }

  { // ID: 19874
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19874] = block;
  }

  { // ID: 19875
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19875] = block;
  }

  { // ID: 19876
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19876] = block;
  }

  { // ID: 19877
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19877] = block;
  }

  { // ID: 19878
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19878] = block;
  }

  { // ID: 19879
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19879] = block;
  }

  { // ID: 19880
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19880] = block;
  }

  { // ID: 19881
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19881] = block;
  }

  { // ID: 19882
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19882] = block;
  }

  { // ID: 19883
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19883] = block;
  }

  { // ID: 19884
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19884] = block;
  }

  { // ID: 19885
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19885] = block;
  }

  { // ID: 19886
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19886] = block;
  }

  { // ID: 19887
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19887] = block;
  }

  { // ID: 19888
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19888] = block;
  }

  { // ID: 19889
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19889] = block;
  }

  { // ID: 19890
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19890] = block;
  }

  { // ID: 19891
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19891] = block;
  }

  { // ID: 19892
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19892] = block;
  }

  { // ID: 19893
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19893] = block;
  }

  { // ID: 19894
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19894] = block;
  }

  { // ID: 19895
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19895] = block;
  }

  { // ID: 19896
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19896] = block;
  }

  { // ID: 19897
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19897] = block;
  }

  { // ID: 19898
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19898] = block;
  }

  { // ID: 19899
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19899] = block;
  }

  { // ID: 19900
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19900] = block;
  }

  { // ID: 19901
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19901] = block;
  }

  { // ID: 19902
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19902] = block;
  }

  { // ID: 19903
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19903] = block;
  }

  { // ID: 19904
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19904] = block;
  }

  { // ID: 19905
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19905] = block;
  }

  { // ID: 19906
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19906] = block;
  }

  { // ID: 19907
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19907] = block;
  }

  { // ID: 19908
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19908] = block;
  }

  { // ID: 19909
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19909] = block;
  }

  { // ID: 19910
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19910] = block;
  }

  { // ID: 19911
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19911] = block;
  }

  { // ID: 19912
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19912] = block;
  }

  { // ID: 19913
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19913] = block;
  }

  { // ID: 19914
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19914] = block;
  }

  { // ID: 19915
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19915] = block;
  }

  { // ID: 19916
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19916] = block;
  }

  { // ID: 19917
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19917] = block;
  }

  { // ID: 19918
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19918] = block;
  }

  { // ID: 19919
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19919] = block;
  }

  { // ID: 19920
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19920] = block;
  }

  { // ID: 19921
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19921] = block;
  }

  { // ID: 19922
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19922] = block;
  }

  { // ID: 19923
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19923] = block;
  }

  { // ID: 19924
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19924] = block;
  }

  { // ID: 19925
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19925] = block;
  }

  { // ID: 19926
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19926] = block;
  }

  { // ID: 19927
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19927] = block;
  }

  { // ID: 19928
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19928] = block;
  }

  { // ID: 19929
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19929] = block;
  }

  { // ID: 19930
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19930] = block;
  }

  { // ID: 19931
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19931] = block;
  }

  { // ID: 19932
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19932] = block;
  }

  { // ID: 19933
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19933] = block;
  }

  { // ID: 19934
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19934] = block;
  }

  { // ID: 19935
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19935] = block;
  }

  { // ID: 19936
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19936] = block;
  }

  { // ID: 19937
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19937] = block;
  }

  { // ID: 19938
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19938] = block;
  }

  { // ID: 19939
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19939] = block;
  }

  { // ID: 19940
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19940] = block;
  }

  { // ID: 19941
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19941] = block;
  }

  { // ID: 19942
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19942] = block;
  }

  { // ID: 19943
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19943] = block;
  }

  { // ID: 19944
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19944] = block;
  }

  { // ID: 19945
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19945] = block;
  }

  { // ID: 19946
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19946] = block;
  }

  { // ID: 19947
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19947] = block;
  }

  { // ID: 19948
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19948] = block;
  }

  { // ID: 19949
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19949] = block;
  }

  { // ID: 19950
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19950] = block;
  }

  { // ID: 19951
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19951] = block;
  }

  { // ID: 19952
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19952] = block;
  }

  { // ID: 19953
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19953] = block;
  }

  { // ID: 19954
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19954] = block;
  }

  { // ID: 19955
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19955] = block;
  }

  { // ID: 19956
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19956] = block;
  }

  { // ID: 19957
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19957] = block;
  }

  { // ID: 19958
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19958] = block;
  }

  { // ID: 19959
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19959] = block;
  }

  { // ID: 19960
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19960] = block;
  }

  { // ID: 19961
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19961] = block;
  }

  { // ID: 19962
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19962] = block;
  }

  { // ID: 19963
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19963] = block;
  }

  { // ID: 19964
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19964] = block;
  }

  { // ID: 19965
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19965] = block;
  }

  { // ID: 19966
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19966] = block;
  }

  { // ID: 19967
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19967] = block;
  }

  { // ID: 19968
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19968] = block;
  }

  { // ID: 19969
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19969] = block;
  }

  { // ID: 19970
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19970] = block;
  }

  { // ID: 19971
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19971] = block;
  }

  { // ID: 19972
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19972] = block;
  }

  { // ID: 19973
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19973] = block;
  }

  { // ID: 19974
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19974] = block;
  }

  { // ID: 19975
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_NONE;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19975] = block;
  }

  { // ID: 19976
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19976] = block;
  }

  { // ID: 19977
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19977] = block;
  }

  { // ID: 19978
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19978] = block;
  }

  { // ID: 19979
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19979] = block;
  }

  { // ID: 19980
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19980] = block;
  }

  { // ID: 19981
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19981] = block;
  }

  { // ID: 19982
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19982] = block;
  }

  { // ID: 19983
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19983] = block;
  }

  { // ID: 19984
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19984] = block;
  }

  { // ID: 19985
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19985] = block;
  }

  { // ID: 19986
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19986] = block;
  }

  { // ID: 19987
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19987] = block;
  }

  { // ID: 19988
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19988] = block;
  }

  { // ID: 19989
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19989] = block;
  }

  { // ID: 19990
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19990] = block;
  }

  { // ID: 19991
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19991] = block;
  }

  { // ID: 19992
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19992] = block;
  }

  { // ID: 19993
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19993] = block;
  }

  { // ID: 19994
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19994] = block;
  }

  { // ID: 19995
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19995] = block;
  }

  { // ID: 19996
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19996] = block;
  }

  { // ID: 19997
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[19997] = block;
  }

  { // ID: 19998
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[19998] = block;
  }

  { // ID: 19999
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[19999] = block;
  }

  { // ID: 20000
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20000] = block;
  }

  { // ID: 20001
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20001] = block;
  }

  { // ID: 20002
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20002] = block;
  }

  { // ID: 20003
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20003] = block;
  }

  { // ID: 20004
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20004] = block;
  }

  { // ID: 20005
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20005] = block;
  }

  { // ID: 20006
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20006] = block;
  }

  { // ID: 20007
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20007] = block;
  }

  { // ID: 20008
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20008] = block;
  }

  { // ID: 20009
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20009] = block;
  }

  { // ID: 20010
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20010] = block;
  }

  { // ID: 20011
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20011] = block;
  }

  { // ID: 20012
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20012] = block;
  }

  { // ID: 20013
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20013] = block;
  }

  { // ID: 20014
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20014] = block;
  }

  { // ID: 20015
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20015] = block;
  }

  { // ID: 20016
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20016] = block;
  }

  { // ID: 20017
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20017] = block;
  }

  { // ID: 20018
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20018] = block;
  }

  { // ID: 20019
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20019] = block;
  }

  { // ID: 20020
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20020] = block;
  }

  { // ID: 20021
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20021] = block;
  }

  { // ID: 20022
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20022] = block;
  }

  { // ID: 20023
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20023] = block;
  }

  { // ID: 20024
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20024] = block;
  }

  { // ID: 20025
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20025] = block;
  }

  { // ID: 20026
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20026] = block;
  }

  { // ID: 20027
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20027] = block;
  }

  { // ID: 20028
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20028] = block;
  }

  { // ID: 20029
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20029] = block;
  }

  { // ID: 20030
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20030] = block;
  }

  { // ID: 20031
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20031] = block;
  }

  { // ID: 20032
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20032] = block;
  }

  { // ID: 20033
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20033] = block;
  }

  { // ID: 20034
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20034] = block;
  }

  { // ID: 20035
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20035] = block;
  }

  { // ID: 20036
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20036] = block;
  }

  { // ID: 20037
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20037] = block;
  }

  { // ID: 20038
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20038] = block;
  }

  { // ID: 20039
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20039] = block;
  }

  { // ID: 20040
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20040] = block;
  }

  { // ID: 20041
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20041] = block;
  }

  { // ID: 20042
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20042] = block;
  }

  { // ID: 20043
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20043] = block;
  }

  { // ID: 20044
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20044] = block;
  }

  { // ID: 20045
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20045] = block;
  }

  { // ID: 20046
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20046] = block;
  }

  { // ID: 20047
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20047] = block;
  }

  { // ID: 20048
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20048] = block;
  }

  { // ID: 20049
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20049] = block;
  }

  { // ID: 20050
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20050] = block;
  }

  { // ID: 20051
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20051] = block;
  }

  { // ID: 20052
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20052] = block;
  }

  { // ID: 20053
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20053] = block;
  }

  { // ID: 20054
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20054] = block;
  }

  { // ID: 20055
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20055] = block;
  }

  { // ID: 20056
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20056] = block;
  }

  { // ID: 20057
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20057] = block;
  }

  { // ID: 20058
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20058] = block;
  }

  { // ID: 20059
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20059] = block;
  }

  { // ID: 20060
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20060] = block;
  }

  { // ID: 20061
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20061] = block;
  }

  { // ID: 20062
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20062] = block;
  }

  { // ID: 20063
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20063] = block;
  }

  { // ID: 20064
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20064] = block;
  }

  { // ID: 20065
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20065] = block;
  }

  { // ID: 20066
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20066] = block;
  }

  { // ID: 20067
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20067] = block;
  }

  { // ID: 20068
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20068] = block;
  }

  { // ID: 20069
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20069] = block;
  }

  { // ID: 20070
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20070] = block;
  }

  { // ID: 20071
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20071] = block;
  }

  { // ID: 20072
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20072] = block;
  }

  { // ID: 20073
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20073] = block;
  }

  { // ID: 20074
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20074] = block;
  }

  { // ID: 20075
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20075] = block;
  }

  { // ID: 20076
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20076] = block;
  }

  { // ID: 20077
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20077] = block;
  }

  { // ID: 20078
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20078] = block;
  }

  { // ID: 20079
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20079] = block;
  }

  { // ID: 20080
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20080] = block;
  }

  { // ID: 20081
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20081] = block;
  }

  { // ID: 20082
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20082] = block;
  }

  { // ID: 20083
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_LOW;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20083] = block;
  }

  { // ID: 20084
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20084] = block;
  }

  { // ID: 20085
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20085] = block;
  }

  { // ID: 20086
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20086] = block;
  }

  { // ID: 20087
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20087] = block;
  }

  { // ID: 20088
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20088] = block;
  }

  { // ID: 20089
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20089] = block;
  }

  { // ID: 20090
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20090] = block;
  }

  { // ID: 20091
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20091] = block;
  }

  { // ID: 20092
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20092] = block;
  }

  { // ID: 20093
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20093] = block;
  }

  { // ID: 20094
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20094] = block;
  }

  { // ID: 20095
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20095] = block;
  }

  { // ID: 20096
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20096] = block;
  }

  { // ID: 20097
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20097] = block;
  }

  { // ID: 20098
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20098] = block;
  }

  { // ID: 20099
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20099] = block;
  }

  { // ID: 20100
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20100] = block;
  }

  { // ID: 20101
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20101] = block;
  }

  { // ID: 20102
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20102] = block;
  }

  { // ID: 20103
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20103] = block;
  }

  { // ID: 20104
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20104] = block;
  }

  { // ID: 20105
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20105] = block;
  }

  { // ID: 20106
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20106] = block;
  }

  { // ID: 20107
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20107] = block;
  }

  { // ID: 20108
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20108] = block;
  }

  { // ID: 20109
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20109] = block;
  }

  { // ID: 20110
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20110] = block;
  }

  { // ID: 20111
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20111] = block;
  }

  { // ID: 20112
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20112] = block;
  }

  { // ID: 20113
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20113] = block;
  }

  { // ID: 20114
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20114] = block;
  }

  { // ID: 20115
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20115] = block;
  }

  { // ID: 20116
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20116] = block;
  }

  { // ID: 20117
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20117] = block;
  }

  { // ID: 20118
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20118] = block;
  }

  { // ID: 20119
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_NONE;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20119] = block;
  }

  { // ID: 20120
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20120] = block;
  }

  { // ID: 20121
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20121] = block;
  }

  { // ID: 20122
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20122] = block;
  }

  { // ID: 20123
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20123] = block;
  }

  { // ID: 20124
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20124] = block;
  }

  { // ID: 20125
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20125] = block;
  }

  { // ID: 20126
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20126] = block;
  }

  { // ID: 20127
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20127] = block;
  }

  { // ID: 20128
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20128] = block;
  }

  { // ID: 20129
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20129] = block;
  }

  { // ID: 20130
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20130] = block;
  }

  { // ID: 20131
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20131] = block;
  }

  { // ID: 20132
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20132] = block;
  }

  { // ID: 20133
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20133] = block;
  }

  { // ID: 20134
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20134] = block;
  }

  { // ID: 20135
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20135] = block;
  }

  { // ID: 20136
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20136] = block;
  }

  { // ID: 20137
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20137] = block;
  }

  { // ID: 20138
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20138] = block;
  }

  { // ID: 20139
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20139] = block;
  }

  { // ID: 20140
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20140] = block;
  }

  { // ID: 20141
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20141] = block;
  }

  { // ID: 20142
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20142] = block;
  }

  { // ID: 20143
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20143] = block;
  }

  { // ID: 20144
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20144] = block;
  }

  { // ID: 20145
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20145] = block;
  }

  { // ID: 20146
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20146] = block;
  }

  { // ID: 20147
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20147] = block;
  }

  { // ID: 20148
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20148] = block;
  }

  { // ID: 20149
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20149] = block;
  }

  { // ID: 20150
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20150] = block;
  }

  { // ID: 20151
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20151] = block;
  }

  { // ID: 20152
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20152] = block;
  }

  { // ID: 20153
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20153] = block;
  }

  { // ID: 20154
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20154] = block;
  }

  { // ID: 20155
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_LOW;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20155] = block;
  }

  { // ID: 20156
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20156] = block;
  }

  { // ID: 20157
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20157] = block;
  }

  { // ID: 20158
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20158] = block;
  }

  { // ID: 20159
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20159] = block;
  }

  { // ID: 20160
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20160] = block;
  }

  { // ID: 20161
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20161] = block;
  }

  { // ID: 20162
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20162] = block;
  }

  { // ID: 20163
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20163] = block;
  }

  { // ID: 20164
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20164] = block;
  }

  { // ID: 20165
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20165] = block;
  }

  { // ID: 20166
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20166] = block;
  }

  { // ID: 20167
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_NONE;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20167] = block;
  }

  { // ID: 20168
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20168] = block;
  }

  { // ID: 20169
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20169] = block;
  }

  { // ID: 20170
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20170] = block;
  }

  { // ID: 20171
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20171] = block;
  }

  { // ID: 20172
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20172] = block;
  }

  { // ID: 20173
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20173] = block;
  }

  { // ID: 20174
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20174] = block;
  }

  { // ID: 20175
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20175] = block;
  }

  { // ID: 20176
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20176] = block;
  }

  { // ID: 20177
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20177] = block;
  }

  { // ID: 20178
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20178] = block;
  }

  { // ID: 20179
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_LOW;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20179] = block;
  }

  { // ID: 20180
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20180] = block;
  }

  { // ID: 20181
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20181] = block;
  }

  { // ID: 20182
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20182] = block;
  }

  { // ID: 20183
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20183] = block;
  }

  { // ID: 20184
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20184] = block;
  }

  { // ID: 20185
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_TRUE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20185] = block;
  }

  { // ID: 20186
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20186] = block;
  }

  { // ID: 20187
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20187] = block;
  }

  { // ID: 20188
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_TRUE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20188] = block;
  }

  { // ID: 20189
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_NONE;
    registry[20189] = block;
  }

  { // ID: 20190
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_LOW;
    registry[20190] = block;
  }

  { // ID: 20191
    std::shared_ptr<CobbledDeepslateWallBlock> block = std::make_shared<CobbledDeepslateWallBlock>();
    block->east = CobbledDeepslateWallBlock::EAST_TALL;
    block->north = CobbledDeepslateWallBlock::NORTH_TALL;
    block->south = CobbledDeepslateWallBlock::SOUTH_TALL;
    block->up = CobbledDeepslateWallBlock::UP_FALSE;
    block->waterlogged = CobbledDeepslateWallBlock::WATERLOGGED_FALSE;
    block->west = CobbledDeepslateWallBlock::WEST_TALL;
    registry[20191] = block;
  }

  { // ID: 21425
    std::shared_ptr<ChiseledDeepslateBlock> block = std::make_shared<ChiseledDeepslateBlock>();
    registry[21425] = block;
  }

  { // ID: 21426
    std::shared_ptr<CrackedDeepslateBricksBlock> block = std::make_shared<CrackedDeepslateBricksBlock>();
    registry[21426] = block;
  }

  { // ID: 21427
    std::shared_ptr<CrackedDeepslateTilesBlock> block = std::make_shared<CrackedDeepslateTilesBlock>();
    registry[21427] = block;
  }
}
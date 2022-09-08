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

#include "bamboo_block.h"
#include "bamboo_sapling_block.h"
#include "barrel_block.h"
#include "barrier_block.h"
#include "basalt_block.h"
#include "beacon_block.h"
#include "bedrock_block.h"
#include "bee_nest_block.h"
#include "beehive_block.h"
#include "beetroots_block.h"
#include "bell_block.h"
#include "big_dripleaf_block.h"
#include "big_dripleaf_stem_block.h"
#include "birch_button_block.h"
#include "birch_door_block.h"
#include "birch_fence_block.h"
#include "birch_fence_gate_block.h"
#include "birch_leaves_block.h"
#include "birch_log_block.h"
#include "birch_planks_block.h"
#include "birch_pressure_plate_block.h"
#include "birch_sapling_block.h"
#include "birch_sign_block.h"
#include "birch_slab_block.h"
#include "birch_stairs_block.h"
#include "birch_trapdoor_block.h"
#include "birch_wall_sign_block.h"
#include "birch_wood_block.h"
#include "black_banner_block.h"
#include "black_bed_block.h"
#include "black_candle_block.h"
#include "black_candle_cake_block.h"
#include "black_carpet_block.h"
#include "black_concrete_block.h"
#include "black_concrete_powder_block.h"
#include "black_glazed_terracotta_block.h"
#include "black_shulker_box_block.h"
#include "black_stained_glass_block.h"
#include "black_stained_glass_pane_block.h"
#include "black_terracotta_block.h"
#include "black_wall_banner_block.h"
#include "black_wool_block.h"
#include "blackstone_block.h"
#include "blackstone_slab_block.h"
#include "blackstone_stairs_block.h"
#include "blackstone_wall_block.h"
#include "blast_furnace_block.h"
#include "blue_banner_block.h"
#include "blue_bed_block.h"
#include "blue_candle_block.h"
#include "blue_candle_cake_block.h"
#include "blue_carpet_block.h"
#include "blue_concrete_block.h"
#include "blue_concrete_powder_block.h"
#include "blue_glazed_terracotta_block.h"
#include "blue_ice_block.h"
#include "blue_orchid_block.h"
#include "blue_shulker_box_block.h"
#include "blue_stained_glass_block.h"
#include "blue_stained_glass_pane_block.h"
#include "blue_terracotta_block.h"
#include "blue_wall_banner_block.h"
#include "blue_wool_block.h"
#include "bone_block_block.h"
#include "bookshelf_block.h"
#include "brain_coral_block.h"
#include "brain_coral_block_block.h"
#include "brain_coral_fan_block.h"
#include "brain_coral_wall_fan_block.h"
#include "brewing_stand_block.h"
#include "brick_slab_block.h"
#include "brick_stairs_block.h"
#include "brick_wall_block.h"
#include "bricks_block.h"
#include "brown_banner_block.h"
#include "brown_bed_block.h"
#include "brown_candle_block.h"
#include "brown_candle_cake_block.h"
#include "brown_carpet_block.h"
#include "brown_concrete_block.h"
#include "brown_concrete_powder_block.h"
#include "brown_glazed_terracotta_block.h"
#include "brown_mushroom_block.h"
#include "brown_mushroom_block_block.h"
#include "brown_shulker_box_block.h"
#include "brown_stained_glass_block.h"
#include "brown_stained_glass_pane_block.h"
#include "brown_terracotta_block.h"
#include "brown_wall_banner_block.h"
#include "brown_wool_block.h"
#include "bubble_column_block.h"
#include "bubble_coral_block.h"
#include "bubble_coral_block_block.h"
#include "bubble_coral_fan_block.h"
#include "bubble_coral_wall_fan_block.h"
#include "budding_amethyst_block.h"

void BlockRegistry::generateB() {

  { // ID: 17
    std::shared_ptr<BirchPlanksBlock> block = std::make_shared<BirchPlanksBlock>();
    registry[17] = block;
  }

  { // ID: 26
    std::shared_ptr<BirchSaplingBlock> block = std::make_shared<BirchSaplingBlock>();
    block->stage = BirchSaplingBlock::STAGE_0;
    registry[26] = block;
  }

  { // ID: 27
    std::shared_ptr<BirchSaplingBlock> block = std::make_shared<BirchSaplingBlock>();
    block->stage = BirchSaplingBlock::STAGE_1;
    registry[27] = block;
  }

  { // ID: 74
    std::shared_ptr<BedrockBlock> block = std::make_shared<BedrockBlock>();
    registry[74] = block;
  }

  { // ID: 123
    std::shared_ptr<BirchLogBlock> block = std::make_shared<BirchLogBlock>();
    block->axis = BirchLogBlock::AXIS_X;
    registry[123] = block;
  }

  { // ID: 124
    std::shared_ptr<BirchLogBlock> block = std::make_shared<BirchLogBlock>();
    block->axis = BirchLogBlock::AXIS_Y;
    registry[124] = block;
  }

  { // ID: 125
    std::shared_ptr<BirchLogBlock> block = std::make_shared<BirchLogBlock>();
    block->axis = BirchLogBlock::AXIS_Z;
    registry[125] = block;
  }

  { // ID: 170
    std::shared_ptr<BirchWoodBlock> block = std::make_shared<BirchWoodBlock>();
    block->axis = BirchWoodBlock::AXIS_X;
    registry[170] = block;
  }

  { // ID: 171
    std::shared_ptr<BirchWoodBlock> block = std::make_shared<BirchWoodBlock>();
    block->axis = BirchWoodBlock::AXIS_Y;
    registry[171] = block;
  }

  { // ID: 172
    std::shared_ptr<BirchWoodBlock> block = std::make_shared<BirchWoodBlock>();
    block->axis = BirchWoodBlock::AXIS_Z;
    registry[172] = block;
  }

  { // ID: 262
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_1;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[262] = block;
  }

  { // ID: 263
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_1;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[263] = block;
  }

  { // ID: 264
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_1;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[264] = block;
  }

  { // ID: 265
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_1;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[265] = block;
  }

  { // ID: 266
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_2;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[266] = block;
  }

  { // ID: 267
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_2;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[267] = block;
  }

  { // ID: 268
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_2;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[268] = block;
  }

  { // ID: 269
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_2;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[269] = block;
  }

  { // ID: 270
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_3;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[270] = block;
  }

  { // ID: 271
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_3;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[271] = block;
  }

  { // ID: 272
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_3;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[272] = block;
  }

  { // ID: 273
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_3;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[273] = block;
  }

  { // ID: 274
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_4;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[274] = block;
  }

  { // ID: 275
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_4;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[275] = block;
  }

  { // ID: 276
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_4;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[276] = block;
  }

  { // ID: 277
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_4;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[277] = block;
  }

  { // ID: 278
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_5;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[278] = block;
  }

  { // ID: 279
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_5;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[279] = block;
  }

  { // ID: 280
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_5;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[280] = block;
  }

  { // ID: 281
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_5;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[281] = block;
  }

  { // ID: 282
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_6;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[282] = block;
  }

  { // ID: 283
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_6;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[283] = block;
  }

  { // ID: 284
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_6;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[284] = block;
  }

  { // ID: 285
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_6;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[285] = block;
  }

  { // ID: 286
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_7;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[286] = block;
  }

  { // ID: 287
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_7;
    block->persistent = BirchLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[287] = block;
  }

  { // ID: 288
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_7;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_TRUE;
    registry[288] = block;
  }

  { // ID: 289
    std::shared_ptr<BirchLeavesBlock> block = std::make_shared<BirchLeavesBlock>();
    block->distance = BirchLeavesBlock::DISTANCE_7;
    block->persistent = BirchLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = BirchLeavesBlock::WATERLOGGED_FALSE;
    registry[289] = block;
  }

  { // ID: 1455
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_NORTH;
    block->occupied = BlueBedBlock::OCCUPIED_TRUE;
    block->part = BlueBedBlock::PART_HEAD;
    registry[1455] = block;
  }

  { // ID: 1456
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_NORTH;
    block->occupied = BlueBedBlock::OCCUPIED_TRUE;
    block->part = BlueBedBlock::PART_FOOT;
    registry[1456] = block;
  }

  { // ID: 1457
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_NORTH;
    block->occupied = BlueBedBlock::OCCUPIED_FALSE;
    block->part = BlueBedBlock::PART_HEAD;
    registry[1457] = block;
  }

  { // ID: 1458
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_NORTH;
    block->occupied = BlueBedBlock::OCCUPIED_FALSE;
    block->part = BlueBedBlock::PART_FOOT;
    registry[1458] = block;
  }

  { // ID: 1459
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_SOUTH;
    block->occupied = BlueBedBlock::OCCUPIED_TRUE;
    block->part = BlueBedBlock::PART_HEAD;
    registry[1459] = block;
  }

  { // ID: 1460
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_SOUTH;
    block->occupied = BlueBedBlock::OCCUPIED_TRUE;
    block->part = BlueBedBlock::PART_FOOT;
    registry[1460] = block;
  }

  { // ID: 1461
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_SOUTH;
    block->occupied = BlueBedBlock::OCCUPIED_FALSE;
    block->part = BlueBedBlock::PART_HEAD;
    registry[1461] = block;
  }

  { // ID: 1462
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_SOUTH;
    block->occupied = BlueBedBlock::OCCUPIED_FALSE;
    block->part = BlueBedBlock::PART_FOOT;
    registry[1462] = block;
  }

  { // ID: 1463
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_WEST;
    block->occupied = BlueBedBlock::OCCUPIED_TRUE;
    block->part = BlueBedBlock::PART_HEAD;
    registry[1463] = block;
  }

  { // ID: 1464
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_WEST;
    block->occupied = BlueBedBlock::OCCUPIED_TRUE;
    block->part = BlueBedBlock::PART_FOOT;
    registry[1464] = block;
  }

  { // ID: 1465
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_WEST;
    block->occupied = BlueBedBlock::OCCUPIED_FALSE;
    block->part = BlueBedBlock::PART_HEAD;
    registry[1465] = block;
  }

  { // ID: 1466
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_WEST;
    block->occupied = BlueBedBlock::OCCUPIED_FALSE;
    block->part = BlueBedBlock::PART_FOOT;
    registry[1466] = block;
  }

  { // ID: 1467
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_EAST;
    block->occupied = BlueBedBlock::OCCUPIED_TRUE;
    block->part = BlueBedBlock::PART_HEAD;
    registry[1467] = block;
  }

  { // ID: 1468
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_EAST;
    block->occupied = BlueBedBlock::OCCUPIED_TRUE;
    block->part = BlueBedBlock::PART_FOOT;
    registry[1468] = block;
  }

  { // ID: 1469
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_EAST;
    block->occupied = BlueBedBlock::OCCUPIED_FALSE;
    block->part = BlueBedBlock::PART_HEAD;
    registry[1469] = block;
  }

  { // ID: 1470
    std::shared_ptr<BlueBedBlock> block = std::make_shared<BlueBedBlock>();
    block->facing = BlueBedBlock::FACING_EAST;
    block->occupied = BlueBedBlock::OCCUPIED_FALSE;
    block->part = BlueBedBlock::PART_FOOT;
    registry[1470] = block;
  }

  { // ID: 1471
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_NORTH;
    block->occupied = BrownBedBlock::OCCUPIED_TRUE;
    block->part = BrownBedBlock::PART_HEAD;
    registry[1471] = block;
  }

  { // ID: 1472
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_NORTH;
    block->occupied = BrownBedBlock::OCCUPIED_TRUE;
    block->part = BrownBedBlock::PART_FOOT;
    registry[1472] = block;
  }

  { // ID: 1473
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_NORTH;
    block->occupied = BrownBedBlock::OCCUPIED_FALSE;
    block->part = BrownBedBlock::PART_HEAD;
    registry[1473] = block;
  }

  { // ID: 1474
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_NORTH;
    block->occupied = BrownBedBlock::OCCUPIED_FALSE;
    block->part = BrownBedBlock::PART_FOOT;
    registry[1474] = block;
  }

  { // ID: 1475
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_SOUTH;
    block->occupied = BrownBedBlock::OCCUPIED_TRUE;
    block->part = BrownBedBlock::PART_HEAD;
    registry[1475] = block;
  }

  { // ID: 1476
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_SOUTH;
    block->occupied = BrownBedBlock::OCCUPIED_TRUE;
    block->part = BrownBedBlock::PART_FOOT;
    registry[1476] = block;
  }

  { // ID: 1477
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_SOUTH;
    block->occupied = BrownBedBlock::OCCUPIED_FALSE;
    block->part = BrownBedBlock::PART_HEAD;
    registry[1477] = block;
  }

  { // ID: 1478
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_SOUTH;
    block->occupied = BrownBedBlock::OCCUPIED_FALSE;
    block->part = BrownBedBlock::PART_FOOT;
    registry[1478] = block;
  }

  { // ID: 1479
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_WEST;
    block->occupied = BrownBedBlock::OCCUPIED_TRUE;
    block->part = BrownBedBlock::PART_HEAD;
    registry[1479] = block;
  }

  { // ID: 1480
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_WEST;
    block->occupied = BrownBedBlock::OCCUPIED_TRUE;
    block->part = BrownBedBlock::PART_FOOT;
    registry[1480] = block;
  }

  { // ID: 1481
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_WEST;
    block->occupied = BrownBedBlock::OCCUPIED_FALSE;
    block->part = BrownBedBlock::PART_HEAD;
    registry[1481] = block;
  }

  { // ID: 1482
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_WEST;
    block->occupied = BrownBedBlock::OCCUPIED_FALSE;
    block->part = BrownBedBlock::PART_FOOT;
    registry[1482] = block;
  }

  { // ID: 1483
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_EAST;
    block->occupied = BrownBedBlock::OCCUPIED_TRUE;
    block->part = BrownBedBlock::PART_HEAD;
    registry[1483] = block;
  }

  { // ID: 1484
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_EAST;
    block->occupied = BrownBedBlock::OCCUPIED_TRUE;
    block->part = BrownBedBlock::PART_FOOT;
    registry[1484] = block;
  }

  { // ID: 1485
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_EAST;
    block->occupied = BrownBedBlock::OCCUPIED_FALSE;
    block->part = BrownBedBlock::PART_HEAD;
    registry[1485] = block;
  }

  { // ID: 1486
    std::shared_ptr<BrownBedBlock> block = std::make_shared<BrownBedBlock>();
    block->facing = BrownBedBlock::FACING_EAST;
    block->occupied = BrownBedBlock::OCCUPIED_FALSE;
    block->part = BrownBedBlock::PART_FOOT;
    registry[1486] = block;
  }

  { // ID: 1519
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_NORTH;
    block->occupied = BlackBedBlock::OCCUPIED_TRUE;
    block->part = BlackBedBlock::PART_HEAD;
    registry[1519] = block;
  }

  { // ID: 1520
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_NORTH;
    block->occupied = BlackBedBlock::OCCUPIED_TRUE;
    block->part = BlackBedBlock::PART_FOOT;
    registry[1520] = block;
  }

  { // ID: 1521
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_NORTH;
    block->occupied = BlackBedBlock::OCCUPIED_FALSE;
    block->part = BlackBedBlock::PART_HEAD;
    registry[1521] = block;
  }

  { // ID: 1522
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_NORTH;
    block->occupied = BlackBedBlock::OCCUPIED_FALSE;
    block->part = BlackBedBlock::PART_FOOT;
    registry[1522] = block;
  }

  { // ID: 1523
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_SOUTH;
    block->occupied = BlackBedBlock::OCCUPIED_TRUE;
    block->part = BlackBedBlock::PART_HEAD;
    registry[1523] = block;
  }

  { // ID: 1524
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_SOUTH;
    block->occupied = BlackBedBlock::OCCUPIED_TRUE;
    block->part = BlackBedBlock::PART_FOOT;
    registry[1524] = block;
  }

  { // ID: 1525
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_SOUTH;
    block->occupied = BlackBedBlock::OCCUPIED_FALSE;
    block->part = BlackBedBlock::PART_HEAD;
    registry[1525] = block;
  }

  { // ID: 1526
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_SOUTH;
    block->occupied = BlackBedBlock::OCCUPIED_FALSE;
    block->part = BlackBedBlock::PART_FOOT;
    registry[1526] = block;
  }

  { // ID: 1527
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_WEST;
    block->occupied = BlackBedBlock::OCCUPIED_TRUE;
    block->part = BlackBedBlock::PART_HEAD;
    registry[1527] = block;
  }

  { // ID: 1528
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_WEST;
    block->occupied = BlackBedBlock::OCCUPIED_TRUE;
    block->part = BlackBedBlock::PART_FOOT;
    registry[1528] = block;
  }

  { // ID: 1529
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_WEST;
    block->occupied = BlackBedBlock::OCCUPIED_FALSE;
    block->part = BlackBedBlock::PART_HEAD;
    registry[1529] = block;
  }

  { // ID: 1530
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_WEST;
    block->occupied = BlackBedBlock::OCCUPIED_FALSE;
    block->part = BlackBedBlock::PART_FOOT;
    registry[1530] = block;
  }

  { // ID: 1531
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_EAST;
    block->occupied = BlackBedBlock::OCCUPIED_TRUE;
    block->part = BlackBedBlock::PART_HEAD;
    registry[1531] = block;
  }

  { // ID: 1532
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_EAST;
    block->occupied = BlackBedBlock::OCCUPIED_TRUE;
    block->part = BlackBedBlock::PART_FOOT;
    registry[1532] = block;
  }

  { // ID: 1533
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_EAST;
    block->occupied = BlackBedBlock::OCCUPIED_FALSE;
    block->part = BlackBedBlock::PART_HEAD;
    registry[1533] = block;
  }

  { // ID: 1534
    std::shared_ptr<BlackBedBlock> block = std::make_shared<BlackBedBlock>();
    block->facing = BlackBedBlock::FACING_EAST;
    block->occupied = BlackBedBlock::OCCUPIED_FALSE;
    block->part = BlackBedBlock::PART_FOOT;
    registry[1534] = block;
  }

  { // ID: 1649
    std::shared_ptr<BlueWoolBlock> block = std::make_shared<BlueWoolBlock>();
    registry[1649] = block;
  }

  { // ID: 1650
    std::shared_ptr<BrownWoolBlock> block = std::make_shared<BrownWoolBlock>();
    registry[1650] = block;
  }

  { // ID: 1653
    std::shared_ptr<BlackWoolBlock> block = std::make_shared<BlackWoolBlock>();
    registry[1653] = block;
  }

  { // ID: 1668
    std::shared_ptr<BlueOrchidBlock> block = std::make_shared<BlueOrchidBlock>();
    registry[1668] = block;
  }

  { // ID: 1679
    std::shared_ptr<BrownMushroomBlock> block = std::make_shared<BrownMushroomBlock>();
    registry[1679] = block;
  }

  { // ID: 1683
    std::shared_ptr<BricksBlock> block = std::make_shared<BricksBlock>();
    registry[1683] = block;
  }

  { // ID: 1686
    std::shared_ptr<BookshelfBlock> block = std::make_shared<BookshelfBlock>();
    registry[1686] = block;
  }

  { // ID: 3700
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_0;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3700] = block;
  }

  { // ID: 3701
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_0;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3701] = block;
  }

  { // ID: 3702
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_1;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3702] = block;
  }

  { // ID: 3703
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_1;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3703] = block;
  }

  { // ID: 3704
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_2;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3704] = block;
  }

  { // ID: 3705
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_2;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3705] = block;
  }

  { // ID: 3706
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_3;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3706] = block;
  }

  { // ID: 3707
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_3;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3707] = block;
  }

  { // ID: 3708
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_4;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3708] = block;
  }

  { // ID: 3709
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_4;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3709] = block;
  }

  { // ID: 3710
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_5;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3710] = block;
  }

  { // ID: 3711
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_5;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3711] = block;
  }

  { // ID: 3712
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_6;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3712] = block;
  }

  { // ID: 3713
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_6;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3713] = block;
  }

  { // ID: 3714
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_7;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3714] = block;
  }

  { // ID: 3715
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_7;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3715] = block;
  }

  { // ID: 3716
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_8;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3716] = block;
  }

  { // ID: 3717
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_8;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3717] = block;
  }

  { // ID: 3718
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_9;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3718] = block;
  }

  { // ID: 3719
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_9;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3719] = block;
  }

  { // ID: 3720
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_10;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3720] = block;
  }

  { // ID: 3721
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_10;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3721] = block;
  }

  { // ID: 3722
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_11;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3722] = block;
  }

  { // ID: 3723
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_11;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3723] = block;
  }

  { // ID: 3724
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_12;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3724] = block;
  }

  { // ID: 3725
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_12;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3725] = block;
  }

  { // ID: 3726
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_13;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3726] = block;
  }

  { // ID: 3727
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_13;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3727] = block;
  }

  { // ID: 3728
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_14;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3728] = block;
  }

  { // ID: 3729
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_14;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3729] = block;
  }

  { // ID: 3730
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_15;
    block->waterlogged = BirchSignBlock::WATERLOGGED_TRUE;
    registry[3730] = block;
  }

  { // ID: 3731
    std::shared_ptr<BirchSignBlock> block = std::make_shared<BirchSignBlock>();
    block->rotation = BirchSignBlock::ROTATION_15;
    block->waterlogged = BirchSignBlock::WATERLOGGED_FALSE;
    registry[3731] = block;
  }

  { // ID: 4048
    std::shared_ptr<BirchWallSignBlock> block = std::make_shared<BirchWallSignBlock>();
    block->facing = BirchWallSignBlock::FACING_NORTH;
    block->waterlogged = BirchWallSignBlock::WATERLOGGED_TRUE;
    registry[4048] = block;
  }

  { // ID: 4049
    std::shared_ptr<BirchWallSignBlock> block = std::make_shared<BirchWallSignBlock>();
    block->facing = BirchWallSignBlock::FACING_NORTH;
    block->waterlogged = BirchWallSignBlock::WATERLOGGED_FALSE;
    registry[4049] = block;
  }

  { // ID: 4050
    std::shared_ptr<BirchWallSignBlock> block = std::make_shared<BirchWallSignBlock>();
    block->facing = BirchWallSignBlock::FACING_SOUTH;
    block->waterlogged = BirchWallSignBlock::WATERLOGGED_TRUE;
    registry[4050] = block;
  }

  { // ID: 4051
    std::shared_ptr<BirchWallSignBlock> block = std::make_shared<BirchWallSignBlock>();
    block->facing = BirchWallSignBlock::FACING_SOUTH;
    block->waterlogged = BirchWallSignBlock::WATERLOGGED_FALSE;
    registry[4051] = block;
  }

  { // ID: 4052
    std::shared_ptr<BirchWallSignBlock> block = std::make_shared<BirchWallSignBlock>();
    block->facing = BirchWallSignBlock::FACING_WEST;
    block->waterlogged = BirchWallSignBlock::WATERLOGGED_TRUE;
    registry[4052] = block;
  }

  { // ID: 4053
    std::shared_ptr<BirchWallSignBlock> block = std::make_shared<BirchWallSignBlock>();
    block->facing = BirchWallSignBlock::FACING_WEST;
    block->waterlogged = BirchWallSignBlock::WATERLOGGED_FALSE;
    registry[4053] = block;
  }

  { // ID: 4054
    std::shared_ptr<BirchWallSignBlock> block = std::make_shared<BirchWallSignBlock>();
    block->facing = BirchWallSignBlock::FACING_EAST;
    block->waterlogged = BirchWallSignBlock::WATERLOGGED_TRUE;
    registry[4054] = block;
  }

  { // ID: 4055
    std::shared_ptr<BirchWallSignBlock> block = std::make_shared<BirchWallSignBlock>();
    block->facing = BirchWallSignBlock::FACING_EAST;
    block->waterlogged = BirchWallSignBlock::WATERLOGGED_FALSE;
    registry[4055] = block;
  }

  { // ID: 4182
    std::shared_ptr<BirchPressurePlateBlock> block = std::make_shared<BirchPressurePlateBlock>();
    block->powered = BirchPressurePlateBlock::POWERED_TRUE;
    registry[4182] = block;
  }

  { // ID: 4183
    std::shared_ptr<BirchPressurePlateBlock> block = std::make_shared<BirchPressurePlateBlock>();
    block->powered = BirchPressurePlateBlock::POWERED_FALSE;
    registry[4183] = block;
  }

  { // ID: 4311
    std::shared_ptr<BasaltBlock> block = std::make_shared<BasaltBlock>();
    block->axis = BasaltBlock::AXIS_X;
    registry[4311] = block;
  }

  { // ID: 4312
    std::shared_ptr<BasaltBlock> block = std::make_shared<BasaltBlock>();
    block->axis = BasaltBlock::AXIS_Y;
    registry[4312] = block;
  }

  { // ID: 4313
    std::shared_ptr<BasaltBlock> block = std::make_shared<BasaltBlock>();
    block->axis = BasaltBlock::AXIS_Z;
    registry[4313] = block;
  }

  { // ID: 4415
    std::shared_ptr<BlueStainedGlassBlock> block = std::make_shared<BlueStainedGlassBlock>();
    registry[4415] = block;
  }

  { // ID: 4416
    std::shared_ptr<BrownStainedGlassBlock> block = std::make_shared<BrownStainedGlassBlock>();
    registry[4416] = block;
  }

  { // ID: 4419
    std::shared_ptr<BlackStainedGlassBlock> block = std::make_shared<BlackStainedGlassBlock>();
    registry[4419] = block;
  }

  { // ID: 4548
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4548] = block;
  }

  { // ID: 4549
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4549] = block;
  }

  { // ID: 4550
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4550] = block;
  }

  { // ID: 4551
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4551] = block;
  }

  { // ID: 4552
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4552] = block;
  }

  { // ID: 4553
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4553] = block;
  }

  { // ID: 4554
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4554] = block;
  }

  { // ID: 4555
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4555] = block;
  }

  { // ID: 4556
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4556] = block;
  }

  { // ID: 4557
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4557] = block;
  }

  { // ID: 4558
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4558] = block;
  }

  { // ID: 4559
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4559] = block;
  }

  { // ID: 4560
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4560] = block;
  }

  { // ID: 4561
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4561] = block;
  }

  { // ID: 4562
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4562] = block;
  }

  { // ID: 4563
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_NORTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4563] = block;
  }

  { // ID: 4564
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4564] = block;
  }

  { // ID: 4565
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4565] = block;
  }

  { // ID: 4566
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4566] = block;
  }

  { // ID: 4567
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4567] = block;
  }

  { // ID: 4568
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4568] = block;
  }

  { // ID: 4569
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4569] = block;
  }

  { // ID: 4570
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4570] = block;
  }

  { // ID: 4571
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4571] = block;
  }

  { // ID: 4572
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4572] = block;
  }

  { // ID: 4573
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4573] = block;
  }

  { // ID: 4574
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4574] = block;
  }

  { // ID: 4575
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4575] = block;
  }

  { // ID: 4576
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4576] = block;
  }

  { // ID: 4577
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4577] = block;
  }

  { // ID: 4578
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4578] = block;
  }

  { // ID: 4579
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_SOUTH;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4579] = block;
  }

  { // ID: 4580
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4580] = block;
  }

  { // ID: 4581
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4581] = block;
  }

  { // ID: 4582
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4582] = block;
  }

  { // ID: 4583
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4583] = block;
  }

  { // ID: 4584
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4584] = block;
  }

  { // ID: 4585
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4585] = block;
  }

  { // ID: 4586
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4586] = block;
  }

  { // ID: 4587
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4587] = block;
  }

  { // ID: 4588
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4588] = block;
  }

  { // ID: 4589
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4589] = block;
  }

  { // ID: 4590
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4590] = block;
  }

  { // ID: 4591
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4591] = block;
  }

  { // ID: 4592
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4592] = block;
  }

  { // ID: 4593
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4593] = block;
  }

  { // ID: 4594
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4594] = block;
  }

  { // ID: 4595
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_WEST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4595] = block;
  }

  { // ID: 4596
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4596] = block;
  }

  { // ID: 4597
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4597] = block;
  }

  { // ID: 4598
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4598] = block;
  }

  { // ID: 4599
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4599] = block;
  }

  { // ID: 4600
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4600] = block;
  }

  { // ID: 4601
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4601] = block;
  }

  { // ID: 4602
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4602] = block;
  }

  { // ID: 4603
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_TOP;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4603] = block;
  }

  { // ID: 4604
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4604] = block;
  }

  { // ID: 4605
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4605] = block;
  }

  { // ID: 4606
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4606] = block;
  }

  { // ID: 4607
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_TRUE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4607] = block;
  }

  { // ID: 4608
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4608] = block;
  }

  { // ID: 4609
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4609] = block;
  }

  { // ID: 4610
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4610] = block;
  }

  { // ID: 4611
    std::shared_ptr<BirchTrapdoorBlock> block = std::make_shared<BirchTrapdoorBlock>();
    block->facing = BirchTrapdoorBlock::FACING_EAST;
    block->half = BirchTrapdoorBlock::HALF_BOTTOM;
    block->open = BirchTrapdoorBlock::OPEN_FALSE;
    block->powered = BirchTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = BirchTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4611] = block;
  }

  { // ID: 4880
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4880] = block;
  }

  { // ID: 4881
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4881] = block;
  }

  { // ID: 4882
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4882] = block;
  }

  { // ID: 4883
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4883] = block;
  }

  { // ID: 4884
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4884] = block;
  }

  { // ID: 4885
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4885] = block;
  }

  { // ID: 4886
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4886] = block;
  }

  { // ID: 4887
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4887] = block;
  }

  { // ID: 4888
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4888] = block;
  }

  { // ID: 4889
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4889] = block;
  }

  { // ID: 4890
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4890] = block;
  }

  { // ID: 4891
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4891] = block;
  }

  { // ID: 4892
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4892] = block;
  }

  { // ID: 4893
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4893] = block;
  }

  { // ID: 4894
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4894] = block;
  }

  { // ID: 4895
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4895] = block;
  }

  { // ID: 4896
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4896] = block;
  }

  { // ID: 4897
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4897] = block;
  }

  { // ID: 4898
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4898] = block;
  }

  { // ID: 4899
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4899] = block;
  }

  { // ID: 4900
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4900] = block;
  }

  { // ID: 4901
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4901] = block;
  }

  { // ID: 4902
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4902] = block;
  }

  { // ID: 4903
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4903] = block;
  }

  { // ID: 4904
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4904] = block;
  }

  { // ID: 4905
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4905] = block;
  }

  { // ID: 4906
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4906] = block;
  }

  { // ID: 4907
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4907] = block;
  }

  { // ID: 4908
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4908] = block;
  }

  { // ID: 4909
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4909] = block;
  }

  { // ID: 4910
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4910] = block;
  }

  { // ID: 4911
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_TRUE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4911] = block;
  }

  { // ID: 4912
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4912] = block;
  }

  { // ID: 4913
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4913] = block;
  }

  { // ID: 4914
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4914] = block;
  }

  { // ID: 4915
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4915] = block;
  }

  { // ID: 4916
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4916] = block;
  }

  { // ID: 4917
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4917] = block;
  }

  { // ID: 4918
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4918] = block;
  }

  { // ID: 4919
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4919] = block;
  }

  { // ID: 4920
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4920] = block;
  }

  { // ID: 4921
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4921] = block;
  }

  { // ID: 4922
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4922] = block;
  }

  { // ID: 4923
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4923] = block;
  }

  { // ID: 4924
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4924] = block;
  }

  { // ID: 4925
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4925] = block;
  }

  { // ID: 4926
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4926] = block;
  }

  { // ID: 4927
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_TRUE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4927] = block;
  }

  { // ID: 4928
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4928] = block;
  }

  { // ID: 4929
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4929] = block;
  }

  { // ID: 4930
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4930] = block;
  }

  { // ID: 4931
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4931] = block;
  }

  { // ID: 4932
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4932] = block;
  }

  { // ID: 4933
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4933] = block;
  }

  { // ID: 4934
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4934] = block;
  }

  { // ID: 4935
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_TRUE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4935] = block;
  }

  { // ID: 4936
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4936] = block;
  }

  { // ID: 4937
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4937] = block;
  }

  { // ID: 4938
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4938] = block;
  }

  { // ID: 4939
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_TRUE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4939] = block;
  }

  { // ID: 4940
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4940] = block;
  }

  { // ID: 4941
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_TRUE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4941] = block;
  }

  { // ID: 4942
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_TRUE;
    registry[4942] = block;
  }

  { // ID: 4943
    std::shared_ptr<BrownMushroomBlockBlock> block = std::make_shared<BrownMushroomBlockBlock>();
    block->down = BrownMushroomBlockBlock::DOWN_FALSE;
    block->east = BrownMushroomBlockBlock::EAST_FALSE;
    block->north = BrownMushroomBlockBlock::NORTH_FALSE;
    block->south = BrownMushroomBlockBlock::SOUTH_FALSE;
    block->up = BrownMushroomBlockBlock::UP_FALSE;
    block->west = BrownMushroomBlockBlock::WEST_FALSE;
    registry[4943] = block;
  }

  { // ID: 5359
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5359] = block;
  }

  { // ID: 5360
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5360] = block;
  }

  { // ID: 5361
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5361] = block;
  }

  { // ID: 5362
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5362] = block;
  }

  { // ID: 5363
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5363] = block;
  }

  { // ID: 5364
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5364] = block;
  }

  { // ID: 5365
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5365] = block;
  }

  { // ID: 5366
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5366] = block;
  }

  { // ID: 5367
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5367] = block;
  }

  { // ID: 5368
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5368] = block;
  }

  { // ID: 5369
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5369] = block;
  }

  { // ID: 5370
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5370] = block;
  }

  { // ID: 5371
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5371] = block;
  }

  { // ID: 5372
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5372] = block;
  }

  { // ID: 5373
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5373] = block;
  }

  { // ID: 5374
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5374] = block;
  }

  { // ID: 5375
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5375] = block;
  }

  { // ID: 5376
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5376] = block;
  }

  { // ID: 5377
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5377] = block;
  }

  { // ID: 5378
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_NORTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5378] = block;
  }

  { // ID: 5379
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5379] = block;
  }

  { // ID: 5380
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5380] = block;
  }

  { // ID: 5381
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5381] = block;
  }

  { // ID: 5382
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5382] = block;
  }

  { // ID: 5383
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5383] = block;
  }

  { // ID: 5384
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5384] = block;
  }

  { // ID: 5385
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5385] = block;
  }

  { // ID: 5386
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5386] = block;
  }

  { // ID: 5387
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5387] = block;
  }

  { // ID: 5388
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5388] = block;
  }

  { // ID: 5389
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5389] = block;
  }

  { // ID: 5390
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5390] = block;
  }

  { // ID: 5391
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5391] = block;
  }

  { // ID: 5392
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5392] = block;
  }

  { // ID: 5393
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5393] = block;
  }

  { // ID: 5394
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5394] = block;
  }

  { // ID: 5395
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5395] = block;
  }

  { // ID: 5396
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5396] = block;
  }

  { // ID: 5397
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5397] = block;
  }

  { // ID: 5398
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_SOUTH;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5398] = block;
  }

  { // ID: 5399
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5399] = block;
  }

  { // ID: 5400
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5400] = block;
  }

  { // ID: 5401
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5401] = block;
  }

  { // ID: 5402
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5402] = block;
  }

  { // ID: 5403
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5403] = block;
  }

  { // ID: 5404
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5404] = block;
  }

  { // ID: 5405
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5405] = block;
  }

  { // ID: 5406
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5406] = block;
  }

  { // ID: 5407
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5407] = block;
  }

  { // ID: 5408
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5408] = block;
  }

  { // ID: 5409
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5409] = block;
  }

  { // ID: 5410
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5410] = block;
  }

  { // ID: 5411
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5411] = block;
  }

  { // ID: 5412
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5412] = block;
  }

  { // ID: 5413
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5413] = block;
  }

  { // ID: 5414
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5414] = block;
  }

  { // ID: 5415
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5415] = block;
  }

  { // ID: 5416
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5416] = block;
  }

  { // ID: 5417
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5417] = block;
  }

  { // ID: 5418
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_WEST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5418] = block;
  }

  { // ID: 5419
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5419] = block;
  }

  { // ID: 5420
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5420] = block;
  }

  { // ID: 5421
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5421] = block;
  }

  { // ID: 5422
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5422] = block;
  }

  { // ID: 5423
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5423] = block;
  }

  { // ID: 5424
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5424] = block;
  }

  { // ID: 5425
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5425] = block;
  }

  { // ID: 5426
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5426] = block;
  }

  { // ID: 5427
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5427] = block;
  }

  { // ID: 5428
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_TOP;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5428] = block;
  }

  { // ID: 5429
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5429] = block;
  }

  { // ID: 5430
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5430] = block;
  }

  { // ID: 5431
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5431] = block;
  }

  { // ID: 5432
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5432] = block;
  }

  { // ID: 5433
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5433] = block;
  }

  { // ID: 5434
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5434] = block;
  }

  { // ID: 5435
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5435] = block;
  }

  { // ID: 5436
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5436] = block;
  }

  { // ID: 5437
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_TRUE;
    registry[5437] = block;
  }

  { // ID: 5438
    std::shared_ptr<BrickStairsBlock> block = std::make_shared<BrickStairsBlock>();
    block->facing = BrickStairsBlock::FACING_EAST;
    block->half = BrickStairsBlock::HALF_BOTTOM;
    block->shape = BrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BrickStairsBlock::WATERLOGGED_FALSE;
    registry[5438] = block;
  }

  { // ID: 5720
    std::shared_ptr<BrewingStandBlock> block = std::make_shared<BrewingStandBlock>();
    block->has_bottle_0 = BrewingStandBlock::HAS_BOTTLE_0_TRUE;
    block->has_bottle_1 = BrewingStandBlock::HAS_BOTTLE_1_TRUE;
    block->has_bottle_2 = BrewingStandBlock::HAS_BOTTLE_2_TRUE;
    registry[5720] = block;
  }

  { // ID: 5721
    std::shared_ptr<BrewingStandBlock> block = std::make_shared<BrewingStandBlock>();
    block->has_bottle_0 = BrewingStandBlock::HAS_BOTTLE_0_TRUE;
    block->has_bottle_1 = BrewingStandBlock::HAS_BOTTLE_1_TRUE;
    block->has_bottle_2 = BrewingStandBlock::HAS_BOTTLE_2_FALSE;
    registry[5721] = block;
  }

  { // ID: 5722
    std::shared_ptr<BrewingStandBlock> block = std::make_shared<BrewingStandBlock>();
    block->has_bottle_0 = BrewingStandBlock::HAS_BOTTLE_0_TRUE;
    block->has_bottle_1 = BrewingStandBlock::HAS_BOTTLE_1_FALSE;
    block->has_bottle_2 = BrewingStandBlock::HAS_BOTTLE_2_TRUE;
    registry[5722] = block;
  }

  { // ID: 5723
    std::shared_ptr<BrewingStandBlock> block = std::make_shared<BrewingStandBlock>();
    block->has_bottle_0 = BrewingStandBlock::HAS_BOTTLE_0_TRUE;
    block->has_bottle_1 = BrewingStandBlock::HAS_BOTTLE_1_FALSE;
    block->has_bottle_2 = BrewingStandBlock::HAS_BOTTLE_2_FALSE;
    registry[5723] = block;
  }

  { // ID: 5724
    std::shared_ptr<BrewingStandBlock> block = std::make_shared<BrewingStandBlock>();
    block->has_bottle_0 = BrewingStandBlock::HAS_BOTTLE_0_FALSE;
    block->has_bottle_1 = BrewingStandBlock::HAS_BOTTLE_1_TRUE;
    block->has_bottle_2 = BrewingStandBlock::HAS_BOTTLE_2_TRUE;
    registry[5724] = block;
  }

  { // ID: 5725
    std::shared_ptr<BrewingStandBlock> block = std::make_shared<BrewingStandBlock>();
    block->has_bottle_0 = BrewingStandBlock::HAS_BOTTLE_0_FALSE;
    block->has_bottle_1 = BrewingStandBlock::HAS_BOTTLE_1_TRUE;
    block->has_bottle_2 = BrewingStandBlock::HAS_BOTTLE_2_FALSE;
    registry[5725] = block;
  }

  { // ID: 5726
    std::shared_ptr<BrewingStandBlock> block = std::make_shared<BrewingStandBlock>();
    block->has_bottle_0 = BrewingStandBlock::HAS_BOTTLE_0_FALSE;
    block->has_bottle_1 = BrewingStandBlock::HAS_BOTTLE_1_FALSE;
    block->has_bottle_2 = BrewingStandBlock::HAS_BOTTLE_2_TRUE;
    registry[5726] = block;
  }

  { // ID: 5727
    std::shared_ptr<BrewingStandBlock> block = std::make_shared<BrewingStandBlock>();
    block->has_bottle_0 = BrewingStandBlock::HAS_BOTTLE_0_FALSE;
    block->has_bottle_1 = BrewingStandBlock::HAS_BOTTLE_1_FALSE;
    block->has_bottle_2 = BrewingStandBlock::HAS_BOTTLE_2_FALSE;
    registry[5727] = block;
  }

  { // ID: 6076
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6076] = block;
  }

  { // ID: 6077
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6077] = block;
  }

  { // ID: 6078
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6078] = block;
  }

  { // ID: 6079
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6079] = block;
  }

  { // ID: 6080
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6080] = block;
  }

  { // ID: 6081
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6081] = block;
  }

  { // ID: 6082
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6082] = block;
  }

  { // ID: 6083
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6083] = block;
  }

  { // ID: 6084
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6084] = block;
  }

  { // ID: 6085
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6085] = block;
  }

  { // ID: 6086
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6086] = block;
  }

  { // ID: 6087
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6087] = block;
  }

  { // ID: 6088
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6088] = block;
  }

  { // ID: 6089
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6089] = block;
  }

  { // ID: 6090
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6090] = block;
  }

  { // ID: 6091
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6091] = block;
  }

  { // ID: 6092
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6092] = block;
  }

  { // ID: 6093
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6093] = block;
  }

  { // ID: 6094
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6094] = block;
  }

  { // ID: 6095
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_NORTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6095] = block;
  }

  { // ID: 6096
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6096] = block;
  }

  { // ID: 6097
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6097] = block;
  }

  { // ID: 6098
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6098] = block;
  }

  { // ID: 6099
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6099] = block;
  }

  { // ID: 6100
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6100] = block;
  }

  { // ID: 6101
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6101] = block;
  }

  { // ID: 6102
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6102] = block;
  }

  { // ID: 6103
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6103] = block;
  }

  { // ID: 6104
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6104] = block;
  }

  { // ID: 6105
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6105] = block;
  }

  { // ID: 6106
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6106] = block;
  }

  { // ID: 6107
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6107] = block;
  }

  { // ID: 6108
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6108] = block;
  }

  { // ID: 6109
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6109] = block;
  }

  { // ID: 6110
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6110] = block;
  }

  { // ID: 6111
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6111] = block;
  }

  { // ID: 6112
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6112] = block;
  }

  { // ID: 6113
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6113] = block;
  }

  { // ID: 6114
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6114] = block;
  }

  { // ID: 6115
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_SOUTH;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6115] = block;
  }

  { // ID: 6116
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6116] = block;
  }

  { // ID: 6117
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6117] = block;
  }

  { // ID: 6118
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6118] = block;
  }

  { // ID: 6119
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6119] = block;
  }

  { // ID: 6120
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6120] = block;
  }

  { // ID: 6121
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6121] = block;
  }

  { // ID: 6122
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6122] = block;
  }

  { // ID: 6123
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6123] = block;
  }

  { // ID: 6124
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6124] = block;
  }

  { // ID: 6125
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6125] = block;
  }

  { // ID: 6126
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6126] = block;
  }

  { // ID: 6127
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6127] = block;
  }

  { // ID: 6128
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6128] = block;
  }

  { // ID: 6129
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6129] = block;
  }

  { // ID: 6130
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6130] = block;
  }

  { // ID: 6131
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6131] = block;
  }

  { // ID: 6132
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6132] = block;
  }

  { // ID: 6133
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6133] = block;
  }

  { // ID: 6134
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6134] = block;
  }

  { // ID: 6135
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_WEST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6135] = block;
  }

  { // ID: 6136
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6136] = block;
  }

  { // ID: 6137
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6137] = block;
  }

  { // ID: 6138
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6138] = block;
  }

  { // ID: 6139
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6139] = block;
  }

  { // ID: 6140
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6140] = block;
  }

  { // ID: 6141
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6141] = block;
  }

  { // ID: 6142
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6142] = block;
  }

  { // ID: 6143
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6143] = block;
  }

  { // ID: 6144
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6144] = block;
  }

  { // ID: 6145
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_TOP;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6145] = block;
  }

  { // ID: 6146
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6146] = block;
  }

  { // ID: 6147
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6147] = block;
  }

  { // ID: 6148
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6148] = block;
  }

  { // ID: 6149
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6149] = block;
  }

  { // ID: 6150
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6150] = block;
  }

  { // ID: 6151
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6151] = block;
  }

  { // ID: 6152
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6152] = block;
  }

  { // ID: 6153
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6153] = block;
  }

  { // ID: 6154
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_TRUE;
    registry[6154] = block;
  }

  { // ID: 6155
    std::shared_ptr<BirchStairsBlock> block = std::make_shared<BirchStairsBlock>();
    block->facing = BirchStairsBlock::FACING_EAST;
    block->half = BirchStairsBlock::HALF_BOTTOM;
    block->shape = BirchStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BirchStairsBlock::WATERLOGGED_FALSE;
    registry[6155] = block;
  }

  { // ID: 6248
    std::shared_ptr<BeaconBlock> block = std::make_shared<BeaconBlock>();
    registry[6248] = block;
  }

  { // ID: 6987
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_FLOOR;
    block->facing = BirchButtonBlock::FACING_NORTH;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[6987] = block;
  }

  { // ID: 6988
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_FLOOR;
    block->facing = BirchButtonBlock::FACING_NORTH;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[6988] = block;
  }

  { // ID: 6989
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_FLOOR;
    block->facing = BirchButtonBlock::FACING_SOUTH;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[6989] = block;
  }

  { // ID: 6990
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_FLOOR;
    block->facing = BirchButtonBlock::FACING_SOUTH;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[6990] = block;
  }

  { // ID: 6991
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_FLOOR;
    block->facing = BirchButtonBlock::FACING_WEST;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[6991] = block;
  }

  { // ID: 6992
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_FLOOR;
    block->facing = BirchButtonBlock::FACING_WEST;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[6992] = block;
  }

  { // ID: 6993
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_FLOOR;
    block->facing = BirchButtonBlock::FACING_EAST;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[6993] = block;
  }

  { // ID: 6994
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_FLOOR;
    block->facing = BirchButtonBlock::FACING_EAST;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[6994] = block;
  }

  { // ID: 6995
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_WALL;
    block->facing = BirchButtonBlock::FACING_NORTH;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[6995] = block;
  }

  { // ID: 6996
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_WALL;
    block->facing = BirchButtonBlock::FACING_NORTH;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[6996] = block;
  }

  { // ID: 6997
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_WALL;
    block->facing = BirchButtonBlock::FACING_SOUTH;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[6997] = block;
  }

  { // ID: 6998
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_WALL;
    block->facing = BirchButtonBlock::FACING_SOUTH;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[6998] = block;
  }

  { // ID: 6999
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_WALL;
    block->facing = BirchButtonBlock::FACING_WEST;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[6999] = block;
  }

  { // ID: 7000
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_WALL;
    block->facing = BirchButtonBlock::FACING_WEST;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[7000] = block;
  }

  { // ID: 7001
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_WALL;
    block->facing = BirchButtonBlock::FACING_EAST;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[7001] = block;
  }

  { // ID: 7002
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_WALL;
    block->facing = BirchButtonBlock::FACING_EAST;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[7002] = block;
  }

  { // ID: 7003
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_CEILING;
    block->facing = BirchButtonBlock::FACING_NORTH;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[7003] = block;
  }

  { // ID: 7004
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_CEILING;
    block->facing = BirchButtonBlock::FACING_NORTH;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[7004] = block;
  }

  { // ID: 7005
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_CEILING;
    block->facing = BirchButtonBlock::FACING_SOUTH;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[7005] = block;
  }

  { // ID: 7006
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_CEILING;
    block->facing = BirchButtonBlock::FACING_SOUTH;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[7006] = block;
  }

  { // ID: 7007
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_CEILING;
    block->facing = BirchButtonBlock::FACING_WEST;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[7007] = block;
  }

  { // ID: 7008
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_CEILING;
    block->facing = BirchButtonBlock::FACING_WEST;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[7008] = block;
  }

  { // ID: 7009
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_CEILING;
    block->facing = BirchButtonBlock::FACING_EAST;
    block->powered = BirchButtonBlock::POWERED_TRUE;
    registry[7009] = block;
  }

  { // ID: 7010
    std::shared_ptr<BirchButtonBlock> block = std::make_shared<BirchButtonBlock>();
    block->face = BirchButtonBlock::FACE_CEILING;
    block->facing = BirchButtonBlock::FACING_EAST;
    block->powered = BirchButtonBlock::POWERED_FALSE;
    registry[7010] = block;
  }

  { // ID: 7487
    std::shared_ptr<BlueTerracottaBlock> block = std::make_shared<BlueTerracottaBlock>();
    registry[7487] = block;
  }

  { // ID: 7488
    std::shared_ptr<BrownTerracottaBlock> block = std::make_shared<BrownTerracottaBlock>();
    registry[7488] = block;
  }

  { // ID: 7491
    std::shared_ptr<BlackTerracottaBlock> block = std::make_shared<BlackTerracottaBlock>();
    registry[7491] = block;
  }

  { // ID: 7844
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7844] = block;
  }

  { // ID: 7845
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7845] = block;
  }

  { // ID: 7846
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7846] = block;
  }

  { // ID: 7847
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7847] = block;
  }

  { // ID: 7848
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7848] = block;
  }

  { // ID: 7849
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7849] = block;
  }

  { // ID: 7850
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7850] = block;
  }

  { // ID: 7851
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7851] = block;
  }

  { // ID: 7852
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7852] = block;
  }

  { // ID: 7853
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7853] = block;
  }

  { // ID: 7854
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7854] = block;
  }

  { // ID: 7855
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7855] = block;
  }

  { // ID: 7856
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7856] = block;
  }

  { // ID: 7857
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7857] = block;
  }

  { // ID: 7858
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7858] = block;
  }

  { // ID: 7859
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7859] = block;
  }

  { // ID: 7860
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7860] = block;
  }

  { // ID: 7861
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7861] = block;
  }

  { // ID: 7862
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7862] = block;
  }

  { // ID: 7863
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7863] = block;
  }

  { // ID: 7864
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7864] = block;
  }

  { // ID: 7865
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7865] = block;
  }

  { // ID: 7866
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7866] = block;
  }

  { // ID: 7867
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7867] = block;
  }

  { // ID: 7868
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7868] = block;
  }

  { // ID: 7869
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7869] = block;
  }

  { // ID: 7870
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7870] = block;
  }

  { // ID: 7871
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7871] = block;
  }

  { // ID: 7872
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7872] = block;
  }

  { // ID: 7873
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7873] = block;
  }

  { // ID: 7874
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_TRUE;
    registry[7874] = block;
  }

  { // ID: 7875
    std::shared_ptr<BlueStainedGlassPaneBlock> block = std::make_shared<BlueStainedGlassPaneBlock>();
    block->east = BlueStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlueStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlueStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlueStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlueStainedGlassPaneBlock::WEST_FALSE;
    registry[7875] = block;
  }

  { // ID: 7876
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7876] = block;
  }

  { // ID: 7877
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7877] = block;
  }

  { // ID: 7878
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7878] = block;
  }

  { // ID: 7879
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7879] = block;
  }

  { // ID: 7880
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7880] = block;
  }

  { // ID: 7881
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7881] = block;
  }

  { // ID: 7882
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7882] = block;
  }

  { // ID: 7883
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7883] = block;
  }

  { // ID: 7884
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7884] = block;
  }

  { // ID: 7885
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7885] = block;
  }

  { // ID: 7886
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7886] = block;
  }

  { // ID: 7887
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7887] = block;
  }

  { // ID: 7888
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7888] = block;
  }

  { // ID: 7889
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7889] = block;
  }

  { // ID: 7890
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7890] = block;
  }

  { // ID: 7891
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_TRUE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7891] = block;
  }

  { // ID: 7892
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7892] = block;
  }

  { // ID: 7893
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7893] = block;
  }

  { // ID: 7894
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7894] = block;
  }

  { // ID: 7895
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7895] = block;
  }

  { // ID: 7896
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7896] = block;
  }

  { // ID: 7897
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7897] = block;
  }

  { // ID: 7898
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7898] = block;
  }

  { // ID: 7899
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7899] = block;
  }

  { // ID: 7900
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7900] = block;
  }

  { // ID: 7901
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7901] = block;
  }

  { // ID: 7902
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7902] = block;
  }

  { // ID: 7903
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7903] = block;
  }

  { // ID: 7904
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7904] = block;
  }

  { // ID: 7905
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7905] = block;
  }

  { // ID: 7906
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_TRUE;
    registry[7906] = block;
  }

  { // ID: 7907
    std::shared_ptr<BrownStainedGlassPaneBlock> block = std::make_shared<BrownStainedGlassPaneBlock>();
    block->east = BrownStainedGlassPaneBlock::EAST_FALSE;
    block->north = BrownStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BrownStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BrownStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BrownStainedGlassPaneBlock::WEST_FALSE;
    registry[7907] = block;
  }

  { // ID: 7972
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7972] = block;
  }

  { // ID: 7973
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7973] = block;
  }

  { // ID: 7974
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7974] = block;
  }

  { // ID: 7975
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7975] = block;
  }

  { // ID: 7976
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7976] = block;
  }

  { // ID: 7977
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7977] = block;
  }

  { // ID: 7978
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7978] = block;
  }

  { // ID: 7979
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7979] = block;
  }

  { // ID: 7980
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7980] = block;
  }

  { // ID: 7981
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7981] = block;
  }

  { // ID: 7982
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7982] = block;
  }

  { // ID: 7983
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7983] = block;
  }

  { // ID: 7984
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7984] = block;
  }

  { // ID: 7985
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7985] = block;
  }

  { // ID: 7986
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7986] = block;
  }

  { // ID: 7987
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_TRUE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7987] = block;
  }

  { // ID: 7988
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7988] = block;
  }

  { // ID: 7989
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7989] = block;
  }

  { // ID: 7990
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7990] = block;
  }

  { // ID: 7991
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7991] = block;
  }

  { // ID: 7992
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7992] = block;
  }

  { // ID: 7993
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7993] = block;
  }

  { // ID: 7994
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7994] = block;
  }

  { // ID: 7995
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_TRUE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7995] = block;
  }

  { // ID: 7996
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7996] = block;
  }

  { // ID: 7997
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7997] = block;
  }

  { // ID: 7998
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[7998] = block;
  }

  { // ID: 7999
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[7999] = block;
  }

  { // ID: 8000
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[8000] = block;
  }

  { // ID: 8001
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[8001] = block;
  }

  { // ID: 8002
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_TRUE;
    registry[8002] = block;
  }

  { // ID: 8003
    std::shared_ptr<BlackStainedGlassPaneBlock> block = std::make_shared<BlackStainedGlassPaneBlock>();
    block->east = BlackStainedGlassPaneBlock::EAST_FALSE;
    block->north = BlackStainedGlassPaneBlock::NORTH_FALSE;
    block->south = BlackStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = BlackStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = BlackStainedGlassPaneBlock::WEST_FALSE;
    registry[8003] = block;
  }

  { // ID: 8245
    std::shared_ptr<BarrierBlock> block = std::make_shared<BarrierBlock>();
    registry[8245] = block;
  }

  { // ID: 8618
    std::shared_ptr<BlueCarpetBlock> block = std::make_shared<BlueCarpetBlock>();
    registry[8618] = block;
  }

  { // ID: 8619
    std::shared_ptr<BrownCarpetBlock> block = std::make_shared<BrownCarpetBlock>();
    registry[8619] = block;
  }

  { // ID: 8622
    std::shared_ptr<BlackCarpetBlock> block = std::make_shared<BlackCarpetBlock>();
    registry[8622] = block;
  }

  { // ID: 8814
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_0;
    registry[8814] = block;
  }

  { // ID: 8815
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_1;
    registry[8815] = block;
  }

  { // ID: 8816
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_2;
    registry[8816] = block;
  }

  { // ID: 8817
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_3;
    registry[8817] = block;
  }

  { // ID: 8818
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_4;
    registry[8818] = block;
  }

  { // ID: 8819
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_5;
    registry[8819] = block;
  }

  { // ID: 8820
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_6;
    registry[8820] = block;
  }

  { // ID: 8821
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_7;
    registry[8821] = block;
  }

  { // ID: 8822
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_8;
    registry[8822] = block;
  }

  { // ID: 8823
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_9;
    registry[8823] = block;
  }

  { // ID: 8824
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_10;
    registry[8824] = block;
  }

  { // ID: 8825
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_11;
    registry[8825] = block;
  }

  { // ID: 8826
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_12;
    registry[8826] = block;
  }

  { // ID: 8827
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_13;
    registry[8827] = block;
  }

  { // ID: 8828
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_14;
    registry[8828] = block;
  }

  { // ID: 8829
    std::shared_ptr<BlueBannerBlock> block = std::make_shared<BlueBannerBlock>();
    block->rotation = BlueBannerBlock::ROTATION_15;
    registry[8829] = block;
  }

  { // ID: 8830
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_0;
    registry[8830] = block;
  }

  { // ID: 8831
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_1;
    registry[8831] = block;
  }

  { // ID: 8832
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_2;
    registry[8832] = block;
  }

  { // ID: 8833
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_3;
    registry[8833] = block;
  }

  { // ID: 8834
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_4;
    registry[8834] = block;
  }

  { // ID: 8835
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_5;
    registry[8835] = block;
  }

  { // ID: 8836
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_6;
    registry[8836] = block;
  }

  { // ID: 8837
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_7;
    registry[8837] = block;
  }

  { // ID: 8838
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_8;
    registry[8838] = block;
  }

  { // ID: 8839
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_9;
    registry[8839] = block;
  }

  { // ID: 8840
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_10;
    registry[8840] = block;
  }

  { // ID: 8841
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_11;
    registry[8841] = block;
  }

  { // ID: 8842
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_12;
    registry[8842] = block;
  }

  { // ID: 8843
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_13;
    registry[8843] = block;
  }

  { // ID: 8844
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_14;
    registry[8844] = block;
  }

  { // ID: 8845
    std::shared_ptr<BrownBannerBlock> block = std::make_shared<BrownBannerBlock>();
    block->rotation = BrownBannerBlock::ROTATION_15;
    registry[8845] = block;
  }

  { // ID: 8878
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_0;
    registry[8878] = block;
  }

  { // ID: 8879
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_1;
    registry[8879] = block;
  }

  { // ID: 8880
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_2;
    registry[8880] = block;
  }

  { // ID: 8881
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_3;
    registry[8881] = block;
  }

  { // ID: 8882
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_4;
    registry[8882] = block;
  }

  { // ID: 8883
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_5;
    registry[8883] = block;
  }

  { // ID: 8884
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_6;
    registry[8884] = block;
  }

  { // ID: 8885
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_7;
    registry[8885] = block;
  }

  { // ID: 8886
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_8;
    registry[8886] = block;
  }

  { // ID: 8887
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_9;
    registry[8887] = block;
  }

  { // ID: 8888
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_10;
    registry[8888] = block;
  }

  { // ID: 8889
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_11;
    registry[8889] = block;
  }

  { // ID: 8890
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_12;
    registry[8890] = block;
  }

  { // ID: 8891
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_13;
    registry[8891] = block;
  }

  { // ID: 8892
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_14;
    registry[8892] = block;
  }

  { // ID: 8893
    std::shared_ptr<BlackBannerBlock> block = std::make_shared<BlackBannerBlock>();
    block->rotation = BlackBannerBlock::ROTATION_15;
    registry[8893] = block;
  }

  { // ID: 8938
    std::shared_ptr<BlueWallBannerBlock> block = std::make_shared<BlueWallBannerBlock>();
    block->facing = BlueWallBannerBlock::FACING_NORTH;
    registry[8938] = block;
  }

  { // ID: 8939
    std::shared_ptr<BlueWallBannerBlock> block = std::make_shared<BlueWallBannerBlock>();
    block->facing = BlueWallBannerBlock::FACING_SOUTH;
    registry[8939] = block;
  }

  { // ID: 8940
    std::shared_ptr<BlueWallBannerBlock> block = std::make_shared<BlueWallBannerBlock>();
    block->facing = BlueWallBannerBlock::FACING_WEST;
    registry[8940] = block;
  }

  { // ID: 8941
    std::shared_ptr<BlueWallBannerBlock> block = std::make_shared<BlueWallBannerBlock>();
    block->facing = BlueWallBannerBlock::FACING_EAST;
    registry[8941] = block;
  }

  { // ID: 8942
    std::shared_ptr<BrownWallBannerBlock> block = std::make_shared<BrownWallBannerBlock>();
    block->facing = BrownWallBannerBlock::FACING_NORTH;
    registry[8942] = block;
  }

  { // ID: 8943
    std::shared_ptr<BrownWallBannerBlock> block = std::make_shared<BrownWallBannerBlock>();
    block->facing = BrownWallBannerBlock::FACING_SOUTH;
    registry[8943] = block;
  }

  { // ID: 8944
    std::shared_ptr<BrownWallBannerBlock> block = std::make_shared<BrownWallBannerBlock>();
    block->facing = BrownWallBannerBlock::FACING_WEST;
    registry[8944] = block;
  }

  { // ID: 8945
    std::shared_ptr<BrownWallBannerBlock> block = std::make_shared<BrownWallBannerBlock>();
    block->facing = BrownWallBannerBlock::FACING_EAST;
    registry[8945] = block;
  }

  { // ID: 8954
    std::shared_ptr<BlackWallBannerBlock> block = std::make_shared<BlackWallBannerBlock>();
    block->facing = BlackWallBannerBlock::FACING_NORTH;
    registry[8954] = block;
  }

  { // ID: 8955
    std::shared_ptr<BlackWallBannerBlock> block = std::make_shared<BlackWallBannerBlock>();
    block->facing = BlackWallBannerBlock::FACING_SOUTH;
    registry[8955] = block;
  }

  { // ID: 8956
    std::shared_ptr<BlackWallBannerBlock> block = std::make_shared<BlackWallBannerBlock>();
    block->facing = BlackWallBannerBlock::FACING_WEST;
    registry[8956] = block;
  }

  { // ID: 8957
    std::shared_ptr<BlackWallBannerBlock> block = std::make_shared<BlackWallBannerBlock>();
    block->facing = BlackWallBannerBlock::FACING_EAST;
    registry[8957] = block;
  }

  { // ID: 9053
    std::shared_ptr<BirchSlabBlock> block = std::make_shared<BirchSlabBlock>();
    block->type = BirchSlabBlock::TYPE_TOP;
    block->waterlogged = BirchSlabBlock::WATERLOGGED_TRUE;
    registry[9053] = block;
  }

  { // ID: 9054
    std::shared_ptr<BirchSlabBlock> block = std::make_shared<BirchSlabBlock>();
    block->type = BirchSlabBlock::TYPE_TOP;
    block->waterlogged = BirchSlabBlock::WATERLOGGED_FALSE;
    registry[9054] = block;
  }

  { // ID: 9055
    std::shared_ptr<BirchSlabBlock> block = std::make_shared<BirchSlabBlock>();
    block->type = BirchSlabBlock::TYPE_BOTTOM;
    block->waterlogged = BirchSlabBlock::WATERLOGGED_TRUE;
    registry[9055] = block;
  }

  { // ID: 9056
    std::shared_ptr<BirchSlabBlock> block = std::make_shared<BirchSlabBlock>();
    block->type = BirchSlabBlock::TYPE_BOTTOM;
    block->waterlogged = BirchSlabBlock::WATERLOGGED_FALSE;
    registry[9056] = block;
  }

  { // ID: 9057
    std::shared_ptr<BirchSlabBlock> block = std::make_shared<BirchSlabBlock>();
    block->type = BirchSlabBlock::TYPE_DOUBLE;
    block->waterlogged = BirchSlabBlock::WATERLOGGED_TRUE;
    registry[9057] = block;
  }

  { // ID: 9058
    std::shared_ptr<BirchSlabBlock> block = std::make_shared<BirchSlabBlock>();
    block->type = BirchSlabBlock::TYPE_DOUBLE;
    block->waterlogged = BirchSlabBlock::WATERLOGGED_FALSE;
    registry[9058] = block;
  }

  { // ID: 9119
    std::shared_ptr<BrickSlabBlock> block = std::make_shared<BrickSlabBlock>();
    block->type = BrickSlabBlock::TYPE_TOP;
    block->waterlogged = BrickSlabBlock::WATERLOGGED_TRUE;
    registry[9119] = block;
  }

  { // ID: 9120
    std::shared_ptr<BrickSlabBlock> block = std::make_shared<BrickSlabBlock>();
    block->type = BrickSlabBlock::TYPE_TOP;
    block->waterlogged = BrickSlabBlock::WATERLOGGED_FALSE;
    registry[9120] = block;
  }

  { // ID: 9121
    std::shared_ptr<BrickSlabBlock> block = std::make_shared<BrickSlabBlock>();
    block->type = BrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = BrickSlabBlock::WATERLOGGED_TRUE;
    registry[9121] = block;
  }

  { // ID: 9122
    std::shared_ptr<BrickSlabBlock> block = std::make_shared<BrickSlabBlock>();
    block->type = BrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = BrickSlabBlock::WATERLOGGED_FALSE;
    registry[9122] = block;
  }

  { // ID: 9123
    std::shared_ptr<BrickSlabBlock> block = std::make_shared<BrickSlabBlock>();
    block->type = BrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = BrickSlabBlock::WATERLOGGED_TRUE;
    registry[9123] = block;
  }

  { // ID: 9124
    std::shared_ptr<BrickSlabBlock> block = std::make_shared<BrickSlabBlock>();
    block->type = BrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = BrickSlabBlock::WATERLOGGED_FALSE;
    registry[9124] = block;
  }

  { // ID: 9203
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_NORTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9203] = block;
  }

  { // ID: 9204
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_NORTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9204] = block;
  }

  { // ID: 9205
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_NORTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9205] = block;
  }

  { // ID: 9206
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_NORTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9206] = block;
  }

  { // ID: 9207
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_NORTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9207] = block;
  }

  { // ID: 9208
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_NORTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9208] = block;
  }

  { // ID: 9209
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_NORTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9209] = block;
  }

  { // ID: 9210
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_NORTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9210] = block;
  }

  { // ID: 9211
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_SOUTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9211] = block;
  }

  { // ID: 9212
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_SOUTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9212] = block;
  }

  { // ID: 9213
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_SOUTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9213] = block;
  }

  { // ID: 9214
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_SOUTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9214] = block;
  }

  { // ID: 9215
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_SOUTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9215] = block;
  }

  { // ID: 9216
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_SOUTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9216] = block;
  }

  { // ID: 9217
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_SOUTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9217] = block;
  }

  { // ID: 9218
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_SOUTH;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9218] = block;
  }

  { // ID: 9219
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_WEST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9219] = block;
  }

  { // ID: 9220
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_WEST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9220] = block;
  }

  { // ID: 9221
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_WEST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9221] = block;
  }

  { // ID: 9222
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_WEST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9222] = block;
  }

  { // ID: 9223
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_WEST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9223] = block;
  }

  { // ID: 9224
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_WEST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9224] = block;
  }

  { // ID: 9225
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_WEST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9225] = block;
  }

  { // ID: 9226
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_WEST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9226] = block;
  }

  { // ID: 9227
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_EAST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9227] = block;
  }

  { // ID: 9228
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_EAST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9228] = block;
  }

  { // ID: 9229
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_EAST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9229] = block;
  }

  { // ID: 9230
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_EAST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_TRUE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9230] = block;
  }

  { // ID: 9231
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_EAST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9231] = block;
  }

  { // ID: 9232
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_EAST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_TRUE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9232] = block;
  }

  { // ID: 9233
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_EAST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_TRUE;
    registry[9233] = block;
  }

  { // ID: 9234
    std::shared_ptr<BirchFenceGateBlock> block = std::make_shared<BirchFenceGateBlock>();
    block->facing = BirchFenceGateBlock::FACING_EAST;
    block->in_wall = BirchFenceGateBlock::IN_WALL_FALSE;
    block->open = BirchFenceGateBlock::OPEN_FALSE;
    block->powered = BirchFenceGateBlock::POWERED_FALSE;
    registry[9234] = block;
  }

  { // ID: 9395
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9395] = block;
  }

  { // ID: 9396
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9396] = block;
  }

  { // ID: 9397
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9397] = block;
  }

  { // ID: 9398
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9398] = block;
  }

  { // ID: 9399
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9399] = block;
  }

  { // ID: 9400
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9400] = block;
  }

  { // ID: 9401
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9401] = block;
  }

  { // ID: 9402
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9402] = block;
  }

  { // ID: 9403
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9403] = block;
  }

  { // ID: 9404
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9404] = block;
  }

  { // ID: 9405
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9405] = block;
  }

  { // ID: 9406
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9406] = block;
  }

  { // ID: 9407
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9407] = block;
  }

  { // ID: 9408
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9408] = block;
  }

  { // ID: 9409
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9409] = block;
  }

  { // ID: 9410
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_TRUE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9410] = block;
  }

  { // ID: 9411
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9411] = block;
  }

  { // ID: 9412
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9412] = block;
  }

  { // ID: 9413
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9413] = block;
  }

  { // ID: 9414
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9414] = block;
  }

  { // ID: 9415
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9415] = block;
  }

  { // ID: 9416
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9416] = block;
  }

  { // ID: 9417
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9417] = block;
  }

  { // ID: 9418
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_TRUE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9418] = block;
  }

  { // ID: 9419
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9419] = block;
  }

  { // ID: 9420
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9420] = block;
  }

  { // ID: 9421
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9421] = block;
  }

  { // ID: 9422
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_TRUE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9422] = block;
  }

  { // ID: 9423
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9423] = block;
  }

  { // ID: 9424
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_TRUE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9424] = block;
  }

  { // ID: 9425
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_TRUE;
    registry[9425] = block;
  }

  { // ID: 9426
    std::shared_ptr<BirchFenceBlock> block = std::make_shared<BirchFenceBlock>();
    block->east = BirchFenceBlock::EAST_FALSE;
    block->north = BirchFenceBlock::NORTH_FALSE;
    block->south = BirchFenceBlock::SOUTH_FALSE;
    block->waterlogged = BirchFenceBlock::WATERLOGGED_FALSE;
    block->west = BirchFenceBlock::WEST_FALSE;
    registry[9426] = block;
  }

  { // ID: 9619
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9619] = block;
  }

  { // ID: 9620
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9620] = block;
  }

  { // ID: 9621
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9621] = block;
  }

  { // ID: 9622
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9622] = block;
  }

  { // ID: 9623
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9623] = block;
  }

  { // ID: 9624
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9624] = block;
  }

  { // ID: 9625
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9625] = block;
  }

  { // ID: 9626
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9626] = block;
  }

  { // ID: 9627
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9627] = block;
  }

  { // ID: 9628
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9628] = block;
  }

  { // ID: 9629
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9629] = block;
  }

  { // ID: 9630
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9630] = block;
  }

  { // ID: 9631
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9631] = block;
  }

  { // ID: 9632
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9632] = block;
  }

  { // ID: 9633
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9633] = block;
  }

  { // ID: 9634
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_NORTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9634] = block;
  }

  { // ID: 9635
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9635] = block;
  }

  { // ID: 9636
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9636] = block;
  }

  { // ID: 9637
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9637] = block;
  }

  { // ID: 9638
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9638] = block;
  }

  { // ID: 9639
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9639] = block;
  }

  { // ID: 9640
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9640] = block;
  }

  { // ID: 9641
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9641] = block;
  }

  { // ID: 9642
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9642] = block;
  }

  { // ID: 9643
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9643] = block;
  }

  { // ID: 9644
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9644] = block;
  }

  { // ID: 9645
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9645] = block;
  }

  { // ID: 9646
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9646] = block;
  }

  { // ID: 9647
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9647] = block;
  }

  { // ID: 9648
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9648] = block;
  }

  { // ID: 9649
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9649] = block;
  }

  { // ID: 9650
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_SOUTH;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9650] = block;
  }

  { // ID: 9651
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9651] = block;
  }

  { // ID: 9652
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9652] = block;
  }

  { // ID: 9653
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9653] = block;
  }

  { // ID: 9654
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9654] = block;
  }

  { // ID: 9655
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9655] = block;
  }

  { // ID: 9656
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9656] = block;
  }

  { // ID: 9657
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9657] = block;
  }

  { // ID: 9658
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9658] = block;
  }

  { // ID: 9659
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9659] = block;
  }

  { // ID: 9660
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9660] = block;
  }

  { // ID: 9661
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9661] = block;
  }

  { // ID: 9662
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9662] = block;
  }

  { // ID: 9663
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9663] = block;
  }

  { // ID: 9664
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9664] = block;
  }

  { // ID: 9665
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9665] = block;
  }

  { // ID: 9666
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_WEST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9666] = block;
  }

  { // ID: 9667
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9667] = block;
  }

  { // ID: 9668
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9668] = block;
  }

  { // ID: 9669
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9669] = block;
  }

  { // ID: 9670
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9670] = block;
  }

  { // ID: 9671
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9671] = block;
  }

  { // ID: 9672
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9672] = block;
  }

  { // ID: 9673
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9673] = block;
  }

  { // ID: 9674
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_UPPER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9674] = block;
  }

  { // ID: 9675
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9675] = block;
  }

  { // ID: 9676
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9676] = block;
  }

  { // ID: 9677
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9677] = block;
  }

  { // ID: 9678
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_LEFT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9678] = block;
  }

  { // ID: 9679
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9679] = block;
  }

  { // ID: 9680
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_TRUE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9680] = block;
  }

  { // ID: 9681
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_TRUE;
    registry[9681] = block;
  }

  { // ID: 9682
    std::shared_ptr<BirchDoorBlock> block = std::make_shared<BirchDoorBlock>();
    block->facing = BirchDoorBlock::FACING_EAST;
    block->half = BirchDoorBlock::HALF_LOWER;
    block->hinge = BirchDoorBlock::HINGE_RIGHT;
    block->open = BirchDoorBlock::OPEN_FALSE;
    block->powered = BirchDoorBlock::POWERED_FALSE;
    registry[9682] = block;
  }

  { // ID: 10100
    std::shared_ptr<BeetrootsBlock> block = std::make_shared<BeetrootsBlock>();
    block->age = BeetrootsBlock::AGE_0;
    registry[10100] = block;
  }

  { // ID: 10101
    std::shared_ptr<BeetrootsBlock> block = std::make_shared<BeetrootsBlock>();
    block->age = BeetrootsBlock::AGE_1;
    registry[10101] = block;
  }

  { // ID: 10102
    std::shared_ptr<BeetrootsBlock> block = std::make_shared<BeetrootsBlock>();
    block->age = BeetrootsBlock::AGE_2;
    registry[10102] = block;
  }

  { // ID: 10103
    std::shared_ptr<BeetrootsBlock> block = std::make_shared<BeetrootsBlock>();
    block->age = BeetrootsBlock::AGE_3;
    registry[10103] = block;
  }

  { // ID: 10137
    std::shared_ptr<BoneBlockBlock> block = std::make_shared<BoneBlockBlock>();
    block->axis = BoneBlockBlock::AXIS_X;
    registry[10137] = block;
  }

  { // ID: 10138
    std::shared_ptr<BoneBlockBlock> block = std::make_shared<BoneBlockBlock>();
    block->axis = BoneBlockBlock::AXIS_Y;
    registry[10138] = block;
  }

  { // ID: 10139
    std::shared_ptr<BoneBlockBlock> block = std::make_shared<BoneBlockBlock>();
    block->axis = BoneBlockBlock::AXIS_Z;
    registry[10139] = block;
  }

  { // ID: 10225
    std::shared_ptr<BlueShulkerBoxBlock> block = std::make_shared<BlueShulkerBoxBlock>();
    block->facing = BlueShulkerBoxBlock::FACING_NORTH;
    registry[10225] = block;
  }

  { // ID: 10226
    std::shared_ptr<BlueShulkerBoxBlock> block = std::make_shared<BlueShulkerBoxBlock>();
    block->facing = BlueShulkerBoxBlock::FACING_EAST;
    registry[10226] = block;
  }

  { // ID: 10227
    std::shared_ptr<BlueShulkerBoxBlock> block = std::make_shared<BlueShulkerBoxBlock>();
    block->facing = BlueShulkerBoxBlock::FACING_SOUTH;
    registry[10227] = block;
  }

  { // ID: 10228
    std::shared_ptr<BlueShulkerBoxBlock> block = std::make_shared<BlueShulkerBoxBlock>();
    block->facing = BlueShulkerBoxBlock::FACING_WEST;
    registry[10228] = block;
  }

  { // ID: 10229
    std::shared_ptr<BlueShulkerBoxBlock> block = std::make_shared<BlueShulkerBoxBlock>();
    block->facing = BlueShulkerBoxBlock::FACING_UP;
    registry[10229] = block;
  }

  { // ID: 10230
    std::shared_ptr<BlueShulkerBoxBlock> block = std::make_shared<BlueShulkerBoxBlock>();
    block->facing = BlueShulkerBoxBlock::FACING_DOWN;
    registry[10230] = block;
  }

  { // ID: 10231
    std::shared_ptr<BrownShulkerBoxBlock> block = std::make_shared<BrownShulkerBoxBlock>();
    block->facing = BrownShulkerBoxBlock::FACING_NORTH;
    registry[10231] = block;
  }

  { // ID: 10232
    std::shared_ptr<BrownShulkerBoxBlock> block = std::make_shared<BrownShulkerBoxBlock>();
    block->facing = BrownShulkerBoxBlock::FACING_EAST;
    registry[10232] = block;
  }

  { // ID: 10233
    std::shared_ptr<BrownShulkerBoxBlock> block = std::make_shared<BrownShulkerBoxBlock>();
    block->facing = BrownShulkerBoxBlock::FACING_SOUTH;
    registry[10233] = block;
  }

  { // ID: 10234
    std::shared_ptr<BrownShulkerBoxBlock> block = std::make_shared<BrownShulkerBoxBlock>();
    block->facing = BrownShulkerBoxBlock::FACING_WEST;
    registry[10234] = block;
  }

  { // ID: 10235
    std::shared_ptr<BrownShulkerBoxBlock> block = std::make_shared<BrownShulkerBoxBlock>();
    block->facing = BrownShulkerBoxBlock::FACING_UP;
    registry[10235] = block;
  }

  { // ID: 10236
    std::shared_ptr<BrownShulkerBoxBlock> block = std::make_shared<BrownShulkerBoxBlock>();
    block->facing = BrownShulkerBoxBlock::FACING_DOWN;
    registry[10236] = block;
  }

  { // ID: 10249
    std::shared_ptr<BlackShulkerBoxBlock> block = std::make_shared<BlackShulkerBoxBlock>();
    block->facing = BlackShulkerBoxBlock::FACING_NORTH;
    registry[10249] = block;
  }

  { // ID: 10250
    std::shared_ptr<BlackShulkerBoxBlock> block = std::make_shared<BlackShulkerBoxBlock>();
    block->facing = BlackShulkerBoxBlock::FACING_EAST;
    registry[10250] = block;
  }

  { // ID: 10251
    std::shared_ptr<BlackShulkerBoxBlock> block = std::make_shared<BlackShulkerBoxBlock>();
    block->facing = BlackShulkerBoxBlock::FACING_SOUTH;
    registry[10251] = block;
  }

  { // ID: 10252
    std::shared_ptr<BlackShulkerBoxBlock> block = std::make_shared<BlackShulkerBoxBlock>();
    block->facing = BlackShulkerBoxBlock::FACING_WEST;
    registry[10252] = block;
  }

  { // ID: 10253
    std::shared_ptr<BlackShulkerBoxBlock> block = std::make_shared<BlackShulkerBoxBlock>();
    block->facing = BlackShulkerBoxBlock::FACING_UP;
    registry[10253] = block;
  }

  { // ID: 10254
    std::shared_ptr<BlackShulkerBoxBlock> block = std::make_shared<BlackShulkerBoxBlock>();
    block->facing = BlackShulkerBoxBlock::FACING_DOWN;
    registry[10254] = block;
  }

  { // ID: 10299
    std::shared_ptr<BlueGlazedTerracottaBlock> block = std::make_shared<BlueGlazedTerracottaBlock>();
    block->facing = BlueGlazedTerracottaBlock::FACING_NORTH;
    registry[10299] = block;
  }

  { // ID: 10300
    std::shared_ptr<BlueGlazedTerracottaBlock> block = std::make_shared<BlueGlazedTerracottaBlock>();
    block->facing = BlueGlazedTerracottaBlock::FACING_SOUTH;
    registry[10300] = block;
  }

  { // ID: 10301
    std::shared_ptr<BlueGlazedTerracottaBlock> block = std::make_shared<BlueGlazedTerracottaBlock>();
    block->facing = BlueGlazedTerracottaBlock::FACING_WEST;
    registry[10301] = block;
  }

  { // ID: 10302
    std::shared_ptr<BlueGlazedTerracottaBlock> block = std::make_shared<BlueGlazedTerracottaBlock>();
    block->facing = BlueGlazedTerracottaBlock::FACING_EAST;
    registry[10302] = block;
  }

  { // ID: 10303
    std::shared_ptr<BrownGlazedTerracottaBlock> block = std::make_shared<BrownGlazedTerracottaBlock>();
    block->facing = BrownGlazedTerracottaBlock::FACING_NORTH;
    registry[10303] = block;
  }

  { // ID: 10304
    std::shared_ptr<BrownGlazedTerracottaBlock> block = std::make_shared<BrownGlazedTerracottaBlock>();
    block->facing = BrownGlazedTerracottaBlock::FACING_SOUTH;
    registry[10304] = block;
  }

  { // ID: 10305
    std::shared_ptr<BrownGlazedTerracottaBlock> block = std::make_shared<BrownGlazedTerracottaBlock>();
    block->facing = BrownGlazedTerracottaBlock::FACING_WEST;
    registry[10305] = block;
  }

  { // ID: 10306
    std::shared_ptr<BrownGlazedTerracottaBlock> block = std::make_shared<BrownGlazedTerracottaBlock>();
    block->facing = BrownGlazedTerracottaBlock::FACING_EAST;
    registry[10306] = block;
  }

  { // ID: 10315
    std::shared_ptr<BlackGlazedTerracottaBlock> block = std::make_shared<BlackGlazedTerracottaBlock>();
    block->facing = BlackGlazedTerracottaBlock::FACING_NORTH;
    registry[10315] = block;
  }

  { // ID: 10316
    std::shared_ptr<BlackGlazedTerracottaBlock> block = std::make_shared<BlackGlazedTerracottaBlock>();
    block->facing = BlackGlazedTerracottaBlock::FACING_SOUTH;
    registry[10316] = block;
  }

  { // ID: 10317
    std::shared_ptr<BlackGlazedTerracottaBlock> block = std::make_shared<BlackGlazedTerracottaBlock>();
    block->facing = BlackGlazedTerracottaBlock::FACING_WEST;
    registry[10317] = block;
  }

  { // ID: 10318
    std::shared_ptr<BlackGlazedTerracottaBlock> block = std::make_shared<BlackGlazedTerracottaBlock>();
    block->facing = BlackGlazedTerracottaBlock::FACING_EAST;
    registry[10318] = block;
  }

  { // ID: 10330
    std::shared_ptr<BlueConcreteBlock> block = std::make_shared<BlueConcreteBlock>();
    registry[10330] = block;
  }

  { // ID: 10331
    std::shared_ptr<BrownConcreteBlock> block = std::make_shared<BrownConcreteBlock>();
    registry[10331] = block;
  }

  { // ID: 10334
    std::shared_ptr<BlackConcreteBlock> block = std::make_shared<BlackConcreteBlock>();
    registry[10334] = block;
  }

  { // ID: 10346
    std::shared_ptr<BlueConcretePowderBlock> block = std::make_shared<BlueConcretePowderBlock>();
    registry[10346] = block;
  }

  { // ID: 10347
    std::shared_ptr<BrownConcretePowderBlock> block = std::make_shared<BrownConcretePowderBlock>();
    registry[10347] = block;
  }

  { // ID: 10350
    std::shared_ptr<BlackConcretePowderBlock> block = std::make_shared<BlackConcretePowderBlock>();
    registry[10350] = block;
  }

  { // ID: 10397
    std::shared_ptr<BrainCoralBlockBlock> block = std::make_shared<BrainCoralBlockBlock>();
    registry[10397] = block;
  }

  { // ID: 10398
    std::shared_ptr<BubbleCoralBlockBlock> block = std::make_shared<BubbleCoralBlockBlock>();
    registry[10398] = block;
  }

  { // ID: 10413
    std::shared_ptr<BrainCoralBlock> block = std::make_shared<BrainCoralBlock>();
    block->waterlogged = BrainCoralBlock::WATERLOGGED_TRUE;
    registry[10413] = block;
  }

  { // ID: 10414
    std::shared_ptr<BrainCoralBlock> block = std::make_shared<BrainCoralBlock>();
    block->waterlogged = BrainCoralBlock::WATERLOGGED_FALSE;
    registry[10414] = block;
  }

  { // ID: 10415
    std::shared_ptr<BubbleCoralBlock> block = std::make_shared<BubbleCoralBlock>();
    block->waterlogged = BubbleCoralBlock::WATERLOGGED_TRUE;
    registry[10415] = block;
  }

  { // ID: 10416
    std::shared_ptr<BubbleCoralBlock> block = std::make_shared<BubbleCoralBlock>();
    block->waterlogged = BubbleCoralBlock::WATERLOGGED_FALSE;
    registry[10416] = block;
  }

  { // ID: 10433
    std::shared_ptr<BrainCoralFanBlock> block = std::make_shared<BrainCoralFanBlock>();
    block->waterlogged = BrainCoralFanBlock::WATERLOGGED_TRUE;
    registry[10433] = block;
  }

  { // ID: 10434
    std::shared_ptr<BrainCoralFanBlock> block = std::make_shared<BrainCoralFanBlock>();
    block->waterlogged = BrainCoralFanBlock::WATERLOGGED_FALSE;
    registry[10434] = block;
  }

  { // ID: 10435
    std::shared_ptr<BubbleCoralFanBlock> block = std::make_shared<BubbleCoralFanBlock>();
    block->waterlogged = BubbleCoralFanBlock::WATERLOGGED_TRUE;
    registry[10435] = block;
  }

  { // ID: 10436
    std::shared_ptr<BubbleCoralFanBlock> block = std::make_shared<BubbleCoralFanBlock>();
    block->waterlogged = BubbleCoralFanBlock::WATERLOGGED_FALSE;
    registry[10436] = block;
  }

  { // ID: 10489
    std::shared_ptr<BrainCoralWallFanBlock> block = std::make_shared<BrainCoralWallFanBlock>();
    block->facing = BrainCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = BrainCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10489] = block;
  }

  { // ID: 10490
    std::shared_ptr<BrainCoralWallFanBlock> block = std::make_shared<BrainCoralWallFanBlock>();
    block->facing = BrainCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = BrainCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10490] = block;
  }

  { // ID: 10491
    std::shared_ptr<BrainCoralWallFanBlock> block = std::make_shared<BrainCoralWallFanBlock>();
    block->facing = BrainCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = BrainCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10491] = block;
  }

  { // ID: 10492
    std::shared_ptr<BrainCoralWallFanBlock> block = std::make_shared<BrainCoralWallFanBlock>();
    block->facing = BrainCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = BrainCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10492] = block;
  }

  { // ID: 10493
    std::shared_ptr<BrainCoralWallFanBlock> block = std::make_shared<BrainCoralWallFanBlock>();
    block->facing = BrainCoralWallFanBlock::FACING_WEST;
    block->waterlogged = BrainCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10493] = block;
  }

  { // ID: 10494
    std::shared_ptr<BrainCoralWallFanBlock> block = std::make_shared<BrainCoralWallFanBlock>();
    block->facing = BrainCoralWallFanBlock::FACING_WEST;
    block->waterlogged = BrainCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10494] = block;
  }

  { // ID: 10495
    std::shared_ptr<BrainCoralWallFanBlock> block = std::make_shared<BrainCoralWallFanBlock>();
    block->facing = BrainCoralWallFanBlock::FACING_EAST;
    block->waterlogged = BrainCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10495] = block;
  }

  { // ID: 10496
    std::shared_ptr<BrainCoralWallFanBlock> block = std::make_shared<BrainCoralWallFanBlock>();
    block->facing = BrainCoralWallFanBlock::FACING_EAST;
    block->waterlogged = BrainCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10496] = block;
  }

  { // ID: 10497
    std::shared_ptr<BubbleCoralWallFanBlock> block = std::make_shared<BubbleCoralWallFanBlock>();
    block->facing = BubbleCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = BubbleCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10497] = block;
  }

  { // ID: 10498
    std::shared_ptr<BubbleCoralWallFanBlock> block = std::make_shared<BubbleCoralWallFanBlock>();
    block->facing = BubbleCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = BubbleCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10498] = block;
  }

  { // ID: 10499
    std::shared_ptr<BubbleCoralWallFanBlock> block = std::make_shared<BubbleCoralWallFanBlock>();
    block->facing = BubbleCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = BubbleCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10499] = block;
  }

  { // ID: 10500
    std::shared_ptr<BubbleCoralWallFanBlock> block = std::make_shared<BubbleCoralWallFanBlock>();
    block->facing = BubbleCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = BubbleCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10500] = block;
  }

  { // ID: 10501
    std::shared_ptr<BubbleCoralWallFanBlock> block = std::make_shared<BubbleCoralWallFanBlock>();
    block->facing = BubbleCoralWallFanBlock::FACING_WEST;
    block->waterlogged = BubbleCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10501] = block;
  }

  { // ID: 10502
    std::shared_ptr<BubbleCoralWallFanBlock> block = std::make_shared<BubbleCoralWallFanBlock>();
    block->facing = BubbleCoralWallFanBlock::FACING_WEST;
    block->waterlogged = BubbleCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10502] = block;
  }

  { // ID: 10503
    std::shared_ptr<BubbleCoralWallFanBlock> block = std::make_shared<BubbleCoralWallFanBlock>();
    block->facing = BubbleCoralWallFanBlock::FACING_EAST;
    block->waterlogged = BubbleCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10503] = block;
  }

  { // ID: 10504
    std::shared_ptr<BubbleCoralWallFanBlock> block = std::make_shared<BubbleCoralWallFanBlock>();
    block->facing = BubbleCoralWallFanBlock::FACING_EAST;
    block->waterlogged = BubbleCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10504] = block;
  }

  { // ID: 10529
    std::shared_ptr<BlueIceBlock> block = std::make_shared<BlueIceBlock>();
    registry[10529] = block;
  }

  { // ID: 10532
    std::shared_ptr<BambooSaplingBlock> block = std::make_shared<BambooSaplingBlock>();
    registry[10532] = block;
  }

  { // ID: 10533
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_0;
    block->leaves = BambooBlock::LEAVES_NONE;
    block->stage = BambooBlock::STAGE_0;
    registry[10533] = block;
  }

  { // ID: 10534
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_0;
    block->leaves = BambooBlock::LEAVES_NONE;
    block->stage = BambooBlock::STAGE_1;
    registry[10534] = block;
  }

  { // ID: 10535
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_0;
    block->leaves = BambooBlock::LEAVES_SMALL;
    block->stage = BambooBlock::STAGE_0;
    registry[10535] = block;
  }

  { // ID: 10536
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_0;
    block->leaves = BambooBlock::LEAVES_SMALL;
    block->stage = BambooBlock::STAGE_1;
    registry[10536] = block;
  }

  { // ID: 10537
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_0;
    block->leaves = BambooBlock::LEAVES_LARGE;
    block->stage = BambooBlock::STAGE_0;
    registry[10537] = block;
  }

  { // ID: 10538
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_0;
    block->leaves = BambooBlock::LEAVES_LARGE;
    block->stage = BambooBlock::STAGE_1;
    registry[10538] = block;
  }

  { // ID: 10539
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_1;
    block->leaves = BambooBlock::LEAVES_NONE;
    block->stage = BambooBlock::STAGE_0;
    registry[10539] = block;
  }

  { // ID: 10540
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_1;
    block->leaves = BambooBlock::LEAVES_NONE;
    block->stage = BambooBlock::STAGE_1;
    registry[10540] = block;
  }

  { // ID: 10541
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_1;
    block->leaves = BambooBlock::LEAVES_SMALL;
    block->stage = BambooBlock::STAGE_0;
    registry[10541] = block;
  }

  { // ID: 10542
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_1;
    block->leaves = BambooBlock::LEAVES_SMALL;
    block->stage = BambooBlock::STAGE_1;
    registry[10542] = block;
  }

  { // ID: 10543
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_1;
    block->leaves = BambooBlock::LEAVES_LARGE;
    block->stage = BambooBlock::STAGE_0;
    registry[10543] = block;
  }

  { // ID: 10544
    std::shared_ptr<BambooBlock> block = std::make_shared<BambooBlock>();
    block->age = BambooBlock::AGE_1;
    block->leaves = BambooBlock::LEAVES_LARGE;
    block->stage = BambooBlock::STAGE_1;
    registry[10544] = block;
  }

  { // ID: 10548
    std::shared_ptr<BubbleColumnBlock> block = std::make_shared<BubbleColumnBlock>();
    block->drag = BubbleColumnBlock::DRAG_TRUE;
    registry[10548] = block;
  }

  { // ID: 10549
    std::shared_ptr<BubbleColumnBlock> block = std::make_shared<BubbleColumnBlock>();
    block->drag = BubbleColumnBlock::DRAG_FALSE;
    registry[10549] = block;
  }

  { // ID: 11748
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11748] = block;
  }

  { // ID: 11749
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11749] = block;
  }

  { // ID: 11750
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11750] = block;
  }

  { // ID: 11751
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11751] = block;
  }

  { // ID: 11752
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11752] = block;
  }

  { // ID: 11753
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11753] = block;
  }

  { // ID: 11754
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11754] = block;
  }

  { // ID: 11755
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11755] = block;
  }

  { // ID: 11756
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11756] = block;
  }

  { // ID: 11757
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11757] = block;
  }

  { // ID: 11758
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11758] = block;
  }

  { // ID: 11759
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11759] = block;
  }

  { // ID: 11760
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11760] = block;
  }

  { // ID: 11761
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11761] = block;
  }

  { // ID: 11762
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11762] = block;
  }

  { // ID: 11763
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11763] = block;
  }

  { // ID: 11764
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11764] = block;
  }

  { // ID: 11765
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11765] = block;
  }

  { // ID: 11766
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11766] = block;
  }

  { // ID: 11767
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11767] = block;
  }

  { // ID: 11768
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11768] = block;
  }

  { // ID: 11769
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11769] = block;
  }

  { // ID: 11770
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11770] = block;
  }

  { // ID: 11771
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11771] = block;
  }

  { // ID: 11772
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11772] = block;
  }

  { // ID: 11773
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11773] = block;
  }

  { // ID: 11774
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11774] = block;
  }

  { // ID: 11775
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11775] = block;
  }

  { // ID: 11776
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11776] = block;
  }

  { // ID: 11777
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11777] = block;
  }

  { // ID: 11778
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11778] = block;
  }

  { // ID: 11779
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11779] = block;
  }

  { // ID: 11780
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11780] = block;
  }

  { // ID: 11781
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11781] = block;
  }

  { // ID: 11782
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11782] = block;
  }

  { // ID: 11783
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11783] = block;
  }

  { // ID: 11784
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11784] = block;
  }

  { // ID: 11785
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11785] = block;
  }

  { // ID: 11786
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11786] = block;
  }

  { // ID: 11787
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11787] = block;
  }

  { // ID: 11788
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11788] = block;
  }

  { // ID: 11789
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11789] = block;
  }

  { // ID: 11790
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11790] = block;
  }

  { // ID: 11791
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11791] = block;
  }

  { // ID: 11792
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11792] = block;
  }

  { // ID: 11793
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11793] = block;
  }

  { // ID: 11794
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11794] = block;
  }

  { // ID: 11795
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11795] = block;
  }

  { // ID: 11796
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11796] = block;
  }

  { // ID: 11797
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11797] = block;
  }

  { // ID: 11798
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11798] = block;
  }

  { // ID: 11799
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11799] = block;
  }

  { // ID: 11800
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11800] = block;
  }

  { // ID: 11801
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11801] = block;
  }

  { // ID: 11802
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11802] = block;
  }

  { // ID: 11803
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11803] = block;
  }

  { // ID: 11804
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11804] = block;
  }

  { // ID: 11805
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11805] = block;
  }

  { // ID: 11806
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11806] = block;
  }

  { // ID: 11807
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11807] = block;
  }

  { // ID: 11808
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11808] = block;
  }

  { // ID: 11809
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11809] = block;
  }

  { // ID: 11810
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11810] = block;
  }

  { // ID: 11811
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11811] = block;
  }

  { // ID: 11812
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11812] = block;
  }

  { // ID: 11813
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11813] = block;
  }

  { // ID: 11814
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11814] = block;
  }

  { // ID: 11815
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11815] = block;
  }

  { // ID: 11816
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11816] = block;
  }

  { // ID: 11817
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11817] = block;
  }

  { // ID: 11818
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11818] = block;
  }

  { // ID: 11819
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11819] = block;
  }

  { // ID: 11820
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11820] = block;
  }

  { // ID: 11821
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11821] = block;
  }

  { // ID: 11822
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11822] = block;
  }

  { // ID: 11823
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11823] = block;
  }

  { // ID: 11824
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11824] = block;
  }

  { // ID: 11825
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11825] = block;
  }

  { // ID: 11826
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11826] = block;
  }

  { // ID: 11827
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11827] = block;
  }

  { // ID: 11828
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11828] = block;
  }

  { // ID: 11829
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11829] = block;
  }

  { // ID: 11830
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11830] = block;
  }

  { // ID: 11831
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11831] = block;
  }

  { // ID: 11832
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11832] = block;
  }

  { // ID: 11833
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11833] = block;
  }

  { // ID: 11834
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11834] = block;
  }

  { // ID: 11835
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11835] = block;
  }

  { // ID: 11836
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11836] = block;
  }

  { // ID: 11837
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11837] = block;
  }

  { // ID: 11838
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11838] = block;
  }

  { // ID: 11839
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11839] = block;
  }

  { // ID: 11840
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11840] = block;
  }

  { // ID: 11841
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11841] = block;
  }

  { // ID: 11842
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11842] = block;
  }

  { // ID: 11843
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11843] = block;
  }

  { // ID: 11844
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11844] = block;
  }

  { // ID: 11845
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11845] = block;
  }

  { // ID: 11846
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11846] = block;
  }

  { // ID: 11847
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11847] = block;
  }

  { // ID: 11848
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11848] = block;
  }

  { // ID: 11849
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11849] = block;
  }

  { // ID: 11850
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11850] = block;
  }

  { // ID: 11851
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11851] = block;
  }

  { // ID: 11852
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11852] = block;
  }

  { // ID: 11853
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11853] = block;
  }

  { // ID: 11854
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11854] = block;
  }

  { // ID: 11855
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_NONE;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11855] = block;
  }

  { // ID: 11856
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11856] = block;
  }

  { // ID: 11857
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11857] = block;
  }

  { // ID: 11858
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11858] = block;
  }

  { // ID: 11859
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11859] = block;
  }

  { // ID: 11860
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11860] = block;
  }

  { // ID: 11861
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11861] = block;
  }

  { // ID: 11862
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11862] = block;
  }

  { // ID: 11863
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11863] = block;
  }

  { // ID: 11864
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11864] = block;
  }

  { // ID: 11865
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11865] = block;
  }

  { // ID: 11866
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11866] = block;
  }

  { // ID: 11867
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11867] = block;
  }

  { // ID: 11868
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11868] = block;
  }

  { // ID: 11869
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11869] = block;
  }

  { // ID: 11870
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11870] = block;
  }

  { // ID: 11871
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11871] = block;
  }

  { // ID: 11872
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11872] = block;
  }

  { // ID: 11873
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11873] = block;
  }

  { // ID: 11874
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11874] = block;
  }

  { // ID: 11875
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11875] = block;
  }

  { // ID: 11876
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11876] = block;
  }

  { // ID: 11877
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11877] = block;
  }

  { // ID: 11878
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11878] = block;
  }

  { // ID: 11879
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11879] = block;
  }

  { // ID: 11880
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11880] = block;
  }

  { // ID: 11881
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11881] = block;
  }

  { // ID: 11882
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11882] = block;
  }

  { // ID: 11883
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11883] = block;
  }

  { // ID: 11884
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11884] = block;
  }

  { // ID: 11885
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11885] = block;
  }

  { // ID: 11886
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11886] = block;
  }

  { // ID: 11887
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11887] = block;
  }

  { // ID: 11888
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11888] = block;
  }

  { // ID: 11889
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11889] = block;
  }

  { // ID: 11890
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11890] = block;
  }

  { // ID: 11891
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11891] = block;
  }

  { // ID: 11892
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11892] = block;
  }

  { // ID: 11893
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11893] = block;
  }

  { // ID: 11894
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11894] = block;
  }

  { // ID: 11895
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11895] = block;
  }

  { // ID: 11896
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11896] = block;
  }

  { // ID: 11897
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11897] = block;
  }

  { // ID: 11898
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11898] = block;
  }

  { // ID: 11899
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11899] = block;
  }

  { // ID: 11900
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11900] = block;
  }

  { // ID: 11901
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11901] = block;
  }

  { // ID: 11902
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11902] = block;
  }

  { // ID: 11903
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11903] = block;
  }

  { // ID: 11904
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11904] = block;
  }

  { // ID: 11905
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11905] = block;
  }

  { // ID: 11906
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11906] = block;
  }

  { // ID: 11907
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11907] = block;
  }

  { // ID: 11908
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11908] = block;
  }

  { // ID: 11909
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11909] = block;
  }

  { // ID: 11910
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11910] = block;
  }

  { // ID: 11911
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11911] = block;
  }

  { // ID: 11912
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11912] = block;
  }

  { // ID: 11913
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11913] = block;
  }

  { // ID: 11914
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11914] = block;
  }

  { // ID: 11915
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11915] = block;
  }

  { // ID: 11916
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11916] = block;
  }

  { // ID: 11917
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11917] = block;
  }

  { // ID: 11918
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11918] = block;
  }

  { // ID: 11919
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11919] = block;
  }

  { // ID: 11920
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11920] = block;
  }

  { // ID: 11921
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11921] = block;
  }

  { // ID: 11922
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11922] = block;
  }

  { // ID: 11923
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11923] = block;
  }

  { // ID: 11924
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11924] = block;
  }

  { // ID: 11925
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11925] = block;
  }

  { // ID: 11926
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11926] = block;
  }

  { // ID: 11927
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11927] = block;
  }

  { // ID: 11928
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11928] = block;
  }

  { // ID: 11929
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11929] = block;
  }

  { // ID: 11930
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11930] = block;
  }

  { // ID: 11931
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11931] = block;
  }

  { // ID: 11932
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11932] = block;
  }

  { // ID: 11933
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11933] = block;
  }

  { // ID: 11934
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11934] = block;
  }

  { // ID: 11935
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11935] = block;
  }

  { // ID: 11936
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11936] = block;
  }

  { // ID: 11937
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11937] = block;
  }

  { // ID: 11938
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11938] = block;
  }

  { // ID: 11939
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11939] = block;
  }

  { // ID: 11940
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11940] = block;
  }

  { // ID: 11941
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11941] = block;
  }

  { // ID: 11942
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11942] = block;
  }

  { // ID: 11943
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11943] = block;
  }

  { // ID: 11944
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11944] = block;
  }

  { // ID: 11945
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11945] = block;
  }

  { // ID: 11946
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11946] = block;
  }

  { // ID: 11947
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11947] = block;
  }

  { // ID: 11948
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11948] = block;
  }

  { // ID: 11949
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11949] = block;
  }

  { // ID: 11950
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11950] = block;
  }

  { // ID: 11951
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11951] = block;
  }

  { // ID: 11952
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11952] = block;
  }

  { // ID: 11953
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11953] = block;
  }

  { // ID: 11954
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11954] = block;
  }

  { // ID: 11955
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11955] = block;
  }

  { // ID: 11956
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11956] = block;
  }

  { // ID: 11957
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11957] = block;
  }

  { // ID: 11958
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11958] = block;
  }

  { // ID: 11959
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11959] = block;
  }

  { // ID: 11960
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11960] = block;
  }

  { // ID: 11961
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11961] = block;
  }

  { // ID: 11962
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11962] = block;
  }

  { // ID: 11963
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_LOW;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11963] = block;
  }

  { // ID: 11964
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11964] = block;
  }

  { // ID: 11965
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11965] = block;
  }

  { // ID: 11966
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11966] = block;
  }

  { // ID: 11967
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11967] = block;
  }

  { // ID: 11968
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11968] = block;
  }

  { // ID: 11969
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11969] = block;
  }

  { // ID: 11970
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11970] = block;
  }

  { // ID: 11971
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11971] = block;
  }

  { // ID: 11972
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11972] = block;
  }

  { // ID: 11973
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11973] = block;
  }

  { // ID: 11974
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11974] = block;
  }

  { // ID: 11975
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11975] = block;
  }

  { // ID: 11976
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11976] = block;
  }

  { // ID: 11977
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11977] = block;
  }

  { // ID: 11978
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11978] = block;
  }

  { // ID: 11979
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11979] = block;
  }

  { // ID: 11980
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11980] = block;
  }

  { // ID: 11981
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11981] = block;
  }

  { // ID: 11982
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11982] = block;
  }

  { // ID: 11983
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11983] = block;
  }

  { // ID: 11984
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11984] = block;
  }

  { // ID: 11985
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11985] = block;
  }

  { // ID: 11986
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11986] = block;
  }

  { // ID: 11987
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11987] = block;
  }

  { // ID: 11988
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11988] = block;
  }

  { // ID: 11989
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11989] = block;
  }

  { // ID: 11990
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11990] = block;
  }

  { // ID: 11991
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11991] = block;
  }

  { // ID: 11992
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11992] = block;
  }

  { // ID: 11993
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11993] = block;
  }

  { // ID: 11994
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11994] = block;
  }

  { // ID: 11995
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11995] = block;
  }

  { // ID: 11996
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11996] = block;
  }

  { // ID: 11997
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[11997] = block;
  }

  { // ID: 11998
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[11998] = block;
  }

  { // ID: 11999
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_NONE;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[11999] = block;
  }

  { // ID: 12000
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12000] = block;
  }

  { // ID: 12001
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12001] = block;
  }

  { // ID: 12002
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12002] = block;
  }

  { // ID: 12003
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12003] = block;
  }

  { // ID: 12004
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12004] = block;
  }

  { // ID: 12005
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12005] = block;
  }

  { // ID: 12006
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12006] = block;
  }

  { // ID: 12007
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12007] = block;
  }

  { // ID: 12008
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12008] = block;
  }

  { // ID: 12009
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12009] = block;
  }

  { // ID: 12010
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12010] = block;
  }

  { // ID: 12011
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12011] = block;
  }

  { // ID: 12012
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12012] = block;
  }

  { // ID: 12013
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12013] = block;
  }

  { // ID: 12014
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12014] = block;
  }

  { // ID: 12015
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12015] = block;
  }

  { // ID: 12016
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12016] = block;
  }

  { // ID: 12017
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12017] = block;
  }

  { // ID: 12018
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12018] = block;
  }

  { // ID: 12019
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12019] = block;
  }

  { // ID: 12020
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12020] = block;
  }

  { // ID: 12021
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12021] = block;
  }

  { // ID: 12022
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12022] = block;
  }

  { // ID: 12023
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12023] = block;
  }

  { // ID: 12024
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12024] = block;
  }

  { // ID: 12025
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12025] = block;
  }

  { // ID: 12026
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12026] = block;
  }

  { // ID: 12027
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12027] = block;
  }

  { // ID: 12028
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12028] = block;
  }

  { // ID: 12029
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12029] = block;
  }

  { // ID: 12030
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12030] = block;
  }

  { // ID: 12031
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12031] = block;
  }

  { // ID: 12032
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12032] = block;
  }

  { // ID: 12033
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12033] = block;
  }

  { // ID: 12034
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12034] = block;
  }

  { // ID: 12035
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_LOW;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12035] = block;
  }

  { // ID: 12036
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12036] = block;
  }

  { // ID: 12037
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12037] = block;
  }

  { // ID: 12038
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12038] = block;
  }

  { // ID: 12039
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12039] = block;
  }

  { // ID: 12040
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12040] = block;
  }

  { // ID: 12041
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12041] = block;
  }

  { // ID: 12042
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12042] = block;
  }

  { // ID: 12043
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12043] = block;
  }

  { // ID: 12044
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12044] = block;
  }

  { // ID: 12045
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12045] = block;
  }

  { // ID: 12046
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12046] = block;
  }

  { // ID: 12047
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_NONE;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12047] = block;
  }

  { // ID: 12048
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12048] = block;
  }

  { // ID: 12049
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12049] = block;
  }

  { // ID: 12050
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12050] = block;
  }

  { // ID: 12051
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12051] = block;
  }

  { // ID: 12052
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12052] = block;
  }

  { // ID: 12053
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12053] = block;
  }

  { // ID: 12054
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12054] = block;
  }

  { // ID: 12055
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12055] = block;
  }

  { // ID: 12056
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12056] = block;
  }

  { // ID: 12057
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12057] = block;
  }

  { // ID: 12058
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12058] = block;
  }

  { // ID: 12059
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_LOW;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12059] = block;
  }

  { // ID: 12060
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12060] = block;
  }

  { // ID: 12061
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12061] = block;
  }

  { // ID: 12062
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12062] = block;
  }

  { // ID: 12063
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12063] = block;
  }

  { // ID: 12064
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12064] = block;
  }

  { // ID: 12065
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_TRUE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12065] = block;
  }

  { // ID: 12066
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12066] = block;
  }

  { // ID: 12067
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12067] = block;
  }

  { // ID: 12068
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_TRUE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12068] = block;
  }

  { // ID: 12069
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_NONE;
    registry[12069] = block;
  }

  { // ID: 12070
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_LOW;
    registry[12070] = block;
  }

  { // ID: 12071
    std::shared_ptr<BrickWallBlock> block = std::make_shared<BrickWallBlock>();
    block->east = BrickWallBlock::EAST_TALL;
    block->north = BrickWallBlock::NORTH_TALL;
    block->south = BrickWallBlock::SOUTH_TALL;
    block->up = BrickWallBlock::UP_FALSE;
    block->waterlogged = BrickWallBlock::WATERLOGGED_FALSE;
    block->west = BrickWallBlock::WEST_TALL;
    registry[12071] = block;
  }

  { // ID: 15996
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_NORTH;
    block->open = BarrelBlock::OPEN_TRUE;
    registry[15996] = block;
  }

  { // ID: 15997
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_NORTH;
    block->open = BarrelBlock::OPEN_FALSE;
    registry[15997] = block;
  }

  { // ID: 15998
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_EAST;
    block->open = BarrelBlock::OPEN_TRUE;
    registry[15998] = block;
  }

  { // ID: 15999
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_EAST;
    block->open = BarrelBlock::OPEN_FALSE;
    registry[15999] = block;
  }

  { // ID: 16000
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_SOUTH;
    block->open = BarrelBlock::OPEN_TRUE;
    registry[16000] = block;
  }

  { // ID: 16001
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_SOUTH;
    block->open = BarrelBlock::OPEN_FALSE;
    registry[16001] = block;
  }

  { // ID: 16002
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_WEST;
    block->open = BarrelBlock::OPEN_TRUE;
    registry[16002] = block;
  }

  { // ID: 16003
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_WEST;
    block->open = BarrelBlock::OPEN_FALSE;
    registry[16003] = block;
  }

  { // ID: 16004
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_UP;
    block->open = BarrelBlock::OPEN_TRUE;
    registry[16004] = block;
  }

  { // ID: 16005
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_UP;
    block->open = BarrelBlock::OPEN_FALSE;
    registry[16005] = block;
  }

  { // ID: 16006
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_DOWN;
    block->open = BarrelBlock::OPEN_TRUE;
    registry[16006] = block;
  }

  { // ID: 16007
    std::shared_ptr<BarrelBlock> block = std::make_shared<BarrelBlock>();
    block->facing = BarrelBlock::FACING_DOWN;
    block->open = BarrelBlock::OPEN_FALSE;
    registry[16007] = block;
  }

  { // ID: 16016
    std::shared_ptr<BlastFurnaceBlock> block = std::make_shared<BlastFurnaceBlock>();
    block->facing = BlastFurnaceBlock::FACING_NORTH;
    block->lit = BlastFurnaceBlock::LIT_TRUE;
    registry[16016] = block;
  }

  { // ID: 16017
    std::shared_ptr<BlastFurnaceBlock> block = std::make_shared<BlastFurnaceBlock>();
    block->facing = BlastFurnaceBlock::FACING_NORTH;
    block->lit = BlastFurnaceBlock::LIT_FALSE;
    registry[16017] = block;
  }

  { // ID: 16018
    std::shared_ptr<BlastFurnaceBlock> block = std::make_shared<BlastFurnaceBlock>();
    block->facing = BlastFurnaceBlock::FACING_SOUTH;
    block->lit = BlastFurnaceBlock::LIT_TRUE;
    registry[16018] = block;
  }

  { // ID: 16019
    std::shared_ptr<BlastFurnaceBlock> block = std::make_shared<BlastFurnaceBlock>();
    block->facing = BlastFurnaceBlock::FACING_SOUTH;
    block->lit = BlastFurnaceBlock::LIT_FALSE;
    registry[16019] = block;
  }

  { // ID: 16020
    std::shared_ptr<BlastFurnaceBlock> block = std::make_shared<BlastFurnaceBlock>();
    block->facing = BlastFurnaceBlock::FACING_WEST;
    block->lit = BlastFurnaceBlock::LIT_TRUE;
    registry[16020] = block;
  }

  { // ID: 16021
    std::shared_ptr<BlastFurnaceBlock> block = std::make_shared<BlastFurnaceBlock>();
    block->facing = BlastFurnaceBlock::FACING_WEST;
    block->lit = BlastFurnaceBlock::LIT_FALSE;
    registry[16021] = block;
  }

  { // ID: 16022
    std::shared_ptr<BlastFurnaceBlock> block = std::make_shared<BlastFurnaceBlock>();
    block->facing = BlastFurnaceBlock::FACING_EAST;
    block->lit = BlastFurnaceBlock::LIT_TRUE;
    registry[16022] = block;
  }

  { // ID: 16023
    std::shared_ptr<BlastFurnaceBlock> block = std::make_shared<BlastFurnaceBlock>();
    block->facing = BlastFurnaceBlock::FACING_EAST;
    block->lit = BlastFurnaceBlock::LIT_FALSE;
    registry[16023] = block;
  }

  { // ID: 16059
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_FLOOR;
    block->facing = BellBlock::FACING_NORTH;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16059] = block;
  }

  { // ID: 16060
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_FLOOR;
    block->facing = BellBlock::FACING_NORTH;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16060] = block;
  }

  { // ID: 16061
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_FLOOR;
    block->facing = BellBlock::FACING_SOUTH;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16061] = block;
  }

  { // ID: 16062
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_FLOOR;
    block->facing = BellBlock::FACING_SOUTH;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16062] = block;
  }

  { // ID: 16063
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_FLOOR;
    block->facing = BellBlock::FACING_WEST;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16063] = block;
  }

  { // ID: 16064
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_FLOOR;
    block->facing = BellBlock::FACING_WEST;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16064] = block;
  }

  { // ID: 16065
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_FLOOR;
    block->facing = BellBlock::FACING_EAST;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16065] = block;
  }

  { // ID: 16066
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_FLOOR;
    block->facing = BellBlock::FACING_EAST;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16066] = block;
  }

  { // ID: 16067
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_CEILING;
    block->facing = BellBlock::FACING_NORTH;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16067] = block;
  }

  { // ID: 16068
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_CEILING;
    block->facing = BellBlock::FACING_NORTH;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16068] = block;
  }

  { // ID: 16069
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_CEILING;
    block->facing = BellBlock::FACING_SOUTH;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16069] = block;
  }

  { // ID: 16070
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_CEILING;
    block->facing = BellBlock::FACING_SOUTH;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16070] = block;
  }

  { // ID: 16071
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_CEILING;
    block->facing = BellBlock::FACING_WEST;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16071] = block;
  }

  { // ID: 16072
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_CEILING;
    block->facing = BellBlock::FACING_WEST;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16072] = block;
  }

  { // ID: 16073
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_CEILING;
    block->facing = BellBlock::FACING_EAST;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16073] = block;
  }

  { // ID: 16074
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_CEILING;
    block->facing = BellBlock::FACING_EAST;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16074] = block;
  }

  { // ID: 16075
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_SINGLE_WALL;
    block->facing = BellBlock::FACING_NORTH;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16075] = block;
  }

  { // ID: 16076
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_SINGLE_WALL;
    block->facing = BellBlock::FACING_NORTH;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16076] = block;
  }

  { // ID: 16077
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_SINGLE_WALL;
    block->facing = BellBlock::FACING_SOUTH;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16077] = block;
  }

  { // ID: 16078
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_SINGLE_WALL;
    block->facing = BellBlock::FACING_SOUTH;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16078] = block;
  }

  { // ID: 16079
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_SINGLE_WALL;
    block->facing = BellBlock::FACING_WEST;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16079] = block;
  }

  { // ID: 16080
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_SINGLE_WALL;
    block->facing = BellBlock::FACING_WEST;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16080] = block;
  }

  { // ID: 16081
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_SINGLE_WALL;
    block->facing = BellBlock::FACING_EAST;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16081] = block;
  }

  { // ID: 16082
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_SINGLE_WALL;
    block->facing = BellBlock::FACING_EAST;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16082] = block;
  }

  { // ID: 16083
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_DOUBLE_WALL;
    block->facing = BellBlock::FACING_NORTH;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16083] = block;
  }

  { // ID: 16084
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_DOUBLE_WALL;
    block->facing = BellBlock::FACING_NORTH;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16084] = block;
  }

  { // ID: 16085
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_DOUBLE_WALL;
    block->facing = BellBlock::FACING_SOUTH;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16085] = block;
  }

  { // ID: 16086
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_DOUBLE_WALL;
    block->facing = BellBlock::FACING_SOUTH;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16086] = block;
  }

  { // ID: 16087
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_DOUBLE_WALL;
    block->facing = BellBlock::FACING_WEST;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16087] = block;
  }

  { // ID: 16088
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_DOUBLE_WALL;
    block->facing = BellBlock::FACING_WEST;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16088] = block;
  }

  { // ID: 16089
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_DOUBLE_WALL;
    block->facing = BellBlock::FACING_EAST;
    block->powered = BellBlock::POWERED_TRUE;
    registry[16089] = block;
  }

  { // ID: 16090
    std::shared_ptr<BellBlock> block = std::make_shared<BellBlock>();
    block->attachment = BellBlock::ATTACHMENT_DOUBLE_WALL;
    block->facing = BellBlock::FACING_EAST;
    block->powered = BellBlock::POWERED_FALSE;
    registry[16090] = block;
  }

  { // ID: 16985
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_NORTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_0;
    registry[16985] = block;
  }

  { // ID: 16986
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_NORTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_1;
    registry[16986] = block;
  }

  { // ID: 16987
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_NORTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_2;
    registry[16987] = block;
  }

  { // ID: 16988
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_NORTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_3;
    registry[16988] = block;
  }

  { // ID: 16989
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_NORTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_4;
    registry[16989] = block;
  }

  { // ID: 16990
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_NORTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_5;
    registry[16990] = block;
  }

  { // ID: 16991
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_SOUTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_0;
    registry[16991] = block;
  }

  { // ID: 16992
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_SOUTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_1;
    registry[16992] = block;
  }

  { // ID: 16993
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_SOUTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_2;
    registry[16993] = block;
  }

  { // ID: 16994
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_SOUTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_3;
    registry[16994] = block;
  }

  { // ID: 16995
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_SOUTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_4;
    registry[16995] = block;
  }

  { // ID: 16996
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_SOUTH;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_5;
    registry[16996] = block;
  }

  { // ID: 16997
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_WEST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_0;
    registry[16997] = block;
  }

  { // ID: 16998
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_WEST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_1;
    registry[16998] = block;
  }

  { // ID: 16999
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_WEST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_2;
    registry[16999] = block;
  }

  { // ID: 17000
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_WEST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_3;
    registry[17000] = block;
  }

  { // ID: 17001
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_WEST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_4;
    registry[17001] = block;
  }

  { // ID: 17002
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_WEST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_5;
    registry[17002] = block;
  }

  { // ID: 17003
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_EAST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_0;
    registry[17003] = block;
  }

  { // ID: 17004
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_EAST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_1;
    registry[17004] = block;
  }

  { // ID: 17005
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_EAST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_2;
    registry[17005] = block;
  }

  { // ID: 17006
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_EAST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_3;
    registry[17006] = block;
  }

  { // ID: 17007
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_EAST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_4;
    registry[17007] = block;
  }

  { // ID: 17008
    std::shared_ptr<BeeNestBlock> block = std::make_shared<BeeNestBlock>();
    block->facing = BeeNestBlock::FACING_EAST;
    block->honey_level = BeeNestBlock::HONEY_LEVEL_5;
    registry[17008] = block;
  }

  { // ID: 17009
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_NORTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_0;
    registry[17009] = block;
  }

  { // ID: 17010
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_NORTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_1;
    registry[17010] = block;
  }

  { // ID: 17011
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_NORTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_2;
    registry[17011] = block;
  }

  { // ID: 17012
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_NORTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_3;
    registry[17012] = block;
  }

  { // ID: 17013
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_NORTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_4;
    registry[17013] = block;
  }

  { // ID: 17014
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_NORTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_5;
    registry[17014] = block;
  }

  { // ID: 17015
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_SOUTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_0;
    registry[17015] = block;
  }

  { // ID: 17016
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_SOUTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_1;
    registry[17016] = block;
  }

  { // ID: 17017
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_SOUTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_2;
    registry[17017] = block;
  }

  { // ID: 17018
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_SOUTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_3;
    registry[17018] = block;
  }

  { // ID: 17019
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_SOUTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_4;
    registry[17019] = block;
  }

  { // ID: 17020
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_SOUTH;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_5;
    registry[17020] = block;
  }

  { // ID: 17021
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_WEST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_0;
    registry[17021] = block;
  }

  { // ID: 17022
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_WEST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_1;
    registry[17022] = block;
  }

  { // ID: 17023
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_WEST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_2;
    registry[17023] = block;
  }

  { // ID: 17024
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_WEST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_3;
    registry[17024] = block;
  }

  { // ID: 17025
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_WEST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_4;
    registry[17025] = block;
  }

  { // ID: 17026
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_WEST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_5;
    registry[17026] = block;
  }

  { // ID: 17027
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_EAST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_0;
    registry[17027] = block;
  }

  { // ID: 17028
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_EAST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_1;
    registry[17028] = block;
  }

  { // ID: 17029
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_EAST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_2;
    registry[17029] = block;
  }

  { // ID: 17030
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_EAST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_3;
    registry[17030] = block;
  }

  { // ID: 17031
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_EAST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_4;
    registry[17031] = block;
  }

  { // ID: 17032
    std::shared_ptr<BeehiveBlock> block = std::make_shared<BeehiveBlock>();
    block->facing = BeehiveBlock::FACING_EAST;
    block->honey_level = BeehiveBlock::HONEY_LEVEL_5;
    registry[17032] = block;
  }

  { // ID: 17048
    std::shared_ptr<BlackstoneBlock> block = std::make_shared<BlackstoneBlock>();
    registry[17048] = block;
  }

  { // ID: 17049
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17049] = block;
  }

  { // ID: 17050
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17050] = block;
  }

  { // ID: 17051
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17051] = block;
  }

  { // ID: 17052
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17052] = block;
  }

  { // ID: 17053
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17053] = block;
  }

  { // ID: 17054
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17054] = block;
  }

  { // ID: 17055
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17055] = block;
  }

  { // ID: 17056
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17056] = block;
  }

  { // ID: 17057
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17057] = block;
  }

  { // ID: 17058
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17058] = block;
  }

  { // ID: 17059
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17059] = block;
  }

  { // ID: 17060
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17060] = block;
  }

  { // ID: 17061
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17061] = block;
  }

  { // ID: 17062
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17062] = block;
  }

  { // ID: 17063
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17063] = block;
  }

  { // ID: 17064
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17064] = block;
  }

  { // ID: 17065
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17065] = block;
  }

  { // ID: 17066
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17066] = block;
  }

  { // ID: 17067
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17067] = block;
  }

  { // ID: 17068
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_NORTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17068] = block;
  }

  { // ID: 17069
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17069] = block;
  }

  { // ID: 17070
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17070] = block;
  }

  { // ID: 17071
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17071] = block;
  }

  { // ID: 17072
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17072] = block;
  }

  { // ID: 17073
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17073] = block;
  }

  { // ID: 17074
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17074] = block;
  }

  { // ID: 17075
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17075] = block;
  }

  { // ID: 17076
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17076] = block;
  }

  { // ID: 17077
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17077] = block;
  }

  { // ID: 17078
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17078] = block;
  }

  { // ID: 17079
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17079] = block;
  }

  { // ID: 17080
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17080] = block;
  }

  { // ID: 17081
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17081] = block;
  }

  { // ID: 17082
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17082] = block;
  }

  { // ID: 17083
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17083] = block;
  }

  { // ID: 17084
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17084] = block;
  }

  { // ID: 17085
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17085] = block;
  }

  { // ID: 17086
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17086] = block;
  }

  { // ID: 17087
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17087] = block;
  }

  { // ID: 17088
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_SOUTH;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17088] = block;
  }

  { // ID: 17089
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17089] = block;
  }

  { // ID: 17090
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17090] = block;
  }

  { // ID: 17091
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17091] = block;
  }

  { // ID: 17092
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17092] = block;
  }

  { // ID: 17093
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17093] = block;
  }

  { // ID: 17094
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17094] = block;
  }

  { // ID: 17095
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17095] = block;
  }

  { // ID: 17096
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17096] = block;
  }

  { // ID: 17097
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17097] = block;
  }

  { // ID: 17098
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17098] = block;
  }

  { // ID: 17099
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17099] = block;
  }

  { // ID: 17100
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17100] = block;
  }

  { // ID: 17101
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17101] = block;
  }

  { // ID: 17102
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17102] = block;
  }

  { // ID: 17103
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17103] = block;
  }

  { // ID: 17104
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17104] = block;
  }

  { // ID: 17105
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17105] = block;
  }

  { // ID: 17106
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17106] = block;
  }

  { // ID: 17107
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17107] = block;
  }

  { // ID: 17108
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_WEST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17108] = block;
  }

  { // ID: 17109
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17109] = block;
  }

  { // ID: 17110
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17110] = block;
  }

  { // ID: 17111
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17111] = block;
  }

  { // ID: 17112
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17112] = block;
  }

  { // ID: 17113
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17113] = block;
  }

  { // ID: 17114
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17114] = block;
  }

  { // ID: 17115
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17115] = block;
  }

  { // ID: 17116
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17116] = block;
  }

  { // ID: 17117
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17117] = block;
  }

  { // ID: 17118
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_TOP;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17118] = block;
  }

  { // ID: 17119
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17119] = block;
  }

  { // ID: 17120
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17120] = block;
  }

  { // ID: 17121
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17121] = block;
  }

  { // ID: 17122
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17122] = block;
  }

  { // ID: 17123
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17123] = block;
  }

  { // ID: 17124
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17124] = block;
  }

  { // ID: 17125
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17125] = block;
  }

  { // ID: 17126
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17126] = block;
  }

  { // ID: 17127
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_TRUE;
    registry[17127] = block;
  }

  { // ID: 17128
    std::shared_ptr<BlackstoneStairsBlock> block = std::make_shared<BlackstoneStairsBlock>();
    block->facing = BlackstoneStairsBlock::FACING_EAST;
    block->half = BlackstoneStairsBlock::HALF_BOTTOM;
    block->shape = BlackstoneStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = BlackstoneStairsBlock::WATERLOGGED_FALSE;
    registry[17128] = block;
  }

  { // ID: 17129
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17129] = block;
  }

  { // ID: 17130
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17130] = block;
  }

  { // ID: 17131
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17131] = block;
  }

  { // ID: 17132
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17132] = block;
  }

  { // ID: 17133
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17133] = block;
  }

  { // ID: 17134
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17134] = block;
  }

  { // ID: 17135
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17135] = block;
  }

  { // ID: 17136
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17136] = block;
  }

  { // ID: 17137
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17137] = block;
  }

  { // ID: 17138
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17138] = block;
  }

  { // ID: 17139
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17139] = block;
  }

  { // ID: 17140
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17140] = block;
  }

  { // ID: 17141
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17141] = block;
  }

  { // ID: 17142
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17142] = block;
  }

  { // ID: 17143
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17143] = block;
  }

  { // ID: 17144
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17144] = block;
  }

  { // ID: 17145
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17145] = block;
  }

  { // ID: 17146
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17146] = block;
  }

  { // ID: 17147
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17147] = block;
  }

  { // ID: 17148
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17148] = block;
  }

  { // ID: 17149
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17149] = block;
  }

  { // ID: 17150
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17150] = block;
  }

  { // ID: 17151
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17151] = block;
  }

  { // ID: 17152
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17152] = block;
  }

  { // ID: 17153
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17153] = block;
  }

  { // ID: 17154
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17154] = block;
  }

  { // ID: 17155
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17155] = block;
  }

  { // ID: 17156
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17156] = block;
  }

  { // ID: 17157
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17157] = block;
  }

  { // ID: 17158
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17158] = block;
  }

  { // ID: 17159
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17159] = block;
  }

  { // ID: 17160
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17160] = block;
  }

  { // ID: 17161
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17161] = block;
  }

  { // ID: 17162
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17162] = block;
  }

  { // ID: 17163
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17163] = block;
  }

  { // ID: 17164
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17164] = block;
  }

  { // ID: 17165
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17165] = block;
  }

  { // ID: 17166
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17166] = block;
  }

  { // ID: 17167
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17167] = block;
  }

  { // ID: 17168
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17168] = block;
  }

  { // ID: 17169
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17169] = block;
  }

  { // ID: 17170
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17170] = block;
  }

  { // ID: 17171
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17171] = block;
  }

  { // ID: 17172
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17172] = block;
  }

  { // ID: 17173
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17173] = block;
  }

  { // ID: 17174
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17174] = block;
  }

  { // ID: 17175
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17175] = block;
  }

  { // ID: 17176
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17176] = block;
  }

  { // ID: 17177
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17177] = block;
  }

  { // ID: 17178
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17178] = block;
  }

  { // ID: 17179
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17179] = block;
  }

  { // ID: 17180
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17180] = block;
  }

  { // ID: 17181
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17181] = block;
  }

  { // ID: 17182
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17182] = block;
  }

  { // ID: 17183
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17183] = block;
  }

  { // ID: 17184
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17184] = block;
  }

  { // ID: 17185
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17185] = block;
  }

  { // ID: 17186
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17186] = block;
  }

  { // ID: 17187
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17187] = block;
  }

  { // ID: 17188
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17188] = block;
  }

  { // ID: 17189
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17189] = block;
  }

  { // ID: 17190
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17190] = block;
  }

  { // ID: 17191
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17191] = block;
  }

  { // ID: 17192
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17192] = block;
  }

  { // ID: 17193
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17193] = block;
  }

  { // ID: 17194
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17194] = block;
  }

  { // ID: 17195
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17195] = block;
  }

  { // ID: 17196
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17196] = block;
  }

  { // ID: 17197
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17197] = block;
  }

  { // ID: 17198
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17198] = block;
  }

  { // ID: 17199
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17199] = block;
  }

  { // ID: 17200
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17200] = block;
  }

  { // ID: 17201
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17201] = block;
  }

  { // ID: 17202
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17202] = block;
  }

  { // ID: 17203
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17203] = block;
  }

  { // ID: 17204
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17204] = block;
  }

  { // ID: 17205
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17205] = block;
  }

  { // ID: 17206
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17206] = block;
  }

  { // ID: 17207
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17207] = block;
  }

  { // ID: 17208
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17208] = block;
  }

  { // ID: 17209
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17209] = block;
  }

  { // ID: 17210
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17210] = block;
  }

  { // ID: 17211
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17211] = block;
  }

  { // ID: 17212
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17212] = block;
  }

  { // ID: 17213
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17213] = block;
  }

  { // ID: 17214
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17214] = block;
  }

  { // ID: 17215
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17215] = block;
  }

  { // ID: 17216
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17216] = block;
  }

  { // ID: 17217
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17217] = block;
  }

  { // ID: 17218
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17218] = block;
  }

  { // ID: 17219
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17219] = block;
  }

  { // ID: 17220
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17220] = block;
  }

  { // ID: 17221
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17221] = block;
  }

  { // ID: 17222
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17222] = block;
  }

  { // ID: 17223
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17223] = block;
  }

  { // ID: 17224
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17224] = block;
  }

  { // ID: 17225
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17225] = block;
  }

  { // ID: 17226
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17226] = block;
  }

  { // ID: 17227
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17227] = block;
  }

  { // ID: 17228
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17228] = block;
  }

  { // ID: 17229
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17229] = block;
  }

  { // ID: 17230
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17230] = block;
  }

  { // ID: 17231
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17231] = block;
  }

  { // ID: 17232
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17232] = block;
  }

  { // ID: 17233
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17233] = block;
  }

  { // ID: 17234
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17234] = block;
  }

  { // ID: 17235
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17235] = block;
  }

  { // ID: 17236
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_NONE;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17236] = block;
  }

  { // ID: 17237
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17237] = block;
  }

  { // ID: 17238
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17238] = block;
  }

  { // ID: 17239
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17239] = block;
  }

  { // ID: 17240
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17240] = block;
  }

  { // ID: 17241
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17241] = block;
  }

  { // ID: 17242
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17242] = block;
  }

  { // ID: 17243
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17243] = block;
  }

  { // ID: 17244
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17244] = block;
  }

  { // ID: 17245
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17245] = block;
  }

  { // ID: 17246
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17246] = block;
  }

  { // ID: 17247
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17247] = block;
  }

  { // ID: 17248
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17248] = block;
  }

  { // ID: 17249
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17249] = block;
  }

  { // ID: 17250
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17250] = block;
  }

  { // ID: 17251
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17251] = block;
  }

  { // ID: 17252
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17252] = block;
  }

  { // ID: 17253
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17253] = block;
  }

  { // ID: 17254
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17254] = block;
  }

  { // ID: 17255
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17255] = block;
  }

  { // ID: 17256
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17256] = block;
  }

  { // ID: 17257
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17257] = block;
  }

  { // ID: 17258
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17258] = block;
  }

  { // ID: 17259
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17259] = block;
  }

  { // ID: 17260
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17260] = block;
  }

  { // ID: 17261
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17261] = block;
  }

  { // ID: 17262
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17262] = block;
  }

  { // ID: 17263
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17263] = block;
  }

  { // ID: 17264
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17264] = block;
  }

  { // ID: 17265
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17265] = block;
  }

  { // ID: 17266
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17266] = block;
  }

  { // ID: 17267
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17267] = block;
  }

  { // ID: 17268
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17268] = block;
  }

  { // ID: 17269
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17269] = block;
  }

  { // ID: 17270
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17270] = block;
  }

  { // ID: 17271
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17271] = block;
  }

  { // ID: 17272
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17272] = block;
  }

  { // ID: 17273
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17273] = block;
  }

  { // ID: 17274
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17274] = block;
  }

  { // ID: 17275
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17275] = block;
  }

  { // ID: 17276
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17276] = block;
  }

  { // ID: 17277
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17277] = block;
  }

  { // ID: 17278
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17278] = block;
  }

  { // ID: 17279
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17279] = block;
  }

  { // ID: 17280
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17280] = block;
  }

  { // ID: 17281
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17281] = block;
  }

  { // ID: 17282
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17282] = block;
  }

  { // ID: 17283
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17283] = block;
  }

  { // ID: 17284
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17284] = block;
  }

  { // ID: 17285
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17285] = block;
  }

  { // ID: 17286
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17286] = block;
  }

  { // ID: 17287
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17287] = block;
  }

  { // ID: 17288
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17288] = block;
  }

  { // ID: 17289
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17289] = block;
  }

  { // ID: 17290
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17290] = block;
  }

  { // ID: 17291
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17291] = block;
  }

  { // ID: 17292
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17292] = block;
  }

  { // ID: 17293
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17293] = block;
  }

  { // ID: 17294
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17294] = block;
  }

  { // ID: 17295
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17295] = block;
  }

  { // ID: 17296
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17296] = block;
  }

  { // ID: 17297
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17297] = block;
  }

  { // ID: 17298
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17298] = block;
  }

  { // ID: 17299
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17299] = block;
  }

  { // ID: 17300
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17300] = block;
  }

  { // ID: 17301
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17301] = block;
  }

  { // ID: 17302
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17302] = block;
  }

  { // ID: 17303
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17303] = block;
  }

  { // ID: 17304
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17304] = block;
  }

  { // ID: 17305
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17305] = block;
  }

  { // ID: 17306
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17306] = block;
  }

  { // ID: 17307
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17307] = block;
  }

  { // ID: 17308
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17308] = block;
  }

  { // ID: 17309
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17309] = block;
  }

  { // ID: 17310
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17310] = block;
  }

  { // ID: 17311
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17311] = block;
  }

  { // ID: 17312
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17312] = block;
  }

  { // ID: 17313
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17313] = block;
  }

  { // ID: 17314
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17314] = block;
  }

  { // ID: 17315
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17315] = block;
  }

  { // ID: 17316
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17316] = block;
  }

  { // ID: 17317
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17317] = block;
  }

  { // ID: 17318
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17318] = block;
  }

  { // ID: 17319
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17319] = block;
  }

  { // ID: 17320
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17320] = block;
  }

  { // ID: 17321
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17321] = block;
  }

  { // ID: 17322
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17322] = block;
  }

  { // ID: 17323
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17323] = block;
  }

  { // ID: 17324
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17324] = block;
  }

  { // ID: 17325
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17325] = block;
  }

  { // ID: 17326
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17326] = block;
  }

  { // ID: 17327
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17327] = block;
  }

  { // ID: 17328
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17328] = block;
  }

  { // ID: 17329
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17329] = block;
  }

  { // ID: 17330
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17330] = block;
  }

  { // ID: 17331
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17331] = block;
  }

  { // ID: 17332
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17332] = block;
  }

  { // ID: 17333
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17333] = block;
  }

  { // ID: 17334
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17334] = block;
  }

  { // ID: 17335
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17335] = block;
  }

  { // ID: 17336
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17336] = block;
  }

  { // ID: 17337
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17337] = block;
  }

  { // ID: 17338
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17338] = block;
  }

  { // ID: 17339
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17339] = block;
  }

  { // ID: 17340
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17340] = block;
  }

  { // ID: 17341
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17341] = block;
  }

  { // ID: 17342
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17342] = block;
  }

  { // ID: 17343
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17343] = block;
  }

  { // ID: 17344
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_LOW;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17344] = block;
  }

  { // ID: 17345
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17345] = block;
  }

  { // ID: 17346
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17346] = block;
  }

  { // ID: 17347
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17347] = block;
  }

  { // ID: 17348
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17348] = block;
  }

  { // ID: 17349
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17349] = block;
  }

  { // ID: 17350
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17350] = block;
  }

  { // ID: 17351
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17351] = block;
  }

  { // ID: 17352
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17352] = block;
  }

  { // ID: 17353
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17353] = block;
  }

  { // ID: 17354
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17354] = block;
  }

  { // ID: 17355
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17355] = block;
  }

  { // ID: 17356
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17356] = block;
  }

  { // ID: 17357
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17357] = block;
  }

  { // ID: 17358
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17358] = block;
  }

  { // ID: 17359
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17359] = block;
  }

  { // ID: 17360
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17360] = block;
  }

  { // ID: 17361
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17361] = block;
  }

  { // ID: 17362
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17362] = block;
  }

  { // ID: 17363
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17363] = block;
  }

  { // ID: 17364
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17364] = block;
  }

  { // ID: 17365
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17365] = block;
  }

  { // ID: 17366
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17366] = block;
  }

  { // ID: 17367
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17367] = block;
  }

  { // ID: 17368
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17368] = block;
  }

  { // ID: 17369
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17369] = block;
  }

  { // ID: 17370
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17370] = block;
  }

  { // ID: 17371
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17371] = block;
  }

  { // ID: 17372
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17372] = block;
  }

  { // ID: 17373
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17373] = block;
  }

  { // ID: 17374
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17374] = block;
  }

  { // ID: 17375
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17375] = block;
  }

  { // ID: 17376
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17376] = block;
  }

  { // ID: 17377
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17377] = block;
  }

  { // ID: 17378
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17378] = block;
  }

  { // ID: 17379
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17379] = block;
  }

  { // ID: 17380
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_NONE;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17380] = block;
  }

  { // ID: 17381
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17381] = block;
  }

  { // ID: 17382
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17382] = block;
  }

  { // ID: 17383
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17383] = block;
  }

  { // ID: 17384
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17384] = block;
  }

  { // ID: 17385
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17385] = block;
  }

  { // ID: 17386
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17386] = block;
  }

  { // ID: 17387
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17387] = block;
  }

  { // ID: 17388
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17388] = block;
  }

  { // ID: 17389
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17389] = block;
  }

  { // ID: 17390
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17390] = block;
  }

  { // ID: 17391
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17391] = block;
  }

  { // ID: 17392
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17392] = block;
  }

  { // ID: 17393
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17393] = block;
  }

  { // ID: 17394
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17394] = block;
  }

  { // ID: 17395
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17395] = block;
  }

  { // ID: 17396
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17396] = block;
  }

  { // ID: 17397
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17397] = block;
  }

  { // ID: 17398
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17398] = block;
  }

  { // ID: 17399
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17399] = block;
  }

  { // ID: 17400
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17400] = block;
  }

  { // ID: 17401
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17401] = block;
  }

  { // ID: 17402
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17402] = block;
  }

  { // ID: 17403
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17403] = block;
  }

  { // ID: 17404
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17404] = block;
  }

  { // ID: 17405
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17405] = block;
  }

  { // ID: 17406
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17406] = block;
  }

  { // ID: 17407
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17407] = block;
  }

  { // ID: 17408
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17408] = block;
  }

  { // ID: 17409
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17409] = block;
  }

  { // ID: 17410
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17410] = block;
  }

  { // ID: 17411
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17411] = block;
  }

  { // ID: 17412
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17412] = block;
  }

  { // ID: 17413
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17413] = block;
  }

  { // ID: 17414
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17414] = block;
  }

  { // ID: 17415
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17415] = block;
  }

  { // ID: 17416
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_LOW;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17416] = block;
  }

  { // ID: 17417
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17417] = block;
  }

  { // ID: 17418
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17418] = block;
  }

  { // ID: 17419
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17419] = block;
  }

  { // ID: 17420
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17420] = block;
  }

  { // ID: 17421
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17421] = block;
  }

  { // ID: 17422
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17422] = block;
  }

  { // ID: 17423
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17423] = block;
  }

  { // ID: 17424
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17424] = block;
  }

  { // ID: 17425
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17425] = block;
  }

  { // ID: 17426
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17426] = block;
  }

  { // ID: 17427
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17427] = block;
  }

  { // ID: 17428
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_NONE;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17428] = block;
  }

  { // ID: 17429
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17429] = block;
  }

  { // ID: 17430
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17430] = block;
  }

  { // ID: 17431
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17431] = block;
  }

  { // ID: 17432
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17432] = block;
  }

  { // ID: 17433
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17433] = block;
  }

  { // ID: 17434
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17434] = block;
  }

  { // ID: 17435
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17435] = block;
  }

  { // ID: 17436
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17436] = block;
  }

  { // ID: 17437
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17437] = block;
  }

  { // ID: 17438
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17438] = block;
  }

  { // ID: 17439
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17439] = block;
  }

  { // ID: 17440
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_LOW;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17440] = block;
  }

  { // ID: 17441
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17441] = block;
  }

  { // ID: 17442
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17442] = block;
  }

  { // ID: 17443
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17443] = block;
  }

  { // ID: 17444
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17444] = block;
  }

  { // ID: 17445
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17445] = block;
  }

  { // ID: 17446
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_TRUE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17446] = block;
  }

  { // ID: 17447
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17447] = block;
  }

  { // ID: 17448
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17448] = block;
  }

  { // ID: 17449
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_TRUE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17449] = block;
  }

  { // ID: 17450
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_NONE;
    registry[17450] = block;
  }

  { // ID: 17451
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_LOW;
    registry[17451] = block;
  }

  { // ID: 17452
    std::shared_ptr<BlackstoneWallBlock> block = std::make_shared<BlackstoneWallBlock>();
    block->east = BlackstoneWallBlock::EAST_TALL;
    block->north = BlackstoneWallBlock::NORTH_TALL;
    block->south = BlackstoneWallBlock::SOUTH_TALL;
    block->up = BlackstoneWallBlock::UP_FALSE;
    block->waterlogged = BlackstoneWallBlock::WATERLOGGED_FALSE;
    block->west = BlackstoneWallBlock::WEST_TALL;
    registry[17452] = block;
  }

  { // ID: 17453
    std::shared_ptr<BlackstoneSlabBlock> block = std::make_shared<BlackstoneSlabBlock>();
    block->type = BlackstoneSlabBlock::TYPE_TOP;
    block->waterlogged = BlackstoneSlabBlock::WATERLOGGED_TRUE;
    registry[17453] = block;
  }

  { // ID: 17454
    std::shared_ptr<BlackstoneSlabBlock> block = std::make_shared<BlackstoneSlabBlock>();
    block->type = BlackstoneSlabBlock::TYPE_TOP;
    block->waterlogged = BlackstoneSlabBlock::WATERLOGGED_FALSE;
    registry[17454] = block;
  }

  { // ID: 17455
    std::shared_ptr<BlackstoneSlabBlock> block = std::make_shared<BlackstoneSlabBlock>();
    block->type = BlackstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = BlackstoneSlabBlock::WATERLOGGED_TRUE;
    registry[17455] = block;
  }

  { // ID: 17456
    std::shared_ptr<BlackstoneSlabBlock> block = std::make_shared<BlackstoneSlabBlock>();
    block->type = BlackstoneSlabBlock::TYPE_BOTTOM;
    block->waterlogged = BlackstoneSlabBlock::WATERLOGGED_FALSE;
    registry[17456] = block;
  }

  { // ID: 17457
    std::shared_ptr<BlackstoneSlabBlock> block = std::make_shared<BlackstoneSlabBlock>();
    block->type = BlackstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = BlackstoneSlabBlock::WATERLOGGED_TRUE;
    registry[17457] = block;
  }

  { // ID: 17458
    std::shared_ptr<BlackstoneSlabBlock> block = std::make_shared<BlackstoneSlabBlock>();
    block->type = BlackstoneSlabBlock::TYPE_DOUBLE;
    block->waterlogged = BlackstoneSlabBlock::WATERLOGGED_FALSE;
    registry[17458] = block;
  }

  { // ID: 18505
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_1;
    block->lit = BlueCandleBlock::LIT_TRUE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_TRUE;
    registry[18505] = block;
  }

  { // ID: 18506
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_1;
    block->lit = BlueCandleBlock::LIT_TRUE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_FALSE;
    registry[18506] = block;
  }

  { // ID: 18507
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_1;
    block->lit = BlueCandleBlock::LIT_FALSE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_TRUE;
    registry[18507] = block;
  }

  { // ID: 18508
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_1;
    block->lit = BlueCandleBlock::LIT_FALSE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_FALSE;
    registry[18508] = block;
  }

  { // ID: 18509
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_2;
    block->lit = BlueCandleBlock::LIT_TRUE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_TRUE;
    registry[18509] = block;
  }

  { // ID: 18510
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_2;
    block->lit = BlueCandleBlock::LIT_TRUE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_FALSE;
    registry[18510] = block;
  }

  { // ID: 18511
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_2;
    block->lit = BlueCandleBlock::LIT_FALSE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_TRUE;
    registry[18511] = block;
  }

  { // ID: 18512
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_2;
    block->lit = BlueCandleBlock::LIT_FALSE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_FALSE;
    registry[18512] = block;
  }

  { // ID: 18513
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_3;
    block->lit = BlueCandleBlock::LIT_TRUE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_TRUE;
    registry[18513] = block;
  }

  { // ID: 18514
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_3;
    block->lit = BlueCandleBlock::LIT_TRUE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_FALSE;
    registry[18514] = block;
  }

  { // ID: 18515
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_3;
    block->lit = BlueCandleBlock::LIT_FALSE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_TRUE;
    registry[18515] = block;
  }

  { // ID: 18516
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_3;
    block->lit = BlueCandleBlock::LIT_FALSE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_FALSE;
    registry[18516] = block;
  }

  { // ID: 18517
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_4;
    block->lit = BlueCandleBlock::LIT_TRUE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_TRUE;
    registry[18517] = block;
  }

  { // ID: 18518
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_4;
    block->lit = BlueCandleBlock::LIT_TRUE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_FALSE;
    registry[18518] = block;
  }

  { // ID: 18519
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_4;
    block->lit = BlueCandleBlock::LIT_FALSE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_TRUE;
    registry[18519] = block;
  }

  { // ID: 18520
    std::shared_ptr<BlueCandleBlock> block = std::make_shared<BlueCandleBlock>();
    block->candles = BlueCandleBlock::CANDLES_4;
    block->lit = BlueCandleBlock::LIT_FALSE;
    block->waterlogged = BlueCandleBlock::WATERLOGGED_FALSE;
    registry[18520] = block;
  }

  { // ID: 18521
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_1;
    block->lit = BrownCandleBlock::LIT_TRUE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_TRUE;
    registry[18521] = block;
  }

  { // ID: 18522
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_1;
    block->lit = BrownCandleBlock::LIT_TRUE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_FALSE;
    registry[18522] = block;
  }

  { // ID: 18523
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_1;
    block->lit = BrownCandleBlock::LIT_FALSE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_TRUE;
    registry[18523] = block;
  }

  { // ID: 18524
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_1;
    block->lit = BrownCandleBlock::LIT_FALSE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_FALSE;
    registry[18524] = block;
  }

  { // ID: 18525
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_2;
    block->lit = BrownCandleBlock::LIT_TRUE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_TRUE;
    registry[18525] = block;
  }

  { // ID: 18526
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_2;
    block->lit = BrownCandleBlock::LIT_TRUE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_FALSE;
    registry[18526] = block;
  }

  { // ID: 18527
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_2;
    block->lit = BrownCandleBlock::LIT_FALSE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_TRUE;
    registry[18527] = block;
  }

  { // ID: 18528
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_2;
    block->lit = BrownCandleBlock::LIT_FALSE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_FALSE;
    registry[18528] = block;
  }

  { // ID: 18529
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_3;
    block->lit = BrownCandleBlock::LIT_TRUE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_TRUE;
    registry[18529] = block;
  }

  { // ID: 18530
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_3;
    block->lit = BrownCandleBlock::LIT_TRUE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_FALSE;
    registry[18530] = block;
  }

  { // ID: 18531
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_3;
    block->lit = BrownCandleBlock::LIT_FALSE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_TRUE;
    registry[18531] = block;
  }

  { // ID: 18532
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_3;
    block->lit = BrownCandleBlock::LIT_FALSE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_FALSE;
    registry[18532] = block;
  }

  { // ID: 18533
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_4;
    block->lit = BrownCandleBlock::LIT_TRUE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_TRUE;
    registry[18533] = block;
  }

  { // ID: 18534
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_4;
    block->lit = BrownCandleBlock::LIT_TRUE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_FALSE;
    registry[18534] = block;
  }

  { // ID: 18535
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_4;
    block->lit = BrownCandleBlock::LIT_FALSE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_TRUE;
    registry[18535] = block;
  }

  { // ID: 18536
    std::shared_ptr<BrownCandleBlock> block = std::make_shared<BrownCandleBlock>();
    block->candles = BrownCandleBlock::CANDLES_4;
    block->lit = BrownCandleBlock::LIT_FALSE;
    block->waterlogged = BrownCandleBlock::WATERLOGGED_FALSE;
    registry[18536] = block;
  }

  { // ID: 18569
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_1;
    block->lit = BlackCandleBlock::LIT_TRUE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_TRUE;
    registry[18569] = block;
  }

  { // ID: 18570
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_1;
    block->lit = BlackCandleBlock::LIT_TRUE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_FALSE;
    registry[18570] = block;
  }

  { // ID: 18571
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_1;
    block->lit = BlackCandleBlock::LIT_FALSE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_TRUE;
    registry[18571] = block;
  }

  { // ID: 18572
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_1;
    block->lit = BlackCandleBlock::LIT_FALSE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_FALSE;
    registry[18572] = block;
  }

  { // ID: 18573
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_2;
    block->lit = BlackCandleBlock::LIT_TRUE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_TRUE;
    registry[18573] = block;
  }

  { // ID: 18574
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_2;
    block->lit = BlackCandleBlock::LIT_TRUE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_FALSE;
    registry[18574] = block;
  }

  { // ID: 18575
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_2;
    block->lit = BlackCandleBlock::LIT_FALSE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_TRUE;
    registry[18575] = block;
  }

  { // ID: 18576
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_2;
    block->lit = BlackCandleBlock::LIT_FALSE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_FALSE;
    registry[18576] = block;
  }

  { // ID: 18577
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_3;
    block->lit = BlackCandleBlock::LIT_TRUE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_TRUE;
    registry[18577] = block;
  }

  { // ID: 18578
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_3;
    block->lit = BlackCandleBlock::LIT_TRUE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_FALSE;
    registry[18578] = block;
  }

  { // ID: 18579
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_3;
    block->lit = BlackCandleBlock::LIT_FALSE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_TRUE;
    registry[18579] = block;
  }

  { // ID: 18580
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_3;
    block->lit = BlackCandleBlock::LIT_FALSE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_FALSE;
    registry[18580] = block;
  }

  { // ID: 18581
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_4;
    block->lit = BlackCandleBlock::LIT_TRUE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_TRUE;
    registry[18581] = block;
  }

  { // ID: 18582
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_4;
    block->lit = BlackCandleBlock::LIT_TRUE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_FALSE;
    registry[18582] = block;
  }

  { // ID: 18583
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_4;
    block->lit = BlackCandleBlock::LIT_FALSE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_TRUE;
    registry[18583] = block;
  }

  { // ID: 18584
    std::shared_ptr<BlackCandleBlock> block = std::make_shared<BlackCandleBlock>();
    block->candles = BlackCandleBlock::CANDLES_4;
    block->lit = BlackCandleBlock::LIT_FALSE;
    block->waterlogged = BlackCandleBlock::WATERLOGGED_FALSE;
    registry[18584] = block;
  }

  { // ID: 18609
    std::shared_ptr<BlueCandleCakeBlock> block = std::make_shared<BlueCandleCakeBlock>();
    block->lit = BlueCandleCakeBlock::LIT_TRUE;
    registry[18609] = block;
  }

  { // ID: 18610
    std::shared_ptr<BlueCandleCakeBlock> block = std::make_shared<BlueCandleCakeBlock>();
    block->lit = BlueCandleCakeBlock::LIT_FALSE;
    registry[18610] = block;
  }

  { // ID: 18611
    std::shared_ptr<BrownCandleCakeBlock> block = std::make_shared<BrownCandleCakeBlock>();
    block->lit = BrownCandleCakeBlock::LIT_TRUE;
    registry[18611] = block;
  }

  { // ID: 18612
    std::shared_ptr<BrownCandleCakeBlock> block = std::make_shared<BrownCandleCakeBlock>();
    block->lit = BrownCandleCakeBlock::LIT_FALSE;
    registry[18612] = block;
  }

  { // ID: 18617
    std::shared_ptr<BlackCandleCakeBlock> block = std::make_shared<BlackCandleCakeBlock>();
    block->lit = BlackCandleCakeBlock::LIT_TRUE;
    registry[18617] = block;
  }

  { // ID: 18618
    std::shared_ptr<BlackCandleCakeBlock> block = std::make_shared<BlackCandleCakeBlock>();
    block->lit = BlackCandleCakeBlock::LIT_FALSE;
    registry[18618] = block;
  }

  { // ID: 18620
    std::shared_ptr<BuddingAmethystBlock> block = std::make_shared<BuddingAmethystBlock>();
    registry[18620] = block;
  }

  { // ID: 19718
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_NORTH;
    block->tilt = BigDripleafBlock::TILT_NONE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19718] = block;
  }

  { // ID: 19719
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_NORTH;
    block->tilt = BigDripleafBlock::TILT_NONE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19719] = block;
  }

  { // ID: 19720
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_NORTH;
    block->tilt = BigDripleafBlock::TILT_UNSTABLE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19720] = block;
  }

  { // ID: 19721
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_NORTH;
    block->tilt = BigDripleafBlock::TILT_UNSTABLE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19721] = block;
  }

  { // ID: 19722
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_NORTH;
    block->tilt = BigDripleafBlock::TILT_PARTIAL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19722] = block;
  }

  { // ID: 19723
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_NORTH;
    block->tilt = BigDripleafBlock::TILT_PARTIAL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19723] = block;
  }

  { // ID: 19724
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_NORTH;
    block->tilt = BigDripleafBlock::TILT_FULL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19724] = block;
  }

  { // ID: 19725
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_NORTH;
    block->tilt = BigDripleafBlock::TILT_FULL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19725] = block;
  }

  { // ID: 19726
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_SOUTH;
    block->tilt = BigDripleafBlock::TILT_NONE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19726] = block;
  }

  { // ID: 19727
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_SOUTH;
    block->tilt = BigDripleafBlock::TILT_NONE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19727] = block;
  }

  { // ID: 19728
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_SOUTH;
    block->tilt = BigDripleafBlock::TILT_UNSTABLE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19728] = block;
  }

  { // ID: 19729
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_SOUTH;
    block->tilt = BigDripleafBlock::TILT_UNSTABLE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19729] = block;
  }

  { // ID: 19730
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_SOUTH;
    block->tilt = BigDripleafBlock::TILT_PARTIAL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19730] = block;
  }

  { // ID: 19731
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_SOUTH;
    block->tilt = BigDripleafBlock::TILT_PARTIAL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19731] = block;
  }

  { // ID: 19732
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_SOUTH;
    block->tilt = BigDripleafBlock::TILT_FULL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19732] = block;
  }

  { // ID: 19733
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_SOUTH;
    block->tilt = BigDripleafBlock::TILT_FULL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19733] = block;
  }

  { // ID: 19734
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_WEST;
    block->tilt = BigDripleafBlock::TILT_NONE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19734] = block;
  }

  { // ID: 19735
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_WEST;
    block->tilt = BigDripleafBlock::TILT_NONE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19735] = block;
  }

  { // ID: 19736
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_WEST;
    block->tilt = BigDripleafBlock::TILT_UNSTABLE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19736] = block;
  }

  { // ID: 19737
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_WEST;
    block->tilt = BigDripleafBlock::TILT_UNSTABLE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19737] = block;
  }

  { // ID: 19738
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_WEST;
    block->tilt = BigDripleafBlock::TILT_PARTIAL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19738] = block;
  }

  { // ID: 19739
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_WEST;
    block->tilt = BigDripleafBlock::TILT_PARTIAL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19739] = block;
  }

  { // ID: 19740
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_WEST;
    block->tilt = BigDripleafBlock::TILT_FULL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19740] = block;
  }

  { // ID: 19741
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_WEST;
    block->tilt = BigDripleafBlock::TILT_FULL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19741] = block;
  }

  { // ID: 19742
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_EAST;
    block->tilt = BigDripleafBlock::TILT_NONE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19742] = block;
  }

  { // ID: 19743
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_EAST;
    block->tilt = BigDripleafBlock::TILT_NONE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19743] = block;
  }

  { // ID: 19744
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_EAST;
    block->tilt = BigDripleafBlock::TILT_UNSTABLE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19744] = block;
  }

  { // ID: 19745
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_EAST;
    block->tilt = BigDripleafBlock::TILT_UNSTABLE;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19745] = block;
  }

  { // ID: 19746
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_EAST;
    block->tilt = BigDripleafBlock::TILT_PARTIAL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19746] = block;
  }

  { // ID: 19747
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_EAST;
    block->tilt = BigDripleafBlock::TILT_PARTIAL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19747] = block;
  }

  { // ID: 19748
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_EAST;
    block->tilt = BigDripleafBlock::TILT_FULL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_TRUE;
    registry[19748] = block;
  }

  { // ID: 19749
    std::shared_ptr<BigDripleafBlock> block = std::make_shared<BigDripleafBlock>();
    block->facing = BigDripleafBlock::FACING_EAST;
    block->tilt = BigDripleafBlock::TILT_FULL;
    block->waterlogged = BigDripleafBlock::WATERLOGGED_FALSE;
    registry[19749] = block;
  }

  { // ID: 19750
    std::shared_ptr<BigDripleafStemBlock> block = std::make_shared<BigDripleafStemBlock>();
    block->facing = BigDripleafStemBlock::FACING_NORTH;
    block->waterlogged = BigDripleafStemBlock::WATERLOGGED_TRUE;
    registry[19750] = block;
  }

  { // ID: 19751
    std::shared_ptr<BigDripleafStemBlock> block = std::make_shared<BigDripleafStemBlock>();
    block->facing = BigDripleafStemBlock::FACING_NORTH;
    block->waterlogged = BigDripleafStemBlock::WATERLOGGED_FALSE;
    registry[19751] = block;
  }

  { // ID: 19752
    std::shared_ptr<BigDripleafStemBlock> block = std::make_shared<BigDripleafStemBlock>();
    block->facing = BigDripleafStemBlock::FACING_SOUTH;
    block->waterlogged = BigDripleafStemBlock::WATERLOGGED_TRUE;
    registry[19752] = block;
  }

  { // ID: 19753
    std::shared_ptr<BigDripleafStemBlock> block = std::make_shared<BigDripleafStemBlock>();
    block->facing = BigDripleafStemBlock::FACING_SOUTH;
    block->waterlogged = BigDripleafStemBlock::WATERLOGGED_FALSE;
    registry[19753] = block;
  }

  { // ID: 19754
    std::shared_ptr<BigDripleafStemBlock> block = std::make_shared<BigDripleafStemBlock>();
    block->facing = BigDripleafStemBlock::FACING_WEST;
    block->waterlogged = BigDripleafStemBlock::WATERLOGGED_TRUE;
    registry[19754] = block;
  }

  { // ID: 19755
    std::shared_ptr<BigDripleafStemBlock> block = std::make_shared<BigDripleafStemBlock>();
    block->facing = BigDripleafStemBlock::FACING_WEST;
    block->waterlogged = BigDripleafStemBlock::WATERLOGGED_FALSE;
    registry[19755] = block;
  }

  { // ID: 19756
    std::shared_ptr<BigDripleafStemBlock> block = std::make_shared<BigDripleafStemBlock>();
    block->facing = BigDripleafStemBlock::FACING_EAST;
    block->waterlogged = BigDripleafStemBlock::WATERLOGGED_TRUE;
    registry[19756] = block;
  }

  { // ID: 19757
    std::shared_ptr<BigDripleafStemBlock> block = std::make_shared<BigDripleafStemBlock>();
    block->facing = BigDripleafStemBlock::FACING_EAST;
    block->waterlogged = BigDripleafStemBlock::WATERLOGGED_FALSE;
    registry[19757] = block;
  }
}
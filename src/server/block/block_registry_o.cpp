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


#include "block_registry.h"

#include "oak_button_block.h"
#include "oak_door_block.h"
#include "oak_fence_block.h"
#include "oak_fence_gate_block.h"
#include "oak_leaves_block.h"
#include "oak_log_block.h"
#include "oak_planks_block.h"
#include "oak_pressure_plate_block.h"
#include "oak_sapling_block.h"
#include "oak_sign_block.h"
#include "oak_slab_block.h"
#include "oak_stairs_block.h"
#include "oak_trapdoor_block.h"
#include "oak_wall_sign_block.h"
#include "oak_wood_block.h"
#include "observer_block.h"
#include "obsidian_block.h"
#include "ochre_froglight_block.h"
#include "orange_banner_block.h"
#include "orange_bed_block.h"
#include "orange_candle_block.h"
#include "orange_candle_cake_block.h"
#include "orange_carpet_block.h"
#include "orange_concrete_block.h"
#include "orange_concrete_powder_block.h"
#include "orange_glazed_terracotta_block.h"
#include "orange_shulker_box_block.h"
#include "orange_stained_glass_block.h"
#include "orange_stained_glass_pane_block.h"
#include "orange_terracotta_block.h"
#include "orange_tulip_block.h"
#include "orange_wall_banner_block.h"
#include "orange_wool_block.h"
#include "oxeye_daisy_block.h"
#include "oxidized_copper_block.h"
#include "oxidized_cut_copper_block.h"
#include "oxidized_cut_copper_slab_block.h"
#include "oxidized_cut_copper_stairs_block.h"

void BlockRegistry::generateO() {

  { // ID: 15
    std::shared_ptr<OakPlanksBlock> block = std::make_shared<OakPlanksBlock>();
    registry[15] = block;
  }

  { // ID: 22
    std::shared_ptr<OakSaplingBlock> block = std::make_shared<OakSaplingBlock>();
    block->stage = OakSaplingBlock::STAGE_0;
    registry[22] = block;
  }

  { // ID: 23
    std::shared_ptr<OakSaplingBlock> block = std::make_shared<OakSaplingBlock>();
    block->stage = OakSaplingBlock::STAGE_1;
    registry[23] = block;
  }

  { // ID: 117
    std::shared_ptr<OakLogBlock> block = std::make_shared<OakLogBlock>();
    block->axis = OakLogBlock::AXIS_X;
    registry[117] = block;
  }

  { // ID: 118
    std::shared_ptr<OakLogBlock> block = std::make_shared<OakLogBlock>();
    block->axis = OakLogBlock::AXIS_Y;
    registry[118] = block;
  }

  { // ID: 119
    std::shared_ptr<OakLogBlock> block = std::make_shared<OakLogBlock>();
    block->axis = OakLogBlock::AXIS_Z;
    registry[119] = block;
  }

  { // ID: 164
    std::shared_ptr<OakWoodBlock> block = std::make_shared<OakWoodBlock>();
    block->axis = OakWoodBlock::AXIS_X;
    registry[164] = block;
  }

  { // ID: 165
    std::shared_ptr<OakWoodBlock> block = std::make_shared<OakWoodBlock>();
    block->axis = OakWoodBlock::AXIS_Y;
    registry[165] = block;
  }

  { // ID: 166
    std::shared_ptr<OakWoodBlock> block = std::make_shared<OakWoodBlock>();
    block->axis = OakWoodBlock::AXIS_Z;
    registry[166] = block;
  }

  { // ID: 206
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_1;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[206] = block;
  }

  { // ID: 207
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_1;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[207] = block;
  }

  { // ID: 208
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_1;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[208] = block;
  }

  { // ID: 209
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_1;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[209] = block;
  }

  { // ID: 210
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_2;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[210] = block;
  }

  { // ID: 211
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_2;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[211] = block;
  }

  { // ID: 212
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_2;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[212] = block;
  }

  { // ID: 213
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_2;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[213] = block;
  }

  { // ID: 214
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_3;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[214] = block;
  }

  { // ID: 215
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_3;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[215] = block;
  }

  { // ID: 216
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_3;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[216] = block;
  }

  { // ID: 217
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_3;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[217] = block;
  }

  { // ID: 218
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_4;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[218] = block;
  }

  { // ID: 219
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_4;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[219] = block;
  }

  { // ID: 220
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_4;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[220] = block;
  }

  { // ID: 221
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_4;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[221] = block;
  }

  { // ID: 222
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_5;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[222] = block;
  }

  { // ID: 223
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_5;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[223] = block;
  }

  { // ID: 224
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_5;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[224] = block;
  }

  { // ID: 225
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_5;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[225] = block;
  }

  { // ID: 226
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_6;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[226] = block;
  }

  { // ID: 227
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_6;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[227] = block;
  }

  { // ID: 228
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_6;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[228] = block;
  }

  { // ID: 229
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_6;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[229] = block;
  }

  { // ID: 230
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_7;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[230] = block;
  }

  { // ID: 231
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_7;
    block->persistent = OakLeavesBlock::PERSISTENT_TRUE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[231] = block;
  }

  { // ID: 232
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_7;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_TRUE;
    registry[232] = block;
  }

  { // ID: 233
    std::shared_ptr<OakLeavesBlock> block = std::make_shared<OakLeavesBlock>();
    block->distance = OakLeavesBlock::DISTANCE_7;
    block->persistent = OakLeavesBlock::PERSISTENT_FALSE;
    block->waterlogged = OakLeavesBlock::WATERLOGGED_FALSE;
    registry[233] = block;
  }

  { // ID: 1295
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_NORTH;
    block->occupied = OrangeBedBlock::OCCUPIED_TRUE;
    block->part = OrangeBedBlock::PART_HEAD;
    registry[1295] = block;
  }

  { // ID: 1296
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_NORTH;
    block->occupied = OrangeBedBlock::OCCUPIED_TRUE;
    block->part = OrangeBedBlock::PART_FOOT;
    registry[1296] = block;
  }

  { // ID: 1297
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_NORTH;
    block->occupied = OrangeBedBlock::OCCUPIED_FALSE;
    block->part = OrangeBedBlock::PART_HEAD;
    registry[1297] = block;
  }

  { // ID: 1298
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_NORTH;
    block->occupied = OrangeBedBlock::OCCUPIED_FALSE;
    block->part = OrangeBedBlock::PART_FOOT;
    registry[1298] = block;
  }

  { // ID: 1299
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_SOUTH;
    block->occupied = OrangeBedBlock::OCCUPIED_TRUE;
    block->part = OrangeBedBlock::PART_HEAD;
    registry[1299] = block;
  }

  { // ID: 1300
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_SOUTH;
    block->occupied = OrangeBedBlock::OCCUPIED_TRUE;
    block->part = OrangeBedBlock::PART_FOOT;
    registry[1300] = block;
  }

  { // ID: 1301
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_SOUTH;
    block->occupied = OrangeBedBlock::OCCUPIED_FALSE;
    block->part = OrangeBedBlock::PART_HEAD;
    registry[1301] = block;
  }

  { // ID: 1302
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_SOUTH;
    block->occupied = OrangeBedBlock::OCCUPIED_FALSE;
    block->part = OrangeBedBlock::PART_FOOT;
    registry[1302] = block;
  }

  { // ID: 1303
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_WEST;
    block->occupied = OrangeBedBlock::OCCUPIED_TRUE;
    block->part = OrangeBedBlock::PART_HEAD;
    registry[1303] = block;
  }

  { // ID: 1304
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_WEST;
    block->occupied = OrangeBedBlock::OCCUPIED_TRUE;
    block->part = OrangeBedBlock::PART_FOOT;
    registry[1304] = block;
  }

  { // ID: 1305
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_WEST;
    block->occupied = OrangeBedBlock::OCCUPIED_FALSE;
    block->part = OrangeBedBlock::PART_HEAD;
    registry[1305] = block;
  }

  { // ID: 1306
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_WEST;
    block->occupied = OrangeBedBlock::OCCUPIED_FALSE;
    block->part = OrangeBedBlock::PART_FOOT;
    registry[1306] = block;
  }

  { // ID: 1307
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_EAST;
    block->occupied = OrangeBedBlock::OCCUPIED_TRUE;
    block->part = OrangeBedBlock::PART_HEAD;
    registry[1307] = block;
  }

  { // ID: 1308
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_EAST;
    block->occupied = OrangeBedBlock::OCCUPIED_TRUE;
    block->part = OrangeBedBlock::PART_FOOT;
    registry[1308] = block;
  }

  { // ID: 1309
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_EAST;
    block->occupied = OrangeBedBlock::OCCUPIED_FALSE;
    block->part = OrangeBedBlock::PART_HEAD;
    registry[1309] = block;
  }

  { // ID: 1310
    std::shared_ptr<OrangeBedBlock> block = std::make_shared<OrangeBedBlock>();
    block->facing = OrangeBedBlock::FACING_EAST;
    block->occupied = OrangeBedBlock::OCCUPIED_FALSE;
    block->part = OrangeBedBlock::PART_FOOT;
    registry[1310] = block;
  }

  { // ID: 1639
    std::shared_ptr<OrangeWoolBlock> block = std::make_shared<OrangeWoolBlock>();
    registry[1639] = block;
  }

  { // ID: 1672
    std::shared_ptr<OrangeTulipBlock> block = std::make_shared<OrangeTulipBlock>();
    registry[1672] = block;
  }

  { // ID: 1675
    std::shared_ptr<OxeyeDaisyBlock> block = std::make_shared<OxeyeDaisyBlock>();
    registry[1675] = block;
  }

  { // ID: 1688
    std::shared_ptr<ObsidianBlock> block = std::make_shared<ObsidianBlock>();
    registry[1688] = block;
  }

  { // ID: 2208
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2208] = block;
  }

  { // ID: 2209
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2209] = block;
  }

  { // ID: 2210
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2210] = block;
  }

  { // ID: 2211
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2211] = block;
  }

  { // ID: 2212
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2212] = block;
  }

  { // ID: 2213
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2213] = block;
  }

  { // ID: 2214
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2214] = block;
  }

  { // ID: 2215
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2215] = block;
  }

  { // ID: 2216
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2216] = block;
  }

  { // ID: 2217
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2217] = block;
  }

  { // ID: 2218
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2218] = block;
  }

  { // ID: 2219
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2219] = block;
  }

  { // ID: 2220
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2220] = block;
  }

  { // ID: 2221
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2221] = block;
  }

  { // ID: 2222
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2222] = block;
  }

  { // ID: 2223
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2223] = block;
  }

  { // ID: 2224
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2224] = block;
  }

  { // ID: 2225
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2225] = block;
  }

  { // ID: 2226
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2226] = block;
  }

  { // ID: 2227
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_NORTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2227] = block;
  }

  { // ID: 2228
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2228] = block;
  }

  { // ID: 2229
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2229] = block;
  }

  { // ID: 2230
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2230] = block;
  }

  { // ID: 2231
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2231] = block;
  }

  { // ID: 2232
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2232] = block;
  }

  { // ID: 2233
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2233] = block;
  }

  { // ID: 2234
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2234] = block;
  }

  { // ID: 2235
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2235] = block;
  }

  { // ID: 2236
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2236] = block;
  }

  { // ID: 2237
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2237] = block;
  }

  { // ID: 2238
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2238] = block;
  }

  { // ID: 2239
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2239] = block;
  }

  { // ID: 2240
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2240] = block;
  }

  { // ID: 2241
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2241] = block;
  }

  { // ID: 2242
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2242] = block;
  }

  { // ID: 2243
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2243] = block;
  }

  { // ID: 2244
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2244] = block;
  }

  { // ID: 2245
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2245] = block;
  }

  { // ID: 2246
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2246] = block;
  }

  { // ID: 2247
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_SOUTH;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2247] = block;
  }

  { // ID: 2248
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2248] = block;
  }

  { // ID: 2249
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2249] = block;
  }

  { // ID: 2250
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2250] = block;
  }

  { // ID: 2251
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2251] = block;
  }

  { // ID: 2252
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2252] = block;
  }

  { // ID: 2253
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2253] = block;
  }

  { // ID: 2254
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2254] = block;
  }

  { // ID: 2255
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2255] = block;
  }

  { // ID: 2256
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2256] = block;
  }

  { // ID: 2257
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2257] = block;
  }

  { // ID: 2258
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2258] = block;
  }

  { // ID: 2259
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2259] = block;
  }

  { // ID: 2260
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2260] = block;
  }

  { // ID: 2261
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2261] = block;
  }

  { // ID: 2262
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2262] = block;
  }

  { // ID: 2263
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2263] = block;
  }

  { // ID: 2264
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2264] = block;
  }

  { // ID: 2265
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2265] = block;
  }

  { // ID: 2266
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2266] = block;
  }

  { // ID: 2267
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_WEST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2267] = block;
  }

  { // ID: 2268
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2268] = block;
  }

  { // ID: 2269
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2269] = block;
  }

  { // ID: 2270
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2270] = block;
  }

  { // ID: 2271
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2271] = block;
  }

  { // ID: 2272
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2272] = block;
  }

  { // ID: 2273
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2273] = block;
  }

  { // ID: 2274
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2274] = block;
  }

  { // ID: 2275
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2275] = block;
  }

  { // ID: 2276
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2276] = block;
  }

  { // ID: 2277
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_TOP;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2277] = block;
  }

  { // ID: 2278
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2278] = block;
  }

  { // ID: 2279
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2279] = block;
  }

  { // ID: 2280
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2280] = block;
  }

  { // ID: 2281
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2281] = block;
  }

  { // ID: 2282
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2282] = block;
  }

  { // ID: 2283
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2283] = block;
  }

  { // ID: 2284
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2284] = block;
  }

  { // ID: 2285
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2285] = block;
  }

  { // ID: 2286
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_TRUE;
    registry[2286] = block;
  }

  { // ID: 2287
    std::shared_ptr<OakStairsBlock> block = std::make_shared<OakStairsBlock>();
    block->facing = OakStairsBlock::FACING_EAST;
    block->half = OakStairsBlock::HALF_BOTTOM;
    block->shape = OakStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OakStairsBlock::WATERLOGGED_FALSE;
    registry[2287] = block;
  }

  { // ID: 3636
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_0;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3636] = block;
  }

  { // ID: 3637
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_0;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3637] = block;
  }

  { // ID: 3638
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_1;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3638] = block;
  }

  { // ID: 3639
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_1;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3639] = block;
  }

  { // ID: 3640
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_2;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3640] = block;
  }

  { // ID: 3641
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_2;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3641] = block;
  }

  { // ID: 3642
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_3;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3642] = block;
  }

  { // ID: 3643
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_3;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3643] = block;
  }

  { // ID: 3644
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_4;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3644] = block;
  }

  { // ID: 3645
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_4;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3645] = block;
  }

  { // ID: 3646
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_5;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3646] = block;
  }

  { // ID: 3647
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_5;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3647] = block;
  }

  { // ID: 3648
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_6;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3648] = block;
  }

  { // ID: 3649
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_6;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3649] = block;
  }

  { // ID: 3650
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_7;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3650] = block;
  }

  { // ID: 3651
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_7;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3651] = block;
  }

  { // ID: 3652
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_8;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3652] = block;
  }

  { // ID: 3653
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_8;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3653] = block;
  }

  { // ID: 3654
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_9;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3654] = block;
  }

  { // ID: 3655
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_9;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3655] = block;
  }

  { // ID: 3656
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_10;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3656] = block;
  }

  { // ID: 3657
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_10;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3657] = block;
  }

  { // ID: 3658
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_11;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3658] = block;
  }

  { // ID: 3659
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_11;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3659] = block;
  }

  { // ID: 3660
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_12;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3660] = block;
  }

  { // ID: 3661
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_12;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3661] = block;
  }

  { // ID: 3662
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_13;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3662] = block;
  }

  { // ID: 3663
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_13;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3663] = block;
  }

  { // ID: 3664
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_14;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3664] = block;
  }

  { // ID: 3665
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_14;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3665] = block;
  }

  { // ID: 3666
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_15;
    block->waterlogged = OakSignBlock::WATERLOGGED_TRUE;
    registry[3666] = block;
  }

  { // ID: 3667
    std::shared_ptr<OakSignBlock> block = std::make_shared<OakSignBlock>();
    block->rotation = OakSignBlock::ROTATION_15;
    block->waterlogged = OakSignBlock::WATERLOGGED_FALSE;
    registry[3667] = block;
  }

  { // ID: 3860
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3860] = block;
  }

  { // ID: 3861
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3861] = block;
  }

  { // ID: 3862
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3862] = block;
  }

  { // ID: 3863
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3863] = block;
  }

  { // ID: 3864
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3864] = block;
  }

  { // ID: 3865
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3865] = block;
  }

  { // ID: 3866
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3866] = block;
  }

  { // ID: 3867
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3867] = block;
  }

  { // ID: 3868
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3868] = block;
  }

  { // ID: 3869
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3869] = block;
  }

  { // ID: 3870
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3870] = block;
  }

  { // ID: 3871
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3871] = block;
  }

  { // ID: 3872
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3872] = block;
  }

  { // ID: 3873
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3873] = block;
  }

  { // ID: 3874
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3874] = block;
  }

  { // ID: 3875
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_NORTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3875] = block;
  }

  { // ID: 3876
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3876] = block;
  }

  { // ID: 3877
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3877] = block;
  }

  { // ID: 3878
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3878] = block;
  }

  { // ID: 3879
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3879] = block;
  }

  { // ID: 3880
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3880] = block;
  }

  { // ID: 3881
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3881] = block;
  }

  { // ID: 3882
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3882] = block;
  }

  { // ID: 3883
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3883] = block;
  }

  { // ID: 3884
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3884] = block;
  }

  { // ID: 3885
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3885] = block;
  }

  { // ID: 3886
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3886] = block;
  }

  { // ID: 3887
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3887] = block;
  }

  { // ID: 3888
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3888] = block;
  }

  { // ID: 3889
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3889] = block;
  }

  { // ID: 3890
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3890] = block;
  }

  { // ID: 3891
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_SOUTH;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3891] = block;
  }

  { // ID: 3892
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3892] = block;
  }

  { // ID: 3893
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3893] = block;
  }

  { // ID: 3894
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3894] = block;
  }

  { // ID: 3895
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3895] = block;
  }

  { // ID: 3896
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3896] = block;
  }

  { // ID: 3897
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3897] = block;
  }

  { // ID: 3898
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3898] = block;
  }

  { // ID: 3899
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3899] = block;
  }

  { // ID: 3900
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3900] = block;
  }

  { // ID: 3901
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3901] = block;
  }

  { // ID: 3902
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3902] = block;
  }

  { // ID: 3903
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3903] = block;
  }

  { // ID: 3904
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3904] = block;
  }

  { // ID: 3905
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3905] = block;
  }

  { // ID: 3906
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3906] = block;
  }

  { // ID: 3907
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_WEST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3907] = block;
  }

  { // ID: 3908
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3908] = block;
  }

  { // ID: 3909
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3909] = block;
  }

  { // ID: 3910
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3910] = block;
  }

  { // ID: 3911
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3911] = block;
  }

  { // ID: 3912
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3912] = block;
  }

  { // ID: 3913
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3913] = block;
  }

  { // ID: 3914
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3914] = block;
  }

  { // ID: 3915
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_UPPER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3915] = block;
  }

  { // ID: 3916
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3916] = block;
  }

  { // ID: 3917
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3917] = block;
  }

  { // ID: 3918
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3918] = block;
  }

  { // ID: 3919
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_LEFT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3919] = block;
  }

  { // ID: 3920
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3920] = block;
  }

  { // ID: 3921
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_TRUE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3921] = block;
  }

  { // ID: 3922
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_TRUE;
    registry[3922] = block;
  }

  { // ID: 3923
    std::shared_ptr<OakDoorBlock> block = std::make_shared<OakDoorBlock>();
    block->facing = OakDoorBlock::FACING_EAST;
    block->half = OakDoorBlock::HALF_LOWER;
    block->hinge = OakDoorBlock::HINGE_RIGHT;
    block->open = OakDoorBlock::OPEN_FALSE;
    block->powered = OakDoorBlock::POWERED_FALSE;
    registry[3923] = block;
  }

  { // ID: 4032
    std::shared_ptr<OakWallSignBlock> block = std::make_shared<OakWallSignBlock>();
    block->facing = OakWallSignBlock::FACING_NORTH;
    block->waterlogged = OakWallSignBlock::WATERLOGGED_TRUE;
    registry[4032] = block;
  }

  { // ID: 4033
    std::shared_ptr<OakWallSignBlock> block = std::make_shared<OakWallSignBlock>();
    block->facing = OakWallSignBlock::FACING_NORTH;
    block->waterlogged = OakWallSignBlock::WATERLOGGED_FALSE;
    registry[4033] = block;
  }

  { // ID: 4034
    std::shared_ptr<OakWallSignBlock> block = std::make_shared<OakWallSignBlock>();
    block->facing = OakWallSignBlock::FACING_SOUTH;
    block->waterlogged = OakWallSignBlock::WATERLOGGED_TRUE;
    registry[4034] = block;
  }

  { // ID: 4035
    std::shared_ptr<OakWallSignBlock> block = std::make_shared<OakWallSignBlock>();
    block->facing = OakWallSignBlock::FACING_SOUTH;
    block->waterlogged = OakWallSignBlock::WATERLOGGED_FALSE;
    registry[4035] = block;
  }

  { // ID: 4036
    std::shared_ptr<OakWallSignBlock> block = std::make_shared<OakWallSignBlock>();
    block->facing = OakWallSignBlock::FACING_WEST;
    block->waterlogged = OakWallSignBlock::WATERLOGGED_TRUE;
    registry[4036] = block;
  }

  { // ID: 4037
    std::shared_ptr<OakWallSignBlock> block = std::make_shared<OakWallSignBlock>();
    block->facing = OakWallSignBlock::FACING_WEST;
    block->waterlogged = OakWallSignBlock::WATERLOGGED_FALSE;
    registry[4037] = block;
  }

  { // ID: 4038
    std::shared_ptr<OakWallSignBlock> block = std::make_shared<OakWallSignBlock>();
    block->facing = OakWallSignBlock::FACING_EAST;
    block->waterlogged = OakWallSignBlock::WATERLOGGED_TRUE;
    registry[4038] = block;
  }

  { // ID: 4039
    std::shared_ptr<OakWallSignBlock> block = std::make_shared<OakWallSignBlock>();
    block->facing = OakWallSignBlock::FACING_EAST;
    block->waterlogged = OakWallSignBlock::WATERLOGGED_FALSE;
    registry[4039] = block;
  }

  { // ID: 4178
    std::shared_ptr<OakPressurePlateBlock> block = std::make_shared<OakPressurePlateBlock>();
    block->powered = OakPressurePlateBlock::POWERED_TRUE;
    registry[4178] = block;
  }

  { // ID: 4179
    std::shared_ptr<OakPressurePlateBlock> block = std::make_shared<OakPressurePlateBlock>();
    block->powered = OakPressurePlateBlock::POWERED_FALSE;
    registry[4179] = block;
  }

  { // ID: 4275
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4275] = block;
  }

  { // ID: 4276
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4276] = block;
  }

  { // ID: 4277
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4277] = block;
  }

  { // ID: 4278
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4278] = block;
  }

  { // ID: 4279
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4279] = block;
  }

  { // ID: 4280
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4280] = block;
  }

  { // ID: 4281
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4281] = block;
  }

  { // ID: 4282
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4282] = block;
  }

  { // ID: 4283
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4283] = block;
  }

  { // ID: 4284
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4284] = block;
  }

  { // ID: 4285
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4285] = block;
  }

  { // ID: 4286
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4286] = block;
  }

  { // ID: 4287
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4287] = block;
  }

  { // ID: 4288
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4288] = block;
  }

  { // ID: 4289
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4289] = block;
  }

  { // ID: 4290
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_TRUE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4290] = block;
  }

  { // ID: 4291
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4291] = block;
  }

  { // ID: 4292
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4292] = block;
  }

  { // ID: 4293
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4293] = block;
  }

  { // ID: 4294
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4294] = block;
  }

  { // ID: 4295
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4295] = block;
  }

  { // ID: 4296
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4296] = block;
  }

  { // ID: 4297
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4297] = block;
  }

  { // ID: 4298
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_TRUE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4298] = block;
  }

  { // ID: 4299
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4299] = block;
  }

  { // ID: 4300
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4300] = block;
  }

  { // ID: 4301
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4301] = block;
  }

  { // ID: 4302
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_TRUE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4302] = block;
  }

  { // ID: 4303
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4303] = block;
  }

  { // ID: 4304
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_TRUE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4304] = block;
  }

  { // ID: 4305
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_TRUE;
    registry[4305] = block;
  }

  { // ID: 4306
    std::shared_ptr<OakFenceBlock> block = std::make_shared<OakFenceBlock>();
    block->east = OakFenceBlock::EAST_FALSE;
    block->north = OakFenceBlock::NORTH_FALSE;
    block->south = OakFenceBlock::SOUTH_FALSE;
    block->waterlogged = OakFenceBlock::WATERLOGGED_FALSE;
    block->west = OakFenceBlock::WEST_FALSE;
    registry[4306] = block;
  }

  { // ID: 4405
    std::shared_ptr<OrangeStainedGlassBlock> block = std::make_shared<OrangeStainedGlassBlock>();
    registry[4405] = block;
  }

  { // ID: 4420
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4420] = block;
  }

  { // ID: 4421
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4421] = block;
  }

  { // ID: 4422
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4422] = block;
  }

  { // ID: 4423
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4423] = block;
  }

  { // ID: 4424
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4424] = block;
  }

  { // ID: 4425
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4425] = block;
  }

  { // ID: 4426
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4426] = block;
  }

  { // ID: 4427
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4427] = block;
  }

  { // ID: 4428
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4428] = block;
  }

  { // ID: 4429
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4429] = block;
  }

  { // ID: 4430
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4430] = block;
  }

  { // ID: 4431
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4431] = block;
  }

  { // ID: 4432
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4432] = block;
  }

  { // ID: 4433
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4433] = block;
  }

  { // ID: 4434
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4434] = block;
  }

  { // ID: 4435
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_NORTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4435] = block;
  }

  { // ID: 4436
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4436] = block;
  }

  { // ID: 4437
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4437] = block;
  }

  { // ID: 4438
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4438] = block;
  }

  { // ID: 4439
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4439] = block;
  }

  { // ID: 4440
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4440] = block;
  }

  { // ID: 4441
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4441] = block;
  }

  { // ID: 4442
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4442] = block;
  }

  { // ID: 4443
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4443] = block;
  }

  { // ID: 4444
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4444] = block;
  }

  { // ID: 4445
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4445] = block;
  }

  { // ID: 4446
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4446] = block;
  }

  { // ID: 4447
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4447] = block;
  }

  { // ID: 4448
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4448] = block;
  }

  { // ID: 4449
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4449] = block;
  }

  { // ID: 4450
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4450] = block;
  }

  { // ID: 4451
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_SOUTH;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4451] = block;
  }

  { // ID: 4452
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4452] = block;
  }

  { // ID: 4453
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4453] = block;
  }

  { // ID: 4454
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4454] = block;
  }

  { // ID: 4455
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4455] = block;
  }

  { // ID: 4456
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4456] = block;
  }

  { // ID: 4457
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4457] = block;
  }

  { // ID: 4458
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4458] = block;
  }

  { // ID: 4459
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4459] = block;
  }

  { // ID: 4460
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4460] = block;
  }

  { // ID: 4461
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4461] = block;
  }

  { // ID: 4462
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4462] = block;
  }

  { // ID: 4463
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4463] = block;
  }

  { // ID: 4464
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4464] = block;
  }

  { // ID: 4465
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4465] = block;
  }

  { // ID: 4466
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4466] = block;
  }

  { // ID: 4467
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_WEST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4467] = block;
  }

  { // ID: 4468
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4468] = block;
  }

  { // ID: 4469
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4469] = block;
  }

  { // ID: 4470
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4470] = block;
  }

  { // ID: 4471
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4471] = block;
  }

  { // ID: 4472
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4472] = block;
  }

  { // ID: 4473
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4473] = block;
  }

  { // ID: 4474
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4474] = block;
  }

  { // ID: 4475
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_TOP;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4475] = block;
  }

  { // ID: 4476
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4476] = block;
  }

  { // ID: 4477
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4477] = block;
  }

  { // ID: 4478
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4478] = block;
  }

  { // ID: 4479
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_TRUE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4479] = block;
  }

  { // ID: 4480
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4480] = block;
  }

  { // ID: 4481
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4481] = block;
  }

  { // ID: 4482
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_TRUE;
    registry[4482] = block;
  }

  { // ID: 4483
    std::shared_ptr<OakTrapdoorBlock> block = std::make_shared<OakTrapdoorBlock>();
    block->facing = OakTrapdoorBlock::FACING_EAST;
    block->half = OakTrapdoorBlock::HALF_BOTTOM;
    block->open = OakTrapdoorBlock::OPEN_FALSE;
    block->powered = OakTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = OakTrapdoorBlock::WATERLOGGED_FALSE;
    registry[4483] = block;
  }

  { // ID: 5327
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_NORTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5327] = block;
  }

  { // ID: 5328
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_NORTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5328] = block;
  }

  { // ID: 5329
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_NORTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5329] = block;
  }

  { // ID: 5330
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_NORTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5330] = block;
  }

  { // ID: 5331
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_NORTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5331] = block;
  }

  { // ID: 5332
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_NORTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5332] = block;
  }

  { // ID: 5333
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_NORTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5333] = block;
  }

  { // ID: 5334
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_NORTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5334] = block;
  }

  { // ID: 5335
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_SOUTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5335] = block;
  }

  { // ID: 5336
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_SOUTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5336] = block;
  }

  { // ID: 5337
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_SOUTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5337] = block;
  }

  { // ID: 5338
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_SOUTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5338] = block;
  }

  { // ID: 5339
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_SOUTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5339] = block;
  }

  { // ID: 5340
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_SOUTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5340] = block;
  }

  { // ID: 5341
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_SOUTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5341] = block;
  }

  { // ID: 5342
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_SOUTH;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5342] = block;
  }

  { // ID: 5343
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_WEST;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5343] = block;
  }

  { // ID: 5344
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_WEST;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5344] = block;
  }

  { // ID: 5345
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_WEST;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5345] = block;
  }

  { // ID: 5346
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_WEST;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5346] = block;
  }

  { // ID: 5347
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_WEST;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5347] = block;
  }

  { // ID: 5348
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_WEST;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5348] = block;
  }

  { // ID: 5349
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_WEST;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5349] = block;
  }

  { // ID: 5350
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_WEST;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5350] = block;
  }

  { // ID: 5351
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_EAST;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5351] = block;
  }

  { // ID: 5352
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_EAST;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5352] = block;
  }

  { // ID: 5353
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_EAST;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5353] = block;
  }

  { // ID: 5354
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_EAST;
    block->in_wall = OakFenceGateBlock::IN_WALL_TRUE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5354] = block;
  }

  { // ID: 5355
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_EAST;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5355] = block;
  }

  { // ID: 5356
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_EAST;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_TRUE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5356] = block;
  }

  { // ID: 5357
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_EAST;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_TRUE;
    registry[5357] = block;
  }

  { // ID: 5358
    std::shared_ptr<OakFenceGateBlock> block = std::make_shared<OakFenceGateBlock>();
    block->facing = OakFenceGateBlock::FACING_EAST;
    block->in_wall = OakFenceGateBlock::IN_WALL_FALSE;
    block->open = OakFenceGateBlock::OPEN_FALSE;
    block->powered = OakFenceGateBlock::POWERED_FALSE;
    registry[5358] = block;
  }

  { // ID: 6939
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_FLOOR;
    block->facing = OakButtonBlock::FACING_NORTH;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6939] = block;
  }

  { // ID: 6940
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_FLOOR;
    block->facing = OakButtonBlock::FACING_NORTH;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6940] = block;
  }

  { // ID: 6941
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_FLOOR;
    block->facing = OakButtonBlock::FACING_SOUTH;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6941] = block;
  }

  { // ID: 6942
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_FLOOR;
    block->facing = OakButtonBlock::FACING_SOUTH;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6942] = block;
  }

  { // ID: 6943
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_FLOOR;
    block->facing = OakButtonBlock::FACING_WEST;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6943] = block;
  }

  { // ID: 6944
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_FLOOR;
    block->facing = OakButtonBlock::FACING_WEST;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6944] = block;
  }

  { // ID: 6945
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_FLOOR;
    block->facing = OakButtonBlock::FACING_EAST;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6945] = block;
  }

  { // ID: 6946
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_FLOOR;
    block->facing = OakButtonBlock::FACING_EAST;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6946] = block;
  }

  { // ID: 6947
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_WALL;
    block->facing = OakButtonBlock::FACING_NORTH;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6947] = block;
  }

  { // ID: 6948
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_WALL;
    block->facing = OakButtonBlock::FACING_NORTH;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6948] = block;
  }

  { // ID: 6949
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_WALL;
    block->facing = OakButtonBlock::FACING_SOUTH;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6949] = block;
  }

  { // ID: 6950
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_WALL;
    block->facing = OakButtonBlock::FACING_SOUTH;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6950] = block;
  }

  { // ID: 6951
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_WALL;
    block->facing = OakButtonBlock::FACING_WEST;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6951] = block;
  }

  { // ID: 6952
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_WALL;
    block->facing = OakButtonBlock::FACING_WEST;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6952] = block;
  }

  { // ID: 6953
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_WALL;
    block->facing = OakButtonBlock::FACING_EAST;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6953] = block;
  }

  { // ID: 6954
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_WALL;
    block->facing = OakButtonBlock::FACING_EAST;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6954] = block;
  }

  { // ID: 6955
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_CEILING;
    block->facing = OakButtonBlock::FACING_NORTH;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6955] = block;
  }

  { // ID: 6956
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_CEILING;
    block->facing = OakButtonBlock::FACING_NORTH;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6956] = block;
  }

  { // ID: 6957
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_CEILING;
    block->facing = OakButtonBlock::FACING_SOUTH;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6957] = block;
  }

  { // ID: 6958
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_CEILING;
    block->facing = OakButtonBlock::FACING_SOUTH;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6958] = block;
  }

  { // ID: 6959
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_CEILING;
    block->facing = OakButtonBlock::FACING_WEST;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6959] = block;
  }

  { // ID: 6960
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_CEILING;
    block->facing = OakButtonBlock::FACING_WEST;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6960] = block;
  }

  { // ID: 6961
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_CEILING;
    block->facing = OakButtonBlock::FACING_EAST;
    block->powered = OakButtonBlock::POWERED_TRUE;
    registry[6961] = block;
  }

  { // ID: 6962
    std::shared_ptr<OakButtonBlock> block = std::make_shared<OakButtonBlock>();
    block->face = OakButtonBlock::FACE_CEILING;
    block->facing = OakButtonBlock::FACING_EAST;
    block->powered = OakButtonBlock::POWERED_FALSE;
    registry[6962] = block;
  }

  { // ID: 7477
    std::shared_ptr<OrangeTerracottaBlock> block = std::make_shared<OrangeTerracottaBlock>();
    registry[7477] = block;
  }

  { // ID: 7524
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7524] = block;
  }

  { // ID: 7525
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7525] = block;
  }

  { // ID: 7526
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7526] = block;
  }

  { // ID: 7527
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7527] = block;
  }

  { // ID: 7528
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7528] = block;
  }

  { // ID: 7529
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7529] = block;
  }

  { // ID: 7530
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7530] = block;
  }

  { // ID: 7531
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7531] = block;
  }

  { // ID: 7532
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7532] = block;
  }

  { // ID: 7533
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7533] = block;
  }

  { // ID: 7534
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7534] = block;
  }

  { // ID: 7535
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7535] = block;
  }

  { // ID: 7536
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7536] = block;
  }

  { // ID: 7537
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7537] = block;
  }

  { // ID: 7538
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7538] = block;
  }

  { // ID: 7539
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_TRUE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7539] = block;
  }

  { // ID: 7540
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7540] = block;
  }

  { // ID: 7541
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7541] = block;
  }

  { // ID: 7542
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7542] = block;
  }

  { // ID: 7543
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7543] = block;
  }

  { // ID: 7544
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7544] = block;
  }

  { // ID: 7545
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7545] = block;
  }

  { // ID: 7546
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7546] = block;
  }

  { // ID: 7547
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_TRUE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7547] = block;
  }

  { // ID: 7548
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7548] = block;
  }

  { // ID: 7549
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7549] = block;
  }

  { // ID: 7550
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7550] = block;
  }

  { // ID: 7551
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7551] = block;
  }

  { // ID: 7552
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7552] = block;
  }

  { // ID: 7553
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7553] = block;
  }

  { // ID: 7554
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_TRUE;
    registry[7554] = block;
  }

  { // ID: 7555
    std::shared_ptr<OrangeStainedGlassPaneBlock> block = std::make_shared<OrangeStainedGlassPaneBlock>();
    block->east = OrangeStainedGlassPaneBlock::EAST_FALSE;
    block->north = OrangeStainedGlassPaneBlock::NORTH_FALSE;
    block->south = OrangeStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = OrangeStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = OrangeStainedGlassPaneBlock::WEST_FALSE;
    registry[7555] = block;
  }

  { // ID: 8608
    std::shared_ptr<OrangeCarpetBlock> block = std::make_shared<OrangeCarpetBlock>();
    registry[8608] = block;
  }

  { // ID: 8654
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_0;
    registry[8654] = block;
  }

  { // ID: 8655
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_1;
    registry[8655] = block;
  }

  { // ID: 8656
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_2;
    registry[8656] = block;
  }

  { // ID: 8657
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_3;
    registry[8657] = block;
  }

  { // ID: 8658
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_4;
    registry[8658] = block;
  }

  { // ID: 8659
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_5;
    registry[8659] = block;
  }

  { // ID: 8660
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_6;
    registry[8660] = block;
  }

  { // ID: 8661
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_7;
    registry[8661] = block;
  }

  { // ID: 8662
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_8;
    registry[8662] = block;
  }

  { // ID: 8663
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_9;
    registry[8663] = block;
  }

  { // ID: 8664
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_10;
    registry[8664] = block;
  }

  { // ID: 8665
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_11;
    registry[8665] = block;
  }

  { // ID: 8666
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_12;
    registry[8666] = block;
  }

  { // ID: 8667
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_13;
    registry[8667] = block;
  }

  { // ID: 8668
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_14;
    registry[8668] = block;
  }

  { // ID: 8669
    std::shared_ptr<OrangeBannerBlock> block = std::make_shared<OrangeBannerBlock>();
    block->rotation = OrangeBannerBlock::ROTATION_15;
    registry[8669] = block;
  }

  { // ID: 8898
    std::shared_ptr<OrangeWallBannerBlock> block = std::make_shared<OrangeWallBannerBlock>();
    block->facing = OrangeWallBannerBlock::FACING_NORTH;
    registry[8898] = block;
  }

  { // ID: 8899
    std::shared_ptr<OrangeWallBannerBlock> block = std::make_shared<OrangeWallBannerBlock>();
    block->facing = OrangeWallBannerBlock::FACING_SOUTH;
    registry[8899] = block;
  }

  { // ID: 8900
    std::shared_ptr<OrangeWallBannerBlock> block = std::make_shared<OrangeWallBannerBlock>();
    block->facing = OrangeWallBannerBlock::FACING_WEST;
    registry[8900] = block;
  }

  { // ID: 8901
    std::shared_ptr<OrangeWallBannerBlock> block = std::make_shared<OrangeWallBannerBlock>();
    block->facing = OrangeWallBannerBlock::FACING_EAST;
    registry[8901] = block;
  }

  { // ID: 9041
    std::shared_ptr<OakSlabBlock> block = std::make_shared<OakSlabBlock>();
    block->type = OakSlabBlock::TYPE_TOP;
    block->waterlogged = OakSlabBlock::WATERLOGGED_TRUE;
    registry[9041] = block;
  }

  { // ID: 9042
    std::shared_ptr<OakSlabBlock> block = std::make_shared<OakSlabBlock>();
    block->type = OakSlabBlock::TYPE_TOP;
    block->waterlogged = OakSlabBlock::WATERLOGGED_FALSE;
    registry[9042] = block;
  }

  { // ID: 9043
    std::shared_ptr<OakSlabBlock> block = std::make_shared<OakSlabBlock>();
    block->type = OakSlabBlock::TYPE_BOTTOM;
    block->waterlogged = OakSlabBlock::WATERLOGGED_TRUE;
    registry[9043] = block;
  }

  { // ID: 9044
    std::shared_ptr<OakSlabBlock> block = std::make_shared<OakSlabBlock>();
    block->type = OakSlabBlock::TYPE_BOTTOM;
    block->waterlogged = OakSlabBlock::WATERLOGGED_FALSE;
    registry[9044] = block;
  }

  { // ID: 9045
    std::shared_ptr<OakSlabBlock> block = std::make_shared<OakSlabBlock>();
    block->type = OakSlabBlock::TYPE_DOUBLE;
    block->waterlogged = OakSlabBlock::WATERLOGGED_TRUE;
    registry[9045] = block;
  }

  { // ID: 9046
    std::shared_ptr<OakSlabBlock> block = std::make_shared<OakSlabBlock>();
    block->type = OakSlabBlock::TYPE_DOUBLE;
    block->waterlogged = OakSlabBlock::WATERLOGGED_FALSE;
    registry[9046] = block;
  }

  { // ID: 10141
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_NORTH;
    block->powered = ObserverBlock::POWERED_TRUE;
    registry[10141] = block;
  }

  { // ID: 10142
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_NORTH;
    block->powered = ObserverBlock::POWERED_FALSE;
    registry[10142] = block;
  }

  { // ID: 10143
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_EAST;
    block->powered = ObserverBlock::POWERED_TRUE;
    registry[10143] = block;
  }

  { // ID: 10144
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_EAST;
    block->powered = ObserverBlock::POWERED_FALSE;
    registry[10144] = block;
  }

  { // ID: 10145
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_SOUTH;
    block->powered = ObserverBlock::POWERED_TRUE;
    registry[10145] = block;
  }

  { // ID: 10146
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_SOUTH;
    block->powered = ObserverBlock::POWERED_FALSE;
    registry[10146] = block;
  }

  { // ID: 10147
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_WEST;
    block->powered = ObserverBlock::POWERED_TRUE;
    registry[10147] = block;
  }

  { // ID: 10148
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_WEST;
    block->powered = ObserverBlock::POWERED_FALSE;
    registry[10148] = block;
  }

  { // ID: 10149
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_UP;
    block->powered = ObserverBlock::POWERED_TRUE;
    registry[10149] = block;
  }

  { // ID: 10150
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_UP;
    block->powered = ObserverBlock::POWERED_FALSE;
    registry[10150] = block;
  }

  { // ID: 10151
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_DOWN;
    block->powered = ObserverBlock::POWERED_TRUE;
    registry[10151] = block;
  }

  { // ID: 10152
    std::shared_ptr<ObserverBlock> block = std::make_shared<ObserverBlock>();
    block->facing = ObserverBlock::FACING_DOWN;
    block->powered = ObserverBlock::POWERED_FALSE;
    registry[10152] = block;
  }

  { // ID: 10165
    std::shared_ptr<OrangeShulkerBoxBlock> block = std::make_shared<OrangeShulkerBoxBlock>();
    block->facing = OrangeShulkerBoxBlock::FACING_NORTH;
    registry[10165] = block;
  }

  { // ID: 10166
    std::shared_ptr<OrangeShulkerBoxBlock> block = std::make_shared<OrangeShulkerBoxBlock>();
    block->facing = OrangeShulkerBoxBlock::FACING_EAST;
    registry[10166] = block;
  }

  { // ID: 10167
    std::shared_ptr<OrangeShulkerBoxBlock> block = std::make_shared<OrangeShulkerBoxBlock>();
    block->facing = OrangeShulkerBoxBlock::FACING_SOUTH;
    registry[10167] = block;
  }

  { // ID: 10168
    std::shared_ptr<OrangeShulkerBoxBlock> block = std::make_shared<OrangeShulkerBoxBlock>();
    block->facing = OrangeShulkerBoxBlock::FACING_WEST;
    registry[10168] = block;
  }

  { // ID: 10169
    std::shared_ptr<OrangeShulkerBoxBlock> block = std::make_shared<OrangeShulkerBoxBlock>();
    block->facing = OrangeShulkerBoxBlock::FACING_UP;
    registry[10169] = block;
  }

  { // ID: 10170
    std::shared_ptr<OrangeShulkerBoxBlock> block = std::make_shared<OrangeShulkerBoxBlock>();
    block->facing = OrangeShulkerBoxBlock::FACING_DOWN;
    registry[10170] = block;
  }

  { // ID: 10259
    std::shared_ptr<OrangeGlazedTerracottaBlock> block = std::make_shared<OrangeGlazedTerracottaBlock>();
    block->facing = OrangeGlazedTerracottaBlock::FACING_NORTH;
    registry[10259] = block;
  }

  { // ID: 10260
    std::shared_ptr<OrangeGlazedTerracottaBlock> block = std::make_shared<OrangeGlazedTerracottaBlock>();
    block->facing = OrangeGlazedTerracottaBlock::FACING_SOUTH;
    registry[10260] = block;
  }

  { // ID: 10261
    std::shared_ptr<OrangeGlazedTerracottaBlock> block = std::make_shared<OrangeGlazedTerracottaBlock>();
    block->facing = OrangeGlazedTerracottaBlock::FACING_WEST;
    registry[10261] = block;
  }

  { // ID: 10262
    std::shared_ptr<OrangeGlazedTerracottaBlock> block = std::make_shared<OrangeGlazedTerracottaBlock>();
    block->facing = OrangeGlazedTerracottaBlock::FACING_EAST;
    registry[10262] = block;
  }

  { // ID: 10320
    std::shared_ptr<OrangeConcreteBlock> block = std::make_shared<OrangeConcreteBlock>();
    registry[10320] = block;
  }

  { // ID: 10336
    std::shared_ptr<OrangeConcretePowderBlock> block = std::make_shared<OrangeConcretePowderBlock>();
    registry[10336] = block;
  }

  { // ID: 18345
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_1;
    block->lit = OrangeCandleBlock::LIT_TRUE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_TRUE;
    registry[18345] = block;
  }

  { // ID: 18346
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_1;
    block->lit = OrangeCandleBlock::LIT_TRUE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_FALSE;
    registry[18346] = block;
  }

  { // ID: 18347
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_1;
    block->lit = OrangeCandleBlock::LIT_FALSE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_TRUE;
    registry[18347] = block;
  }

  { // ID: 18348
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_1;
    block->lit = OrangeCandleBlock::LIT_FALSE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_FALSE;
    registry[18348] = block;
  }

  { // ID: 18349
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_2;
    block->lit = OrangeCandleBlock::LIT_TRUE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_TRUE;
    registry[18349] = block;
  }

  { // ID: 18350
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_2;
    block->lit = OrangeCandleBlock::LIT_TRUE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_FALSE;
    registry[18350] = block;
  }

  { // ID: 18351
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_2;
    block->lit = OrangeCandleBlock::LIT_FALSE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_TRUE;
    registry[18351] = block;
  }

  { // ID: 18352
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_2;
    block->lit = OrangeCandleBlock::LIT_FALSE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_FALSE;
    registry[18352] = block;
  }

  { // ID: 18353
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_3;
    block->lit = OrangeCandleBlock::LIT_TRUE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_TRUE;
    registry[18353] = block;
  }

  { // ID: 18354
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_3;
    block->lit = OrangeCandleBlock::LIT_TRUE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_FALSE;
    registry[18354] = block;
  }

  { // ID: 18355
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_3;
    block->lit = OrangeCandleBlock::LIT_FALSE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_TRUE;
    registry[18355] = block;
  }

  { // ID: 18356
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_3;
    block->lit = OrangeCandleBlock::LIT_FALSE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_FALSE;
    registry[18356] = block;
  }

  { // ID: 18357
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_4;
    block->lit = OrangeCandleBlock::LIT_TRUE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_TRUE;
    registry[18357] = block;
  }

  { // ID: 18358
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_4;
    block->lit = OrangeCandleBlock::LIT_TRUE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_FALSE;
    registry[18358] = block;
  }

  { // ID: 18359
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_4;
    block->lit = OrangeCandleBlock::LIT_FALSE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_TRUE;
    registry[18359] = block;
  }

  { // ID: 18360
    std::shared_ptr<OrangeCandleBlock> block = std::make_shared<OrangeCandleBlock>();
    block->candles = OrangeCandleBlock::CANDLES_4;
    block->lit = OrangeCandleBlock::LIT_FALSE;
    block->waterlogged = OrangeCandleBlock::WATERLOGGED_FALSE;
    registry[18360] = block;
  }

  { // ID: 18589
    std::shared_ptr<OrangeCandleCakeBlock> block = std::make_shared<OrangeCandleCakeBlock>();
    block->lit = OrangeCandleCakeBlock::LIT_TRUE;
    registry[18589] = block;
  }

  { // ID: 18590
    std::shared_ptr<OrangeCandleCakeBlock> block = std::make_shared<OrangeCandleCakeBlock>();
    block->lit = OrangeCandleCakeBlock::LIT_FALSE;
    registry[18590] = block;
  }

  { // ID: 18908
    std::shared_ptr<OxidizedCopperBlock> block = std::make_shared<OxidizedCopperBlock>();
    registry[18908] = block;
  }

  { // ID: 18914
    std::shared_ptr<OxidizedCutCopperBlock> block = std::make_shared<OxidizedCutCopperBlock>();
    registry[18914] = block;
  }

  { // ID: 18918
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18918] = block;
  }

  { // ID: 18919
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18919] = block;
  }

  { // ID: 18920
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18920] = block;
  }

  { // ID: 18921
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18921] = block;
  }

  { // ID: 18922
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18922] = block;
  }

  { // ID: 18923
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18923] = block;
  }

  { // ID: 18924
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18924] = block;
  }

  { // ID: 18925
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18925] = block;
  }

  { // ID: 18926
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18926] = block;
  }

  { // ID: 18927
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18927] = block;
  }

  { // ID: 18928
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18928] = block;
  }

  { // ID: 18929
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18929] = block;
  }

  { // ID: 18930
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18930] = block;
  }

  { // ID: 18931
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18931] = block;
  }

  { // ID: 18932
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18932] = block;
  }

  { // ID: 18933
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18933] = block;
  }

  { // ID: 18934
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18934] = block;
  }

  { // ID: 18935
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18935] = block;
  }

  { // ID: 18936
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18936] = block;
  }

  { // ID: 18937
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18937] = block;
  }

  { // ID: 18938
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18938] = block;
  }

  { // ID: 18939
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18939] = block;
  }

  { // ID: 18940
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18940] = block;
  }

  { // ID: 18941
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18941] = block;
  }

  { // ID: 18942
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18942] = block;
  }

  { // ID: 18943
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18943] = block;
  }

  { // ID: 18944
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18944] = block;
  }

  { // ID: 18945
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18945] = block;
  }

  { // ID: 18946
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18946] = block;
  }

  { // ID: 18947
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18947] = block;
  }

  { // ID: 18948
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18948] = block;
  }

  { // ID: 18949
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18949] = block;
  }

  { // ID: 18950
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18950] = block;
  }

  { // ID: 18951
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18951] = block;
  }

  { // ID: 18952
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18952] = block;
  }

  { // ID: 18953
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18953] = block;
  }

  { // ID: 18954
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18954] = block;
  }

  { // ID: 18955
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18955] = block;
  }

  { // ID: 18956
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18956] = block;
  }

  { // ID: 18957
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18957] = block;
  }

  { // ID: 18958
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18958] = block;
  }

  { // ID: 18959
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18959] = block;
  }

  { // ID: 18960
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18960] = block;
  }

  { // ID: 18961
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18961] = block;
  }

  { // ID: 18962
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18962] = block;
  }

  { // ID: 18963
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18963] = block;
  }

  { // ID: 18964
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18964] = block;
  }

  { // ID: 18965
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18965] = block;
  }

  { // ID: 18966
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18966] = block;
  }

  { // ID: 18967
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18967] = block;
  }

  { // ID: 18968
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18968] = block;
  }

  { // ID: 18969
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18969] = block;
  }

  { // ID: 18970
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18970] = block;
  }

  { // ID: 18971
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18971] = block;
  }

  { // ID: 18972
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18972] = block;
  }

  { // ID: 18973
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18973] = block;
  }

  { // ID: 18974
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18974] = block;
  }

  { // ID: 18975
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18975] = block;
  }

  { // ID: 18976
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18976] = block;
  }

  { // ID: 18977
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18977] = block;
  }

  { // ID: 18978
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18978] = block;
  }

  { // ID: 18979
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18979] = block;
  }

  { // ID: 18980
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18980] = block;
  }

  { // ID: 18981
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18981] = block;
  }

  { // ID: 18982
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18982] = block;
  }

  { // ID: 18983
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18983] = block;
  }

  { // ID: 18984
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18984] = block;
  }

  { // ID: 18985
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18985] = block;
  }

  { // ID: 18986
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18986] = block;
  }

  { // ID: 18987
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18987] = block;
  }

  { // ID: 18988
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18988] = block;
  }

  { // ID: 18989
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18989] = block;
  }

  { // ID: 18990
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18990] = block;
  }

  { // ID: 18991
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18991] = block;
  }

  { // ID: 18992
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18992] = block;
  }

  { // ID: 18993
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18993] = block;
  }

  { // ID: 18994
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18994] = block;
  }

  { // ID: 18995
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18995] = block;
  }

  { // ID: 18996
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18996] = block;
  }

  { // ID: 18997
    std::shared_ptr<OxidizedCutCopperStairsBlock> block = std::make_shared<OxidizedCutCopperStairsBlock>();
    block->facing = OxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = OxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = OxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = OxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18997] = block;
  }

  { // ID: 19238
    std::shared_ptr<OxidizedCutCopperSlabBlock> block = std::make_shared<OxidizedCutCopperSlabBlock>();
    block->type = OxidizedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = OxidizedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19238] = block;
  }

  { // ID: 19239
    std::shared_ptr<OxidizedCutCopperSlabBlock> block = std::make_shared<OxidizedCutCopperSlabBlock>();
    block->type = OxidizedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = OxidizedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19239] = block;
  }

  { // ID: 19240
    std::shared_ptr<OxidizedCutCopperSlabBlock> block = std::make_shared<OxidizedCutCopperSlabBlock>();
    block->type = OxidizedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = OxidizedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19240] = block;
  }

  { // ID: 19241
    std::shared_ptr<OxidizedCutCopperSlabBlock> block = std::make_shared<OxidizedCutCopperSlabBlock>();
    block->type = OxidizedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = OxidizedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19241] = block;
  }

  { // ID: 19242
    std::shared_ptr<OxidizedCutCopperSlabBlock> block = std::make_shared<OxidizedCutCopperSlabBlock>();
    block->type = OxidizedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = OxidizedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19242] = block;
  }

  { // ID: 19243
    std::shared_ptr<OxidizedCutCopperSlabBlock> block = std::make_shared<OxidizedCutCopperSlabBlock>();
    block->type = OxidizedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = OxidizedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19243] = block;
  }

  { // ID: 21437
    std::shared_ptr<OchreFroglightBlock> block = std::make_shared<OchreFroglightBlock>();
    block->axis = OchreFroglightBlock::AXIS_X;
    registry[21437] = block;
  }

  { // ID: 21438
    std::shared_ptr<OchreFroglightBlock> block = std::make_shared<OchreFroglightBlock>();
    block->axis = OchreFroglightBlock::AXIS_Y;
    registry[21438] = block;
  }

  { // ID: 21439
    std::shared_ptr<OchreFroglightBlock> block = std::make_shared<OchreFroglightBlock>();
    block->axis = OchreFroglightBlock::AXIS_Z;
    registry[21439] = block;
  }
}
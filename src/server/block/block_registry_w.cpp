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

#include "wall_torch_block.h"
#include "warped_button_block.h"
#include "warped_door_block.h"
#include "warped_fence_block.h"
#include "warped_fence_gate_block.h"
#include "warped_fungus_block.h"
#include "warped_hyphae_block.h"
#include "warped_nylium_block.h"
#include "warped_planks_block.h"
#include "warped_pressure_plate_block.h"
#include "warped_roots_block.h"
#include "warped_sign_block.h"
#include "warped_slab_block.h"
#include "warped_stairs_block.h"
#include "warped_stem_block.h"
#include "warped_trapdoor_block.h"
#include "warped_wall_sign_block.h"
#include "warped_wart_block_block.h"
#include "water_block.h"
#include "water_cauldron_block.h"
#include "waxed_copper_block_block.h"
#include "waxed_cut_copper_block.h"
#include "waxed_cut_copper_slab_block.h"
#include "waxed_cut_copper_stairs_block.h"
#include "waxed_exposed_copper_block.h"
#include "waxed_exposed_cut_copper_block.h"
#include "waxed_exposed_cut_copper_slab_block.h"
#include "waxed_exposed_cut_copper_stairs_block.h"
#include "waxed_oxidized_copper_block.h"
#include "waxed_oxidized_cut_copper_block.h"
#include "waxed_oxidized_cut_copper_slab_block.h"
#include "waxed_oxidized_cut_copper_stairs_block.h"
#include "waxed_weathered_copper_block.h"
#include "waxed_weathered_cut_copper_block.h"
#include "waxed_weathered_cut_copper_slab_block.h"
#include "waxed_weathered_cut_copper_stairs_block.h"
#include "weathered_copper_block.h"
#include "weathered_cut_copper_block.h"
#include "weathered_cut_copper_slab_block.h"
#include "weathered_cut_copper_stairs_block.h"
#include "weeping_vines_block.h"
#include "weeping_vines_plant_block.h"
#include "wet_sponge_block.h"
#include "wheat_block.h"
#include "white_banner_block.h"
#include "white_bed_block.h"
#include "white_candle_block.h"
#include "white_candle_cake_block.h"
#include "white_carpet_block.h"
#include "white_concrete_block.h"
#include "white_concrete_powder_block.h"
#include "white_glazed_terracotta_block.h"
#include "white_shulker_box_block.h"
#include "white_stained_glass_block.h"
#include "white_stained_glass_pane_block.h"
#include "white_terracotta_block.h"
#include "white_tulip_block.h"
#include "white_wall_banner_block.h"
#include "white_wool_block.h"
#include "wither_rose_block.h"
#include "wither_skeleton_skull_block.h"
#include "wither_skeleton_wall_skull_block.h"

void BlockRegistry::generateW() {

  { // ID: 75
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_0;
    registry[75] = block;
  }

  { // ID: 76
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_1;
    registry[76] = block;
  }

  { // ID: 77
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_2;
    registry[77] = block;
  }

  { // ID: 78
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_3;
    registry[78] = block;
  }

  { // ID: 79
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_4;
    registry[79] = block;
  }

  { // ID: 80
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_5;
    registry[80] = block;
  }

  { // ID: 81
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_6;
    registry[81] = block;
  }

  { // ID: 82
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_7;
    registry[82] = block;
  }

  { // ID: 83
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_8;
    registry[83] = block;
  }

  { // ID: 84
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_9;
    registry[84] = block;
  }

  { // ID: 85
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_10;
    registry[85] = block;
  }

  { // ID: 86
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_11;
    registry[86] = block;
  }

  { // ID: 87
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_12;
    registry[87] = block;
  }

  { // ID: 88
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_13;
    registry[88] = block;
  }

  { // ID: 89
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_14;
    registry[89] = block;
  }

  { // ID: 90
    std::shared_ptr<WaterBlock> block = std::make_shared<WaterBlock>();
    block->level = WaterBlock::LEVEL_15;
    registry[90] = block;
  }

  { // ID: 459
    std::shared_ptr<WetSpongeBlock> block = std::make_shared<WetSpongeBlock>();
    registry[459] = block;
  }

  { // ID: 1279
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_NORTH;
    block->occupied = WhiteBedBlock::OCCUPIED_TRUE;
    block->part = WhiteBedBlock::PART_HEAD;
    registry[1279] = block;
  }

  { // ID: 1280
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_NORTH;
    block->occupied = WhiteBedBlock::OCCUPIED_TRUE;
    block->part = WhiteBedBlock::PART_FOOT;
    registry[1280] = block;
  }

  { // ID: 1281
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_NORTH;
    block->occupied = WhiteBedBlock::OCCUPIED_FALSE;
    block->part = WhiteBedBlock::PART_HEAD;
    registry[1281] = block;
  }

  { // ID: 1282
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_NORTH;
    block->occupied = WhiteBedBlock::OCCUPIED_FALSE;
    block->part = WhiteBedBlock::PART_FOOT;
    registry[1282] = block;
  }

  { // ID: 1283
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_SOUTH;
    block->occupied = WhiteBedBlock::OCCUPIED_TRUE;
    block->part = WhiteBedBlock::PART_HEAD;
    registry[1283] = block;
  }

  { // ID: 1284
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_SOUTH;
    block->occupied = WhiteBedBlock::OCCUPIED_TRUE;
    block->part = WhiteBedBlock::PART_FOOT;
    registry[1284] = block;
  }

  { // ID: 1285
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_SOUTH;
    block->occupied = WhiteBedBlock::OCCUPIED_FALSE;
    block->part = WhiteBedBlock::PART_HEAD;
    registry[1285] = block;
  }

  { // ID: 1286
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_SOUTH;
    block->occupied = WhiteBedBlock::OCCUPIED_FALSE;
    block->part = WhiteBedBlock::PART_FOOT;
    registry[1286] = block;
  }

  { // ID: 1287
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_WEST;
    block->occupied = WhiteBedBlock::OCCUPIED_TRUE;
    block->part = WhiteBedBlock::PART_HEAD;
    registry[1287] = block;
  }

  { // ID: 1288
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_WEST;
    block->occupied = WhiteBedBlock::OCCUPIED_TRUE;
    block->part = WhiteBedBlock::PART_FOOT;
    registry[1288] = block;
  }

  { // ID: 1289
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_WEST;
    block->occupied = WhiteBedBlock::OCCUPIED_FALSE;
    block->part = WhiteBedBlock::PART_HEAD;
    registry[1289] = block;
  }

  { // ID: 1290
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_WEST;
    block->occupied = WhiteBedBlock::OCCUPIED_FALSE;
    block->part = WhiteBedBlock::PART_FOOT;
    registry[1290] = block;
  }

  { // ID: 1291
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_EAST;
    block->occupied = WhiteBedBlock::OCCUPIED_TRUE;
    block->part = WhiteBedBlock::PART_HEAD;
    registry[1291] = block;
  }

  { // ID: 1292
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_EAST;
    block->occupied = WhiteBedBlock::OCCUPIED_TRUE;
    block->part = WhiteBedBlock::PART_FOOT;
    registry[1292] = block;
  }

  { // ID: 1293
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_EAST;
    block->occupied = WhiteBedBlock::OCCUPIED_FALSE;
    block->part = WhiteBedBlock::PART_HEAD;
    registry[1293] = block;
  }

  { // ID: 1294
    std::shared_ptr<WhiteBedBlock> block = std::make_shared<WhiteBedBlock>();
    block->facing = WhiteBedBlock::FACING_EAST;
    block->occupied = WhiteBedBlock::OCCUPIED_FALSE;
    block->part = WhiteBedBlock::PART_FOOT;
    registry[1294] = block;
  }

  { // ID: 1638
    std::shared_ptr<WhiteWoolBlock> block = std::make_shared<WhiteWoolBlock>();
    registry[1638] = block;
  }

  { // ID: 1673
    std::shared_ptr<WhiteTulipBlock> block = std::make_shared<WhiteTulipBlock>();
    registry[1673] = block;
  }

  { // ID: 1677
    std::shared_ptr<WitherRoseBlock> block = std::make_shared<WitherRoseBlock>();
    registry[1677] = block;
  }

  { // ID: 1690
    std::shared_ptr<WallTorchBlock> block = std::make_shared<WallTorchBlock>();
    block->facing = WallTorchBlock::FACING_NORTH;
    registry[1690] = block;
  }

  { // ID: 1691
    std::shared_ptr<WallTorchBlock> block = std::make_shared<WallTorchBlock>();
    block->facing = WallTorchBlock::FACING_SOUTH;
    registry[1691] = block;
  }

  { // ID: 1692
    std::shared_ptr<WallTorchBlock> block = std::make_shared<WallTorchBlock>();
    block->facing = WallTorchBlock::FACING_WEST;
    registry[1692] = block;
  }

  { // ID: 1693
    std::shared_ptr<WallTorchBlock> block = std::make_shared<WallTorchBlock>();
    block->facing = WallTorchBlock::FACING_EAST;
    registry[1693] = block;
  }

  { // ID: 3612
    std::shared_ptr<WheatBlock> block = std::make_shared<WheatBlock>();
    block->age = WheatBlock::AGE_0;
    registry[3612] = block;
  }

  { // ID: 3613
    std::shared_ptr<WheatBlock> block = std::make_shared<WheatBlock>();
    block->age = WheatBlock::AGE_1;
    registry[3613] = block;
  }

  { // ID: 3614
    std::shared_ptr<WheatBlock> block = std::make_shared<WheatBlock>();
    block->age = WheatBlock::AGE_2;
    registry[3614] = block;
  }

  { // ID: 3615
    std::shared_ptr<WheatBlock> block = std::make_shared<WheatBlock>();
    block->age = WheatBlock::AGE_3;
    registry[3615] = block;
  }

  { // ID: 3616
    std::shared_ptr<WheatBlock> block = std::make_shared<WheatBlock>();
    block->age = WheatBlock::AGE_4;
    registry[3616] = block;
  }

  { // ID: 3617
    std::shared_ptr<WheatBlock> block = std::make_shared<WheatBlock>();
    block->age = WheatBlock::AGE_5;
    registry[3617] = block;
  }

  { // ID: 3618
    std::shared_ptr<WheatBlock> block = std::make_shared<WheatBlock>();
    block->age = WheatBlock::AGE_6;
    registry[3618] = block;
  }

  { // ID: 3619
    std::shared_ptr<WheatBlock> block = std::make_shared<WheatBlock>();
    block->age = WheatBlock::AGE_7;
    registry[3619] = block;
  }

  { // ID: 4404
    std::shared_ptr<WhiteStainedGlassBlock> block = std::make_shared<WhiteStainedGlassBlock>();
    registry[4404] = block;
  }

  { // ID: 5729
    std::shared_ptr<WaterCauldronBlock> block = std::make_shared<WaterCauldronBlock>();
    block->level = WaterCauldronBlock::LEVEL_1;
    registry[5729] = block;
  }

  { // ID: 5730
    std::shared_ptr<WaterCauldronBlock> block = std::make_shared<WaterCauldronBlock>();
    block->level = WaterCauldronBlock::LEVEL_2;
    registry[5730] = block;
  }

  { // ID: 5731
    std::shared_ptr<WaterCauldronBlock> block = std::make_shared<WaterCauldronBlock>();
    block->level = WaterCauldronBlock::LEVEL_3;
    registry[5731] = block;
  }

  { // ID: 7127
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_0;
    registry[7127] = block;
  }

  { // ID: 7128
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_1;
    registry[7128] = block;
  }

  { // ID: 7129
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_2;
    registry[7129] = block;
  }

  { // ID: 7130
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_3;
    registry[7130] = block;
  }

  { // ID: 7131
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_4;
    registry[7131] = block;
  }

  { // ID: 7132
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_5;
    registry[7132] = block;
  }

  { // ID: 7133
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_6;
    registry[7133] = block;
  }

  { // ID: 7134
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_7;
    registry[7134] = block;
  }

  { // ID: 7135
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_8;
    registry[7135] = block;
  }

  { // ID: 7136
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_9;
    registry[7136] = block;
  }

  { // ID: 7137
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_10;
    registry[7137] = block;
  }

  { // ID: 7138
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_11;
    registry[7138] = block;
  }

  { // ID: 7139
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_12;
    registry[7139] = block;
  }

  { // ID: 7140
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_13;
    registry[7140] = block;
  }

  { // ID: 7141
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_14;
    registry[7141] = block;
  }

  { // ID: 7142
    std::shared_ptr<WitherSkeletonSkullBlock> block = std::make_shared<WitherSkeletonSkullBlock>();
    block->rotation = WitherSkeletonSkullBlock::ROTATION_15;
    registry[7142] = block;
  }

  { // ID: 7143
    std::shared_ptr<WitherSkeletonWallSkullBlock> block = std::make_shared<WitherSkeletonWallSkullBlock>();
    block->facing = WitherSkeletonWallSkullBlock::FACING_NORTH;
    registry[7143] = block;
  }

  { // ID: 7144
    std::shared_ptr<WitherSkeletonWallSkullBlock> block = std::make_shared<WitherSkeletonWallSkullBlock>();
    block->facing = WitherSkeletonWallSkullBlock::FACING_SOUTH;
    registry[7144] = block;
  }

  { // ID: 7145
    std::shared_ptr<WitherSkeletonWallSkullBlock> block = std::make_shared<WitherSkeletonWallSkullBlock>();
    block->facing = WitherSkeletonWallSkullBlock::FACING_WEST;
    registry[7145] = block;
  }

  { // ID: 7146
    std::shared_ptr<WitherSkeletonWallSkullBlock> block = std::make_shared<WitherSkeletonWallSkullBlock>();
    block->facing = WitherSkeletonWallSkullBlock::FACING_EAST;
    registry[7146] = block;
  }

  { // ID: 7476
    std::shared_ptr<WhiteTerracottaBlock> block = std::make_shared<WhiteTerracottaBlock>();
    registry[7476] = block;
  }

  { // ID: 7492
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7492] = block;
  }

  { // ID: 7493
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7493] = block;
  }

  { // ID: 7494
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7494] = block;
  }

  { // ID: 7495
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7495] = block;
  }

  { // ID: 7496
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7496] = block;
  }

  { // ID: 7497
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7497] = block;
  }

  { // ID: 7498
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7498] = block;
  }

  { // ID: 7499
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7499] = block;
  }

  { // ID: 7500
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7500] = block;
  }

  { // ID: 7501
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7501] = block;
  }

  { // ID: 7502
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7502] = block;
  }

  { // ID: 7503
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7503] = block;
  }

  { // ID: 7504
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7504] = block;
  }

  { // ID: 7505
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7505] = block;
  }

  { // ID: 7506
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7506] = block;
  }

  { // ID: 7507
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_TRUE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7507] = block;
  }

  { // ID: 7508
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7508] = block;
  }

  { // ID: 7509
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7509] = block;
  }

  { // ID: 7510
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7510] = block;
  }

  { // ID: 7511
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7511] = block;
  }

  { // ID: 7512
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7512] = block;
  }

  { // ID: 7513
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7513] = block;
  }

  { // ID: 7514
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7514] = block;
  }

  { // ID: 7515
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_TRUE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7515] = block;
  }

  { // ID: 7516
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7516] = block;
  }

  { // ID: 7517
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7517] = block;
  }

  { // ID: 7518
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7518] = block;
  }

  { // ID: 7519
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7519] = block;
  }

  { // ID: 7520
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7520] = block;
  }

  { // ID: 7521
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7521] = block;
  }

  { // ID: 7522
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_TRUE;
    registry[7522] = block;
  }

  { // ID: 7523
    std::shared_ptr<WhiteStainedGlassPaneBlock> block = std::make_shared<WhiteStainedGlassPaneBlock>();
    block->east = WhiteStainedGlassPaneBlock::EAST_FALSE;
    block->north = WhiteStainedGlassPaneBlock::NORTH_FALSE;
    block->south = WhiteStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = WhiteStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = WhiteStainedGlassPaneBlock::WEST_FALSE;
    registry[7523] = block;
  }

  { // ID: 8607
    std::shared_ptr<WhiteCarpetBlock> block = std::make_shared<WhiteCarpetBlock>();
    registry[8607] = block;
  }

  { // ID: 8638
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_0;
    registry[8638] = block;
  }

  { // ID: 8639
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_1;
    registry[8639] = block;
  }

  { // ID: 8640
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_2;
    registry[8640] = block;
  }

  { // ID: 8641
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_3;
    registry[8641] = block;
  }

  { // ID: 8642
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_4;
    registry[8642] = block;
  }

  { // ID: 8643
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_5;
    registry[8643] = block;
  }

  { // ID: 8644
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_6;
    registry[8644] = block;
  }

  { // ID: 8645
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_7;
    registry[8645] = block;
  }

  { // ID: 8646
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_8;
    registry[8646] = block;
  }

  { // ID: 8647
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_9;
    registry[8647] = block;
  }

  { // ID: 8648
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_10;
    registry[8648] = block;
  }

  { // ID: 8649
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_11;
    registry[8649] = block;
  }

  { // ID: 8650
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_12;
    registry[8650] = block;
  }

  { // ID: 8651
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_13;
    registry[8651] = block;
  }

  { // ID: 8652
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_14;
    registry[8652] = block;
  }

  { // ID: 8653
    std::shared_ptr<WhiteBannerBlock> block = std::make_shared<WhiteBannerBlock>();
    block->rotation = WhiteBannerBlock::ROTATION_15;
    registry[8653] = block;
  }

  { // ID: 8894
    std::shared_ptr<WhiteWallBannerBlock> block = std::make_shared<WhiteWallBannerBlock>();
    block->facing = WhiteWallBannerBlock::FACING_NORTH;
    registry[8894] = block;
  }

  { // ID: 8895
    std::shared_ptr<WhiteWallBannerBlock> block = std::make_shared<WhiteWallBannerBlock>();
    block->facing = WhiteWallBannerBlock::FACING_SOUTH;
    registry[8895] = block;
  }

  { // ID: 8896
    std::shared_ptr<WhiteWallBannerBlock> block = std::make_shared<WhiteWallBannerBlock>();
    block->facing = WhiteWallBannerBlock::FACING_WEST;
    registry[8896] = block;
  }

  { // ID: 8897
    std::shared_ptr<WhiteWallBannerBlock> block = std::make_shared<WhiteWallBannerBlock>();
    block->facing = WhiteWallBannerBlock::FACING_EAST;
    registry[8897] = block;
  }

  { // ID: 10159
    std::shared_ptr<WhiteShulkerBoxBlock> block = std::make_shared<WhiteShulkerBoxBlock>();
    block->facing = WhiteShulkerBoxBlock::FACING_NORTH;
    registry[10159] = block;
  }

  { // ID: 10160
    std::shared_ptr<WhiteShulkerBoxBlock> block = std::make_shared<WhiteShulkerBoxBlock>();
    block->facing = WhiteShulkerBoxBlock::FACING_EAST;
    registry[10160] = block;
  }

  { // ID: 10161
    std::shared_ptr<WhiteShulkerBoxBlock> block = std::make_shared<WhiteShulkerBoxBlock>();
    block->facing = WhiteShulkerBoxBlock::FACING_SOUTH;
    registry[10161] = block;
  }

  { // ID: 10162
    std::shared_ptr<WhiteShulkerBoxBlock> block = std::make_shared<WhiteShulkerBoxBlock>();
    block->facing = WhiteShulkerBoxBlock::FACING_WEST;
    registry[10162] = block;
  }

  { // ID: 10163
    std::shared_ptr<WhiteShulkerBoxBlock> block = std::make_shared<WhiteShulkerBoxBlock>();
    block->facing = WhiteShulkerBoxBlock::FACING_UP;
    registry[10163] = block;
  }

  { // ID: 10164
    std::shared_ptr<WhiteShulkerBoxBlock> block = std::make_shared<WhiteShulkerBoxBlock>();
    block->facing = WhiteShulkerBoxBlock::FACING_DOWN;
    registry[10164] = block;
  }

  { // ID: 10255
    std::shared_ptr<WhiteGlazedTerracottaBlock> block = std::make_shared<WhiteGlazedTerracottaBlock>();
    block->facing = WhiteGlazedTerracottaBlock::FACING_NORTH;
    registry[10255] = block;
  }

  { // ID: 10256
    std::shared_ptr<WhiteGlazedTerracottaBlock> block = std::make_shared<WhiteGlazedTerracottaBlock>();
    block->facing = WhiteGlazedTerracottaBlock::FACING_SOUTH;
    registry[10256] = block;
  }

  { // ID: 10257
    std::shared_ptr<WhiteGlazedTerracottaBlock> block = std::make_shared<WhiteGlazedTerracottaBlock>();
    block->facing = WhiteGlazedTerracottaBlock::FACING_WEST;
    registry[10257] = block;
  }

  { // ID: 10258
    std::shared_ptr<WhiteGlazedTerracottaBlock> block = std::make_shared<WhiteGlazedTerracottaBlock>();
    block->facing = WhiteGlazedTerracottaBlock::FACING_EAST;
    registry[10258] = block;
  }

  { // ID: 10319
    std::shared_ptr<WhiteConcreteBlock> block = std::make_shared<WhiteConcreteBlock>();
    registry[10319] = block;
  }

  { // ID: 10335
    std::shared_ptr<WhiteConcretePowderBlock> block = std::make_shared<WhiteConcretePowderBlock>();
    registry[10335] = block;
  }

  { // ID: 16167
    std::shared_ptr<WarpedStemBlock> block = std::make_shared<WarpedStemBlock>();
    block->axis = WarpedStemBlock::AXIS_X;
    registry[16167] = block;
  }

  { // ID: 16168
    std::shared_ptr<WarpedStemBlock> block = std::make_shared<WarpedStemBlock>();
    block->axis = WarpedStemBlock::AXIS_Y;
    registry[16168] = block;
  }

  { // ID: 16169
    std::shared_ptr<WarpedStemBlock> block = std::make_shared<WarpedStemBlock>();
    block->axis = WarpedStemBlock::AXIS_Z;
    registry[16169] = block;
  }

  { // ID: 16173
    std::shared_ptr<WarpedHyphaeBlock> block = std::make_shared<WarpedHyphaeBlock>();
    block->axis = WarpedHyphaeBlock::AXIS_X;
    registry[16173] = block;
  }

  { // ID: 16174
    std::shared_ptr<WarpedHyphaeBlock> block = std::make_shared<WarpedHyphaeBlock>();
    block->axis = WarpedHyphaeBlock::AXIS_Y;
    registry[16174] = block;
  }

  { // ID: 16175
    std::shared_ptr<WarpedHyphaeBlock> block = std::make_shared<WarpedHyphaeBlock>();
    block->axis = WarpedHyphaeBlock::AXIS_Z;
    registry[16175] = block;
  }

  { // ID: 16179
    std::shared_ptr<WarpedNyliumBlock> block = std::make_shared<WarpedNyliumBlock>();
    registry[16179] = block;
  }

  { // ID: 16180
    std::shared_ptr<WarpedFungusBlock> block = std::make_shared<WarpedFungusBlock>();
    registry[16180] = block;
  }

  { // ID: 16181
    std::shared_ptr<WarpedWartBlockBlock> block = std::make_shared<WarpedWartBlockBlock>();
    registry[16181] = block;
  }

  { // ID: 16182
    std::shared_ptr<WarpedRootsBlock> block = std::make_shared<WarpedRootsBlock>();
    registry[16182] = block;
  }

  { // ID: 16199
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_0;
    registry[16199] = block;
  }

  { // ID: 16200
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_1;
    registry[16200] = block;
  }

  { // ID: 16201
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_2;
    registry[16201] = block;
  }

  { // ID: 16202
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_3;
    registry[16202] = block;
  }

  { // ID: 16203
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_4;
    registry[16203] = block;
  }

  { // ID: 16204
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_5;
    registry[16204] = block;
  }

  { // ID: 16205
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_6;
    registry[16205] = block;
  }

  { // ID: 16206
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_7;
    registry[16206] = block;
  }

  { // ID: 16207
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_8;
    registry[16207] = block;
  }

  { // ID: 16208
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_9;
    registry[16208] = block;
  }

  { // ID: 16209
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_10;
    registry[16209] = block;
  }

  { // ID: 16210
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_11;
    registry[16210] = block;
  }

  { // ID: 16211
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_12;
    registry[16211] = block;
  }

  { // ID: 16212
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_13;
    registry[16212] = block;
  }

  { // ID: 16213
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_14;
    registry[16213] = block;
  }

  { // ID: 16214
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_15;
    registry[16214] = block;
  }

  { // ID: 16215
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_16;
    registry[16215] = block;
  }

  { // ID: 16216
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_17;
    registry[16216] = block;
  }

  { // ID: 16217
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_18;
    registry[16217] = block;
  }

  { // ID: 16218
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_19;
    registry[16218] = block;
  }

  { // ID: 16219
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_20;
    registry[16219] = block;
  }

  { // ID: 16220
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_21;
    registry[16220] = block;
  }

  { // ID: 16221
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_22;
    registry[16221] = block;
  }

  { // ID: 16222
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_23;
    registry[16222] = block;
  }

  { // ID: 16223
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_24;
    registry[16223] = block;
  }

  { // ID: 16224
    std::shared_ptr<WeepingVinesBlock> block = std::make_shared<WeepingVinesBlock>();
    block->age = WeepingVinesBlock::AGE_25;
    registry[16224] = block;
  }

  { // ID: 16225
    std::shared_ptr<WeepingVinesPlantBlock> block = std::make_shared<WeepingVinesPlantBlock>();
    registry[16225] = block;
  }

  { // ID: 16255
    std::shared_ptr<WarpedPlanksBlock> block = std::make_shared<WarpedPlanksBlock>();
    registry[16255] = block;
  }

  { // ID: 16262
    std::shared_ptr<WarpedSlabBlock> block = std::make_shared<WarpedSlabBlock>();
    block->type = WarpedSlabBlock::TYPE_TOP;
    block->waterlogged = WarpedSlabBlock::WATERLOGGED_TRUE;
    registry[16262] = block;
  }

  { // ID: 16263
    std::shared_ptr<WarpedSlabBlock> block = std::make_shared<WarpedSlabBlock>();
    block->type = WarpedSlabBlock::TYPE_TOP;
    block->waterlogged = WarpedSlabBlock::WATERLOGGED_FALSE;
    registry[16263] = block;
  }

  { // ID: 16264
    std::shared_ptr<WarpedSlabBlock> block = std::make_shared<WarpedSlabBlock>();
    block->type = WarpedSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WarpedSlabBlock::WATERLOGGED_TRUE;
    registry[16264] = block;
  }

  { // ID: 16265
    std::shared_ptr<WarpedSlabBlock> block = std::make_shared<WarpedSlabBlock>();
    block->type = WarpedSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WarpedSlabBlock::WATERLOGGED_FALSE;
    registry[16265] = block;
  }

  { // ID: 16266
    std::shared_ptr<WarpedSlabBlock> block = std::make_shared<WarpedSlabBlock>();
    block->type = WarpedSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WarpedSlabBlock::WATERLOGGED_TRUE;
    registry[16266] = block;
  }

  { // ID: 16267
    std::shared_ptr<WarpedSlabBlock> block = std::make_shared<WarpedSlabBlock>();
    block->type = WarpedSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WarpedSlabBlock::WATERLOGGED_FALSE;
    registry[16267] = block;
  }

  { // ID: 16270
    std::shared_ptr<WarpedPressurePlateBlock> block = std::make_shared<WarpedPressurePlateBlock>();
    block->powered = WarpedPressurePlateBlock::POWERED_TRUE;
    registry[16270] = block;
  }

  { // ID: 16271
    std::shared_ptr<WarpedPressurePlateBlock> block = std::make_shared<WarpedPressurePlateBlock>();
    block->powered = WarpedPressurePlateBlock::POWERED_FALSE;
    registry[16271] = block;
  }

  { // ID: 16304
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16304] = block;
  }

  { // ID: 16305
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16305] = block;
  }

  { // ID: 16306
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16306] = block;
  }

  { // ID: 16307
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16307] = block;
  }

  { // ID: 16308
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16308] = block;
  }

  { // ID: 16309
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16309] = block;
  }

  { // ID: 16310
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16310] = block;
  }

  { // ID: 16311
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16311] = block;
  }

  { // ID: 16312
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16312] = block;
  }

  { // ID: 16313
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16313] = block;
  }

  { // ID: 16314
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16314] = block;
  }

  { // ID: 16315
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16315] = block;
  }

  { // ID: 16316
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16316] = block;
  }

  { // ID: 16317
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16317] = block;
  }

  { // ID: 16318
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16318] = block;
  }

  { // ID: 16319
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_TRUE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16319] = block;
  }

  { // ID: 16320
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16320] = block;
  }

  { // ID: 16321
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16321] = block;
  }

  { // ID: 16322
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16322] = block;
  }

  { // ID: 16323
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16323] = block;
  }

  { // ID: 16324
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16324] = block;
  }

  { // ID: 16325
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16325] = block;
  }

  { // ID: 16326
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16326] = block;
  }

  { // ID: 16327
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_TRUE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16327] = block;
  }

  { // ID: 16328
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16328] = block;
  }

  { // ID: 16329
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16329] = block;
  }

  { // ID: 16330
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16330] = block;
  }

  { // ID: 16331
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_TRUE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16331] = block;
  }

  { // ID: 16332
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16332] = block;
  }

  { // ID: 16333
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_TRUE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16333] = block;
  }

  { // ID: 16334
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_TRUE;
    registry[16334] = block;
  }

  { // ID: 16335
    std::shared_ptr<WarpedFenceBlock> block = std::make_shared<WarpedFenceBlock>();
    block->east = WarpedFenceBlock::EAST_FALSE;
    block->north = WarpedFenceBlock::NORTH_FALSE;
    block->south = WarpedFenceBlock::SOUTH_FALSE;
    block->waterlogged = WarpedFenceBlock::WATERLOGGED_FALSE;
    block->west = WarpedFenceBlock::WEST_FALSE;
    registry[16335] = block;
  }

  { // ID: 16400
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16400] = block;
  }

  { // ID: 16401
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16401] = block;
  }

  { // ID: 16402
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16402] = block;
  }

  { // ID: 16403
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16403] = block;
  }

  { // ID: 16404
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16404] = block;
  }

  { // ID: 16405
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16405] = block;
  }

  { // ID: 16406
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16406] = block;
  }

  { // ID: 16407
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16407] = block;
  }

  { // ID: 16408
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16408] = block;
  }

  { // ID: 16409
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16409] = block;
  }

  { // ID: 16410
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16410] = block;
  }

  { // ID: 16411
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16411] = block;
  }

  { // ID: 16412
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16412] = block;
  }

  { // ID: 16413
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16413] = block;
  }

  { // ID: 16414
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16414] = block;
  }

  { // ID: 16415
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_NORTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16415] = block;
  }

  { // ID: 16416
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16416] = block;
  }

  { // ID: 16417
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16417] = block;
  }

  { // ID: 16418
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16418] = block;
  }

  { // ID: 16419
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16419] = block;
  }

  { // ID: 16420
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16420] = block;
  }

  { // ID: 16421
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16421] = block;
  }

  { // ID: 16422
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16422] = block;
  }

  { // ID: 16423
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16423] = block;
  }

  { // ID: 16424
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16424] = block;
  }

  { // ID: 16425
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16425] = block;
  }

  { // ID: 16426
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16426] = block;
  }

  { // ID: 16427
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16427] = block;
  }

  { // ID: 16428
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16428] = block;
  }

  { // ID: 16429
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16429] = block;
  }

  { // ID: 16430
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16430] = block;
  }

  { // ID: 16431
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_SOUTH;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16431] = block;
  }

  { // ID: 16432
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16432] = block;
  }

  { // ID: 16433
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16433] = block;
  }

  { // ID: 16434
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16434] = block;
  }

  { // ID: 16435
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16435] = block;
  }

  { // ID: 16436
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16436] = block;
  }

  { // ID: 16437
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16437] = block;
  }

  { // ID: 16438
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16438] = block;
  }

  { // ID: 16439
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16439] = block;
  }

  { // ID: 16440
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16440] = block;
  }

  { // ID: 16441
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16441] = block;
  }

  { // ID: 16442
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16442] = block;
  }

  { // ID: 16443
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16443] = block;
  }

  { // ID: 16444
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16444] = block;
  }

  { // ID: 16445
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16445] = block;
  }

  { // ID: 16446
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16446] = block;
  }

  { // ID: 16447
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_WEST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16447] = block;
  }

  { // ID: 16448
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16448] = block;
  }

  { // ID: 16449
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16449] = block;
  }

  { // ID: 16450
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16450] = block;
  }

  { // ID: 16451
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16451] = block;
  }

  { // ID: 16452
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16452] = block;
  }

  { // ID: 16453
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16453] = block;
  }

  { // ID: 16454
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16454] = block;
  }

  { // ID: 16455
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_TOP;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16455] = block;
  }

  { // ID: 16456
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16456] = block;
  }

  { // ID: 16457
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16457] = block;
  }

  { // ID: 16458
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16458] = block;
  }

  { // ID: 16459
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_TRUE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16459] = block;
  }

  { // ID: 16460
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16460] = block;
  }

  { // ID: 16461
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_TRUE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16461] = block;
  }

  { // ID: 16462
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_TRUE;
    registry[16462] = block;
  }

  { // ID: 16463
    std::shared_ptr<WarpedTrapdoorBlock> block = std::make_shared<WarpedTrapdoorBlock>();
    block->facing = WarpedTrapdoorBlock::FACING_EAST;
    block->half = WarpedTrapdoorBlock::HALF_BOTTOM;
    block->open = WarpedTrapdoorBlock::OPEN_FALSE;
    block->powered = WarpedTrapdoorBlock::POWERED_FALSE;
    block->waterlogged = WarpedTrapdoorBlock::WATERLOGGED_FALSE;
    registry[16463] = block;
  }

  { // ID: 16496
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_NORTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16496] = block;
  }

  { // ID: 16497
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_NORTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16497] = block;
  }

  { // ID: 16498
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_NORTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16498] = block;
  }

  { // ID: 16499
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_NORTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16499] = block;
  }

  { // ID: 16500
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_NORTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16500] = block;
  }

  { // ID: 16501
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_NORTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16501] = block;
  }

  { // ID: 16502
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_NORTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16502] = block;
  }

  { // ID: 16503
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_NORTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16503] = block;
  }

  { // ID: 16504
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_SOUTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16504] = block;
  }

  { // ID: 16505
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_SOUTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16505] = block;
  }

  { // ID: 16506
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_SOUTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16506] = block;
  }

  { // ID: 16507
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_SOUTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16507] = block;
  }

  { // ID: 16508
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_SOUTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16508] = block;
  }

  { // ID: 16509
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_SOUTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16509] = block;
  }

  { // ID: 16510
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_SOUTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16510] = block;
  }

  { // ID: 16511
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_SOUTH;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16511] = block;
  }

  { // ID: 16512
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_WEST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16512] = block;
  }

  { // ID: 16513
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_WEST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16513] = block;
  }

  { // ID: 16514
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_WEST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16514] = block;
  }

  { // ID: 16515
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_WEST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16515] = block;
  }

  { // ID: 16516
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_WEST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16516] = block;
  }

  { // ID: 16517
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_WEST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16517] = block;
  }

  { // ID: 16518
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_WEST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16518] = block;
  }

  { // ID: 16519
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_WEST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16519] = block;
  }

  { // ID: 16520
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_EAST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16520] = block;
  }

  { // ID: 16521
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_EAST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16521] = block;
  }

  { // ID: 16522
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_EAST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16522] = block;
  }

  { // ID: 16523
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_EAST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_TRUE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16523] = block;
  }

  { // ID: 16524
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_EAST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16524] = block;
  }

  { // ID: 16525
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_EAST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_TRUE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16525] = block;
  }

  { // ID: 16526
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_EAST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_TRUE;
    registry[16526] = block;
  }

  { // ID: 16527
    std::shared_ptr<WarpedFenceGateBlock> block = std::make_shared<WarpedFenceGateBlock>();
    block->facing = WarpedFenceGateBlock::FACING_EAST;
    block->in_wall = WarpedFenceGateBlock::IN_WALL_FALSE;
    block->open = WarpedFenceGateBlock::OPEN_FALSE;
    block->powered = WarpedFenceGateBlock::POWERED_FALSE;
    registry[16527] = block;
  }

  { // ID: 16608
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16608] = block;
  }

  { // ID: 16609
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16609] = block;
  }

  { // ID: 16610
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16610] = block;
  }

  { // ID: 16611
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16611] = block;
  }

  { // ID: 16612
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16612] = block;
  }

  { // ID: 16613
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16613] = block;
  }

  { // ID: 16614
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16614] = block;
  }

  { // ID: 16615
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16615] = block;
  }

  { // ID: 16616
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16616] = block;
  }

  { // ID: 16617
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16617] = block;
  }

  { // ID: 16618
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16618] = block;
  }

  { // ID: 16619
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16619] = block;
  }

  { // ID: 16620
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16620] = block;
  }

  { // ID: 16621
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16621] = block;
  }

  { // ID: 16622
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16622] = block;
  }

  { // ID: 16623
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16623] = block;
  }

  { // ID: 16624
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16624] = block;
  }

  { // ID: 16625
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16625] = block;
  }

  { // ID: 16626
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16626] = block;
  }

  { // ID: 16627
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_NORTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16627] = block;
  }

  { // ID: 16628
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16628] = block;
  }

  { // ID: 16629
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16629] = block;
  }

  { // ID: 16630
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16630] = block;
  }

  { // ID: 16631
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16631] = block;
  }

  { // ID: 16632
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16632] = block;
  }

  { // ID: 16633
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16633] = block;
  }

  { // ID: 16634
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16634] = block;
  }

  { // ID: 16635
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16635] = block;
  }

  { // ID: 16636
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16636] = block;
  }

  { // ID: 16637
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16637] = block;
  }

  { // ID: 16638
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16638] = block;
  }

  { // ID: 16639
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16639] = block;
  }

  { // ID: 16640
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16640] = block;
  }

  { // ID: 16641
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16641] = block;
  }

  { // ID: 16642
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16642] = block;
  }

  { // ID: 16643
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16643] = block;
  }

  { // ID: 16644
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16644] = block;
  }

  { // ID: 16645
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16645] = block;
  }

  { // ID: 16646
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16646] = block;
  }

  { // ID: 16647
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_SOUTH;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16647] = block;
  }

  { // ID: 16648
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16648] = block;
  }

  { // ID: 16649
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16649] = block;
  }

  { // ID: 16650
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16650] = block;
  }

  { // ID: 16651
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16651] = block;
  }

  { // ID: 16652
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16652] = block;
  }

  { // ID: 16653
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16653] = block;
  }

  { // ID: 16654
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16654] = block;
  }

  { // ID: 16655
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16655] = block;
  }

  { // ID: 16656
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16656] = block;
  }

  { // ID: 16657
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16657] = block;
  }

  { // ID: 16658
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16658] = block;
  }

  { // ID: 16659
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16659] = block;
  }

  { // ID: 16660
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16660] = block;
  }

  { // ID: 16661
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16661] = block;
  }

  { // ID: 16662
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16662] = block;
  }

  { // ID: 16663
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16663] = block;
  }

  { // ID: 16664
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16664] = block;
  }

  { // ID: 16665
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16665] = block;
  }

  { // ID: 16666
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16666] = block;
  }

  { // ID: 16667
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_WEST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16667] = block;
  }

  { // ID: 16668
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16668] = block;
  }

  { // ID: 16669
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16669] = block;
  }

  { // ID: 16670
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16670] = block;
  }

  { // ID: 16671
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16671] = block;
  }

  { // ID: 16672
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16672] = block;
  }

  { // ID: 16673
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16673] = block;
  }

  { // ID: 16674
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16674] = block;
  }

  { // ID: 16675
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16675] = block;
  }

  { // ID: 16676
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16676] = block;
  }

  { // ID: 16677
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_TOP;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16677] = block;
  }

  { // ID: 16678
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16678] = block;
  }

  { // ID: 16679
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16679] = block;
  }

  { // ID: 16680
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16680] = block;
  }

  { // ID: 16681
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16681] = block;
  }

  { // ID: 16682
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16682] = block;
  }

  { // ID: 16683
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16683] = block;
  }

  { // ID: 16684
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16684] = block;
  }

  { // ID: 16685
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16685] = block;
  }

  { // ID: 16686
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_TRUE;
    registry[16686] = block;
  }

  { // ID: 16687
    std::shared_ptr<WarpedStairsBlock> block = std::make_shared<WarpedStairsBlock>();
    block->facing = WarpedStairsBlock::FACING_EAST;
    block->half = WarpedStairsBlock::HALF_BOTTOM;
    block->shape = WarpedStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WarpedStairsBlock::WATERLOGGED_FALSE;
    registry[16687] = block;
  }

  { // ID: 16712
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_FLOOR;
    block->facing = WarpedButtonBlock::FACING_NORTH;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16712] = block;
  }

  { // ID: 16713
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_FLOOR;
    block->facing = WarpedButtonBlock::FACING_NORTH;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16713] = block;
  }

  { // ID: 16714
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_FLOOR;
    block->facing = WarpedButtonBlock::FACING_SOUTH;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16714] = block;
  }

  { // ID: 16715
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_FLOOR;
    block->facing = WarpedButtonBlock::FACING_SOUTH;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16715] = block;
  }

  { // ID: 16716
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_FLOOR;
    block->facing = WarpedButtonBlock::FACING_WEST;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16716] = block;
  }

  { // ID: 16717
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_FLOOR;
    block->facing = WarpedButtonBlock::FACING_WEST;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16717] = block;
  }

  { // ID: 16718
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_FLOOR;
    block->facing = WarpedButtonBlock::FACING_EAST;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16718] = block;
  }

  { // ID: 16719
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_FLOOR;
    block->facing = WarpedButtonBlock::FACING_EAST;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16719] = block;
  }

  { // ID: 16720
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_WALL;
    block->facing = WarpedButtonBlock::FACING_NORTH;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16720] = block;
  }

  { // ID: 16721
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_WALL;
    block->facing = WarpedButtonBlock::FACING_NORTH;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16721] = block;
  }

  { // ID: 16722
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_WALL;
    block->facing = WarpedButtonBlock::FACING_SOUTH;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16722] = block;
  }

  { // ID: 16723
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_WALL;
    block->facing = WarpedButtonBlock::FACING_SOUTH;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16723] = block;
  }

  { // ID: 16724
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_WALL;
    block->facing = WarpedButtonBlock::FACING_WEST;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16724] = block;
  }

  { // ID: 16725
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_WALL;
    block->facing = WarpedButtonBlock::FACING_WEST;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16725] = block;
  }

  { // ID: 16726
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_WALL;
    block->facing = WarpedButtonBlock::FACING_EAST;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16726] = block;
  }

  { // ID: 16727
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_WALL;
    block->facing = WarpedButtonBlock::FACING_EAST;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16727] = block;
  }

  { // ID: 16728
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_CEILING;
    block->facing = WarpedButtonBlock::FACING_NORTH;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16728] = block;
  }

  { // ID: 16729
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_CEILING;
    block->facing = WarpedButtonBlock::FACING_NORTH;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16729] = block;
  }

  { // ID: 16730
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_CEILING;
    block->facing = WarpedButtonBlock::FACING_SOUTH;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16730] = block;
  }

  { // ID: 16731
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_CEILING;
    block->facing = WarpedButtonBlock::FACING_SOUTH;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16731] = block;
  }

  { // ID: 16732
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_CEILING;
    block->facing = WarpedButtonBlock::FACING_WEST;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16732] = block;
  }

  { // ID: 16733
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_CEILING;
    block->facing = WarpedButtonBlock::FACING_WEST;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16733] = block;
  }

  { // ID: 16734
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_CEILING;
    block->facing = WarpedButtonBlock::FACING_EAST;
    block->powered = WarpedButtonBlock::POWERED_TRUE;
    registry[16734] = block;
  }

  { // ID: 16735
    std::shared_ptr<WarpedButtonBlock> block = std::make_shared<WarpedButtonBlock>();
    block->face = WarpedButtonBlock::FACE_CEILING;
    block->facing = WarpedButtonBlock::FACING_EAST;
    block->powered = WarpedButtonBlock::POWERED_FALSE;
    registry[16735] = block;
  }

  { // ID: 16800
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16800] = block;
  }

  { // ID: 16801
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16801] = block;
  }

  { // ID: 16802
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16802] = block;
  }

  { // ID: 16803
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16803] = block;
  }

  { // ID: 16804
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16804] = block;
  }

  { // ID: 16805
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16805] = block;
  }

  { // ID: 16806
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16806] = block;
  }

  { // ID: 16807
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16807] = block;
  }

  { // ID: 16808
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16808] = block;
  }

  { // ID: 16809
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16809] = block;
  }

  { // ID: 16810
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16810] = block;
  }

  { // ID: 16811
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16811] = block;
  }

  { // ID: 16812
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16812] = block;
  }

  { // ID: 16813
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16813] = block;
  }

  { // ID: 16814
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16814] = block;
  }

  { // ID: 16815
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_NORTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16815] = block;
  }

  { // ID: 16816
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16816] = block;
  }

  { // ID: 16817
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16817] = block;
  }

  { // ID: 16818
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16818] = block;
  }

  { // ID: 16819
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16819] = block;
  }

  { // ID: 16820
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16820] = block;
  }

  { // ID: 16821
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16821] = block;
  }

  { // ID: 16822
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16822] = block;
  }

  { // ID: 16823
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16823] = block;
  }

  { // ID: 16824
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16824] = block;
  }

  { // ID: 16825
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16825] = block;
  }

  { // ID: 16826
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16826] = block;
  }

  { // ID: 16827
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16827] = block;
  }

  { // ID: 16828
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16828] = block;
  }

  { // ID: 16829
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16829] = block;
  }

  { // ID: 16830
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16830] = block;
  }

  { // ID: 16831
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_SOUTH;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16831] = block;
  }

  { // ID: 16832
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16832] = block;
  }

  { // ID: 16833
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16833] = block;
  }

  { // ID: 16834
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16834] = block;
  }

  { // ID: 16835
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16835] = block;
  }

  { // ID: 16836
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16836] = block;
  }

  { // ID: 16837
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16837] = block;
  }

  { // ID: 16838
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16838] = block;
  }

  { // ID: 16839
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16839] = block;
  }

  { // ID: 16840
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16840] = block;
  }

  { // ID: 16841
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16841] = block;
  }

  { // ID: 16842
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16842] = block;
  }

  { // ID: 16843
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16843] = block;
  }

  { // ID: 16844
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16844] = block;
  }

  { // ID: 16845
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16845] = block;
  }

  { // ID: 16846
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16846] = block;
  }

  { // ID: 16847
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_WEST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16847] = block;
  }

  { // ID: 16848
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16848] = block;
  }

  { // ID: 16849
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16849] = block;
  }

  { // ID: 16850
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16850] = block;
  }

  { // ID: 16851
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16851] = block;
  }

  { // ID: 16852
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16852] = block;
  }

  { // ID: 16853
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16853] = block;
  }

  { // ID: 16854
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16854] = block;
  }

  { // ID: 16855
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_UPPER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16855] = block;
  }

  { // ID: 16856
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16856] = block;
  }

  { // ID: 16857
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16857] = block;
  }

  { // ID: 16858
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16858] = block;
  }

  { // ID: 16859
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_LEFT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16859] = block;
  }

  { // ID: 16860
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16860] = block;
  }

  { // ID: 16861
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_TRUE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16861] = block;
  }

  { // ID: 16862
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_TRUE;
    registry[16862] = block;
  }

  { // ID: 16863
    std::shared_ptr<WarpedDoorBlock> block = std::make_shared<WarpedDoorBlock>();
    block->facing = WarpedDoorBlock::FACING_EAST;
    block->half = WarpedDoorBlock::HALF_LOWER;
    block->hinge = WarpedDoorBlock::HINGE_RIGHT;
    block->open = WarpedDoorBlock::OPEN_FALSE;
    block->powered = WarpedDoorBlock::POWERED_FALSE;
    registry[16863] = block;
  }

  { // ID: 16896
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_0;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16896] = block;
  }

  { // ID: 16897
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_0;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16897] = block;
  }

  { // ID: 16898
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_1;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16898] = block;
  }

  { // ID: 16899
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_1;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16899] = block;
  }

  { // ID: 16900
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_2;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16900] = block;
  }

  { // ID: 16901
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_2;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16901] = block;
  }

  { // ID: 16902
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_3;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16902] = block;
  }

  { // ID: 16903
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_3;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16903] = block;
  }

  { // ID: 16904
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_4;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16904] = block;
  }

  { // ID: 16905
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_4;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16905] = block;
  }

  { // ID: 16906
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_5;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16906] = block;
  }

  { // ID: 16907
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_5;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16907] = block;
  }

  { // ID: 16908
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_6;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16908] = block;
  }

  { // ID: 16909
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_6;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16909] = block;
  }

  { // ID: 16910
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_7;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16910] = block;
  }

  { // ID: 16911
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_7;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16911] = block;
  }

  { // ID: 16912
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_8;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16912] = block;
  }

  { // ID: 16913
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_8;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16913] = block;
  }

  { // ID: 16914
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_9;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16914] = block;
  }

  { // ID: 16915
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_9;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16915] = block;
  }

  { // ID: 16916
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_10;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16916] = block;
  }

  { // ID: 16917
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_10;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16917] = block;
  }

  { // ID: 16918
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_11;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16918] = block;
  }

  { // ID: 16919
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_11;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16919] = block;
  }

  { // ID: 16920
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_12;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16920] = block;
  }

  { // ID: 16921
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_12;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16921] = block;
  }

  { // ID: 16922
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_13;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16922] = block;
  }

  { // ID: 16923
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_13;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16923] = block;
  }

  { // ID: 16924
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_14;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16924] = block;
  }

  { // ID: 16925
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_14;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16925] = block;
  }

  { // ID: 16926
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_15;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_TRUE;
    registry[16926] = block;
  }

  { // ID: 16927
    std::shared_ptr<WarpedSignBlock> block = std::make_shared<WarpedSignBlock>();
    block->rotation = WarpedSignBlock::ROTATION_15;
    block->waterlogged = WarpedSignBlock::WATERLOGGED_FALSE;
    registry[16927] = block;
  }

  { // ID: 16936
    std::shared_ptr<WarpedWallSignBlock> block = std::make_shared<WarpedWallSignBlock>();
    block->facing = WarpedWallSignBlock::FACING_NORTH;
    block->waterlogged = WarpedWallSignBlock::WATERLOGGED_TRUE;
    registry[16936] = block;
  }

  { // ID: 16937
    std::shared_ptr<WarpedWallSignBlock> block = std::make_shared<WarpedWallSignBlock>();
    block->facing = WarpedWallSignBlock::FACING_NORTH;
    block->waterlogged = WarpedWallSignBlock::WATERLOGGED_FALSE;
    registry[16937] = block;
  }

  { // ID: 16938
    std::shared_ptr<WarpedWallSignBlock> block = std::make_shared<WarpedWallSignBlock>();
    block->facing = WarpedWallSignBlock::FACING_SOUTH;
    block->waterlogged = WarpedWallSignBlock::WATERLOGGED_TRUE;
    registry[16938] = block;
  }

  { // ID: 16939
    std::shared_ptr<WarpedWallSignBlock> block = std::make_shared<WarpedWallSignBlock>();
    block->facing = WarpedWallSignBlock::FACING_SOUTH;
    block->waterlogged = WarpedWallSignBlock::WATERLOGGED_FALSE;
    registry[16939] = block;
  }

  { // ID: 16940
    std::shared_ptr<WarpedWallSignBlock> block = std::make_shared<WarpedWallSignBlock>();
    block->facing = WarpedWallSignBlock::FACING_WEST;
    block->waterlogged = WarpedWallSignBlock::WATERLOGGED_TRUE;
    registry[16940] = block;
  }

  { // ID: 16941
    std::shared_ptr<WarpedWallSignBlock> block = std::make_shared<WarpedWallSignBlock>();
    block->facing = WarpedWallSignBlock::FACING_WEST;
    block->waterlogged = WarpedWallSignBlock::WATERLOGGED_FALSE;
    registry[16941] = block;
  }

  { // ID: 16942
    std::shared_ptr<WarpedWallSignBlock> block = std::make_shared<WarpedWallSignBlock>();
    block->facing = WarpedWallSignBlock::FACING_EAST;
    block->waterlogged = WarpedWallSignBlock::WATERLOGGED_TRUE;
    registry[16942] = block;
  }

  { // ID: 16943
    std::shared_ptr<WarpedWallSignBlock> block = std::make_shared<WarpedWallSignBlock>();
    block->facing = WarpedWallSignBlock::FACING_EAST;
    block->waterlogged = WarpedWallSignBlock::WATERLOGGED_FALSE;
    registry[16943] = block;
  }

  { // ID: 18329
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_1;
    block->lit = WhiteCandleBlock::LIT_TRUE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_TRUE;
    registry[18329] = block;
  }

  { // ID: 18330
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_1;
    block->lit = WhiteCandleBlock::LIT_TRUE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_FALSE;
    registry[18330] = block;
  }

  { // ID: 18331
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_1;
    block->lit = WhiteCandleBlock::LIT_FALSE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_TRUE;
    registry[18331] = block;
  }

  { // ID: 18332
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_1;
    block->lit = WhiteCandleBlock::LIT_FALSE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_FALSE;
    registry[18332] = block;
  }

  { // ID: 18333
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_2;
    block->lit = WhiteCandleBlock::LIT_TRUE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_TRUE;
    registry[18333] = block;
  }

  { // ID: 18334
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_2;
    block->lit = WhiteCandleBlock::LIT_TRUE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_FALSE;
    registry[18334] = block;
  }

  { // ID: 18335
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_2;
    block->lit = WhiteCandleBlock::LIT_FALSE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_TRUE;
    registry[18335] = block;
  }

  { // ID: 18336
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_2;
    block->lit = WhiteCandleBlock::LIT_FALSE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_FALSE;
    registry[18336] = block;
  }

  { // ID: 18337
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_3;
    block->lit = WhiteCandleBlock::LIT_TRUE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_TRUE;
    registry[18337] = block;
  }

  { // ID: 18338
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_3;
    block->lit = WhiteCandleBlock::LIT_TRUE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_FALSE;
    registry[18338] = block;
  }

  { // ID: 18339
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_3;
    block->lit = WhiteCandleBlock::LIT_FALSE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_TRUE;
    registry[18339] = block;
  }

  { // ID: 18340
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_3;
    block->lit = WhiteCandleBlock::LIT_FALSE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_FALSE;
    registry[18340] = block;
  }

  { // ID: 18341
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_4;
    block->lit = WhiteCandleBlock::LIT_TRUE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_TRUE;
    registry[18341] = block;
  }

  { // ID: 18342
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_4;
    block->lit = WhiteCandleBlock::LIT_TRUE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_FALSE;
    registry[18342] = block;
  }

  { // ID: 18343
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_4;
    block->lit = WhiteCandleBlock::LIT_FALSE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_TRUE;
    registry[18343] = block;
  }

  { // ID: 18344
    std::shared_ptr<WhiteCandleBlock> block = std::make_shared<WhiteCandleBlock>();
    block->candles = WhiteCandleBlock::CANDLES_4;
    block->lit = WhiteCandleBlock::LIT_FALSE;
    block->waterlogged = WhiteCandleBlock::WATERLOGGED_FALSE;
    registry[18344] = block;
  }

  { // ID: 18587
    std::shared_ptr<WhiteCandleCakeBlock> block = std::make_shared<WhiteCandleCakeBlock>();
    block->lit = WhiteCandleCakeBlock::LIT_TRUE;
    registry[18587] = block;
  }

  { // ID: 18588
    std::shared_ptr<WhiteCandleCakeBlock> block = std::make_shared<WhiteCandleCakeBlock>();
    block->lit = WhiteCandleCakeBlock::LIT_FALSE;
    registry[18588] = block;
  }

  { // ID: 18909
    std::shared_ptr<WeatheredCopperBlock> block = std::make_shared<WeatheredCopperBlock>();
    registry[18909] = block;
  }

  { // ID: 18915
    std::shared_ptr<WeatheredCutCopperBlock> block = std::make_shared<WeatheredCutCopperBlock>();
    registry[18915] = block;
  }

  { // ID: 18998
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[18998] = block;
  }

  { // ID: 18999
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[18999] = block;
  }

  { // ID: 19000
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19000] = block;
  }

  { // ID: 19001
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19001] = block;
  }

  { // ID: 19002
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19002] = block;
  }

  { // ID: 19003
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19003] = block;
  }

  { // ID: 19004
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19004] = block;
  }

  { // ID: 19005
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19005] = block;
  }

  { // ID: 19006
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19006] = block;
  }

  { // ID: 19007
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19007] = block;
  }

  { // ID: 19008
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19008] = block;
  }

  { // ID: 19009
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19009] = block;
  }

  { // ID: 19010
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19010] = block;
  }

  { // ID: 19011
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19011] = block;
  }

  { // ID: 19012
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19012] = block;
  }

  { // ID: 19013
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19013] = block;
  }

  { // ID: 19014
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19014] = block;
  }

  { // ID: 19015
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19015] = block;
  }

  { // ID: 19016
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19016] = block;
  }

  { // ID: 19017
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19017] = block;
  }

  { // ID: 19018
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19018] = block;
  }

  { // ID: 19019
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19019] = block;
  }

  { // ID: 19020
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19020] = block;
  }

  { // ID: 19021
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19021] = block;
  }

  { // ID: 19022
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19022] = block;
  }

  { // ID: 19023
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19023] = block;
  }

  { // ID: 19024
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19024] = block;
  }

  { // ID: 19025
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19025] = block;
  }

  { // ID: 19026
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19026] = block;
  }

  { // ID: 19027
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19027] = block;
  }

  { // ID: 19028
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19028] = block;
  }

  { // ID: 19029
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19029] = block;
  }

  { // ID: 19030
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19030] = block;
  }

  { // ID: 19031
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19031] = block;
  }

  { // ID: 19032
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19032] = block;
  }

  { // ID: 19033
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19033] = block;
  }

  { // ID: 19034
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19034] = block;
  }

  { // ID: 19035
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19035] = block;
  }

  { // ID: 19036
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19036] = block;
  }

  { // ID: 19037
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19037] = block;
  }

  { // ID: 19038
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19038] = block;
  }

  { // ID: 19039
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19039] = block;
  }

  { // ID: 19040
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19040] = block;
  }

  { // ID: 19041
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19041] = block;
  }

  { // ID: 19042
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19042] = block;
  }

  { // ID: 19043
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19043] = block;
  }

  { // ID: 19044
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19044] = block;
  }

  { // ID: 19045
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19045] = block;
  }

  { // ID: 19046
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19046] = block;
  }

  { // ID: 19047
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19047] = block;
  }

  { // ID: 19048
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19048] = block;
  }

  { // ID: 19049
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19049] = block;
  }

  { // ID: 19050
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19050] = block;
  }

  { // ID: 19051
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19051] = block;
  }

  { // ID: 19052
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19052] = block;
  }

  { // ID: 19053
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19053] = block;
  }

  { // ID: 19054
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19054] = block;
  }

  { // ID: 19055
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19055] = block;
  }

  { // ID: 19056
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19056] = block;
  }

  { // ID: 19057
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19057] = block;
  }

  { // ID: 19058
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19058] = block;
  }

  { // ID: 19059
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19059] = block;
  }

  { // ID: 19060
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19060] = block;
  }

  { // ID: 19061
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19061] = block;
  }

  { // ID: 19062
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19062] = block;
  }

  { // ID: 19063
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19063] = block;
  }

  { // ID: 19064
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19064] = block;
  }

  { // ID: 19065
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19065] = block;
  }

  { // ID: 19066
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19066] = block;
  }

  { // ID: 19067
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19067] = block;
  }

  { // ID: 19068
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19068] = block;
  }

  { // ID: 19069
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19069] = block;
  }

  { // ID: 19070
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19070] = block;
  }

  { // ID: 19071
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19071] = block;
  }

  { // ID: 19072
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19072] = block;
  }

  { // ID: 19073
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19073] = block;
  }

  { // ID: 19074
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19074] = block;
  }

  { // ID: 19075
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19075] = block;
  }

  { // ID: 19076
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19076] = block;
  }

  { // ID: 19077
    std::shared_ptr<WeatheredCutCopperStairsBlock> block = std::make_shared<WeatheredCutCopperStairsBlock>();
    block->facing = WeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19077] = block;
  }

  { // ID: 19244
    std::shared_ptr<WeatheredCutCopperSlabBlock> block = std::make_shared<WeatheredCutCopperSlabBlock>();
    block->type = WeatheredCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WeatheredCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19244] = block;
  }

  { // ID: 19245
    std::shared_ptr<WeatheredCutCopperSlabBlock> block = std::make_shared<WeatheredCutCopperSlabBlock>();
    block->type = WeatheredCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WeatheredCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19245] = block;
  }

  { // ID: 19246
    std::shared_ptr<WeatheredCutCopperSlabBlock> block = std::make_shared<WeatheredCutCopperSlabBlock>();
    block->type = WeatheredCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WeatheredCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19246] = block;
  }

  { // ID: 19247
    std::shared_ptr<WeatheredCutCopperSlabBlock> block = std::make_shared<WeatheredCutCopperSlabBlock>();
    block->type = WeatheredCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WeatheredCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19247] = block;
  }

  { // ID: 19248
    std::shared_ptr<WeatheredCutCopperSlabBlock> block = std::make_shared<WeatheredCutCopperSlabBlock>();
    block->type = WeatheredCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WeatheredCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19248] = block;
  }

  { // ID: 19249
    std::shared_ptr<WeatheredCutCopperSlabBlock> block = std::make_shared<WeatheredCutCopperSlabBlock>();
    block->type = WeatheredCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WeatheredCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19249] = block;
  }

  { // ID: 19262
    std::shared_ptr<WaxedCopperBlockBlock> block = std::make_shared<WaxedCopperBlockBlock>();
    registry[19262] = block;
  }

  { // ID: 19263
    std::shared_ptr<WaxedWeatheredCopperBlock> block = std::make_shared<WaxedWeatheredCopperBlock>();
    registry[19263] = block;
  }

  { // ID: 19264
    std::shared_ptr<WaxedExposedCopperBlock> block = std::make_shared<WaxedExposedCopperBlock>();
    registry[19264] = block;
  }

  { // ID: 19265
    std::shared_ptr<WaxedOxidizedCopperBlock> block = std::make_shared<WaxedOxidizedCopperBlock>();
    registry[19265] = block;
  }

  { // ID: 19266
    std::shared_ptr<WaxedOxidizedCutCopperBlock> block = std::make_shared<WaxedOxidizedCutCopperBlock>();
    registry[19266] = block;
  }

  { // ID: 19267
    std::shared_ptr<WaxedWeatheredCutCopperBlock> block = std::make_shared<WaxedWeatheredCutCopperBlock>();
    registry[19267] = block;
  }

  { // ID: 19268
    std::shared_ptr<WaxedExposedCutCopperBlock> block = std::make_shared<WaxedExposedCutCopperBlock>();
    registry[19268] = block;
  }

  { // ID: 19269
    std::shared_ptr<WaxedCutCopperBlock> block = std::make_shared<WaxedCutCopperBlock>();
    registry[19269] = block;
  }

  { // ID: 19270
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19270] = block;
  }

  { // ID: 19271
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19271] = block;
  }

  { // ID: 19272
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19272] = block;
  }

  { // ID: 19273
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19273] = block;
  }

  { // ID: 19274
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19274] = block;
  }

  { // ID: 19275
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19275] = block;
  }

  { // ID: 19276
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19276] = block;
  }

  { // ID: 19277
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19277] = block;
  }

  { // ID: 19278
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19278] = block;
  }

  { // ID: 19279
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19279] = block;
  }

  { // ID: 19280
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19280] = block;
  }

  { // ID: 19281
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19281] = block;
  }

  { // ID: 19282
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19282] = block;
  }

  { // ID: 19283
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19283] = block;
  }

  { // ID: 19284
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19284] = block;
  }

  { // ID: 19285
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19285] = block;
  }

  { // ID: 19286
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19286] = block;
  }

  { // ID: 19287
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19287] = block;
  }

  { // ID: 19288
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19288] = block;
  }

  { // ID: 19289
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19289] = block;
  }

  { // ID: 19290
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19290] = block;
  }

  { // ID: 19291
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19291] = block;
  }

  { // ID: 19292
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19292] = block;
  }

  { // ID: 19293
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19293] = block;
  }

  { // ID: 19294
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19294] = block;
  }

  { // ID: 19295
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19295] = block;
  }

  { // ID: 19296
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19296] = block;
  }

  { // ID: 19297
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19297] = block;
  }

  { // ID: 19298
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19298] = block;
  }

  { // ID: 19299
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19299] = block;
  }

  { // ID: 19300
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19300] = block;
  }

  { // ID: 19301
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19301] = block;
  }

  { // ID: 19302
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19302] = block;
  }

  { // ID: 19303
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19303] = block;
  }

  { // ID: 19304
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19304] = block;
  }

  { // ID: 19305
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19305] = block;
  }

  { // ID: 19306
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19306] = block;
  }

  { // ID: 19307
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19307] = block;
  }

  { // ID: 19308
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19308] = block;
  }

  { // ID: 19309
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19309] = block;
  }

  { // ID: 19310
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19310] = block;
  }

  { // ID: 19311
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19311] = block;
  }

  { // ID: 19312
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19312] = block;
  }

  { // ID: 19313
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19313] = block;
  }

  { // ID: 19314
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19314] = block;
  }

  { // ID: 19315
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19315] = block;
  }

  { // ID: 19316
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19316] = block;
  }

  { // ID: 19317
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19317] = block;
  }

  { // ID: 19318
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19318] = block;
  }

  { // ID: 19319
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19319] = block;
  }

  { // ID: 19320
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19320] = block;
  }

  { // ID: 19321
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19321] = block;
  }

  { // ID: 19322
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19322] = block;
  }

  { // ID: 19323
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19323] = block;
  }

  { // ID: 19324
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19324] = block;
  }

  { // ID: 19325
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19325] = block;
  }

  { // ID: 19326
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19326] = block;
  }

  { // ID: 19327
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19327] = block;
  }

  { // ID: 19328
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19328] = block;
  }

  { // ID: 19329
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19329] = block;
  }

  { // ID: 19330
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19330] = block;
  }

  { // ID: 19331
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19331] = block;
  }

  { // ID: 19332
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19332] = block;
  }

  { // ID: 19333
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19333] = block;
  }

  { // ID: 19334
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19334] = block;
  }

  { // ID: 19335
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19335] = block;
  }

  { // ID: 19336
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19336] = block;
  }

  { // ID: 19337
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19337] = block;
  }

  { // ID: 19338
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19338] = block;
  }

  { // ID: 19339
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19339] = block;
  }

  { // ID: 19340
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19340] = block;
  }

  { // ID: 19341
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19341] = block;
  }

  { // ID: 19342
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19342] = block;
  }

  { // ID: 19343
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19343] = block;
  }

  { // ID: 19344
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19344] = block;
  }

  { // ID: 19345
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19345] = block;
  }

  { // ID: 19346
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19346] = block;
  }

  { // ID: 19347
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19347] = block;
  }

  { // ID: 19348
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19348] = block;
  }

  { // ID: 19349
    std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> block = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
    block->facing = WaxedOxidizedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedOxidizedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedOxidizedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedOxidizedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19349] = block;
  }

  { // ID: 19350
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19350] = block;
  }

  { // ID: 19351
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19351] = block;
  }

  { // ID: 19352
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19352] = block;
  }

  { // ID: 19353
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19353] = block;
  }

  { // ID: 19354
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19354] = block;
  }

  { // ID: 19355
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19355] = block;
  }

  { // ID: 19356
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19356] = block;
  }

  { // ID: 19357
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19357] = block;
  }

  { // ID: 19358
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19358] = block;
  }

  { // ID: 19359
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19359] = block;
  }

  { // ID: 19360
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19360] = block;
  }

  { // ID: 19361
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19361] = block;
  }

  { // ID: 19362
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19362] = block;
  }

  { // ID: 19363
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19363] = block;
  }

  { // ID: 19364
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19364] = block;
  }

  { // ID: 19365
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19365] = block;
  }

  { // ID: 19366
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19366] = block;
  }

  { // ID: 19367
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19367] = block;
  }

  { // ID: 19368
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19368] = block;
  }

  { // ID: 19369
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19369] = block;
  }

  { // ID: 19370
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19370] = block;
  }

  { // ID: 19371
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19371] = block;
  }

  { // ID: 19372
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19372] = block;
  }

  { // ID: 19373
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19373] = block;
  }

  { // ID: 19374
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19374] = block;
  }

  { // ID: 19375
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19375] = block;
  }

  { // ID: 19376
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19376] = block;
  }

  { // ID: 19377
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19377] = block;
  }

  { // ID: 19378
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19378] = block;
  }

  { // ID: 19379
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19379] = block;
  }

  { // ID: 19380
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19380] = block;
  }

  { // ID: 19381
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19381] = block;
  }

  { // ID: 19382
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19382] = block;
  }

  { // ID: 19383
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19383] = block;
  }

  { // ID: 19384
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19384] = block;
  }

  { // ID: 19385
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19385] = block;
  }

  { // ID: 19386
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19386] = block;
  }

  { // ID: 19387
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19387] = block;
  }

  { // ID: 19388
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19388] = block;
  }

  { // ID: 19389
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19389] = block;
  }

  { // ID: 19390
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19390] = block;
  }

  { // ID: 19391
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19391] = block;
  }

  { // ID: 19392
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19392] = block;
  }

  { // ID: 19393
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19393] = block;
  }

  { // ID: 19394
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19394] = block;
  }

  { // ID: 19395
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19395] = block;
  }

  { // ID: 19396
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19396] = block;
  }

  { // ID: 19397
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19397] = block;
  }

  { // ID: 19398
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19398] = block;
  }

  { // ID: 19399
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19399] = block;
  }

  { // ID: 19400
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19400] = block;
  }

  { // ID: 19401
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19401] = block;
  }

  { // ID: 19402
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19402] = block;
  }

  { // ID: 19403
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19403] = block;
  }

  { // ID: 19404
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19404] = block;
  }

  { // ID: 19405
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19405] = block;
  }

  { // ID: 19406
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19406] = block;
  }

  { // ID: 19407
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19407] = block;
  }

  { // ID: 19408
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19408] = block;
  }

  { // ID: 19409
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19409] = block;
  }

  { // ID: 19410
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19410] = block;
  }

  { // ID: 19411
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19411] = block;
  }

  { // ID: 19412
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19412] = block;
  }

  { // ID: 19413
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19413] = block;
  }

  { // ID: 19414
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19414] = block;
  }

  { // ID: 19415
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19415] = block;
  }

  { // ID: 19416
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19416] = block;
  }

  { // ID: 19417
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19417] = block;
  }

  { // ID: 19418
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19418] = block;
  }

  { // ID: 19419
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19419] = block;
  }

  { // ID: 19420
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19420] = block;
  }

  { // ID: 19421
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19421] = block;
  }

  { // ID: 19422
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19422] = block;
  }

  { // ID: 19423
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19423] = block;
  }

  { // ID: 19424
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19424] = block;
  }

  { // ID: 19425
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19425] = block;
  }

  { // ID: 19426
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19426] = block;
  }

  { // ID: 19427
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19427] = block;
  }

  { // ID: 19428
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19428] = block;
  }

  { // ID: 19429
    std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> block = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
    block->facing = WaxedWeatheredCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedWeatheredCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedWeatheredCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedWeatheredCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19429] = block;
  }

  { // ID: 19430
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19430] = block;
  }

  { // ID: 19431
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19431] = block;
  }

  { // ID: 19432
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19432] = block;
  }

  { // ID: 19433
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19433] = block;
  }

  { // ID: 19434
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19434] = block;
  }

  { // ID: 19435
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19435] = block;
  }

  { // ID: 19436
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19436] = block;
  }

  { // ID: 19437
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19437] = block;
  }

  { // ID: 19438
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19438] = block;
  }

  { // ID: 19439
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19439] = block;
  }

  { // ID: 19440
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19440] = block;
  }

  { // ID: 19441
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19441] = block;
  }

  { // ID: 19442
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19442] = block;
  }

  { // ID: 19443
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19443] = block;
  }

  { // ID: 19444
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19444] = block;
  }

  { // ID: 19445
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19445] = block;
  }

  { // ID: 19446
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19446] = block;
  }

  { // ID: 19447
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19447] = block;
  }

  { // ID: 19448
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19448] = block;
  }

  { // ID: 19449
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19449] = block;
  }

  { // ID: 19450
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19450] = block;
  }

  { // ID: 19451
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19451] = block;
  }

  { // ID: 19452
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19452] = block;
  }

  { // ID: 19453
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19453] = block;
  }

  { // ID: 19454
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19454] = block;
  }

  { // ID: 19455
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19455] = block;
  }

  { // ID: 19456
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19456] = block;
  }

  { // ID: 19457
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19457] = block;
  }

  { // ID: 19458
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19458] = block;
  }

  { // ID: 19459
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19459] = block;
  }

  { // ID: 19460
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19460] = block;
  }

  { // ID: 19461
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19461] = block;
  }

  { // ID: 19462
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19462] = block;
  }

  { // ID: 19463
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19463] = block;
  }

  { // ID: 19464
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19464] = block;
  }

  { // ID: 19465
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19465] = block;
  }

  { // ID: 19466
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19466] = block;
  }

  { // ID: 19467
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19467] = block;
  }

  { // ID: 19468
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19468] = block;
  }

  { // ID: 19469
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19469] = block;
  }

  { // ID: 19470
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19470] = block;
  }

  { // ID: 19471
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19471] = block;
  }

  { // ID: 19472
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19472] = block;
  }

  { // ID: 19473
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19473] = block;
  }

  { // ID: 19474
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19474] = block;
  }

  { // ID: 19475
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19475] = block;
  }

  { // ID: 19476
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19476] = block;
  }

  { // ID: 19477
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19477] = block;
  }

  { // ID: 19478
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19478] = block;
  }

  { // ID: 19479
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19479] = block;
  }

  { // ID: 19480
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19480] = block;
  }

  { // ID: 19481
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19481] = block;
  }

  { // ID: 19482
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19482] = block;
  }

  { // ID: 19483
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19483] = block;
  }

  { // ID: 19484
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19484] = block;
  }

  { // ID: 19485
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19485] = block;
  }

  { // ID: 19486
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19486] = block;
  }

  { // ID: 19487
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19487] = block;
  }

  { // ID: 19488
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19488] = block;
  }

  { // ID: 19489
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19489] = block;
  }

  { // ID: 19490
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19490] = block;
  }

  { // ID: 19491
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19491] = block;
  }

  { // ID: 19492
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19492] = block;
  }

  { // ID: 19493
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19493] = block;
  }

  { // ID: 19494
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19494] = block;
  }

  { // ID: 19495
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19495] = block;
  }

  { // ID: 19496
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19496] = block;
  }

  { // ID: 19497
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19497] = block;
  }

  { // ID: 19498
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19498] = block;
  }

  { // ID: 19499
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19499] = block;
  }

  { // ID: 19500
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19500] = block;
  }

  { // ID: 19501
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19501] = block;
  }

  { // ID: 19502
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19502] = block;
  }

  { // ID: 19503
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19503] = block;
  }

  { // ID: 19504
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19504] = block;
  }

  { // ID: 19505
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19505] = block;
  }

  { // ID: 19506
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19506] = block;
  }

  { // ID: 19507
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19507] = block;
  }

  { // ID: 19508
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19508] = block;
  }

  { // ID: 19509
    std::shared_ptr<WaxedExposedCutCopperStairsBlock> block = std::make_shared<WaxedExposedCutCopperStairsBlock>();
    block->facing = WaxedExposedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19509] = block;
  }

  { // ID: 19510
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19510] = block;
  }

  { // ID: 19511
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19511] = block;
  }

  { // ID: 19512
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19512] = block;
  }

  { // ID: 19513
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19513] = block;
  }

  { // ID: 19514
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19514] = block;
  }

  { // ID: 19515
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19515] = block;
  }

  { // ID: 19516
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19516] = block;
  }

  { // ID: 19517
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19517] = block;
  }

  { // ID: 19518
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19518] = block;
  }

  { // ID: 19519
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19519] = block;
  }

  { // ID: 19520
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19520] = block;
  }

  { // ID: 19521
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19521] = block;
  }

  { // ID: 19522
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19522] = block;
  }

  { // ID: 19523
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19523] = block;
  }

  { // ID: 19524
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19524] = block;
  }

  { // ID: 19525
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19525] = block;
  }

  { // ID: 19526
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19526] = block;
  }

  { // ID: 19527
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19527] = block;
  }

  { // ID: 19528
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19528] = block;
  }

  { // ID: 19529
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_NORTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19529] = block;
  }

  { // ID: 19530
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19530] = block;
  }

  { // ID: 19531
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19531] = block;
  }

  { // ID: 19532
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19532] = block;
  }

  { // ID: 19533
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19533] = block;
  }

  { // ID: 19534
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19534] = block;
  }

  { // ID: 19535
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19535] = block;
  }

  { // ID: 19536
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19536] = block;
  }

  { // ID: 19537
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19537] = block;
  }

  { // ID: 19538
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19538] = block;
  }

  { // ID: 19539
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19539] = block;
  }

  { // ID: 19540
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19540] = block;
  }

  { // ID: 19541
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19541] = block;
  }

  { // ID: 19542
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19542] = block;
  }

  { // ID: 19543
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19543] = block;
  }

  { // ID: 19544
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19544] = block;
  }

  { // ID: 19545
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19545] = block;
  }

  { // ID: 19546
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19546] = block;
  }

  { // ID: 19547
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19547] = block;
  }

  { // ID: 19548
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19548] = block;
  }

  { // ID: 19549
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_SOUTH;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19549] = block;
  }

  { // ID: 19550
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19550] = block;
  }

  { // ID: 19551
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19551] = block;
  }

  { // ID: 19552
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19552] = block;
  }

  { // ID: 19553
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19553] = block;
  }

  { // ID: 19554
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19554] = block;
  }

  { // ID: 19555
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19555] = block;
  }

  { // ID: 19556
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19556] = block;
  }

  { // ID: 19557
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19557] = block;
  }

  { // ID: 19558
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19558] = block;
  }

  { // ID: 19559
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19559] = block;
  }

  { // ID: 19560
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19560] = block;
  }

  { // ID: 19561
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19561] = block;
  }

  { // ID: 19562
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19562] = block;
  }

  { // ID: 19563
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19563] = block;
  }

  { // ID: 19564
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19564] = block;
  }

  { // ID: 19565
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19565] = block;
  }

  { // ID: 19566
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19566] = block;
  }

  { // ID: 19567
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19567] = block;
  }

  { // ID: 19568
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19568] = block;
  }

  { // ID: 19569
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_WEST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19569] = block;
  }

  { // ID: 19570
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19570] = block;
  }

  { // ID: 19571
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19571] = block;
  }

  { // ID: 19572
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19572] = block;
  }

  { // ID: 19573
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19573] = block;
  }

  { // ID: 19574
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19574] = block;
  }

  { // ID: 19575
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19575] = block;
  }

  { // ID: 19576
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19576] = block;
  }

  { // ID: 19577
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19577] = block;
  }

  { // ID: 19578
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19578] = block;
  }

  { // ID: 19579
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_TOP;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19579] = block;
  }

  { // ID: 19580
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19580] = block;
  }

  { // ID: 19581
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19581] = block;
  }

  { // ID: 19582
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19582] = block;
  }

  { // ID: 19583
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19583] = block;
  }

  { // ID: 19584
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19584] = block;
  }

  { // ID: 19585
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19585] = block;
  }

  { // ID: 19586
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19586] = block;
  }

  { // ID: 19587
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19587] = block;
  }

  { // ID: 19588
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19588] = block;
  }

  { // ID: 19589
    std::shared_ptr<WaxedCutCopperStairsBlock> block = std::make_shared<WaxedCutCopperStairsBlock>();
    block->facing = WaxedCutCopperStairsBlock::FACING_EAST;
    block->half = WaxedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = WaxedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = WaxedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19589] = block;
  }

  { // ID: 19590
    std::shared_ptr<WaxedOxidizedCutCopperSlabBlock> block = std::make_shared<WaxedOxidizedCutCopperSlabBlock>();
    block->type = WaxedOxidizedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WaxedOxidizedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19590] = block;
  }

  { // ID: 19591
    std::shared_ptr<WaxedOxidizedCutCopperSlabBlock> block = std::make_shared<WaxedOxidizedCutCopperSlabBlock>();
    block->type = WaxedOxidizedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WaxedOxidizedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19591] = block;
  }

  { // ID: 19592
    std::shared_ptr<WaxedOxidizedCutCopperSlabBlock> block = std::make_shared<WaxedOxidizedCutCopperSlabBlock>();
    block->type = WaxedOxidizedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WaxedOxidizedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19592] = block;
  }

  { // ID: 19593
    std::shared_ptr<WaxedOxidizedCutCopperSlabBlock> block = std::make_shared<WaxedOxidizedCutCopperSlabBlock>();
    block->type = WaxedOxidizedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WaxedOxidizedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19593] = block;
  }

  { // ID: 19594
    std::shared_ptr<WaxedOxidizedCutCopperSlabBlock> block = std::make_shared<WaxedOxidizedCutCopperSlabBlock>();
    block->type = WaxedOxidizedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WaxedOxidizedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19594] = block;
  }

  { // ID: 19595
    std::shared_ptr<WaxedOxidizedCutCopperSlabBlock> block = std::make_shared<WaxedOxidizedCutCopperSlabBlock>();
    block->type = WaxedOxidizedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WaxedOxidizedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19595] = block;
  }

  { // ID: 19596
    std::shared_ptr<WaxedWeatheredCutCopperSlabBlock> block = std::make_shared<WaxedWeatheredCutCopperSlabBlock>();
    block->type = WaxedWeatheredCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WaxedWeatheredCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19596] = block;
  }

  { // ID: 19597
    std::shared_ptr<WaxedWeatheredCutCopperSlabBlock> block = std::make_shared<WaxedWeatheredCutCopperSlabBlock>();
    block->type = WaxedWeatheredCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WaxedWeatheredCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19597] = block;
  }

  { // ID: 19598
    std::shared_ptr<WaxedWeatheredCutCopperSlabBlock> block = std::make_shared<WaxedWeatheredCutCopperSlabBlock>();
    block->type = WaxedWeatheredCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WaxedWeatheredCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19598] = block;
  }

  { // ID: 19599
    std::shared_ptr<WaxedWeatheredCutCopperSlabBlock> block = std::make_shared<WaxedWeatheredCutCopperSlabBlock>();
    block->type = WaxedWeatheredCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WaxedWeatheredCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19599] = block;
  }

  { // ID: 19600
    std::shared_ptr<WaxedWeatheredCutCopperSlabBlock> block = std::make_shared<WaxedWeatheredCutCopperSlabBlock>();
    block->type = WaxedWeatheredCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WaxedWeatheredCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19600] = block;
  }

  { // ID: 19601
    std::shared_ptr<WaxedWeatheredCutCopperSlabBlock> block = std::make_shared<WaxedWeatheredCutCopperSlabBlock>();
    block->type = WaxedWeatheredCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WaxedWeatheredCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19601] = block;
  }

  { // ID: 19602
    std::shared_ptr<WaxedExposedCutCopperSlabBlock> block = std::make_shared<WaxedExposedCutCopperSlabBlock>();
    block->type = WaxedExposedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WaxedExposedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19602] = block;
  }

  { // ID: 19603
    std::shared_ptr<WaxedExposedCutCopperSlabBlock> block = std::make_shared<WaxedExposedCutCopperSlabBlock>();
    block->type = WaxedExposedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WaxedExposedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19603] = block;
  }

  { // ID: 19604
    std::shared_ptr<WaxedExposedCutCopperSlabBlock> block = std::make_shared<WaxedExposedCutCopperSlabBlock>();
    block->type = WaxedExposedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WaxedExposedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19604] = block;
  }

  { // ID: 19605
    std::shared_ptr<WaxedExposedCutCopperSlabBlock> block = std::make_shared<WaxedExposedCutCopperSlabBlock>();
    block->type = WaxedExposedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WaxedExposedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19605] = block;
  }

  { // ID: 19606
    std::shared_ptr<WaxedExposedCutCopperSlabBlock> block = std::make_shared<WaxedExposedCutCopperSlabBlock>();
    block->type = WaxedExposedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WaxedExposedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19606] = block;
  }

  { // ID: 19607
    std::shared_ptr<WaxedExposedCutCopperSlabBlock> block = std::make_shared<WaxedExposedCutCopperSlabBlock>();
    block->type = WaxedExposedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WaxedExposedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19607] = block;
  }

  { // ID: 19608
    std::shared_ptr<WaxedCutCopperSlabBlock> block = std::make_shared<WaxedCutCopperSlabBlock>();
    block->type = WaxedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WaxedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19608] = block;
  }

  { // ID: 19609
    std::shared_ptr<WaxedCutCopperSlabBlock> block = std::make_shared<WaxedCutCopperSlabBlock>();
    block->type = WaxedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = WaxedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19609] = block;
  }

  { // ID: 19610
    std::shared_ptr<WaxedCutCopperSlabBlock> block = std::make_shared<WaxedCutCopperSlabBlock>();
    block->type = WaxedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WaxedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19610] = block;
  }

  { // ID: 19611
    std::shared_ptr<WaxedCutCopperSlabBlock> block = std::make_shared<WaxedCutCopperSlabBlock>();
    block->type = WaxedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = WaxedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19611] = block;
  }

  { // ID: 19612
    std::shared_ptr<WaxedCutCopperSlabBlock> block = std::make_shared<WaxedCutCopperSlabBlock>();
    block->type = WaxedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WaxedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19612] = block;
  }

  { // ID: 19613
    std::shared_ptr<WaxedCutCopperSlabBlock> block = std::make_shared<WaxedCutCopperSlabBlock>();
    block->type = WaxedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = WaxedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19613] = block;
  }
}
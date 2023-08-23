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

#include "emerald_block_block.h"
#include "emerald_ore_block.h"
#include "enchanting_table_block.h"
#include "end_gateway_block.h"
#include "end_portal_block.h"
#include "end_portal_frame_block.h"
#include "end_rod_block.h"
#include "end_stone_block.h"
#include "end_stone_brick_slab_block.h"
#include "end_stone_brick_stairs_block.h"
#include "end_stone_brick_wall_block.h"
#include "end_stone_bricks_block.h"
#include "ender_chest_block.h"
#include "exposed_copper_block.h"
#include "exposed_cut_copper_block.h"
#include "exposed_cut_copper_slab_block.h"
#include "exposed_cut_copper_stairs_block.h"

void BlockRegistry::generateE() {

  { // ID: 5719
    std::shared_ptr<EnchantingTableBlock> block = std::make_shared<EnchantingTableBlock>();
    registry[5719] = block;
  }

  { // ID: 5736
    std::shared_ptr<EndPortalBlock> block = std::make_shared<EndPortalBlock>();
    registry[5736] = block;
  }

  { // ID: 5737
    std::shared_ptr<EndPortalFrameBlock> block = std::make_shared<EndPortalFrameBlock>();
    block->eye = EndPortalFrameBlock::EYE_TRUE;
    block->facing = EndPortalFrameBlock::FACING_NORTH;
    registry[5737] = block;
  }

  { // ID: 5738
    std::shared_ptr<EndPortalFrameBlock> block = std::make_shared<EndPortalFrameBlock>();
    block->eye = EndPortalFrameBlock::EYE_TRUE;
    block->facing = EndPortalFrameBlock::FACING_SOUTH;
    registry[5738] = block;
  }

  { // ID: 5739
    std::shared_ptr<EndPortalFrameBlock> block = std::make_shared<EndPortalFrameBlock>();
    block->eye = EndPortalFrameBlock::EYE_TRUE;
    block->facing = EndPortalFrameBlock::FACING_WEST;
    registry[5739] = block;
  }

  { // ID: 5740
    std::shared_ptr<EndPortalFrameBlock> block = std::make_shared<EndPortalFrameBlock>();
    block->eye = EndPortalFrameBlock::EYE_TRUE;
    block->facing = EndPortalFrameBlock::FACING_EAST;
    registry[5740] = block;
  }

  { // ID: 5741
    std::shared_ptr<EndPortalFrameBlock> block = std::make_shared<EndPortalFrameBlock>();
    block->eye = EndPortalFrameBlock::EYE_FALSE;
    block->facing = EndPortalFrameBlock::FACING_NORTH;
    registry[5741] = block;
  }

  { // ID: 5742
    std::shared_ptr<EndPortalFrameBlock> block = std::make_shared<EndPortalFrameBlock>();
    block->eye = EndPortalFrameBlock::EYE_FALSE;
    block->facing = EndPortalFrameBlock::FACING_SOUTH;
    registry[5742] = block;
  }

  { // ID: 5743
    std::shared_ptr<EndPortalFrameBlock> block = std::make_shared<EndPortalFrameBlock>();
    block->eye = EndPortalFrameBlock::EYE_FALSE;
    block->facing = EndPortalFrameBlock::FACING_WEST;
    registry[5743] = block;
  }

  { // ID: 5744
    std::shared_ptr<EndPortalFrameBlock> block = std::make_shared<EndPortalFrameBlock>();
    block->eye = EndPortalFrameBlock::EYE_FALSE;
    block->facing = EndPortalFrameBlock::FACING_EAST;
    registry[5744] = block;
  }

  { // ID: 5745
    std::shared_ptr<EndStoneBlock> block = std::make_shared<EndStoneBlock>();
    registry[5745] = block;
  }

  { // ID: 5841
    std::shared_ptr<EmeraldOreBlock> block = std::make_shared<EmeraldOreBlock>();
    registry[5841] = block;
  }

  { // ID: 5843
    std::shared_ptr<EnderChestBlock> block = std::make_shared<EnderChestBlock>();
    block->facing = EnderChestBlock::FACING_NORTH;
    block->waterlogged = EnderChestBlock::WATERLOGGED_TRUE;
    registry[5843] = block;
  }

  { // ID: 5844
    std::shared_ptr<EnderChestBlock> block = std::make_shared<EnderChestBlock>();
    block->facing = EnderChestBlock::FACING_NORTH;
    block->waterlogged = EnderChestBlock::WATERLOGGED_FALSE;
    registry[5844] = block;
  }

  { // ID: 5845
    std::shared_ptr<EnderChestBlock> block = std::make_shared<EnderChestBlock>();
    block->facing = EnderChestBlock::FACING_SOUTH;
    block->waterlogged = EnderChestBlock::WATERLOGGED_TRUE;
    registry[5845] = block;
  }

  { // ID: 5846
    std::shared_ptr<EnderChestBlock> block = std::make_shared<EnderChestBlock>();
    block->facing = EnderChestBlock::FACING_SOUTH;
    block->waterlogged = EnderChestBlock::WATERLOGGED_FALSE;
    registry[5846] = block;
  }

  { // ID: 5847
    std::shared_ptr<EnderChestBlock> block = std::make_shared<EnderChestBlock>();
    block->facing = EnderChestBlock::FACING_WEST;
    block->waterlogged = EnderChestBlock::WATERLOGGED_TRUE;
    registry[5847] = block;
  }

  { // ID: 5848
    std::shared_ptr<EnderChestBlock> block = std::make_shared<EnderChestBlock>();
    block->facing = EnderChestBlock::FACING_WEST;
    block->waterlogged = EnderChestBlock::WATERLOGGED_FALSE;
    registry[5848] = block;
  }

  { // ID: 5849
    std::shared_ptr<EnderChestBlock> block = std::make_shared<EnderChestBlock>();
    block->facing = EnderChestBlock::FACING_EAST;
    block->waterlogged = EnderChestBlock::WATERLOGGED_TRUE;
    registry[5849] = block;
  }

  { // ID: 5850
    std::shared_ptr<EnderChestBlock> block = std::make_shared<EnderChestBlock>();
    block->facing = EnderChestBlock::FACING_EAST;
    block->waterlogged = EnderChestBlock::WATERLOGGED_FALSE;
    registry[5850] = block;
  }

  { // ID: 5995
    std::shared_ptr<EmeraldBlockBlock> block = std::make_shared<EmeraldBlockBlock>();
    registry[5995] = block;
  }

  { // ID: 9939
    std::shared_ptr<EndRodBlock> block = std::make_shared<EndRodBlock>();
    block->facing = EndRodBlock::FACING_NORTH;
    registry[9939] = block;
  }

  { // ID: 9940
    std::shared_ptr<EndRodBlock> block = std::make_shared<EndRodBlock>();
    block->facing = EndRodBlock::FACING_EAST;
    registry[9940] = block;
  }

  { // ID: 9941
    std::shared_ptr<EndRodBlock> block = std::make_shared<EndRodBlock>();
    block->facing = EndRodBlock::FACING_SOUTH;
    registry[9941] = block;
  }

  { // ID: 9942
    std::shared_ptr<EndRodBlock> block = std::make_shared<EndRodBlock>();
    block->facing = EndRodBlock::FACING_WEST;
    registry[9942] = block;
  }

  { // ID: 9943
    std::shared_ptr<EndRodBlock> block = std::make_shared<EndRodBlock>();
    block->facing = EndRodBlock::FACING_UP;
    registry[9943] = block;
  }

  { // ID: 9944
    std::shared_ptr<EndRodBlock> block = std::make_shared<EndRodBlock>();
    block->facing = EndRodBlock::FACING_DOWN;
    registry[9944] = block;
  }

  { // ID: 10099
    std::shared_ptr<EndStoneBricksBlock> block = std::make_shared<EndStoneBricksBlock>();
    registry[10099] = block;
  }

  { // ID: 10105
    std::shared_ptr<EndGatewayBlock> block = std::make_shared<EndGatewayBlock>();
    registry[10105] = block;
  }

  { // ID: 10950
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10950] = block;
  }

  { // ID: 10951
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10951] = block;
  }

  { // ID: 10952
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10952] = block;
  }

  { // ID: 10953
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10953] = block;
  }

  { // ID: 10954
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10954] = block;
  }

  { // ID: 10955
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10955] = block;
  }

  { // ID: 10956
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10956] = block;
  }

  { // ID: 10957
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10957] = block;
  }

  { // ID: 10958
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10958] = block;
  }

  { // ID: 10959
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10959] = block;
  }

  { // ID: 10960
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10960] = block;
  }

  { // ID: 10961
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10961] = block;
  }

  { // ID: 10962
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10962] = block;
  }

  { // ID: 10963
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10963] = block;
  }

  { // ID: 10964
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10964] = block;
  }

  { // ID: 10965
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10965] = block;
  }

  { // ID: 10966
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10966] = block;
  }

  { // ID: 10967
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10967] = block;
  }

  { // ID: 10968
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10968] = block;
  }

  { // ID: 10969
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_NORTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10969] = block;
  }

  { // ID: 10970
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10970] = block;
  }

  { // ID: 10971
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10971] = block;
  }

  { // ID: 10972
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10972] = block;
  }

  { // ID: 10973
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10973] = block;
  }

  { // ID: 10974
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10974] = block;
  }

  { // ID: 10975
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10975] = block;
  }

  { // ID: 10976
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10976] = block;
  }

  { // ID: 10977
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10977] = block;
  }

  { // ID: 10978
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10978] = block;
  }

  { // ID: 10979
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10979] = block;
  }

  { // ID: 10980
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10980] = block;
  }

  { // ID: 10981
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10981] = block;
  }

  { // ID: 10982
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10982] = block;
  }

  { // ID: 10983
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10983] = block;
  }

  { // ID: 10984
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10984] = block;
  }

  { // ID: 10985
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10985] = block;
  }

  { // ID: 10986
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10986] = block;
  }

  { // ID: 10987
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10987] = block;
  }

  { // ID: 10988
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10988] = block;
  }

  { // ID: 10989
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_SOUTH;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10989] = block;
  }

  { // ID: 10990
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10990] = block;
  }

  { // ID: 10991
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10991] = block;
  }

  { // ID: 10992
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10992] = block;
  }

  { // ID: 10993
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10993] = block;
  }

  { // ID: 10994
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10994] = block;
  }

  { // ID: 10995
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10995] = block;
  }

  { // ID: 10996
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10996] = block;
  }

  { // ID: 10997
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10997] = block;
  }

  { // ID: 10998
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[10998] = block;
  }

  { // ID: 10999
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[10999] = block;
  }

  { // ID: 11000
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11000] = block;
  }

  { // ID: 11001
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11001] = block;
  }

  { // ID: 11002
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11002] = block;
  }

  { // ID: 11003
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11003] = block;
  }

  { // ID: 11004
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11004] = block;
  }

  { // ID: 11005
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11005] = block;
  }

  { // ID: 11006
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11006] = block;
  }

  { // ID: 11007
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11007] = block;
  }

  { // ID: 11008
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11008] = block;
  }

  { // ID: 11009
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_WEST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11009] = block;
  }

  { // ID: 11010
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11010] = block;
  }

  { // ID: 11011
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11011] = block;
  }

  { // ID: 11012
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11012] = block;
  }

  { // ID: 11013
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11013] = block;
  }

  { // ID: 11014
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11014] = block;
  }

  { // ID: 11015
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11015] = block;
  }

  { // ID: 11016
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11016] = block;
  }

  { // ID: 11017
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11017] = block;
  }

  { // ID: 11018
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11018] = block;
  }

  { // ID: 11019
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_TOP;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11019] = block;
  }

  { // ID: 11020
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11020] = block;
  }

  { // ID: 11021
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11021] = block;
  }

  { // ID: 11022
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11022] = block;
  }

  { // ID: 11023
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11023] = block;
  }

  { // ID: 11024
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11024] = block;
  }

  { // ID: 11025
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11025] = block;
  }

  { // ID: 11026
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11026] = block;
  }

  { // ID: 11027
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11027] = block;
  }

  { // ID: 11028
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_TRUE;
    registry[11028] = block;
  }

  { // ID: 11029
    std::shared_ptr<EndStoneBrickStairsBlock> block = std::make_shared<EndStoneBrickStairsBlock>();
    block->facing = EndStoneBrickStairsBlock::FACING_EAST;
    block->half = EndStoneBrickStairsBlock::HALF_BOTTOM;
    block->shape = EndStoneBrickStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = EndStoneBrickStairsBlock::WATERLOGGED_FALSE;
    registry[11029] = block;
  }

  { // ID: 11700
    std::shared_ptr<EndStoneBrickSlabBlock> block = std::make_shared<EndStoneBrickSlabBlock>();
    block->type = EndStoneBrickSlabBlock::TYPE_TOP;
    block->waterlogged = EndStoneBrickSlabBlock::WATERLOGGED_TRUE;
    registry[11700] = block;
  }

  { // ID: 11701
    std::shared_ptr<EndStoneBrickSlabBlock> block = std::make_shared<EndStoneBrickSlabBlock>();
    block->type = EndStoneBrickSlabBlock::TYPE_TOP;
    block->waterlogged = EndStoneBrickSlabBlock::WATERLOGGED_FALSE;
    registry[11701] = block;
  }

  { // ID: 11702
    std::shared_ptr<EndStoneBrickSlabBlock> block = std::make_shared<EndStoneBrickSlabBlock>();
    block->type = EndStoneBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = EndStoneBrickSlabBlock::WATERLOGGED_TRUE;
    registry[11702] = block;
  }

  { // ID: 11703
    std::shared_ptr<EndStoneBrickSlabBlock> block = std::make_shared<EndStoneBrickSlabBlock>();
    block->type = EndStoneBrickSlabBlock::TYPE_BOTTOM;
    block->waterlogged = EndStoneBrickSlabBlock::WATERLOGGED_FALSE;
    registry[11703] = block;
  }

  { // ID: 11704
    std::shared_ptr<EndStoneBrickSlabBlock> block = std::make_shared<EndStoneBrickSlabBlock>();
    block->type = EndStoneBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = EndStoneBrickSlabBlock::WATERLOGGED_TRUE;
    registry[11704] = block;
  }

  { // ID: 11705
    std::shared_ptr<EndStoneBrickSlabBlock> block = std::make_shared<EndStoneBrickSlabBlock>();
    block->type = EndStoneBrickSlabBlock::TYPE_DOUBLE;
    block->waterlogged = EndStoneBrickSlabBlock::WATERLOGGED_FALSE;
    registry[11705] = block;
  }

  { // ID: 15312
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15312] = block;
  }

  { // ID: 15313
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15313] = block;
  }

  { // ID: 15314
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15314] = block;
  }

  { // ID: 15315
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15315] = block;
  }

  { // ID: 15316
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15316] = block;
  }

  { // ID: 15317
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15317] = block;
  }

  { // ID: 15318
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15318] = block;
  }

  { // ID: 15319
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15319] = block;
  }

  { // ID: 15320
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15320] = block;
  }

  { // ID: 15321
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15321] = block;
  }

  { // ID: 15322
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15322] = block;
  }

  { // ID: 15323
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15323] = block;
  }

  { // ID: 15324
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15324] = block;
  }

  { // ID: 15325
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15325] = block;
  }

  { // ID: 15326
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15326] = block;
  }

  { // ID: 15327
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15327] = block;
  }

  { // ID: 15328
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15328] = block;
  }

  { // ID: 15329
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15329] = block;
  }

  { // ID: 15330
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15330] = block;
  }

  { // ID: 15331
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15331] = block;
  }

  { // ID: 15332
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15332] = block;
  }

  { // ID: 15333
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15333] = block;
  }

  { // ID: 15334
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15334] = block;
  }

  { // ID: 15335
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15335] = block;
  }

  { // ID: 15336
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15336] = block;
  }

  { // ID: 15337
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15337] = block;
  }

  { // ID: 15338
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15338] = block;
  }

  { // ID: 15339
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15339] = block;
  }

  { // ID: 15340
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15340] = block;
  }

  { // ID: 15341
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15341] = block;
  }

  { // ID: 15342
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15342] = block;
  }

  { // ID: 15343
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15343] = block;
  }

  { // ID: 15344
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15344] = block;
  }

  { // ID: 15345
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15345] = block;
  }

  { // ID: 15346
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15346] = block;
  }

  { // ID: 15347
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15347] = block;
  }

  { // ID: 15348
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15348] = block;
  }

  { // ID: 15349
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15349] = block;
  }

  { // ID: 15350
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15350] = block;
  }

  { // ID: 15351
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15351] = block;
  }

  { // ID: 15352
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15352] = block;
  }

  { // ID: 15353
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15353] = block;
  }

  { // ID: 15354
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15354] = block;
  }

  { // ID: 15355
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15355] = block;
  }

  { // ID: 15356
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15356] = block;
  }

  { // ID: 15357
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15357] = block;
  }

  { // ID: 15358
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15358] = block;
  }

  { // ID: 15359
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15359] = block;
  }

  { // ID: 15360
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15360] = block;
  }

  { // ID: 15361
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15361] = block;
  }

  { // ID: 15362
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15362] = block;
  }

  { // ID: 15363
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15363] = block;
  }

  { // ID: 15364
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15364] = block;
  }

  { // ID: 15365
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15365] = block;
  }

  { // ID: 15366
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15366] = block;
  }

  { // ID: 15367
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15367] = block;
  }

  { // ID: 15368
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15368] = block;
  }

  { // ID: 15369
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15369] = block;
  }

  { // ID: 15370
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15370] = block;
  }

  { // ID: 15371
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15371] = block;
  }

  { // ID: 15372
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15372] = block;
  }

  { // ID: 15373
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15373] = block;
  }

  { // ID: 15374
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15374] = block;
  }

  { // ID: 15375
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15375] = block;
  }

  { // ID: 15376
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15376] = block;
  }

  { // ID: 15377
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15377] = block;
  }

  { // ID: 15378
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15378] = block;
  }

  { // ID: 15379
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15379] = block;
  }

  { // ID: 15380
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15380] = block;
  }

  { // ID: 15381
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15381] = block;
  }

  { // ID: 15382
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15382] = block;
  }

  { // ID: 15383
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15383] = block;
  }

  { // ID: 15384
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15384] = block;
  }

  { // ID: 15385
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15385] = block;
  }

  { // ID: 15386
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15386] = block;
  }

  { // ID: 15387
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15387] = block;
  }

  { // ID: 15388
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15388] = block;
  }

  { // ID: 15389
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15389] = block;
  }

  { // ID: 15390
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15390] = block;
  }

  { // ID: 15391
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15391] = block;
  }

  { // ID: 15392
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15392] = block;
  }

  { // ID: 15393
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15393] = block;
  }

  { // ID: 15394
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15394] = block;
  }

  { // ID: 15395
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15395] = block;
  }

  { // ID: 15396
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15396] = block;
  }

  { // ID: 15397
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15397] = block;
  }

  { // ID: 15398
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15398] = block;
  }

  { // ID: 15399
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15399] = block;
  }

  { // ID: 15400
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15400] = block;
  }

  { // ID: 15401
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15401] = block;
  }

  { // ID: 15402
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15402] = block;
  }

  { // ID: 15403
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15403] = block;
  }

  { // ID: 15404
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15404] = block;
  }

  { // ID: 15405
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15405] = block;
  }

  { // ID: 15406
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15406] = block;
  }

  { // ID: 15407
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15407] = block;
  }

  { // ID: 15408
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15408] = block;
  }

  { // ID: 15409
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15409] = block;
  }

  { // ID: 15410
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15410] = block;
  }

  { // ID: 15411
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15411] = block;
  }

  { // ID: 15412
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15412] = block;
  }

  { // ID: 15413
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15413] = block;
  }

  { // ID: 15414
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15414] = block;
  }

  { // ID: 15415
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15415] = block;
  }

  { // ID: 15416
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15416] = block;
  }

  { // ID: 15417
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15417] = block;
  }

  { // ID: 15418
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15418] = block;
  }

  { // ID: 15419
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_NONE;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15419] = block;
  }

  { // ID: 15420
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15420] = block;
  }

  { // ID: 15421
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15421] = block;
  }

  { // ID: 15422
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15422] = block;
  }

  { // ID: 15423
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15423] = block;
  }

  { // ID: 15424
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15424] = block;
  }

  { // ID: 15425
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15425] = block;
  }

  { // ID: 15426
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15426] = block;
  }

  { // ID: 15427
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15427] = block;
  }

  { // ID: 15428
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15428] = block;
  }

  { // ID: 15429
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15429] = block;
  }

  { // ID: 15430
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15430] = block;
  }

  { // ID: 15431
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15431] = block;
  }

  { // ID: 15432
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15432] = block;
  }

  { // ID: 15433
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15433] = block;
  }

  { // ID: 15434
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15434] = block;
  }

  { // ID: 15435
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15435] = block;
  }

  { // ID: 15436
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15436] = block;
  }

  { // ID: 15437
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15437] = block;
  }

  { // ID: 15438
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15438] = block;
  }

  { // ID: 15439
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15439] = block;
  }

  { // ID: 15440
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15440] = block;
  }

  { // ID: 15441
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15441] = block;
  }

  { // ID: 15442
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15442] = block;
  }

  { // ID: 15443
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15443] = block;
  }

  { // ID: 15444
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15444] = block;
  }

  { // ID: 15445
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15445] = block;
  }

  { // ID: 15446
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15446] = block;
  }

  { // ID: 15447
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15447] = block;
  }

  { // ID: 15448
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15448] = block;
  }

  { // ID: 15449
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15449] = block;
  }

  { // ID: 15450
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15450] = block;
  }

  { // ID: 15451
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15451] = block;
  }

  { // ID: 15452
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15452] = block;
  }

  { // ID: 15453
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15453] = block;
  }

  { // ID: 15454
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15454] = block;
  }

  { // ID: 15455
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15455] = block;
  }

  { // ID: 15456
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15456] = block;
  }

  { // ID: 15457
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15457] = block;
  }

  { // ID: 15458
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15458] = block;
  }

  { // ID: 15459
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15459] = block;
  }

  { // ID: 15460
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15460] = block;
  }

  { // ID: 15461
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15461] = block;
  }

  { // ID: 15462
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15462] = block;
  }

  { // ID: 15463
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15463] = block;
  }

  { // ID: 15464
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15464] = block;
  }

  { // ID: 15465
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15465] = block;
  }

  { // ID: 15466
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15466] = block;
  }

  { // ID: 15467
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15467] = block;
  }

  { // ID: 15468
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15468] = block;
  }

  { // ID: 15469
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15469] = block;
  }

  { // ID: 15470
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15470] = block;
  }

  { // ID: 15471
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15471] = block;
  }

  { // ID: 15472
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15472] = block;
  }

  { // ID: 15473
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15473] = block;
  }

  { // ID: 15474
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15474] = block;
  }

  { // ID: 15475
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15475] = block;
  }

  { // ID: 15476
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15476] = block;
  }

  { // ID: 15477
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15477] = block;
  }

  { // ID: 15478
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15478] = block;
  }

  { // ID: 15479
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15479] = block;
  }

  { // ID: 15480
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15480] = block;
  }

  { // ID: 15481
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15481] = block;
  }

  { // ID: 15482
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15482] = block;
  }

  { // ID: 15483
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15483] = block;
  }

  { // ID: 15484
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15484] = block;
  }

  { // ID: 15485
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15485] = block;
  }

  { // ID: 15486
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15486] = block;
  }

  { // ID: 15487
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15487] = block;
  }

  { // ID: 15488
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15488] = block;
  }

  { // ID: 15489
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15489] = block;
  }

  { // ID: 15490
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15490] = block;
  }

  { // ID: 15491
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15491] = block;
  }

  { // ID: 15492
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15492] = block;
  }

  { // ID: 15493
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15493] = block;
  }

  { // ID: 15494
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15494] = block;
  }

  { // ID: 15495
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15495] = block;
  }

  { // ID: 15496
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15496] = block;
  }

  { // ID: 15497
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15497] = block;
  }

  { // ID: 15498
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15498] = block;
  }

  { // ID: 15499
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15499] = block;
  }

  { // ID: 15500
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15500] = block;
  }

  { // ID: 15501
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15501] = block;
  }

  { // ID: 15502
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15502] = block;
  }

  { // ID: 15503
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15503] = block;
  }

  { // ID: 15504
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15504] = block;
  }

  { // ID: 15505
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15505] = block;
  }

  { // ID: 15506
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15506] = block;
  }

  { // ID: 15507
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15507] = block;
  }

  { // ID: 15508
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15508] = block;
  }

  { // ID: 15509
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15509] = block;
  }

  { // ID: 15510
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15510] = block;
  }

  { // ID: 15511
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15511] = block;
  }

  { // ID: 15512
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15512] = block;
  }

  { // ID: 15513
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15513] = block;
  }

  { // ID: 15514
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15514] = block;
  }

  { // ID: 15515
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15515] = block;
  }

  { // ID: 15516
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15516] = block;
  }

  { // ID: 15517
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15517] = block;
  }

  { // ID: 15518
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15518] = block;
  }

  { // ID: 15519
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15519] = block;
  }

  { // ID: 15520
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15520] = block;
  }

  { // ID: 15521
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15521] = block;
  }

  { // ID: 15522
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15522] = block;
  }

  { // ID: 15523
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15523] = block;
  }

  { // ID: 15524
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15524] = block;
  }

  { // ID: 15525
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15525] = block;
  }

  { // ID: 15526
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15526] = block;
  }

  { // ID: 15527
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_LOW;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15527] = block;
  }

  { // ID: 15528
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15528] = block;
  }

  { // ID: 15529
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15529] = block;
  }

  { // ID: 15530
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15530] = block;
  }

  { // ID: 15531
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15531] = block;
  }

  { // ID: 15532
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15532] = block;
  }

  { // ID: 15533
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15533] = block;
  }

  { // ID: 15534
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15534] = block;
  }

  { // ID: 15535
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15535] = block;
  }

  { // ID: 15536
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15536] = block;
  }

  { // ID: 15537
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15537] = block;
  }

  { // ID: 15538
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15538] = block;
  }

  { // ID: 15539
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15539] = block;
  }

  { // ID: 15540
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15540] = block;
  }

  { // ID: 15541
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15541] = block;
  }

  { // ID: 15542
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15542] = block;
  }

  { // ID: 15543
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15543] = block;
  }

  { // ID: 15544
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15544] = block;
  }

  { // ID: 15545
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15545] = block;
  }

  { // ID: 15546
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15546] = block;
  }

  { // ID: 15547
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15547] = block;
  }

  { // ID: 15548
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15548] = block;
  }

  { // ID: 15549
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15549] = block;
  }

  { // ID: 15550
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15550] = block;
  }

  { // ID: 15551
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15551] = block;
  }

  { // ID: 15552
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15552] = block;
  }

  { // ID: 15553
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15553] = block;
  }

  { // ID: 15554
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15554] = block;
  }

  { // ID: 15555
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15555] = block;
  }

  { // ID: 15556
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15556] = block;
  }

  { // ID: 15557
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15557] = block;
  }

  { // ID: 15558
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15558] = block;
  }

  { // ID: 15559
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15559] = block;
  }

  { // ID: 15560
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15560] = block;
  }

  { // ID: 15561
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15561] = block;
  }

  { // ID: 15562
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15562] = block;
  }

  { // ID: 15563
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_NONE;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15563] = block;
  }

  { // ID: 15564
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15564] = block;
  }

  { // ID: 15565
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15565] = block;
  }

  { // ID: 15566
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15566] = block;
  }

  { // ID: 15567
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15567] = block;
  }

  { // ID: 15568
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15568] = block;
  }

  { // ID: 15569
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15569] = block;
  }

  { // ID: 15570
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15570] = block;
  }

  { // ID: 15571
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15571] = block;
  }

  { // ID: 15572
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15572] = block;
  }

  { // ID: 15573
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15573] = block;
  }

  { // ID: 15574
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15574] = block;
  }

  { // ID: 15575
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15575] = block;
  }

  { // ID: 15576
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15576] = block;
  }

  { // ID: 15577
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15577] = block;
  }

  { // ID: 15578
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15578] = block;
  }

  { // ID: 15579
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15579] = block;
  }

  { // ID: 15580
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15580] = block;
  }

  { // ID: 15581
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15581] = block;
  }

  { // ID: 15582
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15582] = block;
  }

  { // ID: 15583
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15583] = block;
  }

  { // ID: 15584
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15584] = block;
  }

  { // ID: 15585
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15585] = block;
  }

  { // ID: 15586
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15586] = block;
  }

  { // ID: 15587
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15587] = block;
  }

  { // ID: 15588
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15588] = block;
  }

  { // ID: 15589
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15589] = block;
  }

  { // ID: 15590
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15590] = block;
  }

  { // ID: 15591
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15591] = block;
  }

  { // ID: 15592
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15592] = block;
  }

  { // ID: 15593
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15593] = block;
  }

  { // ID: 15594
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15594] = block;
  }

  { // ID: 15595
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15595] = block;
  }

  { // ID: 15596
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15596] = block;
  }

  { // ID: 15597
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15597] = block;
  }

  { // ID: 15598
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15598] = block;
  }

  { // ID: 15599
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_LOW;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15599] = block;
  }

  { // ID: 15600
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15600] = block;
  }

  { // ID: 15601
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15601] = block;
  }

  { // ID: 15602
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15602] = block;
  }

  { // ID: 15603
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15603] = block;
  }

  { // ID: 15604
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15604] = block;
  }

  { // ID: 15605
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15605] = block;
  }

  { // ID: 15606
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15606] = block;
  }

  { // ID: 15607
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15607] = block;
  }

  { // ID: 15608
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15608] = block;
  }

  { // ID: 15609
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15609] = block;
  }

  { // ID: 15610
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15610] = block;
  }

  { // ID: 15611
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_NONE;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15611] = block;
  }

  { // ID: 15612
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15612] = block;
  }

  { // ID: 15613
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15613] = block;
  }

  { // ID: 15614
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15614] = block;
  }

  { // ID: 15615
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15615] = block;
  }

  { // ID: 15616
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15616] = block;
  }

  { // ID: 15617
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15617] = block;
  }

  { // ID: 15618
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15618] = block;
  }

  { // ID: 15619
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15619] = block;
  }

  { // ID: 15620
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15620] = block;
  }

  { // ID: 15621
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15621] = block;
  }

  { // ID: 15622
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15622] = block;
  }

  { // ID: 15623
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_LOW;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15623] = block;
  }

  { // ID: 15624
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15624] = block;
  }

  { // ID: 15625
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15625] = block;
  }

  { // ID: 15626
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15626] = block;
  }

  { // ID: 15627
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15627] = block;
  }

  { // ID: 15628
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15628] = block;
  }

  { // ID: 15629
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_TRUE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15629] = block;
  }

  { // ID: 15630
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15630] = block;
  }

  { // ID: 15631
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15631] = block;
  }

  { // ID: 15632
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_TRUE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15632] = block;
  }

  { // ID: 15633
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_NONE;
    registry[15633] = block;
  }

  { // ID: 15634
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_LOW;
    registry[15634] = block;
  }

  { // ID: 15635
    std::shared_ptr<EndStoneBrickWallBlock> block = std::make_shared<EndStoneBrickWallBlock>();
    block->east = EndStoneBrickWallBlock::EAST_TALL;
    block->north = EndStoneBrickWallBlock::NORTH_TALL;
    block->south = EndStoneBrickWallBlock::SOUTH_TALL;
    block->up = EndStoneBrickWallBlock::UP_FALSE;
    block->waterlogged = EndStoneBrickWallBlock::WATERLOGGED_FALSE;
    block->west = EndStoneBrickWallBlock::WEST_TALL;
    registry[15635] = block;
  }

  { // ID: 18910
    std::shared_ptr<ExposedCopperBlock> block = std::make_shared<ExposedCopperBlock>();
    registry[18910] = block;
  }

  { // ID: 18916
    std::shared_ptr<ExposedCutCopperBlock> block = std::make_shared<ExposedCutCopperBlock>();
    registry[18916] = block;
  }

  { // ID: 19078
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19078] = block;
  }

  { // ID: 19079
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19079] = block;
  }

  { // ID: 19080
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19080] = block;
  }

  { // ID: 19081
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19081] = block;
  }

  { // ID: 19082
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19082] = block;
  }

  { // ID: 19083
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19083] = block;
  }

  { // ID: 19084
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19084] = block;
  }

  { // ID: 19085
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19085] = block;
  }

  { // ID: 19086
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19086] = block;
  }

  { // ID: 19087
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19087] = block;
  }

  { // ID: 19088
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19088] = block;
  }

  { // ID: 19089
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19089] = block;
  }

  { // ID: 19090
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19090] = block;
  }

  { // ID: 19091
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19091] = block;
  }

  { // ID: 19092
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19092] = block;
  }

  { // ID: 19093
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19093] = block;
  }

  { // ID: 19094
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19094] = block;
  }

  { // ID: 19095
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19095] = block;
  }

  { // ID: 19096
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19096] = block;
  }

  { // ID: 19097
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_NORTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19097] = block;
  }

  { // ID: 19098
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19098] = block;
  }

  { // ID: 19099
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19099] = block;
  }

  { // ID: 19100
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19100] = block;
  }

  { // ID: 19101
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19101] = block;
  }

  { // ID: 19102
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19102] = block;
  }

  { // ID: 19103
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19103] = block;
  }

  { // ID: 19104
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19104] = block;
  }

  { // ID: 19105
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19105] = block;
  }

  { // ID: 19106
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19106] = block;
  }

  { // ID: 19107
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19107] = block;
  }

  { // ID: 19108
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19108] = block;
  }

  { // ID: 19109
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19109] = block;
  }

  { // ID: 19110
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19110] = block;
  }

  { // ID: 19111
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19111] = block;
  }

  { // ID: 19112
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19112] = block;
  }

  { // ID: 19113
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19113] = block;
  }

  { // ID: 19114
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19114] = block;
  }

  { // ID: 19115
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19115] = block;
  }

  { // ID: 19116
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19116] = block;
  }

  { // ID: 19117
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_SOUTH;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19117] = block;
  }

  { // ID: 19118
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19118] = block;
  }

  { // ID: 19119
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19119] = block;
  }

  { // ID: 19120
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19120] = block;
  }

  { // ID: 19121
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19121] = block;
  }

  { // ID: 19122
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19122] = block;
  }

  { // ID: 19123
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19123] = block;
  }

  { // ID: 19124
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19124] = block;
  }

  { // ID: 19125
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19125] = block;
  }

  { // ID: 19126
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19126] = block;
  }

  { // ID: 19127
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19127] = block;
  }

  { // ID: 19128
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19128] = block;
  }

  { // ID: 19129
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19129] = block;
  }

  { // ID: 19130
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19130] = block;
  }

  { // ID: 19131
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19131] = block;
  }

  { // ID: 19132
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19132] = block;
  }

  { // ID: 19133
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19133] = block;
  }

  { // ID: 19134
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19134] = block;
  }

  { // ID: 19135
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19135] = block;
  }

  { // ID: 19136
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19136] = block;
  }

  { // ID: 19137
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_WEST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19137] = block;
  }

  { // ID: 19138
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19138] = block;
  }

  { // ID: 19139
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19139] = block;
  }

  { // ID: 19140
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19140] = block;
  }

  { // ID: 19141
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19141] = block;
  }

  { // ID: 19142
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19142] = block;
  }

  { // ID: 19143
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19143] = block;
  }

  { // ID: 19144
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19144] = block;
  }

  { // ID: 19145
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19145] = block;
  }

  { // ID: 19146
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19146] = block;
  }

  { // ID: 19147
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_TOP;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19147] = block;
  }

  { // ID: 19148
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19148] = block;
  }

  { // ID: 19149
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_STRAIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19149] = block;
  }

  { // ID: 19150
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19150] = block;
  }

  { // ID: 19151
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19151] = block;
  }

  { // ID: 19152
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19152] = block;
  }

  { // ID: 19153
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_INNER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19153] = block;
  }

  { // ID: 19154
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19154] = block;
  }

  { // ID: 19155
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_LEFT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19155] = block;
  }

  { // ID: 19156
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_TRUE;
    registry[19156] = block;
  }

  { // ID: 19157
    std::shared_ptr<ExposedCutCopperStairsBlock> block = std::make_shared<ExposedCutCopperStairsBlock>();
    block->facing = ExposedCutCopperStairsBlock::FACING_EAST;
    block->half = ExposedCutCopperStairsBlock::HALF_BOTTOM;
    block->shape = ExposedCutCopperStairsBlock::SHAPE_OUTER_RIGHT;
    block->waterlogged = ExposedCutCopperStairsBlock::WATERLOGGED_FALSE;
    registry[19157] = block;
  }

  { // ID: 19250
    std::shared_ptr<ExposedCutCopperSlabBlock> block = std::make_shared<ExposedCutCopperSlabBlock>();
    block->type = ExposedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = ExposedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19250] = block;
  }

  { // ID: 19251
    std::shared_ptr<ExposedCutCopperSlabBlock> block = std::make_shared<ExposedCutCopperSlabBlock>();
    block->type = ExposedCutCopperSlabBlock::TYPE_TOP;
    block->waterlogged = ExposedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19251] = block;
  }

  { // ID: 19252
    std::shared_ptr<ExposedCutCopperSlabBlock> block = std::make_shared<ExposedCutCopperSlabBlock>();
    block->type = ExposedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = ExposedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19252] = block;
  }

  { // ID: 19253
    std::shared_ptr<ExposedCutCopperSlabBlock> block = std::make_shared<ExposedCutCopperSlabBlock>();
    block->type = ExposedCutCopperSlabBlock::TYPE_BOTTOM;
    block->waterlogged = ExposedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19253] = block;
  }

  { // ID: 19254
    std::shared_ptr<ExposedCutCopperSlabBlock> block = std::make_shared<ExposedCutCopperSlabBlock>();
    block->type = ExposedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = ExposedCutCopperSlabBlock::WATERLOGGED_TRUE;
    registry[19254] = block;
  }

  { // ID: 19255
    std::shared_ptr<ExposedCutCopperSlabBlock> block = std::make_shared<ExposedCutCopperSlabBlock>();
    block->type = ExposedCutCopperSlabBlock::TYPE_DOUBLE;
    block->waterlogged = ExposedCutCopperSlabBlock::WATERLOGGED_FALSE;
    registry[19255] = block;
  }
}
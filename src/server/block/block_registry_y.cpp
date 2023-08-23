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

#include "yellow_banner_block.h"
#include "yellow_bed_block.h"
#include "yellow_candle_block.h"
#include "yellow_candle_cake_block.h"
#include "yellow_carpet_block.h"
#include "yellow_concrete_block.h"
#include "yellow_concrete_powder_block.h"
#include "yellow_glazed_terracotta_block.h"
#include "yellow_shulker_box_block.h"
#include "yellow_stained_glass_block.h"
#include "yellow_stained_glass_pane_block.h"
#include "yellow_terracotta_block.h"
#include "yellow_wall_banner_block.h"
#include "yellow_wool_block.h"

void BlockRegistry::generateY() {

  { // ID: 1343
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_NORTH;
    block->occupied = YellowBedBlock::OCCUPIED_TRUE;
    block->part = YellowBedBlock::PART_HEAD;
    registry[1343] = block;
  }

  { // ID: 1344
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_NORTH;
    block->occupied = YellowBedBlock::OCCUPIED_TRUE;
    block->part = YellowBedBlock::PART_FOOT;
    registry[1344] = block;
  }

  { // ID: 1345
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_NORTH;
    block->occupied = YellowBedBlock::OCCUPIED_FALSE;
    block->part = YellowBedBlock::PART_HEAD;
    registry[1345] = block;
  }

  { // ID: 1346
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_NORTH;
    block->occupied = YellowBedBlock::OCCUPIED_FALSE;
    block->part = YellowBedBlock::PART_FOOT;
    registry[1346] = block;
  }

  { // ID: 1347
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_SOUTH;
    block->occupied = YellowBedBlock::OCCUPIED_TRUE;
    block->part = YellowBedBlock::PART_HEAD;
    registry[1347] = block;
  }

  { // ID: 1348
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_SOUTH;
    block->occupied = YellowBedBlock::OCCUPIED_TRUE;
    block->part = YellowBedBlock::PART_FOOT;
    registry[1348] = block;
  }

  { // ID: 1349
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_SOUTH;
    block->occupied = YellowBedBlock::OCCUPIED_FALSE;
    block->part = YellowBedBlock::PART_HEAD;
    registry[1349] = block;
  }

  { // ID: 1350
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_SOUTH;
    block->occupied = YellowBedBlock::OCCUPIED_FALSE;
    block->part = YellowBedBlock::PART_FOOT;
    registry[1350] = block;
  }

  { // ID: 1351
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_WEST;
    block->occupied = YellowBedBlock::OCCUPIED_TRUE;
    block->part = YellowBedBlock::PART_HEAD;
    registry[1351] = block;
  }

  { // ID: 1352
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_WEST;
    block->occupied = YellowBedBlock::OCCUPIED_TRUE;
    block->part = YellowBedBlock::PART_FOOT;
    registry[1352] = block;
  }

  { // ID: 1353
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_WEST;
    block->occupied = YellowBedBlock::OCCUPIED_FALSE;
    block->part = YellowBedBlock::PART_HEAD;
    registry[1353] = block;
  }

  { // ID: 1354
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_WEST;
    block->occupied = YellowBedBlock::OCCUPIED_FALSE;
    block->part = YellowBedBlock::PART_FOOT;
    registry[1354] = block;
  }

  { // ID: 1355
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_EAST;
    block->occupied = YellowBedBlock::OCCUPIED_TRUE;
    block->part = YellowBedBlock::PART_HEAD;
    registry[1355] = block;
  }

  { // ID: 1356
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_EAST;
    block->occupied = YellowBedBlock::OCCUPIED_TRUE;
    block->part = YellowBedBlock::PART_FOOT;
    registry[1356] = block;
  }

  { // ID: 1357
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_EAST;
    block->occupied = YellowBedBlock::OCCUPIED_FALSE;
    block->part = YellowBedBlock::PART_HEAD;
    registry[1357] = block;
  }

  { // ID: 1358
    std::shared_ptr<YellowBedBlock> block = std::make_shared<YellowBedBlock>();
    block->facing = YellowBedBlock::FACING_EAST;
    block->occupied = YellowBedBlock::OCCUPIED_FALSE;
    block->part = YellowBedBlock::PART_FOOT;
    registry[1358] = block;
  }

  { // ID: 1642
    std::shared_ptr<YellowWoolBlock> block = std::make_shared<YellowWoolBlock>();
    registry[1642] = block;
  }

  { // ID: 4408
    std::shared_ptr<YellowStainedGlassBlock> block = std::make_shared<YellowStainedGlassBlock>();
    registry[4408] = block;
  }

  { // ID: 7480
    std::shared_ptr<YellowTerracottaBlock> block = std::make_shared<YellowTerracottaBlock>();
    registry[7480] = block;
  }

  { // ID: 7620
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7620] = block;
  }

  { // ID: 7621
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7621] = block;
  }

  { // ID: 7622
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7622] = block;
  }

  { // ID: 7623
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7623] = block;
  }

  { // ID: 7624
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7624] = block;
  }

  { // ID: 7625
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7625] = block;
  }

  { // ID: 7626
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7626] = block;
  }

  { // ID: 7627
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7627] = block;
  }

  { // ID: 7628
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7628] = block;
  }

  { // ID: 7629
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7629] = block;
  }

  { // ID: 7630
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7630] = block;
  }

  { // ID: 7631
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7631] = block;
  }

  { // ID: 7632
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7632] = block;
  }

  { // ID: 7633
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7633] = block;
  }

  { // ID: 7634
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7634] = block;
  }

  { // ID: 7635
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_TRUE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7635] = block;
  }

  { // ID: 7636
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7636] = block;
  }

  { // ID: 7637
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7637] = block;
  }

  { // ID: 7638
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7638] = block;
  }

  { // ID: 7639
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7639] = block;
  }

  { // ID: 7640
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7640] = block;
  }

  { // ID: 7641
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7641] = block;
  }

  { // ID: 7642
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7642] = block;
  }

  { // ID: 7643
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_TRUE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7643] = block;
  }

  { // ID: 7644
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7644] = block;
  }

  { // ID: 7645
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7645] = block;
  }

  { // ID: 7646
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7646] = block;
  }

  { // ID: 7647
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_TRUE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7647] = block;
  }

  { // ID: 7648
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7648] = block;
  }

  { // ID: 7649
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_TRUE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7649] = block;
  }

  { // ID: 7650
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_TRUE;
    registry[7650] = block;
  }

  { // ID: 7651
    std::shared_ptr<YellowStainedGlassPaneBlock> block = std::make_shared<YellowStainedGlassPaneBlock>();
    block->east = YellowStainedGlassPaneBlock::EAST_FALSE;
    block->north = YellowStainedGlassPaneBlock::NORTH_FALSE;
    block->south = YellowStainedGlassPaneBlock::SOUTH_FALSE;
    block->waterlogged = YellowStainedGlassPaneBlock::WATERLOGGED_FALSE;
    block->west = YellowStainedGlassPaneBlock::WEST_FALSE;
    registry[7651] = block;
  }

  { // ID: 8611
    std::shared_ptr<YellowCarpetBlock> block = std::make_shared<YellowCarpetBlock>();
    registry[8611] = block;
  }

  { // ID: 8702
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_0;
    registry[8702] = block;
  }

  { // ID: 8703
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_1;
    registry[8703] = block;
  }

  { // ID: 8704
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_2;
    registry[8704] = block;
  }

  { // ID: 8705
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_3;
    registry[8705] = block;
  }

  { // ID: 8706
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_4;
    registry[8706] = block;
  }

  { // ID: 8707
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_5;
    registry[8707] = block;
  }

  { // ID: 8708
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_6;
    registry[8708] = block;
  }

  { // ID: 8709
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_7;
    registry[8709] = block;
  }

  { // ID: 8710
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_8;
    registry[8710] = block;
  }

  { // ID: 8711
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_9;
    registry[8711] = block;
  }

  { // ID: 8712
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_10;
    registry[8712] = block;
  }

  { // ID: 8713
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_11;
    registry[8713] = block;
  }

  { // ID: 8714
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_12;
    registry[8714] = block;
  }

  { // ID: 8715
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_13;
    registry[8715] = block;
  }

  { // ID: 8716
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_14;
    registry[8716] = block;
  }

  { // ID: 8717
    std::shared_ptr<YellowBannerBlock> block = std::make_shared<YellowBannerBlock>();
    block->rotation = YellowBannerBlock::ROTATION_15;
    registry[8717] = block;
  }

  { // ID: 8910
    std::shared_ptr<YellowWallBannerBlock> block = std::make_shared<YellowWallBannerBlock>();
    block->facing = YellowWallBannerBlock::FACING_NORTH;
    registry[8910] = block;
  }

  { // ID: 8911
    std::shared_ptr<YellowWallBannerBlock> block = std::make_shared<YellowWallBannerBlock>();
    block->facing = YellowWallBannerBlock::FACING_SOUTH;
    registry[8911] = block;
  }

  { // ID: 8912
    std::shared_ptr<YellowWallBannerBlock> block = std::make_shared<YellowWallBannerBlock>();
    block->facing = YellowWallBannerBlock::FACING_WEST;
    registry[8912] = block;
  }

  { // ID: 8913
    std::shared_ptr<YellowWallBannerBlock> block = std::make_shared<YellowWallBannerBlock>();
    block->facing = YellowWallBannerBlock::FACING_EAST;
    registry[8913] = block;
  }

  { // ID: 10183
    std::shared_ptr<YellowShulkerBoxBlock> block = std::make_shared<YellowShulkerBoxBlock>();
    block->facing = YellowShulkerBoxBlock::FACING_NORTH;
    registry[10183] = block;
  }

  { // ID: 10184
    std::shared_ptr<YellowShulkerBoxBlock> block = std::make_shared<YellowShulkerBoxBlock>();
    block->facing = YellowShulkerBoxBlock::FACING_EAST;
    registry[10184] = block;
  }

  { // ID: 10185
    std::shared_ptr<YellowShulkerBoxBlock> block = std::make_shared<YellowShulkerBoxBlock>();
    block->facing = YellowShulkerBoxBlock::FACING_SOUTH;
    registry[10185] = block;
  }

  { // ID: 10186
    std::shared_ptr<YellowShulkerBoxBlock> block = std::make_shared<YellowShulkerBoxBlock>();
    block->facing = YellowShulkerBoxBlock::FACING_WEST;
    registry[10186] = block;
  }

  { // ID: 10187
    std::shared_ptr<YellowShulkerBoxBlock> block = std::make_shared<YellowShulkerBoxBlock>();
    block->facing = YellowShulkerBoxBlock::FACING_UP;
    registry[10187] = block;
  }

  { // ID: 10188
    std::shared_ptr<YellowShulkerBoxBlock> block = std::make_shared<YellowShulkerBoxBlock>();
    block->facing = YellowShulkerBoxBlock::FACING_DOWN;
    registry[10188] = block;
  }

  { // ID: 10271
    std::shared_ptr<YellowGlazedTerracottaBlock> block = std::make_shared<YellowGlazedTerracottaBlock>();
    block->facing = YellowGlazedTerracottaBlock::FACING_NORTH;
    registry[10271] = block;
  }

  { // ID: 10272
    std::shared_ptr<YellowGlazedTerracottaBlock> block = std::make_shared<YellowGlazedTerracottaBlock>();
    block->facing = YellowGlazedTerracottaBlock::FACING_SOUTH;
    registry[10272] = block;
  }

  { // ID: 10273
    std::shared_ptr<YellowGlazedTerracottaBlock> block = std::make_shared<YellowGlazedTerracottaBlock>();
    block->facing = YellowGlazedTerracottaBlock::FACING_WEST;
    registry[10273] = block;
  }

  { // ID: 10274
    std::shared_ptr<YellowGlazedTerracottaBlock> block = std::make_shared<YellowGlazedTerracottaBlock>();
    block->facing = YellowGlazedTerracottaBlock::FACING_EAST;
    registry[10274] = block;
  }

  { // ID: 10323
    std::shared_ptr<YellowConcreteBlock> block = std::make_shared<YellowConcreteBlock>();
    registry[10323] = block;
  }

  { // ID: 10339
    std::shared_ptr<YellowConcretePowderBlock> block = std::make_shared<YellowConcretePowderBlock>();
    registry[10339] = block;
  }

  { // ID: 18393
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_1;
    block->lit = YellowCandleBlock::LIT_TRUE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_TRUE;
    registry[18393] = block;
  }

  { // ID: 18394
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_1;
    block->lit = YellowCandleBlock::LIT_TRUE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_FALSE;
    registry[18394] = block;
  }

  { // ID: 18395
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_1;
    block->lit = YellowCandleBlock::LIT_FALSE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_TRUE;
    registry[18395] = block;
  }

  { // ID: 18396
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_1;
    block->lit = YellowCandleBlock::LIT_FALSE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_FALSE;
    registry[18396] = block;
  }

  { // ID: 18397
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_2;
    block->lit = YellowCandleBlock::LIT_TRUE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_TRUE;
    registry[18397] = block;
  }

  { // ID: 18398
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_2;
    block->lit = YellowCandleBlock::LIT_TRUE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_FALSE;
    registry[18398] = block;
  }

  { // ID: 18399
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_2;
    block->lit = YellowCandleBlock::LIT_FALSE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_TRUE;
    registry[18399] = block;
  }

  { // ID: 18400
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_2;
    block->lit = YellowCandleBlock::LIT_FALSE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_FALSE;
    registry[18400] = block;
  }

  { // ID: 18401
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_3;
    block->lit = YellowCandleBlock::LIT_TRUE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_TRUE;
    registry[18401] = block;
  }

  { // ID: 18402
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_3;
    block->lit = YellowCandleBlock::LIT_TRUE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_FALSE;
    registry[18402] = block;
  }

  { // ID: 18403
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_3;
    block->lit = YellowCandleBlock::LIT_FALSE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_TRUE;
    registry[18403] = block;
  }

  { // ID: 18404
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_3;
    block->lit = YellowCandleBlock::LIT_FALSE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_FALSE;
    registry[18404] = block;
  }

  { // ID: 18405
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_4;
    block->lit = YellowCandleBlock::LIT_TRUE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_TRUE;
    registry[18405] = block;
  }

  { // ID: 18406
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_4;
    block->lit = YellowCandleBlock::LIT_TRUE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_FALSE;
    registry[18406] = block;
  }

  { // ID: 18407
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_4;
    block->lit = YellowCandleBlock::LIT_FALSE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_TRUE;
    registry[18407] = block;
  }

  { // ID: 18408
    std::shared_ptr<YellowCandleBlock> block = std::make_shared<YellowCandleBlock>();
    block->candles = YellowCandleBlock::CANDLES_4;
    block->lit = YellowCandleBlock::LIT_FALSE;
    block->waterlogged = YellowCandleBlock::WATERLOGGED_FALSE;
    registry[18408] = block;
  }

  { // ID: 18595
    std::shared_ptr<YellowCandleCakeBlock> block = std::make_shared<YellowCandleCakeBlock>();
    block->lit = YellowCandleCakeBlock::LIT_TRUE;
    registry[18595] = block;
  }

  { // ID: 18596
    std::shared_ptr<YellowCandleCakeBlock> block = std::make_shared<YellowCandleCakeBlock>();
    block->lit = YellowCandleCakeBlock::LIT_FALSE;
    registry[18596] = block;
  }
}
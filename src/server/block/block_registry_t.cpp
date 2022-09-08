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

#include "tall_grass_block.h"
#include "tall_seagrass_block.h"
#include "target_block.h"
#include "terracotta_block.h"
#include "tinted_glass_block.h"
#include "tnt_block.h"
#include "torch_block.h"
#include "trapped_chest_block.h"
#include "tripwire_block.h"
#include "tripwire_hook_block.h"
#include "tube_coral_block.h"
#include "tube_coral_block_block.h"
#include "tube_coral_fan_block.h"
#include "tube_coral_wall_fan_block.h"
#include "tuff_block.h"
#include "turtle_egg_block.h"
#include "twisting_vines_block.h"
#include "twisting_vines_plant_block.h"

void BlockRegistry::generateT() {

  { // ID: 1600
    std::shared_ptr<TallSeagrassBlock> block = std::make_shared<TallSeagrassBlock>();
    block->half = TallSeagrassBlock::HALF_UPPER;
    registry[1600] = block;
  }

  { // ID: 1601
    std::shared_ptr<TallSeagrassBlock> block = std::make_shared<TallSeagrassBlock>();
    block->half = TallSeagrassBlock::HALF_LOWER;
    registry[1601] = block;
  }

  { // ID: 1684
    std::shared_ptr<TntBlock> block = std::make_shared<TntBlock>();
    block->unstable = TntBlock::UNSTABLE_TRUE;
    registry[1684] = block;
  }

  { // ID: 1685
    std::shared_ptr<TntBlock> block = std::make_shared<TntBlock>();
    block->unstable = TntBlock::UNSTABLE_FALSE;
    registry[1685] = block;
  }

  { // ID: 1689
    std::shared_ptr<TorchBlock> block = std::make_shared<TorchBlock>();
    registry[1689] = block;
  }

  { // ID: 5851
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_TRUE;
    block->facing = TripwireHookBlock::FACING_NORTH;
    block->powered = TripwireHookBlock::POWERED_TRUE;
    registry[5851] = block;
  }

  { // ID: 5852
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_TRUE;
    block->facing = TripwireHookBlock::FACING_NORTH;
    block->powered = TripwireHookBlock::POWERED_FALSE;
    registry[5852] = block;
  }

  { // ID: 5853
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_TRUE;
    block->facing = TripwireHookBlock::FACING_SOUTH;
    block->powered = TripwireHookBlock::POWERED_TRUE;
    registry[5853] = block;
  }

  { // ID: 5854
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_TRUE;
    block->facing = TripwireHookBlock::FACING_SOUTH;
    block->powered = TripwireHookBlock::POWERED_FALSE;
    registry[5854] = block;
  }

  { // ID: 5855
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_TRUE;
    block->facing = TripwireHookBlock::FACING_WEST;
    block->powered = TripwireHookBlock::POWERED_TRUE;
    registry[5855] = block;
  }

  { // ID: 5856
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_TRUE;
    block->facing = TripwireHookBlock::FACING_WEST;
    block->powered = TripwireHookBlock::POWERED_FALSE;
    registry[5856] = block;
  }

  { // ID: 5857
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_TRUE;
    block->facing = TripwireHookBlock::FACING_EAST;
    block->powered = TripwireHookBlock::POWERED_TRUE;
    registry[5857] = block;
  }

  { // ID: 5858
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_TRUE;
    block->facing = TripwireHookBlock::FACING_EAST;
    block->powered = TripwireHookBlock::POWERED_FALSE;
    registry[5858] = block;
  }

  { // ID: 5859
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_FALSE;
    block->facing = TripwireHookBlock::FACING_NORTH;
    block->powered = TripwireHookBlock::POWERED_TRUE;
    registry[5859] = block;
  }

  { // ID: 5860
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_FALSE;
    block->facing = TripwireHookBlock::FACING_NORTH;
    block->powered = TripwireHookBlock::POWERED_FALSE;
    registry[5860] = block;
  }

  { // ID: 5861
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_FALSE;
    block->facing = TripwireHookBlock::FACING_SOUTH;
    block->powered = TripwireHookBlock::POWERED_TRUE;
    registry[5861] = block;
  }

  { // ID: 5862
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_FALSE;
    block->facing = TripwireHookBlock::FACING_SOUTH;
    block->powered = TripwireHookBlock::POWERED_FALSE;
    registry[5862] = block;
  }

  { // ID: 5863
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_FALSE;
    block->facing = TripwireHookBlock::FACING_WEST;
    block->powered = TripwireHookBlock::POWERED_TRUE;
    registry[5863] = block;
  }

  { // ID: 5864
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_FALSE;
    block->facing = TripwireHookBlock::FACING_WEST;
    block->powered = TripwireHookBlock::POWERED_FALSE;
    registry[5864] = block;
  }

  { // ID: 5865
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_FALSE;
    block->facing = TripwireHookBlock::FACING_EAST;
    block->powered = TripwireHookBlock::POWERED_TRUE;
    registry[5865] = block;
  }

  { // ID: 5866
    std::shared_ptr<TripwireHookBlock> block = std::make_shared<TripwireHookBlock>();
    block->attached = TripwireHookBlock::ATTACHED_FALSE;
    block->facing = TripwireHookBlock::FACING_EAST;
    block->powered = TripwireHookBlock::POWERED_FALSE;
    registry[5866] = block;
  }

  { // ID: 5867
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5867] = block;
  }

  { // ID: 5868
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5868] = block;
  }

  { // ID: 5869
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5869] = block;
  }

  { // ID: 5870
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5870] = block;
  }

  { // ID: 5871
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5871] = block;
  }

  { // ID: 5872
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5872] = block;
  }

  { // ID: 5873
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5873] = block;
  }

  { // ID: 5874
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5874] = block;
  }

  { // ID: 5875
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5875] = block;
  }

  { // ID: 5876
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5876] = block;
  }

  { // ID: 5877
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5877] = block;
  }

  { // ID: 5878
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5878] = block;
  }

  { // ID: 5879
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5879] = block;
  }

  { // ID: 5880
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5880] = block;
  }

  { // ID: 5881
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5881] = block;
  }

  { // ID: 5882
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5882] = block;
  }

  { // ID: 5883
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5883] = block;
  }

  { // ID: 5884
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5884] = block;
  }

  { // ID: 5885
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5885] = block;
  }

  { // ID: 5886
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5886] = block;
  }

  { // ID: 5887
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5887] = block;
  }

  { // ID: 5888
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5888] = block;
  }

  { // ID: 5889
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5889] = block;
  }

  { // ID: 5890
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5890] = block;
  }

  { // ID: 5891
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5891] = block;
  }

  { // ID: 5892
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5892] = block;
  }

  { // ID: 5893
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5893] = block;
  }

  { // ID: 5894
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5894] = block;
  }

  { // ID: 5895
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5895] = block;
  }

  { // ID: 5896
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5896] = block;
  }

  { // ID: 5897
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5897] = block;
  }

  { // ID: 5898
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5898] = block;
  }

  { // ID: 5899
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5899] = block;
  }

  { // ID: 5900
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5900] = block;
  }

  { // ID: 5901
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5901] = block;
  }

  { // ID: 5902
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5902] = block;
  }

  { // ID: 5903
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5903] = block;
  }

  { // ID: 5904
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5904] = block;
  }

  { // ID: 5905
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5905] = block;
  }

  { // ID: 5906
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5906] = block;
  }

  { // ID: 5907
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5907] = block;
  }

  { // ID: 5908
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5908] = block;
  }

  { // ID: 5909
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5909] = block;
  }

  { // ID: 5910
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5910] = block;
  }

  { // ID: 5911
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5911] = block;
  }

  { // ID: 5912
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5912] = block;
  }

  { // ID: 5913
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5913] = block;
  }

  { // ID: 5914
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5914] = block;
  }

  { // ID: 5915
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5915] = block;
  }

  { // ID: 5916
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5916] = block;
  }

  { // ID: 5917
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5917] = block;
  }

  { // ID: 5918
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5918] = block;
  }

  { // ID: 5919
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5919] = block;
  }

  { // ID: 5920
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5920] = block;
  }

  { // ID: 5921
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5921] = block;
  }

  { // ID: 5922
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5922] = block;
  }

  { // ID: 5923
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5923] = block;
  }

  { // ID: 5924
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5924] = block;
  }

  { // ID: 5925
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5925] = block;
  }

  { // ID: 5926
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5926] = block;
  }

  { // ID: 5927
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5927] = block;
  }

  { // ID: 5928
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5928] = block;
  }

  { // ID: 5929
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5929] = block;
  }

  { // ID: 5930
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_TRUE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5930] = block;
  }

  { // ID: 5931
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5931] = block;
  }

  { // ID: 5932
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5932] = block;
  }

  { // ID: 5933
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5933] = block;
  }

  { // ID: 5934
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5934] = block;
  }

  { // ID: 5935
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5935] = block;
  }

  { // ID: 5936
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5936] = block;
  }

  { // ID: 5937
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5937] = block;
  }

  { // ID: 5938
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5938] = block;
  }

  { // ID: 5939
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5939] = block;
  }

  { // ID: 5940
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5940] = block;
  }

  { // ID: 5941
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5941] = block;
  }

  { // ID: 5942
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5942] = block;
  }

  { // ID: 5943
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5943] = block;
  }

  { // ID: 5944
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5944] = block;
  }

  { // ID: 5945
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5945] = block;
  }

  { // ID: 5946
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5946] = block;
  }

  { // ID: 5947
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5947] = block;
  }

  { // ID: 5948
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5948] = block;
  }

  { // ID: 5949
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5949] = block;
  }

  { // ID: 5950
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5950] = block;
  }

  { // ID: 5951
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5951] = block;
  }

  { // ID: 5952
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5952] = block;
  }

  { // ID: 5953
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5953] = block;
  }

  { // ID: 5954
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5954] = block;
  }

  { // ID: 5955
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5955] = block;
  }

  { // ID: 5956
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5956] = block;
  }

  { // ID: 5957
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5957] = block;
  }

  { // ID: 5958
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5958] = block;
  }

  { // ID: 5959
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5959] = block;
  }

  { // ID: 5960
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5960] = block;
  }

  { // ID: 5961
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5961] = block;
  }

  { // ID: 5962
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_TRUE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5962] = block;
  }

  { // ID: 5963
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5963] = block;
  }

  { // ID: 5964
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5964] = block;
  }

  { // ID: 5965
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5965] = block;
  }

  { // ID: 5966
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5966] = block;
  }

  { // ID: 5967
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5967] = block;
  }

  { // ID: 5968
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5968] = block;
  }

  { // ID: 5969
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5969] = block;
  }

  { // ID: 5970
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5970] = block;
  }

  { // ID: 5971
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5971] = block;
  }

  { // ID: 5972
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5972] = block;
  }

  { // ID: 5973
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5973] = block;
  }

  { // ID: 5974
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5974] = block;
  }

  { // ID: 5975
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5975] = block;
  }

  { // ID: 5976
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5976] = block;
  }

  { // ID: 5977
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5977] = block;
  }

  { // ID: 5978
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_TRUE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5978] = block;
  }

  { // ID: 5979
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5979] = block;
  }

  { // ID: 5980
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5980] = block;
  }

  { // ID: 5981
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5981] = block;
  }

  { // ID: 5982
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5982] = block;
  }

  { // ID: 5983
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5983] = block;
  }

  { // ID: 5984
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5984] = block;
  }

  { // ID: 5985
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5985] = block;
  }

  { // ID: 5986
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_TRUE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5986] = block;
  }

  { // ID: 5987
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5987] = block;
  }

  { // ID: 5988
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5988] = block;
  }

  { // ID: 5989
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5989] = block;
  }

  { // ID: 5990
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_TRUE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5990] = block;
  }

  { // ID: 5991
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5991] = block;
  }

  { // ID: 5992
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_TRUE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5992] = block;
  }

  { // ID: 5993
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_TRUE;
    registry[5993] = block;
  }

  { // ID: 5994
    std::shared_ptr<TripwireBlock> block = std::make_shared<TripwireBlock>();
    block->attached = TripwireBlock::ATTACHED_FALSE;
    block->disarmed = TripwireBlock::DISARMED_FALSE;
    block->east = TripwireBlock::EAST_FALSE;
    block->north = TripwireBlock::NORTH_FALSE;
    block->powered = TripwireBlock::POWERED_FALSE;
    block->south = TripwireBlock::SOUTH_FALSE;
    block->west = TripwireBlock::WEST_FALSE;
    registry[5994] = block;
  }

  { // ID: 7239
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_SINGLE;
    block->facing = TrappedChestBlock::FACING_NORTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7239] = block;
  }

  { // ID: 7240
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_SINGLE;
    block->facing = TrappedChestBlock::FACING_NORTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7240] = block;
  }

  { // ID: 7241
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_LEFT;
    block->facing = TrappedChestBlock::FACING_NORTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7241] = block;
  }

  { // ID: 7242
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_LEFT;
    block->facing = TrappedChestBlock::FACING_NORTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7242] = block;
  }

  { // ID: 7243
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_RIGHT;
    block->facing = TrappedChestBlock::FACING_NORTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7243] = block;
  }

  { // ID: 7244
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_RIGHT;
    block->facing = TrappedChestBlock::FACING_NORTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7244] = block;
  }

  { // ID: 7245
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_SINGLE;
    block->facing = TrappedChestBlock::FACING_SOUTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7245] = block;
  }

  { // ID: 7246
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_SINGLE;
    block->facing = TrappedChestBlock::FACING_SOUTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7246] = block;
  }

  { // ID: 7247
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_LEFT;
    block->facing = TrappedChestBlock::FACING_SOUTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7247] = block;
  }

  { // ID: 7248
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_LEFT;
    block->facing = TrappedChestBlock::FACING_SOUTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7248] = block;
  }

  { // ID: 7249
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_RIGHT;
    block->facing = TrappedChestBlock::FACING_SOUTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7249] = block;
  }

  { // ID: 7250
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_RIGHT;
    block->facing = TrappedChestBlock::FACING_SOUTH;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7250] = block;
  }

  { // ID: 7251
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_SINGLE;
    block->facing = TrappedChestBlock::FACING_WEST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7251] = block;
  }

  { // ID: 7252
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_SINGLE;
    block->facing = TrappedChestBlock::FACING_WEST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7252] = block;
  }

  { // ID: 7253
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_LEFT;
    block->facing = TrappedChestBlock::FACING_WEST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7253] = block;
  }

  { // ID: 7254
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_LEFT;
    block->facing = TrappedChestBlock::FACING_WEST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7254] = block;
  }

  { // ID: 7255
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_RIGHT;
    block->facing = TrappedChestBlock::FACING_WEST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7255] = block;
  }

  { // ID: 7256
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_RIGHT;
    block->facing = TrappedChestBlock::FACING_WEST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7256] = block;
  }

  { // ID: 7257
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_SINGLE;
    block->facing = TrappedChestBlock::FACING_EAST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7257] = block;
  }

  { // ID: 7258
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_SINGLE;
    block->facing = TrappedChestBlock::FACING_EAST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7258] = block;
  }

  { // ID: 7259
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_LEFT;
    block->facing = TrappedChestBlock::FACING_EAST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7259] = block;
  }

  { // ID: 7260
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_LEFT;
    block->facing = TrappedChestBlock::FACING_EAST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7260] = block;
  }

  { // ID: 7261
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_RIGHT;
    block->facing = TrappedChestBlock::FACING_EAST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_TRUE;
    registry[7261] = block;
  }

  { // ID: 7262
    std::shared_ptr<TrappedChestBlock> block = std::make_shared<TrappedChestBlock>();
    block->type = TrappedChestBlock::TYPE_RIGHT;
    block->facing = TrappedChestBlock::FACING_EAST;
    block->waterlogged = TrappedChestBlock::WATERLOGGED_FALSE;
    registry[7262] = block;
  }

  { // ID: 8623
    std::shared_ptr<TerracottaBlock> block = std::make_shared<TerracottaBlock>();
    registry[8623] = block;
  }

  { // ID: 8634
    std::shared_ptr<TallGrassBlock> block = std::make_shared<TallGrassBlock>();
    block->half = TallGrassBlock::HALF_UPPER;
    registry[8634] = block;
  }

  { // ID: 8635
    std::shared_ptr<TallGrassBlock> block = std::make_shared<TallGrassBlock>();
    block->half = TallGrassBlock::HALF_LOWER;
    registry[8635] = block;
  }

  { // ID: 10379
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_1;
    block->hatch = TurtleEggBlock::HATCH_0;
    registry[10379] = block;
  }

  { // ID: 10380
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_1;
    block->hatch = TurtleEggBlock::HATCH_1;
    registry[10380] = block;
  }

  { // ID: 10381
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_1;
    block->hatch = TurtleEggBlock::HATCH_2;
    registry[10381] = block;
  }

  { // ID: 10382
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_2;
    block->hatch = TurtleEggBlock::HATCH_0;
    registry[10382] = block;
  }

  { // ID: 10383
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_2;
    block->hatch = TurtleEggBlock::HATCH_1;
    registry[10383] = block;
  }

  { // ID: 10384
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_2;
    block->hatch = TurtleEggBlock::HATCH_2;
    registry[10384] = block;
  }

  { // ID: 10385
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_3;
    block->hatch = TurtleEggBlock::HATCH_0;
    registry[10385] = block;
  }

  { // ID: 10386
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_3;
    block->hatch = TurtleEggBlock::HATCH_1;
    registry[10386] = block;
  }

  { // ID: 10387
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_3;
    block->hatch = TurtleEggBlock::HATCH_2;
    registry[10387] = block;
  }

  { // ID: 10388
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_4;
    block->hatch = TurtleEggBlock::HATCH_0;
    registry[10388] = block;
  }

  { // ID: 10389
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_4;
    block->hatch = TurtleEggBlock::HATCH_1;
    registry[10389] = block;
  }

  { // ID: 10390
    std::shared_ptr<TurtleEggBlock> block = std::make_shared<TurtleEggBlock>();
    block->eggs = TurtleEggBlock::EGGS_4;
    block->hatch = TurtleEggBlock::HATCH_2;
    registry[10390] = block;
  }

  { // ID: 10396
    std::shared_ptr<TubeCoralBlockBlock> block = std::make_shared<TubeCoralBlockBlock>();
    registry[10396] = block;
  }

  { // ID: 10411
    std::shared_ptr<TubeCoralBlock> block = std::make_shared<TubeCoralBlock>();
    block->waterlogged = TubeCoralBlock::WATERLOGGED_TRUE;
    registry[10411] = block;
  }

  { // ID: 10412
    std::shared_ptr<TubeCoralBlock> block = std::make_shared<TubeCoralBlock>();
    block->waterlogged = TubeCoralBlock::WATERLOGGED_FALSE;
    registry[10412] = block;
  }

  { // ID: 10431
    std::shared_ptr<TubeCoralFanBlock> block = std::make_shared<TubeCoralFanBlock>();
    block->waterlogged = TubeCoralFanBlock::WATERLOGGED_TRUE;
    registry[10431] = block;
  }

  { // ID: 10432
    std::shared_ptr<TubeCoralFanBlock> block = std::make_shared<TubeCoralFanBlock>();
    block->waterlogged = TubeCoralFanBlock::WATERLOGGED_FALSE;
    registry[10432] = block;
  }

  { // ID: 10481
    std::shared_ptr<TubeCoralWallFanBlock> block = std::make_shared<TubeCoralWallFanBlock>();
    block->facing = TubeCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = TubeCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10481] = block;
  }

  { // ID: 10482
    std::shared_ptr<TubeCoralWallFanBlock> block = std::make_shared<TubeCoralWallFanBlock>();
    block->facing = TubeCoralWallFanBlock::FACING_NORTH;
    block->waterlogged = TubeCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10482] = block;
  }

  { // ID: 10483
    std::shared_ptr<TubeCoralWallFanBlock> block = std::make_shared<TubeCoralWallFanBlock>();
    block->facing = TubeCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = TubeCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10483] = block;
  }

  { // ID: 10484
    std::shared_ptr<TubeCoralWallFanBlock> block = std::make_shared<TubeCoralWallFanBlock>();
    block->facing = TubeCoralWallFanBlock::FACING_SOUTH;
    block->waterlogged = TubeCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10484] = block;
  }

  { // ID: 10485
    std::shared_ptr<TubeCoralWallFanBlock> block = std::make_shared<TubeCoralWallFanBlock>();
    block->facing = TubeCoralWallFanBlock::FACING_WEST;
    block->waterlogged = TubeCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10485] = block;
  }

  { // ID: 10486
    std::shared_ptr<TubeCoralWallFanBlock> block = std::make_shared<TubeCoralWallFanBlock>();
    block->facing = TubeCoralWallFanBlock::FACING_WEST;
    block->waterlogged = TubeCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10486] = block;
  }

  { // ID: 10487
    std::shared_ptr<TubeCoralWallFanBlock> block = std::make_shared<TubeCoralWallFanBlock>();
    block->facing = TubeCoralWallFanBlock::FACING_EAST;
    block->waterlogged = TubeCoralWallFanBlock::WATERLOGGED_TRUE;
    registry[10487] = block;
  }

  { // ID: 10488
    std::shared_ptr<TubeCoralWallFanBlock> block = std::make_shared<TubeCoralWallFanBlock>();
    block->facing = TubeCoralWallFanBlock::FACING_EAST;
    block->waterlogged = TubeCoralWallFanBlock::WATERLOGGED_FALSE;
    registry[10488] = block;
  }

  { // ID: 16226
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_0;
    registry[16226] = block;
  }

  { // ID: 16227
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_1;
    registry[16227] = block;
  }

  { // ID: 16228
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_2;
    registry[16228] = block;
  }

  { // ID: 16229
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_3;
    registry[16229] = block;
  }

  { // ID: 16230
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_4;
    registry[16230] = block;
  }

  { // ID: 16231
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_5;
    registry[16231] = block;
  }

  { // ID: 16232
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_6;
    registry[16232] = block;
  }

  { // ID: 16233
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_7;
    registry[16233] = block;
  }

  { // ID: 16234
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_8;
    registry[16234] = block;
  }

  { // ID: 16235
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_9;
    registry[16235] = block;
  }

  { // ID: 16236
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_10;
    registry[16236] = block;
  }

  { // ID: 16237
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_11;
    registry[16237] = block;
  }

  { // ID: 16238
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_12;
    registry[16238] = block;
  }

  { // ID: 16239
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_13;
    registry[16239] = block;
  }

  { // ID: 16240
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_14;
    registry[16240] = block;
  }

  { // ID: 16241
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_15;
    registry[16241] = block;
  }

  { // ID: 16242
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_16;
    registry[16242] = block;
  }

  { // ID: 16243
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_17;
    registry[16243] = block;
  }

  { // ID: 16244
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_18;
    registry[16244] = block;
  }

  { // ID: 16245
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_19;
    registry[16245] = block;
  }

  { // ID: 16246
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_20;
    registry[16246] = block;
  }

  { // ID: 16247
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_21;
    registry[16247] = block;
  }

  { // ID: 16248
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_22;
    registry[16248] = block;
  }

  { // ID: 16249
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_23;
    registry[16249] = block;
  }

  { // ID: 16250
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_24;
    registry[16250] = block;
  }

  { // ID: 16251
    std::shared_ptr<TwistingVinesBlock> block = std::make_shared<TwistingVinesBlock>();
    block->age = TwistingVinesBlock::AGE_25;
    registry[16251] = block;
  }

  { // ID: 16252
    std::shared_ptr<TwistingVinesPlantBlock> block = std::make_shared<TwistingVinesPlantBlock>();
    registry[16252] = block;
  }

  { // ID: 16969
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_0;
    registry[16969] = block;
  }

  { // ID: 16970
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_1;
    registry[16970] = block;
  }

  { // ID: 16971
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_2;
    registry[16971] = block;
  }

  { // ID: 16972
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_3;
    registry[16972] = block;
  }

  { // ID: 16973
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_4;
    registry[16973] = block;
  }

  { // ID: 16974
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_5;
    registry[16974] = block;
  }

  { // ID: 16975
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_6;
    registry[16975] = block;
  }

  { // ID: 16976
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_7;
    registry[16976] = block;
  }

  { // ID: 16977
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_8;
    registry[16977] = block;
  }

  { // ID: 16978
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_9;
    registry[16978] = block;
  }

  { // ID: 16979
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_10;
    registry[16979] = block;
  }

  { // ID: 16980
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_11;
    registry[16980] = block;
  }

  { // ID: 16981
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_12;
    registry[16981] = block;
  }

  { // ID: 16982
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_13;
    registry[16982] = block;
  }

  { // ID: 16983
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_14;
    registry[16983] = block;
  }

  { // ID: 16984
    std::shared_ptr<TargetBlock> block = std::make_shared<TargetBlock>();
    block->power = TargetBlock::POWER_15;
    registry[16984] = block;
  }

  { // ID: 18669
    std::shared_ptr<TuffBlock> block = std::make_shared<TuffBlock>();
    registry[18669] = block;
  }

  { // ID: 18671
    std::shared_ptr<TintedGlassBlock> block = std::make_shared<TintedGlassBlock>();
    registry[18671] = block;
  }
}
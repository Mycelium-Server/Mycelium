

#include "block_registry.h"

#include "verdant_froglight_block.h"
#include "vine_block.h"
#include "void_air_block.h"

void BlockRegistry::generateV() {

  { // ID: 5167
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_TRUE;
    registry[5167] = block;
  }

  { // ID: 5168
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_FALSE;
    registry[5168] = block;
  }

  { // ID: 5169
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_TRUE;
    registry[5169] = block;
  }

  { // ID: 5170
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_FALSE;
    registry[5170] = block;
  }

  { // ID: 5171
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_TRUE;
    registry[5171] = block;
  }

  { // ID: 5172
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_FALSE;
    registry[5172] = block;
  }

  { // ID: 5173
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_TRUE;
    registry[5173] = block;
  }

  { // ID: 5174
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_FALSE;
    registry[5174] = block;
  }

  { // ID: 5175
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_TRUE;
    registry[5175] = block;
  }

  { // ID: 5176
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_FALSE;
    registry[5176] = block;
  }

  { // ID: 5177
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_TRUE;
    registry[5177] = block;
  }

  { // ID: 5178
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_FALSE;
    registry[5178] = block;
  }

  { // ID: 5179
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_TRUE;
    registry[5179] = block;
  }

  { // ID: 5180
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_FALSE;
    registry[5180] = block;
  }

  { // ID: 5181
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_TRUE;
    registry[5181] = block;
  }

  { // ID: 5182
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_TRUE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_FALSE;
    registry[5182] = block;
  }

  { // ID: 5183
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_TRUE;
    registry[5183] = block;
  }

  { // ID: 5184
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_FALSE;
    registry[5184] = block;
  }

  { // ID: 5185
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_TRUE;
    registry[5185] = block;
  }

  { // ID: 5186
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_FALSE;
    registry[5186] = block;
  }

  { // ID: 5187
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_TRUE;
    registry[5187] = block;
  }

  { // ID: 5188
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_FALSE;
    registry[5188] = block;
  }

  { // ID: 5189
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_TRUE;
    registry[5189] = block;
  }

  { // ID: 5190
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_TRUE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_FALSE;
    registry[5190] = block;
  }

  { // ID: 5191
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_TRUE;
    registry[5191] = block;
  }

  { // ID: 5192
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_FALSE;
    registry[5192] = block;
  }

  { // ID: 5193
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_TRUE;
    registry[5193] = block;
  }

  { // ID: 5194
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_TRUE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_FALSE;
    registry[5194] = block;
  }

  { // ID: 5195
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_TRUE;
    registry[5195] = block;
  }

  { // ID: 5196
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_TRUE;
    block->west = VineBlock::WEST_FALSE;
    registry[5196] = block;
  }

  { // ID: 5197
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_TRUE;
    registry[5197] = block;
  }

  { // ID: 5198
    std::shared_ptr<VineBlock> block = std::make_shared<VineBlock>();
    block->east = VineBlock::EAST_FALSE;
    block->north = VineBlock::NORTH_FALSE;
    block->south = VineBlock::SOUTH_FALSE;
    block->up = VineBlock::UP_FALSE;
    block->west = VineBlock::WEST_FALSE;
    registry[5198] = block;
  }

  { // ID: 10546
    std::shared_ptr<VoidAirBlock> block = std::make_shared<VoidAirBlock>();
    registry[10546] = block;
  }

  { // ID: 21440
    std::shared_ptr<VerdantFroglightBlock> block = std::make_shared<VerdantFroglightBlock>();
    block->axis = VerdantFroglightBlock::AXIS_X;
    registry[21440] = block;
  }

  { // ID: 21441
    std::shared_ptr<VerdantFroglightBlock> block = std::make_shared<VerdantFroglightBlock>();
    block->axis = VerdantFroglightBlock::AXIS_Y;
    registry[21441] = block;
  }

  { // ID: 21442
    std::shared_ptr<VerdantFroglightBlock> block = std::make_shared<VerdantFroglightBlock>();
    block->axis = VerdantFroglightBlock::AXIS_Z;
    registry[21442] = block;
  }
}
#include "mangrove_wall_sign_block.h"

MangroveWallSignBlock::MangroveWallSignBlock() = default;
MangroveWallSignBlock::~MangroveWallSignBlock() = default;

short MangroveWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4080;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4081;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4082;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4083;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4084;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4085;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4086;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4087;
  return 4081;
}

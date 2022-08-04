#include "trapped_chest_block.h"

TrappedChestBlock::TrappedChestBlock() = default;
TrappedChestBlock::~TrappedChestBlock() = default;

short TrappedChestBlock::getId() const {
  if (type == TYPE_SINGLE && facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 7239;
  if (type == TYPE_SINGLE && facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 7240;
  if (type == TYPE_LEFT && facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 7241;
  if (type == TYPE_LEFT && facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 7242;
  if (type == TYPE_RIGHT && facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 7243;
  if (type == TYPE_RIGHT && facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 7244;
  if (type == TYPE_SINGLE && facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 7245;
  if (type == TYPE_SINGLE && facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 7246;
  if (type == TYPE_LEFT && facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 7247;
  if (type == TYPE_LEFT && facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 7248;
  if (type == TYPE_RIGHT && facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 7249;
  if (type == TYPE_RIGHT && facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 7250;
  if (type == TYPE_SINGLE && facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 7251;
  if (type == TYPE_SINGLE && facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 7252;
  if (type == TYPE_LEFT && facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 7253;
  if (type == TYPE_LEFT && facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 7254;
  if (type == TYPE_RIGHT && facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 7255;
  if (type == TYPE_RIGHT && facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 7256;
  if (type == TYPE_SINGLE && facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 7257;
  if (type == TYPE_SINGLE && facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 7258;
  if (type == TYPE_LEFT && facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 7259;
  if (type == TYPE_LEFT && facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 7260;
  if (type == TYPE_RIGHT && facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 7261;
  if (type == TYPE_RIGHT && facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 7262;
  return 7240;
}

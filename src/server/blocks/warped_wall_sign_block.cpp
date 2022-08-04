#include "warped_wall_sign_block.h"

WarpedWallSignBlock::WarpedWallSignBlock() = default;
WarpedWallSignBlock::~WarpedWallSignBlock() = default;

short WarpedWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 16936;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 16937;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 16938;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 16939;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 16940;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 16941;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 16942;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 16943;
  return 16937;
}

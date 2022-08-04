#include "ladder_block.h"

LadderBlock::LadderBlock() = default;
LadderBlock::~LadderBlock() = default;

short LadderBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 3924;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 3925;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 3926;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 3927;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 3928;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 3929;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 3930;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 3931;
  return 3925;
}

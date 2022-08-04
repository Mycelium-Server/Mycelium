#include "crimson_wall_sign_block.h"

CrimsonWallSignBlock::CrimsonWallSignBlock() = default;
CrimsonWallSignBlock::~CrimsonWallSignBlock() = default;

short CrimsonWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 16928;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 16929;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 16930;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 16931;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 16932;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 16933;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 16934;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 16935;
  return 16929;
}

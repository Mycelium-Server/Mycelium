#include "acacia_wall_sign_block.h"

AcaciaWallSignBlock::AcaciaWallSignBlock() = default;
AcaciaWallSignBlock::~AcaciaWallSignBlock() = default;

short AcaciaWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4056;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4057;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4058;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4059;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4060;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4061;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4062;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4063;
  return 4057;
}

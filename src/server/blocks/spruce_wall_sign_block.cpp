#include "spruce_wall_sign_block.h"

SpruceWallSignBlock::SpruceWallSignBlock() = default;
SpruceWallSignBlock::~SpruceWallSignBlock() = default;

short SpruceWallSignBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 4040;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 4041;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 4042;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 4043;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 4044;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 4045;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 4046;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 4047;
  return 4041;
}

#include "small_dripleaf_block.h"

SmallDripleafBlock::SmallDripleafBlock() = default;
SmallDripleafBlock::~SmallDripleafBlock() = default;

short SmallDripleafBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_UPPER && waterlogged == WATERLOGGED_TRUE) return 19758;
  if (facing == FACING_NORTH && half == HALF_UPPER && waterlogged == WATERLOGGED_FALSE) return 19759;
  if (facing == FACING_NORTH && half == HALF_LOWER && waterlogged == WATERLOGGED_TRUE) return 19760;
  if (facing == FACING_NORTH && half == HALF_LOWER && waterlogged == WATERLOGGED_FALSE) return 19761;
  if (facing == FACING_SOUTH && half == HALF_UPPER && waterlogged == WATERLOGGED_TRUE) return 19762;
  if (facing == FACING_SOUTH && half == HALF_UPPER && waterlogged == WATERLOGGED_FALSE) return 19763;
  if (facing == FACING_SOUTH && half == HALF_LOWER && waterlogged == WATERLOGGED_TRUE) return 19764;
  if (facing == FACING_SOUTH && half == HALF_LOWER && waterlogged == WATERLOGGED_FALSE) return 19765;
  if (facing == FACING_WEST && half == HALF_UPPER && waterlogged == WATERLOGGED_TRUE) return 19766;
  if (facing == FACING_WEST && half == HALF_UPPER && waterlogged == WATERLOGGED_FALSE) return 19767;
  if (facing == FACING_WEST && half == HALF_LOWER && waterlogged == WATERLOGGED_TRUE) return 19768;
  if (facing == FACING_WEST && half == HALF_LOWER && waterlogged == WATERLOGGED_FALSE) return 19769;
  if (facing == FACING_EAST && half == HALF_UPPER && waterlogged == WATERLOGGED_TRUE) return 19770;
  if (facing == FACING_EAST && half == HALF_UPPER && waterlogged == WATERLOGGED_FALSE) return 19771;
  if (facing == FACING_EAST && half == HALF_LOWER && waterlogged == WATERLOGGED_TRUE) return 19772;
  if (facing == FACING_EAST && half == HALF_LOWER && waterlogged == WATERLOGGED_FALSE) return 19773;
  return 19761;
}

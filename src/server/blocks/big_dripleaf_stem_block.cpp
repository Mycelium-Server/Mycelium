#include "big_dripleaf_stem_block.h"

BigDripleafStemBlock::BigDripleafStemBlock() = default;
BigDripleafStemBlock::~BigDripleafStemBlock() = default;

short BigDripleafStemBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 19750;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 19751;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 19752;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 19753;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 19754;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 19755;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 19756;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 19757;
  return 19751;
}

#include "smoker_block.h"

SmokerBlock::SmokerBlock() = default;
SmokerBlock::~SmokerBlock() = default;

short SmokerBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE) return 16008;
  if (facing == FACING_NORTH && lit == LIT_FALSE) return 16009;
  if (facing == FACING_SOUTH && lit == LIT_TRUE) return 16010;
  if (facing == FACING_SOUTH && lit == LIT_FALSE) return 16011;
  if (facing == FACING_WEST && lit == LIT_TRUE) return 16012;
  if (facing == FACING_WEST && lit == LIT_FALSE) return 16013;
  if (facing == FACING_EAST && lit == LIT_TRUE) return 16014;
  if (facing == FACING_EAST && lit == LIT_FALSE) return 16015;
  return 16009;
}

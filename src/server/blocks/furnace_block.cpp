#include "furnace_block.h"

FurnaceBlock::FurnaceBlock() = default;
FurnaceBlock::~FurnaceBlock() = default;

short FurnaceBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE) return 3628;
  if (facing == FACING_NORTH && lit == LIT_FALSE) return 3629;
  if (facing == FACING_SOUTH && lit == LIT_TRUE) return 3630;
  if (facing == FACING_SOUTH && lit == LIT_FALSE) return 3631;
  if (facing == FACING_WEST && lit == LIT_TRUE) return 3632;
  if (facing == FACING_WEST && lit == LIT_FALSE) return 3633;
  if (facing == FACING_EAST && lit == LIT_TRUE) return 3634;
  if (facing == FACING_EAST && lit == LIT_FALSE) return 3635;
  return 3629;
}

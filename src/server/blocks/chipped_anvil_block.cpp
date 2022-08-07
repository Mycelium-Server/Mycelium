#include "chipped_anvil_block.h"

ChippedAnvilBlock::ChippedAnvilBlock() = default;
ChippedAnvilBlock::~ChippedAnvilBlock() = default;

short ChippedAnvilBlock::getId() const {
  if (facing == FACING_NORTH) return 7231;
  if (facing == FACING_SOUTH) return 7232;
  if (facing == FACING_WEST) return 7233;
  if (facing == FACING_EAST) return 7234;
  return 7231;
}

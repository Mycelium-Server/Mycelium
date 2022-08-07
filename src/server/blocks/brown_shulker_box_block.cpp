#include "brown_shulker_box_block.h"

BrownShulkerBoxBlock::BrownShulkerBoxBlock() = default;
BrownShulkerBoxBlock::~BrownShulkerBoxBlock() = default;

short BrownShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10231;
  if (facing == FACING_EAST) return 10232;
  if (facing == FACING_SOUTH) return 10233;
  if (facing == FACING_WEST) return 10234;
  if (facing == FACING_UP) return 10235;
  if (facing == FACING_DOWN) return 10236;
  return 10235;
}

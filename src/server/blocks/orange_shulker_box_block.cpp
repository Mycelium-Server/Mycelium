#include "orange_shulker_box_block.h"

OrangeShulkerBoxBlock::OrangeShulkerBoxBlock() = default;
OrangeShulkerBoxBlock::~OrangeShulkerBoxBlock() = default;

short OrangeShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10165;
  if (facing == FACING_EAST) return 10166;
  if (facing == FACING_SOUTH) return 10167;
  if (facing == FACING_WEST) return 10168;
  if (facing == FACING_UP) return 10169;
  if (facing == FACING_DOWN) return 10170;
  return 10169;
}

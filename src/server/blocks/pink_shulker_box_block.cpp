#include "pink_shulker_box_block.h"

PinkShulkerBoxBlock::PinkShulkerBoxBlock() = default;
PinkShulkerBoxBlock::~PinkShulkerBoxBlock() = default;

short PinkShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10195;
  if (facing == FACING_EAST) return 10196;
  if (facing == FACING_SOUTH) return 10197;
  if (facing == FACING_WEST) return 10198;
  if (facing == FACING_UP) return 10199;
  if (facing == FACING_DOWN) return 10200;
  return 10199;
}

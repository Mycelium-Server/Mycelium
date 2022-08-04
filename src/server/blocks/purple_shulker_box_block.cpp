#include "purple_shulker_box_block.h"

PurpleShulkerBoxBlock::PurpleShulkerBoxBlock() = default;
PurpleShulkerBoxBlock::~PurpleShulkerBoxBlock() = default;

short PurpleShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10219;
  if (facing == FACING_EAST) return 10220;
  if (facing == FACING_SOUTH) return 10221;
  if (facing == FACING_WEST) return 10222;
  if (facing == FACING_UP) return 10223;
  if (facing == FACING_DOWN) return 10224;
  return 10223;
}

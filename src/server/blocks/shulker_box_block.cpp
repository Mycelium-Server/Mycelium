#include "shulker_box_block.h"

ShulkerBoxBlock::ShulkerBoxBlock() = default;
ShulkerBoxBlock::~ShulkerBoxBlock() = default;

short ShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10153;
  if (facing == FACING_EAST) return 10154;
  if (facing == FACING_SOUTH) return 10155;
  if (facing == FACING_WEST) return 10156;
  if (facing == FACING_UP) return 10157;
  if (facing == FACING_DOWN) return 10158;
  return 10157;
}

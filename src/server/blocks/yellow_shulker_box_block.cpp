#include "yellow_shulker_box_block.h"

YellowShulkerBoxBlock::YellowShulkerBoxBlock() = default;
YellowShulkerBoxBlock::~YellowShulkerBoxBlock() = default;

short YellowShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10183;
  if (facing == FACING_EAST) return 10184;
  if (facing == FACING_SOUTH) return 10185;
  if (facing == FACING_WEST) return 10186;
  if (facing == FACING_UP) return 10187;
  if (facing == FACING_DOWN) return 10188;
  return 10187;
}

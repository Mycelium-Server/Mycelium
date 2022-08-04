#include "gray_shulker_box_block.h"

GrayShulkerBoxBlock::GrayShulkerBoxBlock() = default;
GrayShulkerBoxBlock::~GrayShulkerBoxBlock() = default;

short GrayShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10201;
  if (facing == FACING_EAST) return 10202;
  if (facing == FACING_SOUTH) return 10203;
  if (facing == FACING_WEST) return 10204;
  if (facing == FACING_UP) return 10205;
  if (facing == FACING_DOWN) return 10206;
  return 10205;
}

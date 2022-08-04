#include "light_gray_shulker_box_block.h"

LightGrayShulkerBoxBlock::LightGrayShulkerBoxBlock() = default;
LightGrayShulkerBoxBlock::~LightGrayShulkerBoxBlock() = default;

short LightGrayShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10207;
  if (facing == FACING_EAST) return 10208;
  if (facing == FACING_SOUTH) return 10209;
  if (facing == FACING_WEST) return 10210;
  if (facing == FACING_UP) return 10211;
  if (facing == FACING_DOWN) return 10212;
  return 10211;
}

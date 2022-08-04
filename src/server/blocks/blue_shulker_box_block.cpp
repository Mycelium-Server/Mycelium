#include "blue_shulker_box_block.h"

BlueShulkerBoxBlock::BlueShulkerBoxBlock() = default;
BlueShulkerBoxBlock::~BlueShulkerBoxBlock() = default;

short BlueShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10225;
  if (facing == FACING_EAST) return 10226;
  if (facing == FACING_SOUTH) return 10227;
  if (facing == FACING_WEST) return 10228;
  if (facing == FACING_UP) return 10229;
  if (facing == FACING_DOWN) return 10230;
  return 10229;
}

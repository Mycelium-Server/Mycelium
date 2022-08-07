#include "light_blue_shulker_box_block.h"

LightBlueShulkerBoxBlock::LightBlueShulkerBoxBlock() = default;
LightBlueShulkerBoxBlock::~LightBlueShulkerBoxBlock() = default;

short LightBlueShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10177;
  if (facing == FACING_EAST) return 10178;
  if (facing == FACING_SOUTH) return 10179;
  if (facing == FACING_WEST) return 10180;
  if (facing == FACING_UP) return 10181;
  if (facing == FACING_DOWN) return 10182;
  return 10181;
}

#include "lime_shulker_box_block.h"

LimeShulkerBoxBlock::LimeShulkerBoxBlock() = default;
LimeShulkerBoxBlock::~LimeShulkerBoxBlock() = default;

short LimeShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10189;
  if (facing == FACING_EAST) return 10190;
  if (facing == FACING_SOUTH) return 10191;
  if (facing == FACING_WEST) return 10192;
  if (facing == FACING_UP) return 10193;
  if (facing == FACING_DOWN) return 10194;
  return 10193;
}

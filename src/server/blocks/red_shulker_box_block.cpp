#include "red_shulker_box_block.h"

RedShulkerBoxBlock::RedShulkerBoxBlock() = default;
RedShulkerBoxBlock::~RedShulkerBoxBlock() = default;

short RedShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10243;
  if (facing == FACING_EAST) return 10244;
  if (facing == FACING_SOUTH) return 10245;
  if (facing == FACING_WEST) return 10246;
  if (facing == FACING_UP) return 10247;
  if (facing == FACING_DOWN) return 10248;
  return 10247;
}

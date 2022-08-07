#include "magenta_shulker_box_block.h"

MagentaShulkerBoxBlock::MagentaShulkerBoxBlock() = default;
MagentaShulkerBoxBlock::~MagentaShulkerBoxBlock() = default;

short MagentaShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10171;
  if (facing == FACING_EAST) return 10172;
  if (facing == FACING_SOUTH) return 10173;
  if (facing == FACING_WEST) return 10174;
  if (facing == FACING_UP) return 10175;
  if (facing == FACING_DOWN) return 10176;
  return 10175;
}

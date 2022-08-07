#include "black_shulker_box_block.h"

BlackShulkerBoxBlock::BlackShulkerBoxBlock() = default;
BlackShulkerBoxBlock::~BlackShulkerBoxBlock() = default;

short BlackShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10249;
  if (facing == FACING_EAST) return 10250;
  if (facing == FACING_SOUTH) return 10251;
  if (facing == FACING_WEST) return 10252;
  if (facing == FACING_UP) return 10253;
  if (facing == FACING_DOWN) return 10254;
  return 10253;
}

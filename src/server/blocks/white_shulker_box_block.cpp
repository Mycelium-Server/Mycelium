#include "white_shulker_box_block.h"

WhiteShulkerBoxBlock::WhiteShulkerBoxBlock() = default;
WhiteShulkerBoxBlock::~WhiteShulkerBoxBlock() = default;

short WhiteShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10159;
  if (facing == FACING_EAST) return 10160;
  if (facing == FACING_SOUTH) return 10161;
  if (facing == FACING_WEST) return 10162;
  if (facing == FACING_UP) return 10163;
  if (facing == FACING_DOWN) return 10164;
  return 10163;
}

#include "loom_block.h"

LoomBlock::LoomBlock() = default;
LoomBlock::~LoomBlock() = default;

short LoomBlock::getId() const {
  if (facing == FACING_NORTH) return 15992;
  if (facing == FACING_SOUTH) return 15993;
  if (facing == FACING_WEST) return 15994;
  if (facing == FACING_EAST) return 15995;
  return 15992;
}

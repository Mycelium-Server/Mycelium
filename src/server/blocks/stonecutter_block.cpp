#include "stonecutter_block.h"

StonecutterBlock::StonecutterBlock() = default;
StonecutterBlock::~StonecutterBlock() = default;

short StonecutterBlock::getId() const {
  if (facing == FACING_NORTH) return 16055;
  if (facing == FACING_SOUTH) return 16056;
  if (facing == FACING_WEST) return 16057;
  if (facing == FACING_EAST) return 16058;
  return 16055;
}

#include "barrel_block.h"

BarrelBlock::BarrelBlock() = default;
BarrelBlock::~BarrelBlock() = default;

short BarrelBlock::getId() const {
  if (facing == FACING_NORTH && open == OPEN_TRUE) return 15996;
  if (facing == FACING_NORTH && open == OPEN_FALSE) return 15997;
  if (facing == FACING_EAST && open == OPEN_TRUE) return 15998;
  if (facing == FACING_EAST && open == OPEN_FALSE) return 15999;
  if (facing == FACING_SOUTH && open == OPEN_TRUE) return 16000;
  if (facing == FACING_SOUTH && open == OPEN_FALSE) return 16001;
  if (facing == FACING_WEST && open == OPEN_TRUE) return 16002;
  if (facing == FACING_WEST && open == OPEN_FALSE) return 16003;
  if (facing == FACING_UP && open == OPEN_TRUE) return 16004;
  if (facing == FACING_UP && open == OPEN_FALSE) return 16005;
  if (facing == FACING_DOWN && open == OPEN_TRUE) return 16006;
  if (facing == FACING_DOWN && open == OPEN_FALSE) return 16007;
  return 15997;
}

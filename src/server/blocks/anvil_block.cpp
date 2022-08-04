#include "anvil_block.h"

AnvilBlock::AnvilBlock() = default;
AnvilBlock::~AnvilBlock() = default;

short AnvilBlock::getId() const {
  if (facing == FACING_NORTH) return 7227;
  if (facing == FACING_SOUTH) return 7228;
  if (facing == FACING_WEST) return 7229;
  if (facing == FACING_EAST) return 7230;
  return 7227;
}

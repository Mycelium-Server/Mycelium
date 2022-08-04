#include "damaged_anvil_block.h"

DamagedAnvilBlock::DamagedAnvilBlock() = default;
DamagedAnvilBlock::~DamagedAnvilBlock() = default;

short DamagedAnvilBlock::getId() const {
  if (facing == FACING_NORTH) return 7235;
  if (facing == FACING_SOUTH) return 7236;
  if (facing == FACING_WEST) return 7237;
  if (facing == FACING_EAST) return 7238;
  return 7235;
}

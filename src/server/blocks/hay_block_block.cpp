#include "hay_block_block.h"

HayBlockBlock::HayBlockBlock() = default;
HayBlockBlock::~HayBlockBlock() = default;

short HayBlockBlock::getId() const {
  if (axis == AXIS_X) return 8604;
  if (axis == AXIS_Y) return 8605;
  if (axis == AXIS_Z) return 8606;
  return 8605;
}

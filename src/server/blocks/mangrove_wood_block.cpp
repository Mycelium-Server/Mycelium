#include "mangrove_wood_block.h"

MangroveWoodBlock::MangroveWoodBlock() = default;
MangroveWoodBlock::~MangroveWoodBlock() = default;

short MangroveWoodBlock::getId() const {
  if (axis == AXIS_X) return 182;
  if (axis == AXIS_Y) return 183;
  if (axis == AXIS_Z) return 184;
  return 183;
}

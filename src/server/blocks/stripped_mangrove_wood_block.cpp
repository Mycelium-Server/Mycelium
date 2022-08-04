#include "stripped_mangrove_wood_block.h"

StrippedMangroveWoodBlock::StrippedMangroveWoodBlock() = default;
StrippedMangroveWoodBlock::~StrippedMangroveWoodBlock() = default;

short StrippedMangroveWoodBlock::getId() const {
  if (axis == AXIS_X) return 203;
  if (axis == AXIS_Y) return 204;
  if (axis == AXIS_Z) return 205;
  return 204;
}

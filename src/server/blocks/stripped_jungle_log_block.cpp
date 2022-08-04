#include "stripped_jungle_log_block.h"

StrippedJungleLogBlock::StrippedJungleLogBlock() = default;
StrippedJungleLogBlock::~StrippedJungleLogBlock() = default;

short StrippedJungleLogBlock::getId() const {
  if (axis == AXIS_X) return 149;
  if (axis == AXIS_Y) return 150;
  if (axis == AXIS_Z) return 151;
  return 150;
}

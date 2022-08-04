#include "stripped_spruce_log_block.h"

StrippedSpruceLogBlock::StrippedSpruceLogBlock() = default;
StrippedSpruceLogBlock::~StrippedSpruceLogBlock() = default;

short StrippedSpruceLogBlock::getId() const {
  if (axis == AXIS_X) return 143;
  if (axis == AXIS_Y) return 144;
  if (axis == AXIS_Z) return 145;
  return 144;
}

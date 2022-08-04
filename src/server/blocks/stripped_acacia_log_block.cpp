#include "stripped_acacia_log_block.h"

StrippedAcaciaLogBlock::StrippedAcaciaLogBlock() = default;
StrippedAcaciaLogBlock::~StrippedAcaciaLogBlock() = default;

short StrippedAcaciaLogBlock::getId() const {
  if (axis == AXIS_X) return 152;
  if (axis == AXIS_Y) return 153;
  if (axis == AXIS_Z) return 154;
  return 153;
}

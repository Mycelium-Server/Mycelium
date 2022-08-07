#include "stripped_mangrove_log_block.h"

StrippedMangroveLogBlock::StrippedMangroveLogBlock() = default;
StrippedMangroveLogBlock::~StrippedMangroveLogBlock() = default;

short StrippedMangroveLogBlock::getId() const {
  if (axis == AXIS_X) return 161;
  if (axis == AXIS_Y) return 162;
  if (axis == AXIS_Z) return 163;
  return 162;
}

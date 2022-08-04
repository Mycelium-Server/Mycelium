#include "acacia_log_block.h"

AcaciaLogBlock::AcaciaLogBlock() = default;
AcaciaLogBlock::~AcaciaLogBlock() = default;

short AcaciaLogBlock::getId() const {
  if (axis == AXIS_X) return 129;
  if (axis == AXIS_Y) return 130;
  if (axis == AXIS_Z) return 131;
  return 130;
}

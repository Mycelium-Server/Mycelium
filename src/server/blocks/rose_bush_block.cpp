#include "rose_bush_block.h"

RoseBushBlock::RoseBushBlock() = default;
RoseBushBlock::~RoseBushBlock() = default;

short RoseBushBlock::getId() const {
  if (half == HALF_UPPER) return 8630;
  if (half == HALF_LOWER) return 8631;
  return 8631;
}

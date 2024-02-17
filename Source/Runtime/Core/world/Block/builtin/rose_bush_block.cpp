

#include "rose_bush_block.h"

RoseBushBlock::RoseBushBlock() = default;
RoseBushBlock::~RoseBushBlock() = default;

short RoseBushBlock::getId() const {
  return 8630 + half * 1;
}

std::shared_ptr<Block> RoseBushBlock::clone() const {
  std::shared_ptr<RoseBushBlock> copy = std::make_shared<RoseBushBlock>();
  copy->half = half;
  return copy;
}

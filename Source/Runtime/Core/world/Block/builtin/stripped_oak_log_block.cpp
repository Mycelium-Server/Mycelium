

#include "stripped_oak_log_block.h"

StrippedOakLogBlock::StrippedOakLogBlock() = default;
StrippedOakLogBlock::~StrippedOakLogBlock() = default;

short StrippedOakLogBlock::getId() const {
  return 158 + axis * 1;
}

std::shared_ptr<Block> StrippedOakLogBlock::clone() const {
  std::shared_ptr<StrippedOakLogBlock> copy = std::make_shared<StrippedOakLogBlock>();
  copy->axis = axis;
  return copy;
}

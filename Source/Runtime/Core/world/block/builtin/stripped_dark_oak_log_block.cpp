

#include "stripped_dark_oak_log_block.h"

StrippedDarkOakLogBlock::StrippedDarkOakLogBlock() = default;
StrippedDarkOakLogBlock::~StrippedDarkOakLogBlock() = default;

short StrippedDarkOakLogBlock::getId() const {
  return 155 + axis * 1;
}

std::shared_ptr<Block> StrippedDarkOakLogBlock::clone() const {
  std::shared_ptr<StrippedDarkOakLogBlock> copy = std::make_shared<StrippedDarkOakLogBlock>();
  copy->axis = axis;
  return copy;
}



#include "stripped_spruce_log_block.h"

StrippedSpruceLogBlock::StrippedSpruceLogBlock() = default;
StrippedSpruceLogBlock::~StrippedSpruceLogBlock() = default;

short StrippedSpruceLogBlock::getId() const {
  return 143 + axis * 1;
}

std::shared_ptr<Block> StrippedSpruceLogBlock::clone() const {
  std::shared_ptr<StrippedSpruceLogBlock> copy = std::make_shared<StrippedSpruceLogBlock>();
  copy->axis = axis;
  return copy;
}

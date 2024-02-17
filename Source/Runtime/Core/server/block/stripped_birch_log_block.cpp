

#include "stripped_birch_log_block.h"

StrippedBirchLogBlock::StrippedBirchLogBlock() = default;
StrippedBirchLogBlock::~StrippedBirchLogBlock() = default;

short StrippedBirchLogBlock::getId() const {
  return 146 + axis * 1;
}

std::shared_ptr<Block> StrippedBirchLogBlock::clone() const {
  std::shared_ptr<StrippedBirchLogBlock> copy = std::make_shared<StrippedBirchLogBlock>();
  copy->axis = axis;
  return copy;
}



#include "birch_log_block.h"

BirchLogBlock::BirchLogBlock() = default;
BirchLogBlock::~BirchLogBlock() = default;

short BirchLogBlock::getId() const {
  return 123 + axis * 1;
}

std::shared_ptr<Block> BirchLogBlock::clone() const {
  std::shared_ptr<BirchLogBlock> copy = std::make_shared<BirchLogBlock>();
  copy->axis = axis;
  return copy;
}

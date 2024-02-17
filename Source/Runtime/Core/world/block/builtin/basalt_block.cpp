

#include "basalt_block.h"

BasaltBlock::BasaltBlock() = default;
BasaltBlock::~BasaltBlock() = default;

short BasaltBlock::getId() const {
  return 4311 + axis * 1;
}

std::shared_ptr<Block> BasaltBlock::clone() const {
  std::shared_ptr<BasaltBlock> copy = std::make_shared<BasaltBlock>();
  copy->axis = axis;
  return copy;
}

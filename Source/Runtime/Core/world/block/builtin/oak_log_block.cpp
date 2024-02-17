

#include "oak_log_block.h"

OakLogBlock::OakLogBlock() = default;
OakLogBlock::~OakLogBlock() = default;

short OakLogBlock::getId() const {
  return 117 + axis * 1;
}

std::shared_ptr<Block> OakLogBlock::clone() const {
  std::shared_ptr<OakLogBlock> copy = std::make_shared<OakLogBlock>();
  copy->axis = axis;
  return copy;
}



#include "dark_oak_log_block.h"

DarkOakLogBlock::DarkOakLogBlock() = default;
DarkOakLogBlock::~DarkOakLogBlock() = default;

short DarkOakLogBlock::getId() const {
  return 132 + axis * 1;
}

std::shared_ptr<Block> DarkOakLogBlock::clone() const {
  std::shared_ptr<DarkOakLogBlock> copy = std::make_shared<DarkOakLogBlock>();
  copy->axis = axis;
  return copy;
}



#include "mangrove_log_block.h"

MangroveLogBlock::MangroveLogBlock() = default;
MangroveLogBlock::~MangroveLogBlock() = default;

short MangroveLogBlock::getId() const {
  return 135 + axis * 1;
}

std::shared_ptr<Block> MangroveLogBlock::clone() const {
  std::shared_ptr<MangroveLogBlock> copy = std::make_shared<MangroveLogBlock>();
  copy->axis = axis;
  return copy;
}

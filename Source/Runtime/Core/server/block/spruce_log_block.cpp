

#include "spruce_log_block.h"

SpruceLogBlock::SpruceLogBlock() = default;
SpruceLogBlock::~SpruceLogBlock() = default;

short SpruceLogBlock::getId() const {
  return 120 + axis * 1;
}

std::shared_ptr<Block> SpruceLogBlock::clone() const {
  std::shared_ptr<SpruceLogBlock> copy = std::make_shared<SpruceLogBlock>();
  copy->axis = axis;
  return copy;
}

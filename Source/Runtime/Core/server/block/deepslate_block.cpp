

#include "deepslate_block.h"

DeepslateBlock::DeepslateBlock() = default;
DeepslateBlock::~DeepslateBlock() = default;

short DeepslateBlock::getId() const {
  return 19778 + axis * 1;
}

std::shared_ptr<Block> DeepslateBlock::clone() const {
  std::shared_ptr<DeepslateBlock> copy = std::make_shared<DeepslateBlock>();
  copy->axis = axis;
  return copy;
}

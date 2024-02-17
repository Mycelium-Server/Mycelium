

#include "infested_deepslate_block.h"

InfestedDeepslateBlock::InfestedDeepslateBlock() = default;
InfestedDeepslateBlock::~InfestedDeepslateBlock() = default;

short InfestedDeepslateBlock::getId() const {
  return 21428 + axis * 1;
}

std::shared_ptr<Block> InfestedDeepslateBlock::clone() const {
  std::shared_ptr<InfestedDeepslateBlock> copy = std::make_shared<InfestedDeepslateBlock>();
  copy->axis = axis;
  return copy;
}

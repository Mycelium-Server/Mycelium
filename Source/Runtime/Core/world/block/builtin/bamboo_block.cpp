

#include "bamboo_block.h"

BambooBlock::BambooBlock() = default;
BambooBlock::~BambooBlock() = default;

short BambooBlock::getId() const {
  return 10533 + stage * 1 + leaves * 2 + age * 6;
}

std::shared_ptr<Block> BambooBlock::clone() const {
  std::shared_ptr<BambooBlock> copy = std::make_shared<BambooBlock>();
  copy->age = age;
  copy->leaves = leaves;
  copy->stage = stage;
  return copy;
}

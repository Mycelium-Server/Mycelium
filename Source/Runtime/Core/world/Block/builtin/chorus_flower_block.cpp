

#include "chorus_flower_block.h"

ChorusFlowerBlock::ChorusFlowerBlock() = default;
ChorusFlowerBlock::~ChorusFlowerBlock() = default;

short ChorusFlowerBlock::getId() const {
  return 10009 + age * 1;
}

std::shared_ptr<Block> ChorusFlowerBlock::clone() const {
  std::shared_ptr<ChorusFlowerBlock> copy = std::make_shared<ChorusFlowerBlock>();
  copy->age = age;
  return copy;
}

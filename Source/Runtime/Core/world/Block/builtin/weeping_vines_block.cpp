

#include "weeping_vines_block.h"

WeepingVinesBlock::WeepingVinesBlock() = default;
WeepingVinesBlock::~WeepingVinesBlock() = default;

short WeepingVinesBlock::getId() const {
  return 16199 + age * 1;
}

std::shared_ptr<Block> WeepingVinesBlock::clone() const {
  std::shared_ptr<WeepingVinesBlock> copy = std::make_shared<WeepingVinesBlock>();
  copy->age = age;
  return copy;
}



#include "twisting_vines_block.h"

TwistingVinesBlock::TwistingVinesBlock() = default;
TwistingVinesBlock::~TwistingVinesBlock() = default;

short TwistingVinesBlock::getId() const {
  return 16226 + age * 1;
}

std::shared_ptr<Block> TwistingVinesBlock::clone() const {
  std::shared_ptr<TwistingVinesBlock> copy = std::make_shared<TwistingVinesBlock>();
  copy->age = age;
  return copy;
}

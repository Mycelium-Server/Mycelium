

#include "kelp_block.h"

KelpBlock::KelpBlock() = default;
KelpBlock::~KelpBlock() = default;

short KelpBlock::getId() const {
  return 10351 + age * 1;
}

std::shared_ptr<Block> KelpBlock::clone() const {
  std::shared_ptr<KelpBlock> copy = std::make_shared<KelpBlock>();
  copy->age = age;
  return copy;
}

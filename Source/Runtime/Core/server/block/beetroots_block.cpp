

#include "beetroots_block.h"

BeetrootsBlock::BeetrootsBlock() = default;
BeetrootsBlock::~BeetrootsBlock() = default;

short BeetrootsBlock::getId() const {
  return 10100 + age * 1;
}

std::shared_ptr<Block> BeetrootsBlock::clone() const {
  std::shared_ptr<BeetrootsBlock> copy = std::make_shared<BeetrootsBlock>();
  copy->age = age;
  return copy;
}



#include "sweet_berry_bush_block.h"

SweetBerryBushBlock::SweetBerryBushBlock() = default;
SweetBerryBushBlock::~SweetBerryBushBlock() = default;

short SweetBerryBushBlock::getId() const {
  return 16163 + age * 1;
}

std::shared_ptr<Block> SweetBerryBushBlock::clone() const {
  std::shared_ptr<SweetBerryBushBlock> copy = std::make_shared<SweetBerryBushBlock>();
  copy->age = age;
  return copy;
}

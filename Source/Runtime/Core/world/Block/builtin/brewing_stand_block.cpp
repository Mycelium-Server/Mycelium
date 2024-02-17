

#include "brewing_stand_block.h"

BrewingStandBlock::BrewingStandBlock() = default;
BrewingStandBlock::~BrewingStandBlock() = default;

short BrewingStandBlock::getId() const {
  return 5720 + has_bottle_2 * 1 + has_bottle_1 * 2 + has_bottle_0 * 4;
}

std::shared_ptr<Block> BrewingStandBlock::clone() const {
  std::shared_ptr<BrewingStandBlock> copy = std::make_shared<BrewingStandBlock>();
  copy->has_bottle_0 = has_bottle_0;
  copy->has_bottle_1 = has_bottle_1;
  copy->has_bottle_2 = has_bottle_2;
  return copy;
}

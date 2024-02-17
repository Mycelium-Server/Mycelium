

#include "birch_planks_block.h"

BirchPlanksBlock::BirchPlanksBlock() = default;
BirchPlanksBlock::~BirchPlanksBlock() = default;

short BirchPlanksBlock::getId() const {
  return 17;
}

std::shared_ptr<Block> BirchPlanksBlock::clone() const {
  std::shared_ptr<BirchPlanksBlock> copy = std::make_shared<BirchPlanksBlock>();
  return copy;
}

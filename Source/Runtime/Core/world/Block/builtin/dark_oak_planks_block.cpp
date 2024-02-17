

#include "dark_oak_planks_block.h"

DarkOakPlanksBlock::DarkOakPlanksBlock() = default;
DarkOakPlanksBlock::~DarkOakPlanksBlock() = default;

short DarkOakPlanksBlock::getId() const {
  return 20;
}

std::shared_ptr<Block> DarkOakPlanksBlock::clone() const {
  std::shared_ptr<DarkOakPlanksBlock> copy = std::make_shared<DarkOakPlanksBlock>();
  return copy;
}

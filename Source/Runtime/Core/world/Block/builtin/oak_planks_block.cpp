

#include "oak_planks_block.h"

OakPlanksBlock::OakPlanksBlock() = default;
OakPlanksBlock::~OakPlanksBlock() = default;

short OakPlanksBlock::getId() const {
  return 15;
}

std::shared_ptr<Block> OakPlanksBlock::clone() const {
  std::shared_ptr<OakPlanksBlock> copy = std::make_shared<OakPlanksBlock>();
  return copy;
}

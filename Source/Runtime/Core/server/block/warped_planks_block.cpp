

#include "warped_planks_block.h"

WarpedPlanksBlock::WarpedPlanksBlock() = default;
WarpedPlanksBlock::~WarpedPlanksBlock() = default;

short WarpedPlanksBlock::getId() const {
  return 16255;
}

std::shared_ptr<Block> WarpedPlanksBlock::clone() const {
  std::shared_ptr<WarpedPlanksBlock> copy = std::make_shared<WarpedPlanksBlock>();
  return copy;
}



#include "potted_cornflower_block.h"

PottedCornflowerBlock::PottedCornflowerBlock() = default;
PottedCornflowerBlock::~PottedCornflowerBlock() = default;

short PottedCornflowerBlock::getId() const {
  return 6916;
}

std::shared_ptr<Block> PottedCornflowerBlock::clone() const {
  std::shared_ptr<PottedCornflowerBlock> copy = std::make_shared<PottedCornflowerBlock>();
  return copy;
}

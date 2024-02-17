

#include "brown_stained_glass_block.h"

BrownStainedGlassBlock::BrownStainedGlassBlock() = default;
BrownStainedGlassBlock::~BrownStainedGlassBlock() = default;

short BrownStainedGlassBlock::getId() const {
  return 4416;
}

std::shared_ptr<Block> BrownStainedGlassBlock::clone() const {
  std::shared_ptr<BrownStainedGlassBlock> copy = std::make_shared<BrownStainedGlassBlock>();
  return copy;
}

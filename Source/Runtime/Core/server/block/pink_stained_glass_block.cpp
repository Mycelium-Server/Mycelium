

#include "pink_stained_glass_block.h"

PinkStainedGlassBlock::PinkStainedGlassBlock() = default;
PinkStainedGlassBlock::~PinkStainedGlassBlock() = default;

short PinkStainedGlassBlock::getId() const {
  return 4410;
}

std::shared_ptr<Block> PinkStainedGlassBlock::clone() const {
  std::shared_ptr<PinkStainedGlassBlock> copy = std::make_shared<PinkStainedGlassBlock>();
  return copy;
}

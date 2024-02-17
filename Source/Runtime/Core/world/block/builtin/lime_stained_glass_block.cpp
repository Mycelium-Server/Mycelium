

#include "lime_stained_glass_block.h"

LimeStainedGlassBlock::LimeStainedGlassBlock() = default;
LimeStainedGlassBlock::~LimeStainedGlassBlock() = default;

short LimeStainedGlassBlock::getId() const {
  return 4409;
}

std::shared_ptr<Block> LimeStainedGlassBlock::clone() const {
  std::shared_ptr<LimeStainedGlassBlock> copy = std::make_shared<LimeStainedGlassBlock>();
  return copy;
}

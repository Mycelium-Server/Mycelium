

#include "orange_stained_glass_block.h"

OrangeStainedGlassBlock::OrangeStainedGlassBlock() = default;
OrangeStainedGlassBlock::~OrangeStainedGlassBlock() = default;

short OrangeStainedGlassBlock::getId() const {
  return 4405;
}

std::shared_ptr<Block> OrangeStainedGlassBlock::clone() const {
  std::shared_ptr<OrangeStainedGlassBlock> copy = std::make_shared<OrangeStainedGlassBlock>();
  return copy;
}

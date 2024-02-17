

#include "yellow_stained_glass_block.h"

YellowStainedGlassBlock::YellowStainedGlassBlock() = default;
YellowStainedGlassBlock::~YellowStainedGlassBlock() = default;

short YellowStainedGlassBlock::getId() const {
  return 4408;
}

std::shared_ptr<Block> YellowStainedGlassBlock::clone() const {
  std::shared_ptr<YellowStainedGlassBlock> copy = std::make_shared<YellowStainedGlassBlock>();
  return copy;
}



#include "blue_stained_glass_block.h"

BlueStainedGlassBlock::BlueStainedGlassBlock() = default;
BlueStainedGlassBlock::~BlueStainedGlassBlock() = default;

short BlueStainedGlassBlock::getId() const {
  return 4415;
}

std::shared_ptr<Block> BlueStainedGlassBlock::clone() const {
  std::shared_ptr<BlueStainedGlassBlock> copy = std::make_shared<BlueStainedGlassBlock>();
  return copy;
}

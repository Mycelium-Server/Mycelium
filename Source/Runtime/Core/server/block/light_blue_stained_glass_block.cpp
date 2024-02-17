

#include "light_blue_stained_glass_block.h"

LightBlueStainedGlassBlock::LightBlueStainedGlassBlock() = default;
LightBlueStainedGlassBlock::~LightBlueStainedGlassBlock() = default;

short LightBlueStainedGlassBlock::getId() const {
  return 4407;
}

std::shared_ptr<Block> LightBlueStainedGlassBlock::clone() const {
  std::shared_ptr<LightBlueStainedGlassBlock> copy = std::make_shared<LightBlueStainedGlassBlock>();
  return copy;
}

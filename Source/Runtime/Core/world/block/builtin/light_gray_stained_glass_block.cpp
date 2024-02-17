

#include "light_gray_stained_glass_block.h"

LightGrayStainedGlassBlock::LightGrayStainedGlassBlock() = default;
LightGrayStainedGlassBlock::~LightGrayStainedGlassBlock() = default;

short LightGrayStainedGlassBlock::getId() const {
  return 4412;
}

std::shared_ptr<Block> LightGrayStainedGlassBlock::clone() const {
  std::shared_ptr<LightGrayStainedGlassBlock> copy = std::make_shared<LightGrayStainedGlassBlock>();
  return copy;
}

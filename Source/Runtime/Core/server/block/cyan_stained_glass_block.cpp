

#include "cyan_stained_glass_block.h"

CyanStainedGlassBlock::CyanStainedGlassBlock() = default;
CyanStainedGlassBlock::~CyanStainedGlassBlock() = default;

short CyanStainedGlassBlock::getId() const {
  return 4413;
}

std::shared_ptr<Block> CyanStainedGlassBlock::clone() const {
  std::shared_ptr<CyanStainedGlassBlock> copy = std::make_shared<CyanStainedGlassBlock>();
  return copy;
}



#include "green_stained_glass_block.h"

GreenStainedGlassBlock::GreenStainedGlassBlock() = default;
GreenStainedGlassBlock::~GreenStainedGlassBlock() = default;

short GreenStainedGlassBlock::getId() const {
  return 4417;
}

std::shared_ptr<Block> GreenStainedGlassBlock::clone() const {
  std::shared_ptr<GreenStainedGlassBlock> copy = std::make_shared<GreenStainedGlassBlock>();
  return copy;
}



#include "tinted_glass_block.h"

TintedGlassBlock::TintedGlassBlock() = default;
TintedGlassBlock::~TintedGlassBlock() = default;

short TintedGlassBlock::getId() const {
  return 18671;
}

std::shared_ptr<Block> TintedGlassBlock::clone() const {
  std::shared_ptr<TintedGlassBlock> copy = std::make_shared<TintedGlassBlock>();
  return copy;
}

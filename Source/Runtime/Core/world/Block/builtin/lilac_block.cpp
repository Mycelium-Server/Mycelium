

#include "lilac_block.h"

LilacBlock::LilacBlock() = default;
LilacBlock::~LilacBlock() = default;

short LilacBlock::getId() const {
  return 8628 + half * 1;
}

std::shared_ptr<Block> LilacBlock::clone() const {
  std::shared_ptr<LilacBlock> copy = std::make_shared<LilacBlock>();
  copy->half = half;
  return copy;
}

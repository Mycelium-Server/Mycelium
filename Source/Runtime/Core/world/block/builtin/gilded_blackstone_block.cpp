

#include "gilded_blackstone_block.h"

GildedBlackstoneBlock::GildedBlackstoneBlock() = default;
GildedBlackstoneBlock::~GildedBlackstoneBlock() = default;

short GildedBlackstoneBlock::getId() const {
  return 17873;
}

std::shared_ptr<Block> GildedBlackstoneBlock::clone() const {
  std::shared_ptr<GildedBlackstoneBlock> copy = std::make_shared<GildedBlackstoneBlock>();
  return copy;
}

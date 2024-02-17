

#include "white_tulip_block.h"

WhiteTulipBlock::WhiteTulipBlock() = default;
WhiteTulipBlock::~WhiteTulipBlock() = default;

short WhiteTulipBlock::getId() const {
  return 1673;
}

std::shared_ptr<Block> WhiteTulipBlock::clone() const {
  std::shared_ptr<WhiteTulipBlock> copy = std::make_shared<WhiteTulipBlock>();
  return copy;
}

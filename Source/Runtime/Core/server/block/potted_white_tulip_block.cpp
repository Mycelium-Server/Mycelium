

#include "potted_white_tulip_block.h"

PottedWhiteTulipBlock::PottedWhiteTulipBlock() = default;
PottedWhiteTulipBlock::~PottedWhiteTulipBlock() = default;

short PottedWhiteTulipBlock::getId() const {
  return 6913;
}

std::shared_ptr<Block> PottedWhiteTulipBlock::clone() const {
  std::shared_ptr<PottedWhiteTulipBlock> copy = std::make_shared<PottedWhiteTulipBlock>();
  return copy;
}

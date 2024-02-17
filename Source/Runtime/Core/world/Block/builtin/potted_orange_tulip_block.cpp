

#include "potted_orange_tulip_block.h"

PottedOrangeTulipBlock::PottedOrangeTulipBlock() = default;
PottedOrangeTulipBlock::~PottedOrangeTulipBlock() = default;

short PottedOrangeTulipBlock::getId() const {
  return 6912;
}

std::shared_ptr<Block> PottedOrangeTulipBlock::clone() const {
  std::shared_ptr<PottedOrangeTulipBlock> copy = std::make_shared<PottedOrangeTulipBlock>();
  return copy;
}

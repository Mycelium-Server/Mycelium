

#include "orange_tulip_block.h"

OrangeTulipBlock::OrangeTulipBlock() = default;
OrangeTulipBlock::~OrangeTulipBlock() = default;

short OrangeTulipBlock::getId() const {
  return 1672;
}

std::shared_ptr<Block> OrangeTulipBlock::clone() const {
  std::shared_ptr<OrangeTulipBlock> copy = std::make_shared<OrangeTulipBlock>();
  return copy;
}



#include "orange_carpet_block.h"

OrangeCarpetBlock::OrangeCarpetBlock() = default;
OrangeCarpetBlock::~OrangeCarpetBlock() = default;

short OrangeCarpetBlock::getId() const {
  return 8608;
}

std::shared_ptr<Block> OrangeCarpetBlock::clone() const {
  std::shared_ptr<OrangeCarpetBlock> copy = std::make_shared<OrangeCarpetBlock>();
  return copy;
}

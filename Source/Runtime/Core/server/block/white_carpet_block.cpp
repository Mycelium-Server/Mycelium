

#include "white_carpet_block.h"

WhiteCarpetBlock::WhiteCarpetBlock() = default;
WhiteCarpetBlock::~WhiteCarpetBlock() = default;

short WhiteCarpetBlock::getId() const {
  return 8607;
}

std::shared_ptr<Block> WhiteCarpetBlock::clone() const {
  std::shared_ptr<WhiteCarpetBlock> copy = std::make_shared<WhiteCarpetBlock>();
  return copy;
}

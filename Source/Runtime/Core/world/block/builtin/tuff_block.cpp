

#include "tuff_block.h"

TuffBlock::TuffBlock() = default;
TuffBlock::~TuffBlock() = default;

short TuffBlock::getId() const {
  return 18669;
}

std::shared_ptr<Block> TuffBlock::clone() const {
  std::shared_ptr<TuffBlock> copy = std::make_shared<TuffBlock>();
  return copy;
}

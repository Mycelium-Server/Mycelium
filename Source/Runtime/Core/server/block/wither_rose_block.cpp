

#include "wither_rose_block.h"

WitherRoseBlock::WitherRoseBlock() = default;
WitherRoseBlock::~WitherRoseBlock() = default;

short WitherRoseBlock::getId() const {
  return 1677;
}

std::shared_ptr<Block> WitherRoseBlock::clone() const {
  std::shared_ptr<WitherRoseBlock> copy = std::make_shared<WitherRoseBlock>();
  return copy;
}

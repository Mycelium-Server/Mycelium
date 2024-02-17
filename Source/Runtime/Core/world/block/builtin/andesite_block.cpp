

#include "andesite_block.h"

AndesiteBlock::AndesiteBlock() = default;
AndesiteBlock::~AndesiteBlock() = default;

short AndesiteBlock::getId() const {
  return 6;
}

std::shared_ptr<Block> AndesiteBlock::clone() const {
  std::shared_ptr<AndesiteBlock> copy = std::make_shared<AndesiteBlock>();
  return copy;
}

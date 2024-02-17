

#include "clay_block.h"

ClayBlock::ClayBlock() = default;
ClayBlock::~ClayBlock() = default;

short ClayBlock::getId() const {
  return 4256;
}

std::shared_ptr<Block> ClayBlock::clone() const {
  std::shared_ptr<ClayBlock> copy = std::make_shared<ClayBlock>();
  return copy;
}

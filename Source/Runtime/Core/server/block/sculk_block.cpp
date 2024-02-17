

#include "sculk_block.h"

SculkBlock::SculkBlock() = default;
SculkBlock::~SculkBlock() = default;

short SculkBlock::getId() const {
  return 18769;
}

std::shared_ptr<Block> SculkBlock::clone() const {
  std::shared_ptr<SculkBlock> copy = std::make_shared<SculkBlock>();
  return copy;
}



#include "brown_wool_block.h"

BrownWoolBlock::BrownWoolBlock() = default;
BrownWoolBlock::~BrownWoolBlock() = default;

short BrownWoolBlock::getId() const {
  return 1650;
}

std::shared_ptr<Block> BrownWoolBlock::clone() const {
  std::shared_ptr<BrownWoolBlock> copy = std::make_shared<BrownWoolBlock>();
  return copy;
}

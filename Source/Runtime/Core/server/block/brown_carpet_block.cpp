

#include "brown_carpet_block.h"

BrownCarpetBlock::BrownCarpetBlock() = default;
BrownCarpetBlock::~BrownCarpetBlock() = default;

short BrownCarpetBlock::getId() const {
  return 8619;
}

std::shared_ptr<Block> BrownCarpetBlock::clone() const {
  std::shared_ptr<BrownCarpetBlock> copy = std::make_shared<BrownCarpetBlock>();
  return copy;
}

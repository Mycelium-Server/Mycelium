

#include "brown_mushroom_block.h"

BrownMushroomBlock::BrownMushroomBlock() = default;
BrownMushroomBlock::~BrownMushroomBlock() = default;

short BrownMushroomBlock::getId() const {
  return 1679;
}

std::shared_ptr<Block> BrownMushroomBlock::clone() const {
  std::shared_ptr<BrownMushroomBlock> copy = std::make_shared<BrownMushroomBlock>();
  return copy;
}

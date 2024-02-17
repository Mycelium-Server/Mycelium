

#include "brown_mushroom_block_block.h"

BrownMushroomBlockBlock::BrownMushroomBlockBlock() = default;
BrownMushroomBlockBlock::~BrownMushroomBlockBlock() = default;

short BrownMushroomBlockBlock::getId() const {
  return 4880 + west * 1 + up * 2 + south * 4 + north * 8 + east * 16 + down * 32;
}

std::shared_ptr<Block> BrownMushroomBlockBlock::clone() const {
  std::shared_ptr<BrownMushroomBlockBlock> copy = std::make_shared<BrownMushroomBlockBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->west = west;
  return copy;
}

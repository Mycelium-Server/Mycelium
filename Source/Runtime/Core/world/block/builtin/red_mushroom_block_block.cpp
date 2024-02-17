

#include "red_mushroom_block_block.h"

RedMushroomBlockBlock::RedMushroomBlockBlock() = default;
RedMushroomBlockBlock::~RedMushroomBlockBlock() = default;

short RedMushroomBlockBlock::getId() const {
  return 4944 + west * 1 + up * 2 + south * 4 + north * 8 + east * 16 + down * 32;
}

std::shared_ptr<Block> RedMushroomBlockBlock::clone() const {
  std::shared_ptr<RedMushroomBlockBlock> copy = std::make_shared<RedMushroomBlockBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->west = west;
  return copy;
}

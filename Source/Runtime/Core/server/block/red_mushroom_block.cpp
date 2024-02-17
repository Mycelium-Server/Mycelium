

#include "red_mushroom_block.h"

RedMushroomBlock::RedMushroomBlock() = default;
RedMushroomBlock::~RedMushroomBlock() = default;

short RedMushroomBlock::getId() const {
  return 1680;
}

std::shared_ptr<Block> RedMushroomBlock::clone() const {
  std::shared_ptr<RedMushroomBlock> copy = std::make_shared<RedMushroomBlock>();
  return copy;
}

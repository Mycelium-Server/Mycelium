

#include "red_nether_bricks_block.h"

RedNetherBricksBlock::RedNetherBricksBlock() = default;
RedNetherBricksBlock::~RedNetherBricksBlock() = default;

short RedNetherBricksBlock::getId() const {
  return 10136;
}

std::shared_ptr<Block> RedNetherBricksBlock::clone() const {
  std::shared_ptr<RedNetherBricksBlock> copy = std::make_shared<RedNetherBricksBlock>();
  return copy;
}



#include "bricks_block.h"

BricksBlock::BricksBlock() = default;
BricksBlock::~BricksBlock() = default;

short BricksBlock::getId() const {
  return 1683;
}

std::shared_ptr<Block> BricksBlock::clone() const {
  std::shared_ptr<BricksBlock> copy = std::make_shared<BricksBlock>();
  return copy;
}

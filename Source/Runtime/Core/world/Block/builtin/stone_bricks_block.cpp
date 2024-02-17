

#include "stone_bricks_block.h"

StoneBricksBlock::StoneBricksBlock() = default;
StoneBricksBlock::~StoneBricksBlock() = default;

short StoneBricksBlock::getId() const {
  return 4868;
}

std::shared_ptr<Block> StoneBricksBlock::clone() const {
  std::shared_ptr<StoneBricksBlock> copy = std::make_shared<StoneBricksBlock>();
  return copy;
}

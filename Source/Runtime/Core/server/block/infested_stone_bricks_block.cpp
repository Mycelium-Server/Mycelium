

#include "infested_stone_bricks_block.h"

InfestedStoneBricksBlock::InfestedStoneBricksBlock() = default;
InfestedStoneBricksBlock::~InfestedStoneBricksBlock() = default;

short InfestedStoneBricksBlock::getId() const {
  return 4876;
}

std::shared_ptr<Block> InfestedStoneBricksBlock::clone() const {
  std::shared_ptr<InfestedStoneBricksBlock> copy = std::make_shared<InfestedStoneBricksBlock>();
  return copy;
}

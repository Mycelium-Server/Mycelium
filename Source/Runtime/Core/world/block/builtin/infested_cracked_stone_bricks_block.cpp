

#include "infested_cracked_stone_bricks_block.h"

InfestedCrackedStoneBricksBlock::InfestedCrackedStoneBricksBlock() = default;
InfestedCrackedStoneBricksBlock::~InfestedCrackedStoneBricksBlock() = default;

short InfestedCrackedStoneBricksBlock::getId() const {
  return 4878;
}

std::shared_ptr<Block> InfestedCrackedStoneBricksBlock::clone() const {
  std::shared_ptr<InfestedCrackedStoneBricksBlock> copy = std::make_shared<InfestedCrackedStoneBricksBlock>();
  return copy;
}



#include "polished_blackstone_bricks_block.h"

PolishedBlackstoneBricksBlock::PolishedBlackstoneBricksBlock() = default;
PolishedBlackstoneBricksBlock::~PolishedBlackstoneBricksBlock() = default;

short PolishedBlackstoneBricksBlock::getId() const {
  return 17460;
}

std::shared_ptr<Block> PolishedBlackstoneBricksBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneBricksBlock> copy = std::make_shared<PolishedBlackstoneBricksBlock>();
  return copy;
}

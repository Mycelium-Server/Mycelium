

#include "cracked_polished_blackstone_bricks_block.h"

CrackedPolishedBlackstoneBricksBlock::CrackedPolishedBlackstoneBricksBlock() = default;
CrackedPolishedBlackstoneBricksBlock::~CrackedPolishedBlackstoneBricksBlock() = default;

short CrackedPolishedBlackstoneBricksBlock::getId() const {
  return 17461;
}

std::shared_ptr<Block> CrackedPolishedBlackstoneBricksBlock::clone() const {
  std::shared_ptr<CrackedPolishedBlackstoneBricksBlock> copy = std::make_shared<CrackedPolishedBlackstoneBricksBlock>();
  return copy;
}

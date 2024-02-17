

#include "cracked_stone_bricks_block.h"

CrackedStoneBricksBlock::CrackedStoneBricksBlock() = default;
CrackedStoneBricksBlock::~CrackedStoneBricksBlock() = default;

short CrackedStoneBricksBlock::getId() const {
  return 4870;
}

std::shared_ptr<Block> CrackedStoneBricksBlock::clone() const {
  std::shared_ptr<CrackedStoneBricksBlock> copy = std::make_shared<CrackedStoneBricksBlock>();
  return copy;
}

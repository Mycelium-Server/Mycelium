

#include "mossy_stone_bricks_block.h"

MossyStoneBricksBlock::MossyStoneBricksBlock() = default;
MossyStoneBricksBlock::~MossyStoneBricksBlock() = default;

short MossyStoneBricksBlock::getId() const {
  return 4869;
}

std::shared_ptr<Block> MossyStoneBricksBlock::clone() const {
  std::shared_ptr<MossyStoneBricksBlock> copy = std::make_shared<MossyStoneBricksBlock>();
  return copy;
}

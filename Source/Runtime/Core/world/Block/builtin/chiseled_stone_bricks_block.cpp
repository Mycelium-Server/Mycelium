

#include "chiseled_stone_bricks_block.h"

ChiseledStoneBricksBlock::ChiseledStoneBricksBlock() = default;
ChiseledStoneBricksBlock::~ChiseledStoneBricksBlock() = default;

short ChiseledStoneBricksBlock::getId() const {
  return 4871;
}

std::shared_ptr<Block> ChiseledStoneBricksBlock::clone() const {
  std::shared_ptr<ChiseledStoneBricksBlock> copy = std::make_shared<ChiseledStoneBricksBlock>();
  return copy;
}

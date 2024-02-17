

#include "chiseled_nether_bricks_block.h"

ChiseledNetherBricksBlock::ChiseledNetherBricksBlock() = default;
ChiseledNetherBricksBlock::~ChiseledNetherBricksBlock() = default;

short ChiseledNetherBricksBlock::getId() const {
  return 18310;
}

std::shared_ptr<Block> ChiseledNetherBricksBlock::clone() const {
  std::shared_ptr<ChiseledNetherBricksBlock> copy = std::make_shared<ChiseledNetherBricksBlock>();
  return copy;
}

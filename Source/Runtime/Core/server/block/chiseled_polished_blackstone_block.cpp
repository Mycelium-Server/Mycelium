

#include "chiseled_polished_blackstone_block.h"

ChiseledPolishedBlackstoneBlock::ChiseledPolishedBlackstoneBlock() = default;
ChiseledPolishedBlackstoneBlock::~ChiseledPolishedBlackstoneBlock() = default;

short ChiseledPolishedBlackstoneBlock::getId() const {
  return 17462;
}

std::shared_ptr<Block> ChiseledPolishedBlackstoneBlock::clone() const {
  std::shared_ptr<ChiseledPolishedBlackstoneBlock> copy = std::make_shared<ChiseledPolishedBlackstoneBlock>();
  return copy;
}

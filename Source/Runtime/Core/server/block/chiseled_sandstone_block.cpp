

#include "chiseled_sandstone_block.h"

ChiseledSandstoneBlock::ChiseledSandstoneBlock() = default;
ChiseledSandstoneBlock::~ChiseledSandstoneBlock() = default;

short ChiseledSandstoneBlock::getId() const {
  return 477;
}

std::shared_ptr<Block> ChiseledSandstoneBlock::clone() const {
  std::shared_ptr<ChiseledSandstoneBlock> copy = std::make_shared<ChiseledSandstoneBlock>();
  return copy;
}

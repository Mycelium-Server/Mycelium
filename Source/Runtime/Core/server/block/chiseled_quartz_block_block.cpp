

#include "chiseled_quartz_block_block.h"

ChiseledQuartzBlockBlock::ChiseledQuartzBlockBlock() = default;
ChiseledQuartzBlockBlock::~ChiseledQuartzBlockBlock() = default;

short ChiseledQuartzBlockBlock::getId() const {
  return 7356;
}

std::shared_ptr<Block> ChiseledQuartzBlockBlock::clone() const {
  std::shared_ptr<ChiseledQuartzBlockBlock> copy = std::make_shared<ChiseledQuartzBlockBlock>();
  return copy;
}

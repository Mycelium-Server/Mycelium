

#include "chiseled_deepslate_block.h"

ChiseledDeepslateBlock::ChiseledDeepslateBlock() = default;
ChiseledDeepslateBlock::~ChiseledDeepslateBlock() = default;

short ChiseledDeepslateBlock::getId() const {
  return 21425;
}

std::shared_ptr<Block> ChiseledDeepslateBlock::clone() const {
  std::shared_ptr<ChiseledDeepslateBlock> copy = std::make_shared<ChiseledDeepslateBlock>();
  return copy;
}

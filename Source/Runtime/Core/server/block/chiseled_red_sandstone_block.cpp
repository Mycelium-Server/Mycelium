

#include "chiseled_red_sandstone_block.h"

ChiseledRedSandstoneBlock::ChiseledRedSandstoneBlock() = default;
ChiseledRedSandstoneBlock::~ChiseledRedSandstoneBlock() = default;

short ChiseledRedSandstoneBlock::getId() const {
  return 8959;
}

std::shared_ptr<Block> ChiseledRedSandstoneBlock::clone() const {
  std::shared_ptr<ChiseledRedSandstoneBlock> copy = std::make_shared<ChiseledRedSandstoneBlock>();
  return copy;
}

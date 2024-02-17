

#include "potted_warped_fungus_block.h"

PottedWarpedFungusBlock::PottedWarpedFungusBlock() = default;
PottedWarpedFungusBlock::~PottedWarpedFungusBlock() = default;

short PottedWarpedFungusBlock::getId() const {
  return 17044;
}

std::shared_ptr<Block> PottedWarpedFungusBlock::clone() const {
  std::shared_ptr<PottedWarpedFungusBlock> copy = std::make_shared<PottedWarpedFungusBlock>();
  return copy;
}

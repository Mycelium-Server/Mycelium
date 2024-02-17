

#include "stripped_warped_hyphae_block.h"

StrippedWarpedHyphaeBlock::StrippedWarpedHyphaeBlock() = default;
StrippedWarpedHyphaeBlock::~StrippedWarpedHyphaeBlock() = default;

short StrippedWarpedHyphaeBlock::getId() const {
  return 16176 + axis * 1;
}

std::shared_ptr<Block> StrippedWarpedHyphaeBlock::clone() const {
  std::shared_ptr<StrippedWarpedHyphaeBlock> copy = std::make_shared<StrippedWarpedHyphaeBlock>();
  copy->axis = axis;
  return copy;
}

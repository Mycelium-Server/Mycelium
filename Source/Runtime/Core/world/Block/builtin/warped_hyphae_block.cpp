

#include "warped_hyphae_block.h"

WarpedHyphaeBlock::WarpedHyphaeBlock() = default;
WarpedHyphaeBlock::~WarpedHyphaeBlock() = default;

short WarpedHyphaeBlock::getId() const {
  return 16173 + axis * 1;
}

std::shared_ptr<Block> WarpedHyphaeBlock::clone() const {
  std::shared_ptr<WarpedHyphaeBlock> copy = std::make_shared<WarpedHyphaeBlock>();
  copy->axis = axis;
  return copy;
}

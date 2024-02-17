

#include "warped_fungus_block.h"

WarpedFungusBlock::WarpedFungusBlock() = default;
WarpedFungusBlock::~WarpedFungusBlock() = default;

short WarpedFungusBlock::getId() const {
  return 16180;
}

std::shared_ptr<Block> WarpedFungusBlock::clone() const {
  std::shared_ptr<WarpedFungusBlock> copy = std::make_shared<WarpedFungusBlock>();
  return copy;
}

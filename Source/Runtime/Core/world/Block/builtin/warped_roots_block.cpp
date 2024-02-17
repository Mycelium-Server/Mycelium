

#include "warped_roots_block.h"

WarpedRootsBlock::WarpedRootsBlock() = default;
WarpedRootsBlock::~WarpedRootsBlock() = default;

short WarpedRootsBlock::getId() const {
  return 16182;
}

std::shared_ptr<Block> WarpedRootsBlock::clone() const {
  std::shared_ptr<WarpedRootsBlock> copy = std::make_shared<WarpedRootsBlock>();
  return copy;
}

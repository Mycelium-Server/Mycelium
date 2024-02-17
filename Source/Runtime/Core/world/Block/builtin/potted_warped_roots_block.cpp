

#include "potted_warped_roots_block.h"

PottedWarpedRootsBlock::PottedWarpedRootsBlock() = default;
PottedWarpedRootsBlock::~PottedWarpedRootsBlock() = default;

short PottedWarpedRootsBlock::getId() const {
  return 17046;
}

std::shared_ptr<Block> PottedWarpedRootsBlock::clone() const {
  std::shared_ptr<PottedWarpedRootsBlock> copy = std::make_shared<PottedWarpedRootsBlock>();
  return copy;
}

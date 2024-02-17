

#include "coarse_dirt_block.h"

CoarseDirtBlock::CoarseDirtBlock() = default;
CoarseDirtBlock::~CoarseDirtBlock() = default;

short CoarseDirtBlock::getId() const {
  return 11;
}

std::shared_ptr<Block> CoarseDirtBlock::clone() const {
  std::shared_ptr<CoarseDirtBlock> copy = std::make_shared<CoarseDirtBlock>();
  return copy;
}

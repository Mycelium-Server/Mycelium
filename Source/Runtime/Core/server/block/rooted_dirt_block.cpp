

#include "rooted_dirt_block.h"

RootedDirtBlock::RootedDirtBlock() = default;
RootedDirtBlock::~RootedDirtBlock() = default;

short RootedDirtBlock::getId() const {
  return 19776;
}

std::shared_ptr<Block> RootedDirtBlock::clone() const {
  std::shared_ptr<RootedDirtBlock> copy = std::make_shared<RootedDirtBlock>();
  return copy;
}

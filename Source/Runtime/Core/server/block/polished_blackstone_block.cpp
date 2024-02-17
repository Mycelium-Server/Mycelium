

#include "polished_blackstone_block.h"

PolishedBlackstoneBlock::PolishedBlackstoneBlock() = default;
PolishedBlackstoneBlock::~PolishedBlackstoneBlock() = default;

short PolishedBlackstoneBlock::getId() const {
  return 17459;
}

std::shared_ptr<Block> PolishedBlackstoneBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneBlock> copy = std::make_shared<PolishedBlackstoneBlock>();
  return copy;
}

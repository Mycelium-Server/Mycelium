

#include "sculk_catalyst_block.h"

SculkCatalystBlock::SculkCatalystBlock() = default;
SculkCatalystBlock::~SculkCatalystBlock() = default;

short SculkCatalystBlock::getId() const {
  return 18898 + bloom * 1;
}

std::shared_ptr<Block> SculkCatalystBlock::clone() const {
  std::shared_ptr<SculkCatalystBlock> copy = std::make_shared<SculkCatalystBlock>();
  copy->bloom = bloom;
  return copy;
}

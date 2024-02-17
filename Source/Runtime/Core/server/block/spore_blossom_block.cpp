

#include "spore_blossom_block.h"

SporeBlossomBlock::SporeBlossomBlock() = default;
SporeBlossomBlock::~SporeBlossomBlock() = default;

short SporeBlossomBlock::getId() const {
  return 19713;
}

std::shared_ptr<Block> SporeBlossomBlock::clone() const {
  std::shared_ptr<SporeBlossomBlock> copy = std::make_shared<SporeBlossomBlock>();
  return copy;
}

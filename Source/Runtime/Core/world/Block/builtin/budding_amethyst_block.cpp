

#include "budding_amethyst_block.h"

BuddingAmethystBlock::BuddingAmethystBlock() = default;
BuddingAmethystBlock::~BuddingAmethystBlock() = default;

short BuddingAmethystBlock::getId() const {
  return 18620;
}

std::shared_ptr<Block> BuddingAmethystBlock::clone() const {
  std::shared_ptr<BuddingAmethystBlock> copy = std::make_shared<BuddingAmethystBlock>();
  return copy;
}

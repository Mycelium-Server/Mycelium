

#include "slime_block_block.h"

SlimeBlockBlock::SlimeBlockBlock() = default;
SlimeBlockBlock::~SlimeBlockBlock() = default;

short SlimeBlockBlock::getId() const {
  return 8244;
}

std::shared_ptr<Block> SlimeBlockBlock::clone() const {
  std::shared_ptr<SlimeBlockBlock> copy = std::make_shared<SlimeBlockBlock>();
  return copy;
}

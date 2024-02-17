

#include "coal_block_block.h"

CoalBlockBlock::CoalBlockBlock() = default;
CoalBlockBlock::~CoalBlockBlock() = default;

short CoalBlockBlock::getId() const {
  return 8624;
}

std::shared_ptr<Block> CoalBlockBlock::clone() const {
  std::shared_ptr<CoalBlockBlock> copy = std::make_shared<CoalBlockBlock>();
  return copy;
}

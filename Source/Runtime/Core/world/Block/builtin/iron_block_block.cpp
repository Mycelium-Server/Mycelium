

#include "iron_block_block.h"

IronBlockBlock::IronBlockBlock() = default;
IronBlockBlock::~IronBlockBlock() = default;

short IronBlockBlock::getId() const {
  return 1682;
}

std::shared_ptr<Block> IronBlockBlock::clone() const {
  std::shared_ptr<IronBlockBlock> copy = std::make_shared<IronBlockBlock>();
  return copy;
}

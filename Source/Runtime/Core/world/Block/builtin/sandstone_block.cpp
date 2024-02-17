

#include "sandstone_block.h"

SandstoneBlock::SandstoneBlock() = default;
SandstoneBlock::~SandstoneBlock() = default;

short SandstoneBlock::getId() const {
  return 476;
}

std::shared_ptr<Block> SandstoneBlock::clone() const {
  std::shared_ptr<SandstoneBlock> copy = std::make_shared<SandstoneBlock>();
  return copy;
}



#include "soul_sand_block.h"

SoulSandBlock::SoulSandBlock() = default;
SoulSandBlock::~SoulSandBlock() = default;

short SoulSandBlock::getId() const {
  return 4309;
}

std::shared_ptr<Block> SoulSandBlock::clone() const {
  std::shared_ptr<SoulSandBlock> copy = std::make_shared<SoulSandBlock>();
  return copy;
}

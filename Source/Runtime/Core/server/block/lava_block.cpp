

#include "lava_block.h"

LavaBlock::LavaBlock() = default;
LavaBlock::~LavaBlock() = default;

short LavaBlock::getId() const {
  return 91 + level * 1;
}

std::shared_ptr<Block> LavaBlock::clone() const {
  std::shared_ptr<LavaBlock> copy = std::make_shared<LavaBlock>();
  copy->level = level;
  return copy;
}

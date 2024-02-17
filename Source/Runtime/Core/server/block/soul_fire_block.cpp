

#include "soul_fire_block.h"

SoulFireBlock::SoulFireBlock() = default;
SoulFireBlock::~SoulFireBlock() = default;

short SoulFireBlock::getId() const {
  return 2206;
}

std::shared_ptr<Block> SoulFireBlock::clone() const {
  std::shared_ptr<SoulFireBlock> copy = std::make_shared<SoulFireBlock>();
  return copy;
}

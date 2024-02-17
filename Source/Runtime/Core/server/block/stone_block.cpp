

#include "stone_block.h"

StoneBlock::StoneBlock() = default;
StoneBlock::~StoneBlock() = default;

short StoneBlock::getId() const {
  return 1;
}

std::shared_ptr<Block> StoneBlock::clone() const {
  std::shared_ptr<StoneBlock> copy = std::make_shared<StoneBlock>();
  return copy;
}

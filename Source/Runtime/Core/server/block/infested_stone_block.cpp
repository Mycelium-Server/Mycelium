

#include "infested_stone_block.h"

InfestedStoneBlock::InfestedStoneBlock() = default;
InfestedStoneBlock::~InfestedStoneBlock() = default;

short InfestedStoneBlock::getId() const {
  return 4874;
}

std::shared_ptr<Block> InfestedStoneBlock::clone() const {
  std::shared_ptr<InfestedStoneBlock> copy = std::make_shared<InfestedStoneBlock>();
  return copy;
}

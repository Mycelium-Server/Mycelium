

#include "end_stone_block.h"

EndStoneBlock::EndStoneBlock() = default;
EndStoneBlock::~EndStoneBlock() = default;

short EndStoneBlock::getId() const {
  return 5745;
}

std::shared_ptr<Block> EndStoneBlock::clone() const {
  std::shared_ptr<EndStoneBlock> copy = std::make_shared<EndStoneBlock>();
  return copy;
}

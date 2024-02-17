

#include "polished_blackstone_button_block.h"

PolishedBlackstoneButtonBlock::PolishedBlackstoneButtonBlock() = default;
PolishedBlackstoneButtonBlock::~PolishedBlackstoneButtonBlock() = default;

short PolishedBlackstoneButtonBlock::getId() const {
  return 17962 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> PolishedBlackstoneButtonBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneButtonBlock> copy = std::make_shared<PolishedBlackstoneButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}

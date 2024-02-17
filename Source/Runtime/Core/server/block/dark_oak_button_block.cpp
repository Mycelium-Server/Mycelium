

#include "dark_oak_button_block.h"

DarkOakButtonBlock::DarkOakButtonBlock() = default;
DarkOakButtonBlock::~DarkOakButtonBlock() = default;

short DarkOakButtonBlock::getId() const {
  return 7059 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> DarkOakButtonBlock::clone() const {
  std::shared_ptr<DarkOakButtonBlock> copy = std::make_shared<DarkOakButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}

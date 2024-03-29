

#include "warped_button_block.h"

WarpedButtonBlock::WarpedButtonBlock() = default;
WarpedButtonBlock::~WarpedButtonBlock() = default;

short WarpedButtonBlock::getId() const {
  return 16712 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> WarpedButtonBlock::clone() const {
  std::shared_ptr<WarpedButtonBlock> copy = std::make_shared<WarpedButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}

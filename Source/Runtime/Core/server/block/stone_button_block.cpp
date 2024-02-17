

#include "stone_button_block.h"

StoneButtonBlock::StoneButtonBlock() = default;
StoneButtonBlock::~StoneButtonBlock() = default;

short StoneButtonBlock::getId() const {
  return 4206 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> StoneButtonBlock::clone() const {
  std::shared_ptr<StoneButtonBlock> copy = std::make_shared<StoneButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}



#include "birch_button_block.h"

BirchButtonBlock::BirchButtonBlock() = default;
BirchButtonBlock::~BirchButtonBlock() = default;

short BirchButtonBlock::getId() const {
  return 6987 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> BirchButtonBlock::clone() const {
  std::shared_ptr<BirchButtonBlock> copy = std::make_shared<BirchButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}

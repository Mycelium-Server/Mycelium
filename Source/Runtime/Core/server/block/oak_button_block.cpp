

#include "oak_button_block.h"

OakButtonBlock::OakButtonBlock() = default;
OakButtonBlock::~OakButtonBlock() = default;

short OakButtonBlock::getId() const {
  return 6939 + powered * 1 + facing * 2 + face * 8;
}

std::shared_ptr<Block> OakButtonBlock::clone() const {
  std::shared_ptr<OakButtonBlock> copy = std::make_shared<OakButtonBlock>();
  copy->face = face;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}

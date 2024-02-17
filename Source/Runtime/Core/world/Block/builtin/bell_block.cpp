

#include "bell_block.h"

BellBlock::BellBlock() = default;
BellBlock::~BellBlock() = default;

short BellBlock::getId() const {
  return 16059 + powered * 1 + facing * 2 + attachment * 8;
}

std::shared_ptr<Block> BellBlock::clone() const {
  std::shared_ptr<BellBlock> copy = std::make_shared<BellBlock>();
  copy->attachment = attachment;
  copy->facing = facing;
  copy->powered = powered;
  return copy;
}



#include "repeater_block.h"

RepeaterBlock::RepeaterBlock() = default;
RepeaterBlock::~RepeaterBlock() = default;

short RepeaterBlock::getId() const {
  return 4340 + powered * 1 + locked * 2 + facing * 4 + delay * 16;
}

std::shared_ptr<Block> RepeaterBlock::clone() const {
  std::shared_ptr<RepeaterBlock> copy = std::make_shared<RepeaterBlock>();
  copy->delay = delay;
  copy->facing = facing;
  copy->locked = locked;
  copy->powered = powered;
  return copy;
}

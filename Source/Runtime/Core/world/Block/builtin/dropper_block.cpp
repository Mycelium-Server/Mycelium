

#include "dropper_block.h"

DropperBlock::DropperBlock() = default;
DropperBlock::~DropperBlock() = default;

short DropperBlock::getId() const {
  return 7464 + triggered * 1 + facing * 2;
}

std::shared_ptr<Block> DropperBlock::clone() const {
  std::shared_ptr<DropperBlock> copy = std::make_shared<DropperBlock>();
  copy->facing = facing;
  copy->triggered = triggered;
  return copy;
}

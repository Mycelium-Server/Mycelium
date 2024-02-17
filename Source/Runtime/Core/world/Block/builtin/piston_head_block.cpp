

#include "piston_head_block.h"

PistonHeadBlock::PistonHeadBlock() = default;
PistonHeadBlock::~PistonHeadBlock() = default;

short PistonHeadBlock::getId() const {
  return 1614 + type * 1 + isShort * 2 + facing * 4;
}

std::shared_ptr<Block> PistonHeadBlock::clone() const {
  std::shared_ptr<PistonHeadBlock> copy = std::make_shared<PistonHeadBlock>();
  copy->type = type;
  copy->facing = facing;
  copy->isShort = isShort;
  return copy;
}

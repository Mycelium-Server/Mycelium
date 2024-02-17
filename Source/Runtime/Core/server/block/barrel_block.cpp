

#include "barrel_block.h"

BarrelBlock::BarrelBlock() = default;
BarrelBlock::~BarrelBlock() = default;

short BarrelBlock::getId() const {
  return 15996 + open * 1 + facing * 2;
}

std::shared_ptr<Block> BarrelBlock::clone() const {
  std::shared_ptr<BarrelBlock> copy = std::make_shared<BarrelBlock>();
  copy->facing = facing;
  copy->open = open;
  return copy;
}



#include "birch_fence_gate_block.h"

BirchFenceGateBlock::BirchFenceGateBlock() = default;
BirchFenceGateBlock::~BirchFenceGateBlock() = default;

short BirchFenceGateBlock::getId() const {
  return 9203 + powered * 1 + open * 2 + in_wall * 4 + facing * 8;
}

std::shared_ptr<Block> BirchFenceGateBlock::clone() const {
  std::shared_ptr<BirchFenceGateBlock> copy = std::make_shared<BirchFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

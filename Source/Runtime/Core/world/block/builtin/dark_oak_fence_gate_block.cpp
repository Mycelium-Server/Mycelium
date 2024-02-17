

#include "dark_oak_fence_gate_block.h"

DarkOakFenceGateBlock::DarkOakFenceGateBlock() = default;
DarkOakFenceGateBlock::~DarkOakFenceGateBlock() = default;

short DarkOakFenceGateBlock::getId() const {
  return 9299 + powered * 1 + open * 2 + in_wall * 4 + facing * 8;
}

std::shared_ptr<Block> DarkOakFenceGateBlock::clone() const {
  std::shared_ptr<DarkOakFenceGateBlock> copy = std::make_shared<DarkOakFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

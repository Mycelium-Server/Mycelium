

#include "warped_fence_gate_block.h"

WarpedFenceGateBlock::WarpedFenceGateBlock() = default;
WarpedFenceGateBlock::~WarpedFenceGateBlock() = default;

short WarpedFenceGateBlock::getId() const {
  return 16496 + powered * 1 + open * 2 + in_wall * 4 + facing * 8;
}

std::shared_ptr<Block> WarpedFenceGateBlock::clone() const {
  std::shared_ptr<WarpedFenceGateBlock> copy = std::make_shared<WarpedFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

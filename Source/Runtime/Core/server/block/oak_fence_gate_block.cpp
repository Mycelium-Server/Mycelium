

#include "oak_fence_gate_block.h"

OakFenceGateBlock::OakFenceGateBlock() = default;
OakFenceGateBlock::~OakFenceGateBlock() = default;

short OakFenceGateBlock::getId() const {
  return 5327 + powered * 1 + open * 2 + in_wall * 4 + facing * 8;
}

std::shared_ptr<Block> OakFenceGateBlock::clone() const {
  std::shared_ptr<OakFenceGateBlock> copy = std::make_shared<OakFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

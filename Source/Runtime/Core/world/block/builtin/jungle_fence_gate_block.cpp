

#include "jungle_fence_gate_block.h"

JungleFenceGateBlock::JungleFenceGateBlock() = default;
JungleFenceGateBlock::~JungleFenceGateBlock() = default;

short JungleFenceGateBlock::getId() const {
  return 9235 + powered * 1 + open * 2 + in_wall * 4 + facing * 8;
}

std::shared_ptr<Block> JungleFenceGateBlock::clone() const {
  std::shared_ptr<JungleFenceGateBlock> copy = std::make_shared<JungleFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

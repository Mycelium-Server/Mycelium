

#include "mangrove_fence_gate_block.h"

MangroveFenceGateBlock::MangroveFenceGateBlock() = default;
MangroveFenceGateBlock::~MangroveFenceGateBlock() = default;

short MangroveFenceGateBlock::getId() const {
  return 9331 + powered * 1 + open * 2 + in_wall * 4 + facing * 8;
}

std::shared_ptr<Block> MangroveFenceGateBlock::clone() const {
  std::shared_ptr<MangroveFenceGateBlock> copy = std::make_shared<MangroveFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

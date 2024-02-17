

#include "acacia_fence_gate_block.h"

AcaciaFenceGateBlock::AcaciaFenceGateBlock() = default;
AcaciaFenceGateBlock::~AcaciaFenceGateBlock() = default;

short AcaciaFenceGateBlock::getId() const {
  return 9267 + powered * 1 + open * 2 + in_wall * 4 + facing * 8;
}

std::shared_ptr<Block> AcaciaFenceGateBlock::clone() const {
  std::shared_ptr<AcaciaFenceGateBlock> copy = std::make_shared<AcaciaFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

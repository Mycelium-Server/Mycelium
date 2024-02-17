

#include "spruce_fence_gate_block.h"

SpruceFenceGateBlock::SpruceFenceGateBlock() = default;
SpruceFenceGateBlock::~SpruceFenceGateBlock() = default;

short SpruceFenceGateBlock::getId() const {
  return 9171 + powered * 1 + open * 2 + in_wall * 4 + facing * 8;
}

std::shared_ptr<Block> SpruceFenceGateBlock::clone() const {
  std::shared_ptr<SpruceFenceGateBlock> copy = std::make_shared<SpruceFenceGateBlock>();
  copy->facing = facing;
  copy->in_wall = in_wall;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

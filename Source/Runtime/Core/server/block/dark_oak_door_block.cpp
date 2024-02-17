

#include "dark_oak_door_block.h"

DarkOakDoorBlock::DarkOakDoorBlock() = default;
DarkOakDoorBlock::~DarkOakDoorBlock() = default;

short DarkOakDoorBlock::getId() const {
  return 9811 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> DarkOakDoorBlock::clone() const {
  std::shared_ptr<DarkOakDoorBlock> copy = std::make_shared<DarkOakDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

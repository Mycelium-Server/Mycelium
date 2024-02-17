

#include "iron_door_block.h"

IronDoorBlock::IronDoorBlock() = default;
IronDoorBlock::~IronDoorBlock() = default;

short IronDoorBlock::getId() const {
  return 4114 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> IronDoorBlock::clone() const {
  std::shared_ptr<IronDoorBlock> copy = std::make_shared<IronDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

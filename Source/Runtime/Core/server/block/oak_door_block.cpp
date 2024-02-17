

#include "oak_door_block.h"

OakDoorBlock::OakDoorBlock() = default;
OakDoorBlock::~OakDoorBlock() = default;

short OakDoorBlock::getId() const {
  return 3860 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> OakDoorBlock::clone() const {
  std::shared_ptr<OakDoorBlock> copy = std::make_shared<OakDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

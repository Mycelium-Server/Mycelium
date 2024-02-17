

#include "mangrove_door_block.h"

MangroveDoorBlock::MangroveDoorBlock() = default;
MangroveDoorBlock::~MangroveDoorBlock() = default;

short MangroveDoorBlock::getId() const {
  return 9875 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> MangroveDoorBlock::clone() const {
  std::shared_ptr<MangroveDoorBlock> copy = std::make_shared<MangroveDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

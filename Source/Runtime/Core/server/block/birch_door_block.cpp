

#include "birch_door_block.h"

BirchDoorBlock::BirchDoorBlock() = default;
BirchDoorBlock::~BirchDoorBlock() = default;

short BirchDoorBlock::getId() const {
  return 9619 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> BirchDoorBlock::clone() const {
  std::shared_ptr<BirchDoorBlock> copy = std::make_shared<BirchDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

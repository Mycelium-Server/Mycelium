

#include "jungle_door_block.h"

JungleDoorBlock::JungleDoorBlock() = default;
JungleDoorBlock::~JungleDoorBlock() = default;

short JungleDoorBlock::getId() const {
  return 9683 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> JungleDoorBlock::clone() const {
  std::shared_ptr<JungleDoorBlock> copy = std::make_shared<JungleDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

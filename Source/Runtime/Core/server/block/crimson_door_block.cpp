

#include "crimson_door_block.h"

CrimsonDoorBlock::CrimsonDoorBlock() = default;
CrimsonDoorBlock::~CrimsonDoorBlock() = default;

short CrimsonDoorBlock::getId() const {
  return 16736 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> CrimsonDoorBlock::clone() const {
  std::shared_ptr<CrimsonDoorBlock> copy = std::make_shared<CrimsonDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

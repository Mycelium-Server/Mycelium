

#include "spruce_door_block.h"

SpruceDoorBlock::SpruceDoorBlock() = default;
SpruceDoorBlock::~SpruceDoorBlock() = default;

short SpruceDoorBlock::getId() const {
  return 9555 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> SpruceDoorBlock::clone() const {
  std::shared_ptr<SpruceDoorBlock> copy = std::make_shared<SpruceDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

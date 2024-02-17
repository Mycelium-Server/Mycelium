

#include "warped_door_block.h"

WarpedDoorBlock::WarpedDoorBlock() = default;
WarpedDoorBlock::~WarpedDoorBlock() = default;

short WarpedDoorBlock::getId() const {
  return 16800 + powered * 1 + open * 2 + hinge * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> WarpedDoorBlock::clone() const {
  std::shared_ptr<WarpedDoorBlock> copy = std::make_shared<WarpedDoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->hinge = hinge;
  copy->open = open;
  copy->powered = powered;
  return copy;
}

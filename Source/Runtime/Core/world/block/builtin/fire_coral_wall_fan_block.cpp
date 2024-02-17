

#include "fire_coral_wall_fan_block.h"

FireCoralWallFanBlock::FireCoralWallFanBlock() = default;
FireCoralWallFanBlock::~FireCoralWallFanBlock() = default;

short FireCoralWallFanBlock::getId() const {
  return 10505 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> FireCoralWallFanBlock::clone() const {
  std::shared_ptr<FireCoralWallFanBlock> copy = std::make_shared<FireCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}

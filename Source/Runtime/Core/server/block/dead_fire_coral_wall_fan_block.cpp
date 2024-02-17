

#include "dead_fire_coral_wall_fan_block.h"

DeadFireCoralWallFanBlock::DeadFireCoralWallFanBlock() = default;
DeadFireCoralWallFanBlock::~DeadFireCoralWallFanBlock() = default;

short DeadFireCoralWallFanBlock::getId() const {
  return 10465 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> DeadFireCoralWallFanBlock::clone() const {
  std::shared_ptr<DeadFireCoralWallFanBlock> copy = std::make_shared<DeadFireCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}

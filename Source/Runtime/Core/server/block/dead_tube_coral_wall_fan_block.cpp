

#include "dead_tube_coral_wall_fan_block.h"

DeadTubeCoralWallFanBlock::DeadTubeCoralWallFanBlock() = default;
DeadTubeCoralWallFanBlock::~DeadTubeCoralWallFanBlock() = default;

short DeadTubeCoralWallFanBlock::getId() const {
  return 10441 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> DeadTubeCoralWallFanBlock::clone() const {
  std::shared_ptr<DeadTubeCoralWallFanBlock> copy = std::make_shared<DeadTubeCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}

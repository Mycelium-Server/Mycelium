

#include "dead_brain_coral_wall_fan_block.h"

DeadBrainCoralWallFanBlock::DeadBrainCoralWallFanBlock() = default;
DeadBrainCoralWallFanBlock::~DeadBrainCoralWallFanBlock() = default;

short DeadBrainCoralWallFanBlock::getId() const {
  return 10449 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> DeadBrainCoralWallFanBlock::clone() const {
  std::shared_ptr<DeadBrainCoralWallFanBlock> copy = std::make_shared<DeadBrainCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}

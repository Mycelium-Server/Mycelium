

#include "dead_horn_coral_wall_fan_block.h"

DeadHornCoralWallFanBlock::DeadHornCoralWallFanBlock() = default;
DeadHornCoralWallFanBlock::~DeadHornCoralWallFanBlock() = default;

short DeadHornCoralWallFanBlock::getId() const {
  return 10473 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> DeadHornCoralWallFanBlock::clone() const {
  std::shared_ptr<DeadHornCoralWallFanBlock> copy = std::make_shared<DeadHornCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}

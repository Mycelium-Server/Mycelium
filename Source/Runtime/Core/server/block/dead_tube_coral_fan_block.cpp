

#include "dead_tube_coral_fan_block.h"

DeadTubeCoralFanBlock::DeadTubeCoralFanBlock() = default;
DeadTubeCoralFanBlock::~DeadTubeCoralFanBlock() = default;

short DeadTubeCoralFanBlock::getId() const {
  return 10421 + waterlogged * 1;
}

std::shared_ptr<Block> DeadTubeCoralFanBlock::clone() const {
  std::shared_ptr<DeadTubeCoralFanBlock> copy = std::make_shared<DeadTubeCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}

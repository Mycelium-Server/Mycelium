#include "dead_tube_coral_fan_block.h"

DeadTubeCoralFanBlock::DeadTubeCoralFanBlock() = default;
DeadTubeCoralFanBlock::~DeadTubeCoralFanBlock() = default;

short DeadTubeCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10421;
  if (waterlogged == WATERLOGGED_FALSE) return 10422;
  return 10421;
}

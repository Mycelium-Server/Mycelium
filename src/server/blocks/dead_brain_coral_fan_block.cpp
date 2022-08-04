#include "dead_brain_coral_fan_block.h"

DeadBrainCoralFanBlock::DeadBrainCoralFanBlock() = default;
DeadBrainCoralFanBlock::~DeadBrainCoralFanBlock() = default;

short DeadBrainCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10423;
  if (waterlogged == WATERLOGGED_FALSE) return 10424;
  return 10423;
}

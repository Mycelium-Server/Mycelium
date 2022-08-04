#include "dead_horn_coral_fan_block.h"

DeadHornCoralFanBlock::DeadHornCoralFanBlock() = default;
DeadHornCoralFanBlock::~DeadHornCoralFanBlock() = default;

short DeadHornCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10429;
  if (waterlogged == WATERLOGGED_FALSE) return 10430;
  return 10429;
}

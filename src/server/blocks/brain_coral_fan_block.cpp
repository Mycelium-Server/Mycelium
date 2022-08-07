#include "brain_coral_fan_block.h"

BrainCoralFanBlock::BrainCoralFanBlock() = default;
BrainCoralFanBlock::~BrainCoralFanBlock() = default;

short BrainCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10433;
  if (waterlogged == WATERLOGGED_FALSE) return 10434;
  return 10433;
}

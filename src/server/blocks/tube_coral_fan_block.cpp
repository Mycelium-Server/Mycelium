#include "tube_coral_fan_block.h"

TubeCoralFanBlock::TubeCoralFanBlock() = default;
TubeCoralFanBlock::~TubeCoralFanBlock() = default;

short TubeCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10431;
  if (waterlogged == WATERLOGGED_FALSE) return 10432;
  return 10431;
}

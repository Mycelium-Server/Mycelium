#include "horn_coral_fan_block.h"

HornCoralFanBlock::HornCoralFanBlock() = default;
HornCoralFanBlock::~HornCoralFanBlock() = default;

short HornCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10439;
  if (waterlogged == WATERLOGGED_FALSE) return 10440;
  return 10439;
}

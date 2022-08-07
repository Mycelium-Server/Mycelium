#include "fire_coral_fan_block.h"

FireCoralFanBlock::FireCoralFanBlock() = default;
FireCoralFanBlock::~FireCoralFanBlock() = default;

short FireCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10437;
  if (waterlogged == WATERLOGGED_FALSE) return 10438;
  return 10437;
}

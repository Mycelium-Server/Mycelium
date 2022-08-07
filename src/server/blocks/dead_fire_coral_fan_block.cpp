#include "dead_fire_coral_fan_block.h"

DeadFireCoralFanBlock::DeadFireCoralFanBlock() = default;
DeadFireCoralFanBlock::~DeadFireCoralFanBlock() = default;

short DeadFireCoralFanBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10427;
  if (waterlogged == WATERLOGGED_FALSE) return 10428;
  return 10427;
}

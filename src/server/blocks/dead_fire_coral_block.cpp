#include "dead_fire_coral_block.h"

DeadFireCoralBlock::DeadFireCoralBlock() = default;
DeadFireCoralBlock::~DeadFireCoralBlock() = default;

short DeadFireCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10407;
  if (waterlogged == WATERLOGGED_FALSE) return 10408;
  return 10407;
}

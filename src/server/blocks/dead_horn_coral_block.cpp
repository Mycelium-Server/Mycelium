#include "dead_horn_coral_block.h"

DeadHornCoralBlock::DeadHornCoralBlock() = default;
DeadHornCoralBlock::~DeadHornCoralBlock() = default;

short DeadHornCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10409;
  if (waterlogged == WATERLOGGED_FALSE) return 10410;
  return 10409;
}

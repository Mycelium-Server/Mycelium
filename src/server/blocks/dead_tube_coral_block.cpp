#include "dead_tube_coral_block.h"

DeadTubeCoralBlock::DeadTubeCoralBlock() = default;
DeadTubeCoralBlock::~DeadTubeCoralBlock() = default;

short DeadTubeCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10401;
  if (waterlogged == WATERLOGGED_FALSE) return 10402;
  return 10401;
}

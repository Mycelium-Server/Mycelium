#include "dead_brain_coral_block.h"

DeadBrainCoralBlock::DeadBrainCoralBlock() = default;
DeadBrainCoralBlock::~DeadBrainCoralBlock() = default;

short DeadBrainCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10403;
  if (waterlogged == WATERLOGGED_FALSE) return 10404;
  return 10403;
}

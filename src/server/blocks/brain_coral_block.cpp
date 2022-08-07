#include "brain_coral_block.h"

BrainCoralBlock::BrainCoralBlock() = default;
BrainCoralBlock::~BrainCoralBlock() = default;

short BrainCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10413;
  if (waterlogged == WATERLOGGED_FALSE) return 10414;
  return 10413;
}

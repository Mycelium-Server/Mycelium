#include "tube_coral_block.h"

TubeCoralBlock::TubeCoralBlock() = default;
TubeCoralBlock::~TubeCoralBlock() = default;

short TubeCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10411;
  if (waterlogged == WATERLOGGED_FALSE) return 10412;
  return 10411;
}

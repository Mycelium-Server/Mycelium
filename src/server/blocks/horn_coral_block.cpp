#include "horn_coral_block.h"

HornCoralBlock::HornCoralBlock() = default;
HornCoralBlock::~HornCoralBlock() = default;

short HornCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10419;
  if (waterlogged == WATERLOGGED_FALSE) return 10420;
  return 10419;
}

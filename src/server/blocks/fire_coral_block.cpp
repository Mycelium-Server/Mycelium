#include "fire_coral_block.h"

FireCoralBlock::FireCoralBlock() = default;
FireCoralBlock::~FireCoralBlock() = default;

short FireCoralBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 10417;
  if (waterlogged == WATERLOGGED_FALSE) return 10418;
  return 10417;
}

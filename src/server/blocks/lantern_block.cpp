#include "lantern_block.h"

LanternBlock::LanternBlock() = default;
LanternBlock::~LanternBlock() = default;

short LanternBlock::getId() const {
  if (hanging == HANGING_TRUE && waterlogged == WATERLOGGED_TRUE) return 16091;
  if (hanging == HANGING_TRUE && waterlogged == WATERLOGGED_FALSE) return 16092;
  if (hanging == HANGING_FALSE && waterlogged == WATERLOGGED_TRUE) return 16093;
  if (hanging == HANGING_FALSE && waterlogged == WATERLOGGED_FALSE) return 16094;
  return 16094;
}

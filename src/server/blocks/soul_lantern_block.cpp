#include "soul_lantern_block.h"

SoulLanternBlock::SoulLanternBlock() = default;
SoulLanternBlock::~SoulLanternBlock() = default;

short SoulLanternBlock::getId() const {
  if (hanging == HANGING_TRUE && waterlogged == WATERLOGGED_TRUE) return 16095;
  if (hanging == HANGING_TRUE && waterlogged == WATERLOGGED_FALSE) return 16096;
  if (hanging == HANGING_FALSE && waterlogged == WATERLOGGED_TRUE) return 16097;
  if (hanging == HANGING_FALSE && waterlogged == WATERLOGGED_FALSE) return 16098;
  return 16098;
}

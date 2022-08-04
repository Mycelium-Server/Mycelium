#include "hanging_roots_block.h"

HangingRootsBlock::HangingRootsBlock() = default;
HangingRootsBlock::~HangingRootsBlock() = default;

short HangingRootsBlock::getId() const {
  if (waterlogged == WATERLOGGED_TRUE) return 19774;
  if (waterlogged == WATERLOGGED_FALSE) return 19775;
  return 19775;
}

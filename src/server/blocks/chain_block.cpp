#include "chain_block.h"

ChainBlock::ChainBlock() = default;
ChainBlock::~ChainBlock() = default;

short ChainBlock::getId() const {
  if (axis == AXIS_X && waterlogged == WATERLOGGED_TRUE) return 5104;
  if (axis == AXIS_X && waterlogged == WATERLOGGED_FALSE) return 5105;
  if (axis == AXIS_Y && waterlogged == WATERLOGGED_TRUE) return 5106;
  if (axis == AXIS_Y && waterlogged == WATERLOGGED_FALSE) return 5107;
  if (axis == AXIS_Z && waterlogged == WATERLOGGED_TRUE) return 5108;
  if (axis == AXIS_Z && waterlogged == WATERLOGGED_FALSE) return 5109;
  return 5107;
}

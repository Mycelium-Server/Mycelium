#include "smooth_stone_slab_block.h"

SmoothStoneSlabBlock::SmoothStoneSlabBlock() = default;
SmoothStoneSlabBlock::~SmoothStoneSlabBlock() = default;

short SmoothStoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9089;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9090;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9091;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9092;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9093;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9094;
  return 9092;
}

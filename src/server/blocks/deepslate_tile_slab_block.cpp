#include "deepslate_tile_slab_block.h"

DeepslateTileSlabBlock::DeepslateTileSlabBlock() = default;
DeepslateTileSlabBlock::~DeepslateTileSlabBlock() = default;

short DeepslateTileSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 20684;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 20685;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 20686;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 20687;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 20688;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 20689;
  return 20687;
}

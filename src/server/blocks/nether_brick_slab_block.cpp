#include "nether_brick_slab_block.h"

NetherBrickSlabBlock::NetherBrickSlabBlock() = default;
NetherBrickSlabBlock::~NetherBrickSlabBlock() = default;

short NetherBrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9137;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9138;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9139;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9140;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9141;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9142;
  return 9140;
}

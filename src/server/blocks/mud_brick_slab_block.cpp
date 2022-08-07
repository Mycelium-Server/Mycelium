#include "mud_brick_slab_block.h"

MudBrickSlabBlock::MudBrickSlabBlock() = default;
MudBrickSlabBlock::~MudBrickSlabBlock() = default;

short MudBrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9131;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9132;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9133;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9134;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9135;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9136;
  return 9134;
}

#include "mossy_cobblestone_slab_block.h"

MossyCobblestoneSlabBlock::MossyCobblestoneSlabBlock() = default;
MossyCobblestoneSlabBlock::~MossyCobblestoneSlabBlock() = default;

short MossyCobblestoneSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11694;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11695;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11696;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11697;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11698;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11699;
  return 11697;
}

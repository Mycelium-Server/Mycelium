#include "andesite_slab_block.h"

AndesiteSlabBlock::AndesiteSlabBlock() = default;
AndesiteSlabBlock::~AndesiteSlabBlock() = default;

short AndesiteSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 11724;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 11725;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 11726;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 11727;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 11728;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 11729;
  return 11727;
}

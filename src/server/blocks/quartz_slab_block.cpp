#include "quartz_slab_block.h"

QuartzSlabBlock::QuartzSlabBlock() = default;
QuartzSlabBlock::~QuartzSlabBlock() = default;

short QuartzSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9143;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9144;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9145;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9146;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9147;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9148;
  return 9146;
}

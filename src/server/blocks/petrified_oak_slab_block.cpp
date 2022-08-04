#include "petrified_oak_slab_block.h"

PetrifiedOakSlabBlock::PetrifiedOakSlabBlock() = default;
PetrifiedOakSlabBlock::~PetrifiedOakSlabBlock() = default;

short PetrifiedOakSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9107;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9108;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9109;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9110;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9111;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9112;
  return 9110;
}

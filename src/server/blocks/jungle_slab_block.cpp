#include "jungle_slab_block.h"

JungleSlabBlock::JungleSlabBlock() = default;
JungleSlabBlock::~JungleSlabBlock() = default;

short JungleSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9059;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9060;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9061;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9062;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9063;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9064;
  return 9062;
}

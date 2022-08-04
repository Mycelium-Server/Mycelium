#include "spruce_slab_block.h"

SpruceSlabBlock::SpruceSlabBlock() = default;
SpruceSlabBlock::~SpruceSlabBlock() = default;

short SpruceSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 9047;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 9048;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 9049;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 9050;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 9051;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 9052;
  return 9050;
}

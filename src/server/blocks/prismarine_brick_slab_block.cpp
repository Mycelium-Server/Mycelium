#include "prismarine_brick_slab_block.h"

PrismarineBrickSlabBlock::PrismarineBrickSlabBlock() = default;
PrismarineBrickSlabBlock::~PrismarineBrickSlabBlock() = default;

short PrismarineBrickSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 8591;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 8592;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 8593;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 8594;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 8595;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 8596;
  return 8594;
}

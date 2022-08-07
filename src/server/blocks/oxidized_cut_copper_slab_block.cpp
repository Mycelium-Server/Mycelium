#include "oxidized_cut_copper_slab_block.h"

OxidizedCutCopperSlabBlock::OxidizedCutCopperSlabBlock() = default;
OxidizedCutCopperSlabBlock::~OxidizedCutCopperSlabBlock() = default;

short OxidizedCutCopperSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 19238;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 19239;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 19240;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 19241;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 19242;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 19243;
  return 19241;
}

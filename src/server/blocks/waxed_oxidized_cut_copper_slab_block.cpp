#include "waxed_oxidized_cut_copper_slab_block.h"

WaxedOxidizedCutCopperSlabBlock::WaxedOxidizedCutCopperSlabBlock() = default;
WaxedOxidizedCutCopperSlabBlock::~WaxedOxidizedCutCopperSlabBlock() = default;

short WaxedOxidizedCutCopperSlabBlock::getId() const {
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_TRUE) return 19590;
  if (type == TYPE_TOP && waterlogged == WATERLOGGED_FALSE) return 19591;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_TRUE) return 19592;
  if (type == TYPE_BOTTOM && waterlogged == WATERLOGGED_FALSE) return 19593;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_TRUE) return 19594;
  if (type == TYPE_DOUBLE && waterlogged == WATERLOGGED_FALSE) return 19595;
  return 19593;
}

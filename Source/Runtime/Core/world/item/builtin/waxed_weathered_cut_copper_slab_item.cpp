
#include "waxed_weathered_cut_copper_slab_item.h"

#include "../../block/builtin/waxed_weathered_cut_copper_slab_block.h"

WaxedWeatheredCutCopperSlabItem::WaxedWeatheredCutCopperSlabItem() = default;
WaxedWeatheredCutCopperSlabItem::~WaxedWeatheredCutCopperSlabItem() = default;

int WaxedWeatheredCutCopperSlabItem::getID() const {
  return 102;
}

std::shared_ptr<Item> WaxedWeatheredCutCopperSlabItem::clone() const {
  return std::make_shared<WaxedWeatheredCutCopperSlabItem>();
}

int WaxedWeatheredCutCopperSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedWeatheredCutCopperSlabBlock().getId();
}
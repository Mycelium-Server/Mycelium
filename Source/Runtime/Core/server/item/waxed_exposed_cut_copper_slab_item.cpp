
#include "waxed_exposed_cut_copper_slab_item.h"

#include "../block/waxed_exposed_cut_copper_slab_block.h"

WaxedExposedCutCopperSlabItem::WaxedExposedCutCopperSlabItem() = default;
WaxedExposedCutCopperSlabItem::~WaxedExposedCutCopperSlabItem() = default;

int WaxedExposedCutCopperSlabItem::getID() const {
  return 101;
}

std::shared_ptr<Item> WaxedExposedCutCopperSlabItem::clone() const {
  return std::make_shared<WaxedExposedCutCopperSlabItem>();
}

int WaxedExposedCutCopperSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedExposedCutCopperSlabBlock().getId();
}
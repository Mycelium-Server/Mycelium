
#include "waxed_cut_copper_slab_item.h"

#include "../../block/builtin/waxed_cut_copper_slab_block.h"

WaxedCutCopperSlabItem::WaxedCutCopperSlabItem() = default;
WaxedCutCopperSlabItem::~WaxedCutCopperSlabItem() = default;

int WaxedCutCopperSlabItem::getID() const {
  return 100;
}

std::shared_ptr<Item> WaxedCutCopperSlabItem::clone() const {
  return std::make_shared<WaxedCutCopperSlabItem>();
}

int WaxedCutCopperSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedCutCopperSlabBlock().getId();
}


#include "waxed_oxidized_cut_copper_slab_item.h"

#include "../../block/builtin/waxed_oxidized_cut_copper_slab_block.h"

WaxedOxidizedCutCopperSlabItem::WaxedOxidizedCutCopperSlabItem() = default;
WaxedOxidizedCutCopperSlabItem::~WaxedOxidizedCutCopperSlabItem() = default;

int WaxedOxidizedCutCopperSlabItem::getID() const {
  return 103;
}

std::shared_ptr<Item> WaxedOxidizedCutCopperSlabItem::clone() const {
  return std::make_shared<WaxedOxidizedCutCopperSlabItem>();
}

int WaxedOxidizedCutCopperSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedOxidizedCutCopperSlabBlock().getId();
}

#include "oxidized_cut_copper_slab_item.h"

#include "../block/oxidized_cut_copper_slab_block.h"

OxidizedCutCopperSlabItem::OxidizedCutCopperSlabItem() = default;
OxidizedCutCopperSlabItem::~OxidizedCutCopperSlabItem() = default;

int OxidizedCutCopperSlabItem::getID() const {
  return 87;
}

std::shared_ptr<Item> OxidizedCutCopperSlabItem::clone() const {
  return std::make_shared<OxidizedCutCopperSlabItem>();
}

int OxidizedCutCopperSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OxidizedCutCopperSlabBlock().getId();
}
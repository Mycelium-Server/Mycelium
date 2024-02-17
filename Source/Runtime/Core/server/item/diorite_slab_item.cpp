
#include "diorite_slab_item.h"

#include "../block/diorite_slab_block.h"

DioriteSlabItem::DioriteSlabItem() = default;
DioriteSlabItem::~DioriteSlabItem() = default;

int DioriteSlabItem::getID() const {
  return 602;
}

std::shared_ptr<Item> DioriteSlabItem::clone() const {
  return std::make_shared<DioriteSlabItem>();
}

int DioriteSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DioriteSlabBlock().getId();
}
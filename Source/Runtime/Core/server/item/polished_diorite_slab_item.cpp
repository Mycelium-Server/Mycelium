
#include "polished_diorite_slab_item.h"

#include "../block/polished_diorite_slab_block.h"

PolishedDioriteSlabItem::PolishedDioriteSlabItem() = default;
PolishedDioriteSlabItem::~PolishedDioriteSlabItem() = default;

int PolishedDioriteSlabItem::getID() const {
  return 593;
}

std::shared_ptr<Item> PolishedDioriteSlabItem::clone() const {
  return std::make_shared<PolishedDioriteSlabItem>();
}

int PolishedDioriteSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedDioriteSlabBlock().getId();
}
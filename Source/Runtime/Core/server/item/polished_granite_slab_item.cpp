
#include "polished_granite_slab_item.h"

#include "../block/polished_granite_slab_block.h"

PolishedGraniteSlabItem::PolishedGraniteSlabItem() = default;
PolishedGraniteSlabItem::~PolishedGraniteSlabItem() = default;

int PolishedGraniteSlabItem::getID() const {
  return 590;
}

std::shared_ptr<Item> PolishedGraniteSlabItem::clone() const {
  return std::make_shared<PolishedGraniteSlabItem>();
}

int PolishedGraniteSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedGraniteSlabBlock().getId();
}
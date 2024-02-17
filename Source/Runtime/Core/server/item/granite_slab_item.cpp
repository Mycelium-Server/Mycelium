
#include "granite_slab_item.h"

#include "../block/granite_slab_block.h"

GraniteSlabItem::GraniteSlabItem() = default;
GraniteSlabItem::~GraniteSlabItem() = default;

int GraniteSlabItem::getID() const {
  return 598;
}

std::shared_ptr<Item> GraniteSlabItem::clone() const {
  return std::make_shared<GraniteSlabItem>();
}

int GraniteSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GraniteSlabBlock().getId();
}
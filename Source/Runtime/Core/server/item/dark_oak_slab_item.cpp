
#include "dark_oak_slab_item.h"

#include "../block/dark_oak_slab_block.h"

DarkOakSlabItem::DarkOakSlabItem() = default;
DarkOakSlabItem::~DarkOakSlabItem() = default;

int DarkOakSlabItem::getID() const {
  return 219;
}

std::shared_ptr<Item> DarkOakSlabItem::clone() const {
  return std::make_shared<DarkOakSlabItem>();
}

int DarkOakSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakSlabBlock().getId();
}
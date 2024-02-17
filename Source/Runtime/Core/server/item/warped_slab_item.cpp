
#include "warped_slab_item.h"

#include "../block/warped_slab_block.h"

WarpedSlabItem::WarpedSlabItem() = default;
WarpedSlabItem::~WarpedSlabItem() = default;

int WarpedSlabItem::getID() const {
  return 222;
}

std::shared_ptr<Item> WarpedSlabItem::clone() const {
  return std::make_shared<WarpedSlabItem>();
}

int WarpedSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedSlabBlock().getId();
}
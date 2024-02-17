
#include "warped_fence_item.h"

#include "../block/warped_fence_block.h"

WarpedFenceItem::WarpedFenceItem() = default;
WarpedFenceItem::~WarpedFenceItem() = default;

int WarpedFenceItem::getID() const {
  return 276;
}

std::shared_ptr<Item> WarpedFenceItem::clone() const {
  return std::make_shared<WarpedFenceItem>();
}

int WarpedFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedFenceBlock().getId();
}
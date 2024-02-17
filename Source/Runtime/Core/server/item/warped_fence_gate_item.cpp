
#include "warped_fence_gate_item.h"

#include "../block/warped_fence_gate_block.h"

WarpedFenceGateItem::WarpedFenceGateItem() = default;
WarpedFenceGateItem::~WarpedFenceGateItem() = default;

int WarpedFenceGateItem::getID() const {
  return 684;
}

std::shared_ptr<Item> WarpedFenceGateItem::clone() const {
  return std::make_shared<WarpedFenceGateItem>();
}

int WarpedFenceGateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedFenceGateBlock().getId();
}
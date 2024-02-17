
#include "dark_oak_fence_item.h"

#include "../block/dark_oak_fence_block.h"

DarkOakFenceItem::DarkOakFenceItem() = default;
DarkOakFenceItem::~DarkOakFenceItem() = default;

int DarkOakFenceItem::getID() const {
  return 273;
}

std::shared_ptr<Item> DarkOakFenceItem::clone() const {
  return std::make_shared<DarkOakFenceItem>();
}

int DarkOakFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakFenceBlock().getId();
}
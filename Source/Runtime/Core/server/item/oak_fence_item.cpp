
#include "oak_fence_item.h"

#include "../block/oak_fence_block.h"

OakFenceItem::OakFenceItem() = default;
OakFenceItem::~OakFenceItem() = default;

int OakFenceItem::getID() const {
  return 268;
}

std::shared_ptr<Item> OakFenceItem::clone() const {
  return std::make_shared<OakFenceItem>();
}

int OakFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakFenceBlock().getId();
}
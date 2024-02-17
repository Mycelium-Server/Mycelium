
#include "oak_fence_gate_item.h"

#include "../block/oak_fence_gate_block.h"

OakFenceGateItem::OakFenceGateItem() = default;
OakFenceGateItem::~OakFenceGateItem() = default;

int OakFenceGateItem::getID() const {
  return 676;
}

std::shared_ptr<Item> OakFenceGateItem::clone() const {
  return std::make_shared<OakFenceGateItem>();
}

int OakFenceGateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakFenceGateBlock().getId();
}

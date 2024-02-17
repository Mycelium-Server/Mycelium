
#include "birch_fence_gate_item.h"

#include "../block/birch_fence_gate_block.h"

BirchFenceGateItem::BirchFenceGateItem() = default;
BirchFenceGateItem::~BirchFenceGateItem() = default;

int BirchFenceGateItem::getID() const {
  return 678;
}

std::shared_ptr<Item> BirchFenceGateItem::clone() const {
  return std::make_shared<BirchFenceGateItem>();
}

int BirchFenceGateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchFenceGateBlock().getId();
}
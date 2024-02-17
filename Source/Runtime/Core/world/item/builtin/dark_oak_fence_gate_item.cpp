
#include "dark_oak_fence_gate_item.h"

#include "../../block/builtin/dark_oak_fence_gate_block.h"

DarkOakFenceGateItem::DarkOakFenceGateItem() = default;
DarkOakFenceGateItem::~DarkOakFenceGateItem() = default;

int DarkOakFenceGateItem::getID() const {
  return 681;
}

std::shared_ptr<Item> DarkOakFenceGateItem::clone() const {
  return std::make_shared<DarkOakFenceGateItem>();
}

int DarkOakFenceGateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakFenceGateBlock().getId();
}
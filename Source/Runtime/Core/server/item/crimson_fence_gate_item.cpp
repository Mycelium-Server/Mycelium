
#include "crimson_fence_gate_item.h"

#include "../block/crimson_fence_gate_block.h"

CrimsonFenceGateItem::CrimsonFenceGateItem() = default;
CrimsonFenceGateItem::~CrimsonFenceGateItem() = default;

int CrimsonFenceGateItem::getID() const {
  return 683;
}

std::shared_ptr<Item> CrimsonFenceGateItem::clone() const {
  return std::make_shared<CrimsonFenceGateItem>();
}

int CrimsonFenceGateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonFenceGateBlock().getId();
}

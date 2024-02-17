
#include "jungle_fence_gate_item.h"

#include "../block/jungle_fence_gate_block.h"

JungleFenceGateItem::JungleFenceGateItem() = default;
JungleFenceGateItem::~JungleFenceGateItem() = default;

int JungleFenceGateItem::getID() const {
  return 679;
}

std::shared_ptr<Item> JungleFenceGateItem::clone() const {
  return std::make_shared<JungleFenceGateItem>();
}

int JungleFenceGateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleFenceGateBlock().getId();
}

#include "acacia_fence_gate_item.h"

#include "../block/acacia_fence_gate_block.h"

AcaciaFenceGateItem::AcaciaFenceGateItem() = default;
AcaciaFenceGateItem::~AcaciaFenceGateItem() = default;

int AcaciaFenceGateItem::getID() const {
  return 680;
}

std::shared_ptr<Item> AcaciaFenceGateItem::clone() const {
  return std::make_shared<AcaciaFenceGateItem>();
}

int AcaciaFenceGateItem::getBlockID(World*, const Vector3i&, const Vector3f&, const BlockFace&, const Vector3f&, bool) const {
  AcaciaFenceGateBlock block;
  // TODO: Facing
  // TODO: Check neighbour blocks
  return block.getId();
}

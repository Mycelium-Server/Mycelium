
#include "mangrove_fence_gate_item.h"

#include "../block/mangrove_fence_gate_block.h"

MangroveFenceGateItem::MangroveFenceGateItem() = default;
MangroveFenceGateItem::~MangroveFenceGateItem() = default;

int MangroveFenceGateItem::getID() const {
  return 682;
}

std::shared_ptr<Item> MangroveFenceGateItem::clone() const {
  return std::make_shared<MangroveFenceGateItem>();
}

int MangroveFenceGateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveFenceGateBlock().getId();
}
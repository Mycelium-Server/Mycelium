
#include "spruce_fence_gate_item.h"

#include "../block/spruce_fence_gate_block.h"

SpruceFenceGateItem::SpruceFenceGateItem() = default;
SpruceFenceGateItem::~SpruceFenceGateItem() = default;

int SpruceFenceGateItem::getID() const {
  return 677;
}

std::shared_ptr<Item> SpruceFenceGateItem::clone() const {
  return std::make_shared<SpruceFenceGateItem>();
}

int SpruceFenceGateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceFenceGateBlock().getId();
}
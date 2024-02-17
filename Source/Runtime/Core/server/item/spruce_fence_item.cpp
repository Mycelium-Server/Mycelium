
#include "spruce_fence_item.h"

#include "../block/spruce_fence_block.h"

SpruceFenceItem::SpruceFenceItem() = default;
SpruceFenceItem::~SpruceFenceItem() = default;

int SpruceFenceItem::getID() const {
  return 269;
}

std::shared_ptr<Item> SpruceFenceItem::clone() const {
  return std::make_shared<SpruceFenceItem>();
}

int SpruceFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceFenceBlock().getId();
}
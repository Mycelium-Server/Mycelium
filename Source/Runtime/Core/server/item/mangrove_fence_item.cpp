
#include "mangrove_fence_item.h"

#include "../block/mangrove_fence_block.h"

MangroveFenceItem::MangroveFenceItem() = default;
MangroveFenceItem::~MangroveFenceItem() = default;

int MangroveFenceItem::getID() const {
  return 274;
}

std::shared_ptr<Item> MangroveFenceItem::clone() const {
  return std::make_shared<MangroveFenceItem>();
}

int MangroveFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveFenceBlock().getId();
}
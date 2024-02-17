
#include "hanging_roots_item.h"

#include "../block/hanging_roots_block.h"

HangingRootsItem::HangingRootsItem() = default;
HangingRootsItem::~HangingRootsItem() = default;

int HangingRootsItem::getID() const {
  return 210;
}

std::shared_ptr<Item> HangingRootsItem::clone() const {
  return std::make_shared<HangingRootsItem>();
}

int HangingRootsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HangingRootsBlock().getId();
}

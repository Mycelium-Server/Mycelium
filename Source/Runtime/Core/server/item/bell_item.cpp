
#include "bell_item.h"

#include "../block/bell_block.h"

BellItem::BellItem() = default;
BellItem::~BellItem() = default;

int BellItem::getID() const {
  return 1097;
}

std::shared_ptr<Item> BellItem::clone() const {
  return std::make_shared<BellItem>();
}

int BellItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BellBlock().getId();
}
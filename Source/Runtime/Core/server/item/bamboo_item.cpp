
#include "bamboo_item.h"

#include "../block/bamboo_block.h"

BambooItem::BambooItem() = default;
BambooItem::~BambooItem() = default;

int BambooItem::getID() const {
  return 213;
}

std::shared_ptr<Item> BambooItem::clone() const {
  return std::make_shared<BambooItem>();
}

int BambooItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BambooBlock().getId();
}
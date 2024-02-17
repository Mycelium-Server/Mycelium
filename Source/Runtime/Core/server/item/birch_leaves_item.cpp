
#include "birch_leaves_item.h"

#include "../block/birch_leaves_block.h"

BirchLeavesItem::BirchLeavesItem() = default;
BirchLeavesItem::~BirchLeavesItem() = default;

int BirchLeavesItem::getID() const {
  return 144;
}

std::shared_ptr<Item> BirchLeavesItem::clone() const {
  return std::make_shared<BirchLeavesItem>();
}

int BirchLeavesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchLeavesBlock().getId();
}
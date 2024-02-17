
#include "oak_leaves_item.h"

#include "../block/oak_leaves_block.h"

OakLeavesItem::OakLeavesItem() = default;
OakLeavesItem::~OakLeavesItem() = default;

int OakLeavesItem::getID() const {
  return 142;
}

std::shared_ptr<Item> OakLeavesItem::clone() const {
  return std::make_shared<OakLeavesItem>();
}

int OakLeavesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakLeavesBlock().getId();
}
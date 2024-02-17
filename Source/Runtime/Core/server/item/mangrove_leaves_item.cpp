
#include "mangrove_leaves_item.h"

#include "../block/mangrove_leaves_block.h"

MangroveLeavesItem::MangroveLeavesItem() = default;
MangroveLeavesItem::~MangroveLeavesItem() = default;

int MangroveLeavesItem::getID() const {
  return 148;
}

std::shared_ptr<Item> MangroveLeavesItem::clone() const {
  return std::make_shared<MangroveLeavesItem>();
}

int MangroveLeavesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveLeavesBlock().getId();
}
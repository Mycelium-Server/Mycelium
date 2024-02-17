
#include "spruce_leaves_item.h"

#include "../block/spruce_leaves_block.h"

SpruceLeavesItem::SpruceLeavesItem() = default;
SpruceLeavesItem::~SpruceLeavesItem() = default;

int SpruceLeavesItem::getID() const {
  return 143;
}

std::shared_ptr<Item> SpruceLeavesItem::clone() const {
  return std::make_shared<SpruceLeavesItem>();
}

int SpruceLeavesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceLeavesBlock().getId();
}
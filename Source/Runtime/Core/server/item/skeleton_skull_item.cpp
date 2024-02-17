
#include "skeleton_skull_item.h"

#include "../block/skeleton_skull_block.h"

SkeletonSkullItem::SkeletonSkullItem() = default;
SkeletonSkullItem::~SkeletonSkullItem() = default;

int SkeletonSkullItem::getID() const {
  return 996;
}

std::shared_ptr<Item> SkeletonSkullItem::clone() const {
  return std::make_shared<SkeletonSkullItem>();
}

int SkeletonSkullItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SkeletonSkullBlock().getId();
}

#include "wither_skeleton_skull_item.h"

#include "../../block/builtin/wither_skeleton_skull_block.h"

WitherSkeletonSkullItem::WitherSkeletonSkullItem() = default;
WitherSkeletonSkullItem::~WitherSkeletonSkullItem() = default;

int WitherSkeletonSkullItem::getID() const {
  return 997;
}

std::shared_ptr<Item> WitherSkeletonSkullItem::clone() const {
  return std::make_shared<WitherSkeletonSkullItem>();
}

int WitherSkeletonSkullItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WitherSkeletonSkullBlock().getId();
}

#include "jungle_leaves_item.h"

#include "../../block/builtin/jungle_leaves_block.h"

JungleLeavesItem::JungleLeavesItem() = default;
JungleLeavesItem::~JungleLeavesItem() = default;

int JungleLeavesItem::getID() const {
  return 145;
}

std::shared_ptr<Item> JungleLeavesItem::clone() const {
  return std::make_shared<JungleLeavesItem>();
}

int JungleLeavesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleLeavesBlock().getId();
}

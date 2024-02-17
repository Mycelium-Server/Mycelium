
#include "bone_block_item.h"

#include "../../block/builtin/bone_block_block.h"

BoneBlockItem::BoneBlockItem() = default;
BoneBlockItem::~BoneBlockItem() = default;

int BoneBlockItem::getID() const {
  return 472;
}

std::shared_ptr<Item> BoneBlockItem::clone() const {
  return std::make_shared<BoneBlockItem>();
}

int BoneBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BoneBlockBlock().getId();
}

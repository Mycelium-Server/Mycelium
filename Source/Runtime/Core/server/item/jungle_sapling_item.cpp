
#include "jungle_sapling_item.h"

#include "../block/jungle_sapling_block.h"

JungleSaplingItem::JungleSaplingItem() = default;
JungleSaplingItem::~JungleSaplingItem() = default;

int JungleSaplingItem::getID() const {
  return 35;
}

std::shared_ptr<Item> JungleSaplingItem::clone() const {
  return std::make_shared<JungleSaplingItem>();
}

int JungleSaplingItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleSaplingBlock().getId();
}

#include "birch_sapling_item.h"

#include "../block/birch_sapling_block.h"

BirchSaplingItem::BirchSaplingItem() = default;
BirchSaplingItem::~BirchSaplingItem() = default;

int BirchSaplingItem::getID() const {
  return 34;
}

std::shared_ptr<Item> BirchSaplingItem::clone() const {
  return std::make_shared<BirchSaplingItem>();
}

int BirchSaplingItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchSaplingBlock().getId();
}
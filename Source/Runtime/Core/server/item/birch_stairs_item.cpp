
#include "birch_stairs_item.h"

#include "../block/birch_stairs_block.h"

BirchStairsItem::BirchStairsItem() = default;
BirchStairsItem::~BirchStairsItem() = default;

int BirchStairsItem::getID() const {
  return 340;
}

std::shared_ptr<Item> BirchStairsItem::clone() const {
  return std::make_shared<BirchStairsItem>();
}

int BirchStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchStairsBlock().getId();
}
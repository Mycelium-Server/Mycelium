
#include "purpur_stairs_item.h"

#include "../block/purpur_stairs_block.h"

PurpurStairsItem::PurpurStairsItem() = default;
PurpurStairsItem::~PurpurStairsItem() = default;

int PurpurStairsItem::getID() const {
  return 254;
}

std::shared_ptr<Item> PurpurStairsItem::clone() const {
  return std::make_shared<PurpurStairsItem>();
}

int PurpurStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpurStairsBlock().getId();
}
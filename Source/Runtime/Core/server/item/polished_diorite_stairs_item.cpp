
#include "polished_diorite_stairs_item.h"

#include "../block/polished_diorite_stairs_block.h"

PolishedDioriteStairsItem::PolishedDioriteStairsItem() = default;
PolishedDioriteStairsItem::~PolishedDioriteStairsItem() = default;

int PolishedDioriteStairsItem::getID() const {
  return 575;
}

std::shared_ptr<Item> PolishedDioriteStairsItem::clone() const {
  return std::make_shared<PolishedDioriteStairsItem>();
}

int PolishedDioriteStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedDioriteStairsBlock().getId();
}
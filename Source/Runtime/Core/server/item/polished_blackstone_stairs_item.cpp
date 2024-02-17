
#include "polished_blackstone_stairs_item.h"

#include "../block/polished_blackstone_stairs_block.h"

PolishedBlackstoneStairsItem::PolishedBlackstoneStairsItem() = default;
PolishedBlackstoneStairsItem::~PolishedBlackstoneStairsItem() = default;

int PolishedBlackstoneStairsItem::getID() const {
  return 1118;
}

std::shared_ptr<Item> PolishedBlackstoneStairsItem::clone() const {
  return std::make_shared<PolishedBlackstoneStairsItem>();
}

int PolishedBlackstoneStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstoneStairsBlock().getId();
}
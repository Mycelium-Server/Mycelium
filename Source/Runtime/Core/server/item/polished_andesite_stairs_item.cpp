
#include "polished_andesite_stairs_item.h"

#include "../block/polished_andesite_stairs_block.h"

PolishedAndesiteStairsItem::PolishedAndesiteStairsItem() = default;
PolishedAndesiteStairsItem::~PolishedAndesiteStairsItem() = default;

int PolishedAndesiteStairsItem::getID() const {
  return 584;
}

std::shared_ptr<Item> PolishedAndesiteStairsItem::clone() const {
  return std::make_shared<PolishedAndesiteStairsItem>();
}

int PolishedAndesiteStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedAndesiteStairsBlock().getId();
}
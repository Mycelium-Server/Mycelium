
#include "polished_granite_stairs_item.h"

#include "../block/polished_granite_stairs_block.h"

PolishedGraniteStairsItem::PolishedGraniteStairsItem() = default;
PolishedGraniteStairsItem::~PolishedGraniteStairsItem() = default;

int PolishedGraniteStairsItem::getID() const {
  return 572;
}

std::shared_ptr<Item> PolishedGraniteStairsItem::clone() const {
  return std::make_shared<PolishedGraniteStairsItem>();
}

int PolishedGraniteStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedGraniteStairsBlock().getId();
}
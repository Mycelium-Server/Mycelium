
#include "brown_bed_item.h"

#include "../block/brown_bed_block.h"

BrownBedItem::BrownBedItem() = default;
BrownBedItem::~BrownBedItem() = default;

int BrownBedItem::getID() const {
  return 881;
}

std::shared_ptr<Item> BrownBedItem::clone() const {
  return std::make_shared<BrownBedItem>();
}

int BrownBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownBedBlock().getId();
}

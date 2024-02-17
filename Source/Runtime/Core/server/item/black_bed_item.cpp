
#include "black_bed_item.h"

#include "../block/black_bed_block.h"

BlackBedItem::BlackBedItem() = default;
BlackBedItem::~BlackBedItem() = default;

int BlackBedItem::getID() const {
  return 884;
}

std::shared_ptr<Item> BlackBedItem::clone() const {
  return std::make_shared<BlackBedItem>();
}

int BlackBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackBedBlock().getId();
}

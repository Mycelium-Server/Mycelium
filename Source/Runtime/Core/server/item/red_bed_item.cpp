
#include "red_bed_item.h"

#include "../block/red_bed_block.h"

RedBedItem::RedBedItem() = default;
RedBedItem::~RedBedItem() = default;

int RedBedItem::getID() const {
  return 883;
}

std::shared_ptr<Item> RedBedItem::clone() const {
  return std::make_shared<RedBedItem>();
}

int RedBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedBedBlock().getId();
}

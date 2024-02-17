
#include "green_bed_item.h"

#include "../block/green_bed_block.h"

GreenBedItem::GreenBedItem() = default;
GreenBedItem::~GreenBedItem() = default;

int GreenBedItem::getID() const {
  return 882;
}

std::shared_ptr<Item> GreenBedItem::clone() const {
  return std::make_shared<GreenBedItem>();
}

int GreenBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenBedBlock().getId();
}

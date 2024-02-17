
#include "gray_bed_item.h"

#include "../block/gray_bed_block.h"

GrayBedItem::GrayBedItem() = default;
GrayBedItem::~GrayBedItem() = default;

int GrayBedItem::getID() const {
  return 876;
}

std::shared_ptr<Item> GrayBedItem::clone() const {
  return std::make_shared<GrayBedItem>();
}

int GrayBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayBedBlock().getId();
}
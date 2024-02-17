
#include "cyan_bed_item.h"

#include "../block/cyan_bed_block.h"

CyanBedItem::CyanBedItem() = default;
CyanBedItem::~CyanBedItem() = default;

int CyanBedItem::getID() const {
  return 878;
}

std::shared_ptr<Item> CyanBedItem::clone() const {
  return std::make_shared<CyanBedItem>();
}

int CyanBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanBedBlock().getId();
}

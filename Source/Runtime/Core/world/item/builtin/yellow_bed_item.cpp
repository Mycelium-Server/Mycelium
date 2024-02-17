
#include "yellow_bed_item.h"

#include "../../block/builtin/yellow_bed_block.h"

YellowBedItem::YellowBedItem() = default;
YellowBedItem::~YellowBedItem() = default;

int YellowBedItem::getID() const {
  return 873;
}

std::shared_ptr<Item> YellowBedItem::clone() const {
  return std::make_shared<YellowBedItem>();
}

int YellowBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowBedBlock().getId();
}
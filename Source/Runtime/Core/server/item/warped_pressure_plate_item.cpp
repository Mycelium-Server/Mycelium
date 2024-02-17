
#include "warped_pressure_plate_item.h"

#include "../block/warped_pressure_plate_block.h"

WarpedPressurePlateItem::WarpedPressurePlateItem() = default;
WarpedPressurePlateItem::~WarpedPressurePlateItem() = default;

int WarpedPressurePlateItem::getID() const {
  return 655;
}

std::shared_ptr<Item> WarpedPressurePlateItem::clone() const {
  return std::make_shared<WarpedPressurePlateItem>();
}

int WarpedPressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedPressurePlateBlock().getId();
}

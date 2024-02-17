
#include "warped_door_item.h"

#include "../block/warped_door_block.h"

WarpedDoorItem::WarpedDoorItem() = default;
WarpedDoorItem::~WarpedDoorItem() = default;

int WarpedDoorItem::getID() const {
  return 665;
}

std::shared_ptr<Item> WarpedDoorItem::clone() const {
  return std::make_shared<WarpedDoorItem>();
}

int WarpedDoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedDoorBlock().getId();
}

#include "pointed_dripstone_item.h"

#include "../block/pointed_dripstone_block.h"

PointedDripstoneItem::PointedDripstoneItem() = default;
PointedDripstoneItem::~PointedDripstoneItem() = default;

int PointedDripstoneItem::getID() const {
  return 1146;
}

std::shared_ptr<Item> PointedDripstoneItem::clone() const {
  return std::make_shared<PointedDripstoneItem>();
}

int PointedDripstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PointedDripstoneBlock().getId();
}
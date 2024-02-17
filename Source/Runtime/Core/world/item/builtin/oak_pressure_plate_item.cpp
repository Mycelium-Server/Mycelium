
#include "oak_pressure_plate_item.h"

#include "../../block/builtin/oak_pressure_plate_block.h"

OakPressurePlateItem::OakPressurePlateItem() = default;
OakPressurePlateItem::~OakPressurePlateItem() = default;

int OakPressurePlateItem::getID() const {
  return 647;
}

std::shared_ptr<Item> OakPressurePlateItem::clone() const {
  return std::make_shared<OakPressurePlateItem>();
}

int OakPressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakPressurePlateBlock().getId();
}

#include "dark_oak_pressure_plate_item.h"

#include "../../block/builtin/dark_oak_pressure_plate_block.h"

DarkOakPressurePlateItem::DarkOakPressurePlateItem() = default;
DarkOakPressurePlateItem::~DarkOakPressurePlateItem() = default;

int DarkOakPressurePlateItem::getID() const {
  return 652;
}

std::shared_ptr<Item> DarkOakPressurePlateItem::clone() const {
  return std::make_shared<DarkOakPressurePlateItem>();
}

int DarkOakPressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakPressurePlateBlock().getId();
}
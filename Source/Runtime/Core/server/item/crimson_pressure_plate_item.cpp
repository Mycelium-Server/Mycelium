
#include "crimson_pressure_plate_item.h"

#include "../block/crimson_pressure_plate_block.h"

CrimsonPressurePlateItem::CrimsonPressurePlateItem() = default;
CrimsonPressurePlateItem::~CrimsonPressurePlateItem() = default;

int CrimsonPressurePlateItem::getID() const {
  return 654;
}

std::shared_ptr<Item> CrimsonPressurePlateItem::clone() const {
  return std::make_shared<CrimsonPressurePlateItem>();
}

int CrimsonPressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonPressurePlateBlock().getId();
}
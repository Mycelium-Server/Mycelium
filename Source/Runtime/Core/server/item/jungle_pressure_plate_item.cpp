
#include "jungle_pressure_plate_item.h"

#include "../block/jungle_pressure_plate_block.h"

JunglePressurePlateItem::JunglePressurePlateItem() = default;
JunglePressurePlateItem::~JunglePressurePlateItem() = default;

int JunglePressurePlateItem::getID() const {
  return 650;
}

std::shared_ptr<Item> JunglePressurePlateItem::clone() const {
  return std::make_shared<JunglePressurePlateItem>();
}

int JunglePressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JunglePressurePlateBlock().getId();
}
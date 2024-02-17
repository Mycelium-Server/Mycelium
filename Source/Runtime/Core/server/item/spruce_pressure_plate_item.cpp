
#include "spruce_pressure_plate_item.h"

#include "../block/spruce_pressure_plate_block.h"

SprucePressurePlateItem::SprucePressurePlateItem() = default;
SprucePressurePlateItem::~SprucePressurePlateItem() = default;

int SprucePressurePlateItem::getID() const {
  return 648;
}

std::shared_ptr<Item> SprucePressurePlateItem::clone() const {
  return std::make_shared<SprucePressurePlateItem>();
}

int SprucePressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SprucePressurePlateBlock().getId();
}
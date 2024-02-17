
#include "light_weighted_pressure_plate_item.h"

#include "../block/light_weighted_pressure_plate_block.h"

LightWeightedPressurePlateItem::LightWeightedPressurePlateItem() = default;
LightWeightedPressurePlateItem::~LightWeightedPressurePlateItem() = default;

int LightWeightedPressurePlateItem::getID() const {
  return 645;
}

std::shared_ptr<Item> LightWeightedPressurePlateItem::clone() const {
  return std::make_shared<LightWeightedPressurePlateItem>();
}

int LightWeightedPressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightWeightedPressurePlateBlock().getId();
}
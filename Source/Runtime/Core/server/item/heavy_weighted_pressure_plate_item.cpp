
#include "heavy_weighted_pressure_plate_item.h"

#include "../block/heavy_weighted_pressure_plate_block.h"

HeavyWeightedPressurePlateItem::HeavyWeightedPressurePlateItem() = default;
HeavyWeightedPressurePlateItem::~HeavyWeightedPressurePlateItem() = default;

int HeavyWeightedPressurePlateItem::getID() const {
  return 646;
}

std::shared_ptr<Item> HeavyWeightedPressurePlateItem::clone() const {
  return std::make_shared<HeavyWeightedPressurePlateItem>();
}

int HeavyWeightedPressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HeavyWeightedPressurePlateBlock().getId();
}
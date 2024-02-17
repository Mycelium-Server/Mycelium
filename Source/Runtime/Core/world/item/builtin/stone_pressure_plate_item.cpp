
#include "stone_pressure_plate_item.h"

#include "../../block/builtin/stone_pressure_plate_block.h"

StonePressurePlateItem::StonePressurePlateItem() = default;
StonePressurePlateItem::~StonePressurePlateItem() = default;

int StonePressurePlateItem::getID() const {
  return 643;
}

std::shared_ptr<Item> StonePressurePlateItem::clone() const {
  return std::make_shared<StonePressurePlateItem>();
}

int StonePressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StonePressurePlateBlock().getId();
}
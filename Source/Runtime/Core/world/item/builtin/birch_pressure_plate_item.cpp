
#include "birch_pressure_plate_item.h"

#include "../../block/builtin/birch_pressure_plate_block.h"

BirchPressurePlateItem::BirchPressurePlateItem() = default;
BirchPressurePlateItem::~BirchPressurePlateItem() = default;

int BirchPressurePlateItem::getID() const {
  return 649;
}

std::shared_ptr<Item> BirchPressurePlateItem::clone() const {
  return std::make_shared<BirchPressurePlateItem>();
}

int BirchPressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchPressurePlateBlock().getId();
}
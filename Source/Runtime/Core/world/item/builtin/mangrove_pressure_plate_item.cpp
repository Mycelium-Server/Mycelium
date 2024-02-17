
#include "mangrove_pressure_plate_item.h"

#include "../../block/builtin/mangrove_pressure_plate_block.h"

MangrovePressurePlateItem::MangrovePressurePlateItem() = default;
MangrovePressurePlateItem::~MangrovePressurePlateItem() = default;

int MangrovePressurePlateItem::getID() const {
  return 653;
}

std::shared_ptr<Item> MangrovePressurePlateItem::clone() const {
  return std::make_shared<MangrovePressurePlateItem>();
}

int MangrovePressurePlateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangrovePressurePlateBlock().getId();
}
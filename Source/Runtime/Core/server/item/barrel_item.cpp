
#include "barrel_item.h"

#include "../block/barrel_block.h"

BarrelItem::BarrelItem() = default;
BarrelItem::~BarrelItem() = default;

int BarrelItem::getID() const {
  return 1089;
}

std::shared_ptr<Item> BarrelItem::clone() const {
  return std::make_shared<BarrelItem>();
}

int BarrelItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BarrelBlock().getId();
}

#include "blue_concrete_powder_item.h"

#include "../block/blue_concrete_powder_block.h"

BlueConcretePowderItem::BlueConcretePowderItem() = default;
BlueConcretePowderItem::~BlueConcretePowderItem() = default;

int BlueConcretePowderItem::getID() const {
  return 534;
}

std::shared_ptr<Item> BlueConcretePowderItem::clone() const {
  return std::make_shared<BlueConcretePowderItem>();
}

int BlueConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueConcretePowderBlock().getId();
}
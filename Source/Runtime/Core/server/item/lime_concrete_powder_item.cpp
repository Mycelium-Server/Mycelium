
#include "lime_concrete_powder_item.h"

#include "../block/lime_concrete_powder_block.h"

LimeConcretePowderItem::LimeConcretePowderItem() = default;
LimeConcretePowderItem::~LimeConcretePowderItem() = default;

int LimeConcretePowderItem::getID() const {
  return 528;
}

std::shared_ptr<Item> LimeConcretePowderItem::clone() const {
  return std::make_shared<LimeConcretePowderItem>();
}

int LimeConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeConcretePowderBlock().getId();
}
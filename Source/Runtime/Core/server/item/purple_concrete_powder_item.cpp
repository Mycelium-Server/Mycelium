
#include "purple_concrete_powder_item.h"

#include "../block/purple_concrete_powder_block.h"

PurpleConcretePowderItem::PurpleConcretePowderItem() = default;
PurpleConcretePowderItem::~PurpleConcretePowderItem() = default;

int PurpleConcretePowderItem::getID() const {
  return 533;
}

std::shared_ptr<Item> PurpleConcretePowderItem::clone() const {
  return std::make_shared<PurpleConcretePowderItem>();
}

int PurpleConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleConcretePowderBlock().getId();
}

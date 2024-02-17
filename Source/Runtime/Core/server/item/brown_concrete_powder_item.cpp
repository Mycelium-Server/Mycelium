
#include "brown_concrete_powder_item.h"

#include "../block/brown_concrete_powder_block.h"

BrownConcretePowderItem::BrownConcretePowderItem() = default;
BrownConcretePowderItem::~BrownConcretePowderItem() = default;

int BrownConcretePowderItem::getID() const {
  return 535;
}

std::shared_ptr<Item> BrownConcretePowderItem::clone() const {
  return std::make_shared<BrownConcretePowderItem>();
}

int BrownConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownConcretePowderBlock().getId();
}

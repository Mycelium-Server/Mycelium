
#include "brown_concrete_item.h"

#include "../block/brown_concrete_block.h"

BrownConcreteItem::BrownConcreteItem() = default;
BrownConcreteItem::~BrownConcreteItem() = default;

int BrownConcreteItem::getID() const {
  return 519;
}

std::shared_ptr<Item> BrownConcreteItem::clone() const {
  return std::make_shared<BrownConcreteItem>();
}

int BrownConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownConcreteBlock().getId();
}
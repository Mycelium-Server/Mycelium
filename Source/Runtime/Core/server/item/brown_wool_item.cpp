
#include "brown_wool_item.h"

#include "../block/brown_wool_block.h"

BrownWoolItem::BrownWoolItem() = default;
BrownWoolItem::~BrownWoolItem() = default;

int BrownWoolItem::getID() const {
  return 179;
}

std::shared_ptr<Item> BrownWoolItem::clone() const {
  return std::make_shared<BrownWoolItem>();
}

int BrownWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownWoolBlock().getId();
}
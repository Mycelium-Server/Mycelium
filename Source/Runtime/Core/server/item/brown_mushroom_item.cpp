
#include "brown_mushroom_item.h"

#include "../block/brown_mushroom_block.h"

BrownMushroomItem::BrownMushroomItem() = default;
BrownMushroomItem::~BrownMushroomItem() = default;

int BrownMushroomItem::getID() const {
  return 197;
}

std::shared_ptr<Item> BrownMushroomItem::clone() const {
  return std::make_shared<BrownMushroomItem>();
}

int BrownMushroomItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownMushroomBlock().getId();
}
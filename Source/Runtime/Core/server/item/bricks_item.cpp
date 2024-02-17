
#include "bricks_item.h"

#include "../block/bricks_block.h"

BricksItem::BricksItem() = default;
BricksItem::~BricksItem() = default;

int BricksItem::getID() const {
  return 244;
}

std::shared_ptr<Item> BricksItem::clone() const {
  return std::make_shared<BricksItem>();
}

int BricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BricksBlock().getId();
}

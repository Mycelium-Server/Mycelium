
#include "stone_bricks_item.h"

#include "../block/stone_bricks_block.h"

StoneBricksItem::StoneBricksItem() = default;
StoneBricksItem::~StoneBricksItem() = default;

int StoneBricksItem::getID() const {
  return 295;
}

std::shared_ptr<Item> StoneBricksItem::clone() const {
  return std::make_shared<StoneBricksItem>();
}

int StoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StoneBricksBlock().getId();
}


#include "infested_stone_bricks_item.h"

#include "../block/infested_stone_bricks_block.h"

InfestedStoneBricksItem::InfestedStoneBricksItem() = default;
InfestedStoneBricksItem::~InfestedStoneBricksItem() = default;

int InfestedStoneBricksItem::getID() const {
  return 290;
}

std::shared_ptr<Item> InfestedStoneBricksItem::clone() const {
  return std::make_shared<InfestedStoneBricksItem>();
}

int InfestedStoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return InfestedStoneBricksBlock().getId();
}
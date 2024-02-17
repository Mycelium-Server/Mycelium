
#include "infested_cracked_stone_bricks_item.h"

#include "../block/infested_cracked_stone_bricks_block.h"

InfestedCrackedStoneBricksItem::InfestedCrackedStoneBricksItem() = default;
InfestedCrackedStoneBricksItem::~InfestedCrackedStoneBricksItem() = default;

int InfestedCrackedStoneBricksItem::getID() const {
  return 292;
}

std::shared_ptr<Item> InfestedCrackedStoneBricksItem::clone() const {
  return std::make_shared<InfestedCrackedStoneBricksItem>();
}

int InfestedCrackedStoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return InfestedCrackedStoneBricksBlock().getId();
}

#include "infested_chiseled_stone_bricks_item.h"

#include "../block/infested_chiseled_stone_bricks_block.h"

InfestedChiseledStoneBricksItem::InfestedChiseledStoneBricksItem() = default;
InfestedChiseledStoneBricksItem::~InfestedChiseledStoneBricksItem() = default;

int InfestedChiseledStoneBricksItem::getID() const {
  return 293;
}

std::shared_ptr<Item> InfestedChiseledStoneBricksItem::clone() const {
  return std::make_shared<InfestedChiseledStoneBricksItem>();
}

int InfestedChiseledStoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return InfestedChiseledStoneBricksBlock().getId();
}
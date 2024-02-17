
#include "chiseled_stone_bricks_item.h"

#include "../block/chiseled_stone_bricks_block.h"

ChiseledStoneBricksItem::ChiseledStoneBricksItem() = default;
ChiseledStoneBricksItem::~ChiseledStoneBricksItem() = default;

int ChiseledStoneBricksItem::getID() const {
  return 298;
}

std::shared_ptr<Item> ChiseledStoneBricksItem::clone() const {
  return std::make_shared<ChiseledStoneBricksItem>();
}

int ChiseledStoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChiseledStoneBricksBlock().getId();
}

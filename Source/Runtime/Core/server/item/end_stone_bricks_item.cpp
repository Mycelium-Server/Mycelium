
#include "end_stone_bricks_item.h"

#include "../block/end_stone_bricks_block.h"

EndStoneBricksItem::EndStoneBricksItem() = default;
EndStoneBricksItem::~EndStoneBricksItem() = default;

int EndStoneBricksItem::getID() const {
  return 333;
}

std::shared_ptr<Item> EndStoneBricksItem::clone() const {
  return std::make_shared<EndStoneBricksItem>();
}

int EndStoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EndStoneBricksBlock().getId();
}
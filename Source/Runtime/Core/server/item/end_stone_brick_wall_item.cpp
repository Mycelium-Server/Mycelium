
#include "end_stone_brick_wall_item.h"

#include "../block/end_stone_brick_wall_block.h"

EndStoneBrickWallItem::EndStoneBrickWallItem() = default;
EndStoneBrickWallItem::~EndStoneBrickWallItem() = default;

int EndStoneBrickWallItem::getID() const {
  return 362;
}

std::shared_ptr<Item> EndStoneBrickWallItem::clone() const {
  return std::make_shared<EndStoneBrickWallItem>();
}

int EndStoneBrickWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EndStoneBrickWallBlock().getId();
}

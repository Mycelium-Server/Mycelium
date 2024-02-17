
#include "end_stone_brick_stairs_item.h"

#include "../block/end_stone_brick_stairs_block.h"

EndStoneBrickStairsItem::EndStoneBrickStairsItem() = default;
EndStoneBrickStairsItem::~EndStoneBrickStairsItem() = default;

int EndStoneBrickStairsItem::getID() const {
  return 577;
}

std::shared_ptr<Item> EndStoneBrickStairsItem::clone() const {
  return std::make_shared<EndStoneBrickStairsItem>();
}

int EndStoneBrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EndStoneBrickStairsBlock().getId();
}
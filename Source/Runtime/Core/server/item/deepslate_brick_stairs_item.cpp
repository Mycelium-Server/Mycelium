
#include "deepslate_brick_stairs_item.h"

#include "../block/deepslate_brick_stairs_block.h"

DeepslateBrickStairsItem::DeepslateBrickStairsItem() = default;
DeepslateBrickStairsItem::~DeepslateBrickStairsItem() = default;

int DeepslateBrickStairsItem::getID() const {
  return 588;
}

std::shared_ptr<Item> DeepslateBrickStairsItem::clone() const {
  return std::make_shared<DeepslateBrickStairsItem>();
}

int DeepslateBrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateBrickStairsBlock().getId();
}
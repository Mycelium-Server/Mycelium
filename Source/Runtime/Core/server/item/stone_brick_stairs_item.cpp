
#include "stone_brick_stairs_item.h"

#include "../block/stone_brick_stairs_block.h"

StoneBrickStairsItem::StoneBrickStairsItem() = default;
StoneBrickStairsItem::~StoneBrickStairsItem() = default;

int StoneBrickStairsItem::getID() const {
  return 317;
}

std::shared_ptr<Item> StoneBrickStairsItem::clone() const {
  return std::make_shared<StoneBrickStairsItem>();
}

int StoneBrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StoneBrickStairsBlock().getId();
}
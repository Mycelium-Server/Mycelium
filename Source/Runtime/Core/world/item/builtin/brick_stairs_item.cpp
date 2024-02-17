
#include "brick_stairs_item.h"

#include "../../block/builtin/brick_stairs_block.h"

BrickStairsItem::BrickStairsItem() = default;
BrickStairsItem::~BrickStairsItem() = default;

int BrickStairsItem::getID() const {
  return 316;
}

std::shared_ptr<Item> BrickStairsItem::clone() const {
  return std::make_shared<BrickStairsItem>();
}

int BrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrickStairsBlock().getId();
}
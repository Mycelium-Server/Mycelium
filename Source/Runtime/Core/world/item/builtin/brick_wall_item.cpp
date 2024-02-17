
#include "brick_wall_item.h"

#include "../../block/builtin/brick_wall_block.h"

BrickWallItem::BrickWallItem() = default;
BrickWallItem::~BrickWallItem() = default;

int BrickWallItem::getID() const {
  return 351;
}

std::shared_ptr<Item> BrickWallItem::clone() const {
  return std::make_shared<BrickWallItem>();
}

int BrickWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrickWallBlock().getId();
}
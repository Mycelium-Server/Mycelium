
#include "stone_brick_wall_item.h"

#include "../block/stone_brick_wall_block.h"

StoneBrickWallItem::StoneBrickWallItem() = default;
StoneBrickWallItem::~StoneBrickWallItem() = default;

int StoneBrickWallItem::getID() const {
  return 356;
}

std::shared_ptr<Item> StoneBrickWallItem::clone() const {
  return std::make_shared<StoneBrickWallItem>();
}

int StoneBrickWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StoneBrickWallBlock().getId();
}
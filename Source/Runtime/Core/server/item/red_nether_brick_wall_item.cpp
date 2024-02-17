
#include "red_nether_brick_wall_item.h"

#include "../block/red_nether_brick_wall_block.h"

RedNetherBrickWallItem::RedNetherBrickWallItem() = default;
RedNetherBrickWallItem::~RedNetherBrickWallItem() = default;

int RedNetherBrickWallItem::getID() const {
  return 360;
}

std::shared_ptr<Item> RedNetherBrickWallItem::clone() const {
  return std::make_shared<RedNetherBrickWallItem>();
}

int RedNetherBrickWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedNetherBrickWallBlock().getId();
}
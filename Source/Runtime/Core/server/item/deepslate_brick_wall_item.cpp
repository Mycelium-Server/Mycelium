
#include "deepslate_brick_wall_item.h"

#include "../block/deepslate_brick_wall_block.h"

DeepslateBrickWallItem::DeepslateBrickWallItem() = default;
DeepslateBrickWallItem::~DeepslateBrickWallItem() = default;

int DeepslateBrickWallItem::getID() const {
  return 369;
}

std::shared_ptr<Item> DeepslateBrickWallItem::clone() const {
  return std::make_shared<DeepslateBrickWallItem>();
}

int DeepslateBrickWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateBrickWallBlock().getId();
}

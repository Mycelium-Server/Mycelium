
#include "nether_brick_wall_item.h"

#include "../../block/builtin/nether_brick_wall_block.h"

NetherBrickWallItem::NetherBrickWallItem() = default;
NetherBrickWallItem::~NetherBrickWallItem() = default;

int NetherBrickWallItem::getID() const {
  return 358;
}

std::shared_ptr<Item> NetherBrickWallItem::clone() const {
  return std::make_shared<NetherBrickWallItem>();
}

int NetherBrickWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherBrickWallBlock().getId();
}
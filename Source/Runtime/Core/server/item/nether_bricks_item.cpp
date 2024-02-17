
#include "nether_bricks_item.h"

#include "../block/nether_bricks_block.h"

NetherBricksItem::NetherBricksItem() = default;
NetherBricksItem::~NetherBricksItem() = default;

int NetherBricksItem::getID() const {
  return 321;
}

std::shared_ptr<Item> NetherBricksItem::clone() const {
  return std::make_shared<NetherBricksItem>();
}

int NetherBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherBricksBlock().getId();
}

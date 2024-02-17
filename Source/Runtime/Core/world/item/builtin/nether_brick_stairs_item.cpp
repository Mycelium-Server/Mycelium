
#include "nether_brick_stairs_item.h"

#include "../../block/builtin/nether_brick_stairs_block.h"

NetherBrickStairsItem::NetherBrickStairsItem() = default;
NetherBrickStairsItem::~NetherBrickStairsItem() = default;

int NetherBrickStairsItem::getID() const {
  return 325;
}

std::shared_ptr<Item> NetherBrickStairsItem::clone() const {
  return std::make_shared<NetherBrickStairsItem>();
}

int NetherBrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherBrickStairsBlock().getId();
}
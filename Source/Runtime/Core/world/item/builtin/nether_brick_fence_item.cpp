
#include "nether_brick_fence_item.h"

#include "../../block/builtin/nether_brick_fence_block.h"

NetherBrickFenceItem::NetherBrickFenceItem() = default;
NetherBrickFenceItem::~NetherBrickFenceItem() = default;

int NetherBrickFenceItem::getID() const {
  return 324;
}

std::shared_ptr<Item> NetherBrickFenceItem::clone() const {
  return std::make_shared<NetherBrickFenceItem>();
}

int NetherBrickFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherBrickFenceBlock().getId();
}
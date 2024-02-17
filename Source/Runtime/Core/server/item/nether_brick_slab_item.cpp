
#include "nether_brick_slab_item.h"

#include "../block/nether_brick_slab_block.h"

NetherBrickSlabItem::NetherBrickSlabItem() = default;
NetherBrickSlabItem::~NetherBrickSlabItem() = default;

int NetherBrickSlabItem::getID() const {
  return 232;
}

std::shared_ptr<Item> NetherBrickSlabItem::clone() const {
  return std::make_shared<NetherBrickSlabItem>();
}

int NetherBrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherBrickSlabBlock().getId();
}
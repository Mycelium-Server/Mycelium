
#include "polished_blackstone_brick_slab_item.h"

#include "../block/polished_blackstone_brick_slab_block.h"

PolishedBlackstoneBrickSlabItem::PolishedBlackstoneBrickSlabItem() = default;
PolishedBlackstoneBrickSlabItem::~PolishedBlackstoneBrickSlabItem() = default;

int PolishedBlackstoneBrickSlabItem::getID() const {
  return 1121;
}

std::shared_ptr<Item> PolishedBlackstoneBrickSlabItem::clone() const {
  return std::make_shared<PolishedBlackstoneBrickSlabItem>();
}

int PolishedBlackstoneBrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstoneBrickSlabBlock().getId();
}
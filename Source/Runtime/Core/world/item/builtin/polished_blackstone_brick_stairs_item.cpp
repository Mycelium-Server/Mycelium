
#include "polished_blackstone_brick_stairs_item.h"

#include "../../block/builtin/polished_blackstone_brick_stairs_block.h"

PolishedBlackstoneBrickStairsItem::PolishedBlackstoneBrickStairsItem() = default;
PolishedBlackstoneBrickStairsItem::~PolishedBlackstoneBrickStairsItem() = default;

int PolishedBlackstoneBrickStairsItem::getID() const {
  return 1122;
}

std::shared_ptr<Item> PolishedBlackstoneBrickStairsItem::clone() const {
  return std::make_shared<PolishedBlackstoneBrickStairsItem>();
}

int PolishedBlackstoneBrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstoneBrickStairsBlock().getId();
}
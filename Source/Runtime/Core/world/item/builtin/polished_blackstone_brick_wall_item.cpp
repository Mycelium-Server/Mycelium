
#include "polished_blackstone_brick_wall_item.h"

#include "../../block/builtin/polished_blackstone_brick_wall_block.h"

PolishedBlackstoneBrickWallItem::PolishedBlackstoneBrickWallItem() = default;
PolishedBlackstoneBrickWallItem::~PolishedBlackstoneBrickWallItem() = default;

int PolishedBlackstoneBrickWallItem::getID() const {
  return 366;
}

std::shared_ptr<Item> PolishedBlackstoneBrickWallItem::clone() const {
  return std::make_shared<PolishedBlackstoneBrickWallItem>();
}

int PolishedBlackstoneBrickWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstoneBrickWallBlock().getId();
}
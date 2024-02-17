
#include "polished_blackstone_wall_item.h"

#include "../block/polished_blackstone_wall_block.h"

PolishedBlackstoneWallItem::PolishedBlackstoneWallItem() = default;
PolishedBlackstoneWallItem::~PolishedBlackstoneWallItem() = default;

int PolishedBlackstoneWallItem::getID() const {
  return 365;
}

std::shared_ptr<Item> PolishedBlackstoneWallItem::clone() const {
  return std::make_shared<PolishedBlackstoneWallItem>();
}

int PolishedBlackstoneWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstoneWallBlock().getId();
}

#include "blackstone_wall_item.h"

#include "../../block/builtin/blackstone_wall_block.h"

BlackstoneWallItem::BlackstoneWallItem() = default;
BlackstoneWallItem::~BlackstoneWallItem() = default;

int BlackstoneWallItem::getID() const {
  return 364;
}

std::shared_ptr<Item> BlackstoneWallItem::clone() const {
  return std::make_shared<BlackstoneWallItem>();
}

int BlackstoneWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackstoneWallBlock().getId();
}
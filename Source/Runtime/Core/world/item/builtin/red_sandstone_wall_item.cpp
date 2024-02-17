
#include "red_sandstone_wall_item.h"

#include "../../block/builtin/red_sandstone_wall_block.h"

RedSandstoneWallItem::RedSandstoneWallItem() = default;
RedSandstoneWallItem::~RedSandstoneWallItem() = default;

int RedSandstoneWallItem::getID() const {
  return 353;
}

std::shared_ptr<Item> RedSandstoneWallItem::clone() const {
  return std::make_shared<RedSandstoneWallItem>();
}

int RedSandstoneWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedSandstoneWallBlock().getId();
}

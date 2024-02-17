
#include "sandstone_wall_item.h"

#include "../../block/builtin/sandstone_wall_block.h"

SandstoneWallItem::SandstoneWallItem() = default;
SandstoneWallItem::~SandstoneWallItem() = default;

int SandstoneWallItem::getID() const {
  return 361;
}

std::shared_ptr<Item> SandstoneWallItem::clone() const {
  return std::make_shared<SandstoneWallItem>();
}

int SandstoneWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SandstoneWallBlock().getId();
}
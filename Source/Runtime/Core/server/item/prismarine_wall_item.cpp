
#include "prismarine_wall_item.h"

#include "../block/prismarine_wall_block.h"

PrismarineWallItem::PrismarineWallItem() = default;
PrismarineWallItem::~PrismarineWallItem() = default;

int PrismarineWallItem::getID() const {
  return 352;
}

std::shared_ptr<Item> PrismarineWallItem::clone() const {
  return std::make_shared<PrismarineWallItem>();
}

int PrismarineWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PrismarineWallBlock().getId();
}

#include "diorite_wall_item.h"

#include "../block/diorite_wall_block.h"

DioriteWallItem::DioriteWallItem() = default;
DioriteWallItem::~DioriteWallItem() = default;

int DioriteWallItem::getID() const {
  return 363;
}

std::shared_ptr<Item> DioriteWallItem::clone() const {
  return std::make_shared<DioriteWallItem>();
}

int DioriteWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DioriteWallBlock().getId();
}
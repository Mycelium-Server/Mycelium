
#include "granite_wall_item.h"

#include "../block/granite_wall_block.h"

GraniteWallItem::GraniteWallItem() = default;
GraniteWallItem::~GraniteWallItem() = default;

int GraniteWallItem::getID() const {
  return 355;
}

std::shared_ptr<Item> GraniteWallItem::clone() const {
  return std::make_shared<GraniteWallItem>();
}

int GraniteWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GraniteWallBlock().getId();
}
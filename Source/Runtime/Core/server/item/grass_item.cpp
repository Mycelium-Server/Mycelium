
#include "grass_item.h"

#include "../block/grass_block.h"

GrassItem::GrassItem() = default;
GrassItem::~GrassItem() = default;

int GrassItem::getID() const {
  return 160;
}

std::shared_ptr<Item> GrassItem::clone() const {
  return std::make_shared<GrassItem>();
}

int GrassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrassBlock().getId();
}
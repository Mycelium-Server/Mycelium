
#include "granite_item.h"

#include "../block/granite_block.h"

GraniteItem::GraniteItem() = default;
GraniteItem::~GraniteItem() = default;

int GraniteItem::getID() const {
  return 2;
}

std::shared_ptr<Item> GraniteItem::clone() const {
  return std::make_shared<GraniteItem>();
}

int GraniteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GraniteBlock().getId();
}
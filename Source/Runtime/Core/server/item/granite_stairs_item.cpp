
#include "granite_stairs_item.h"

#include "../block/granite_stairs_block.h"

GraniteStairsItem::GraniteStairsItem() = default;
GraniteStairsItem::~GraniteStairsItem() = default;

int GraniteStairsItem::getID() const {
  return 581;
}

std::shared_ptr<Item> GraniteStairsItem::clone() const {
  return std::make_shared<GraniteStairsItem>();
}

int GraniteStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GraniteStairsBlock().getId();
}
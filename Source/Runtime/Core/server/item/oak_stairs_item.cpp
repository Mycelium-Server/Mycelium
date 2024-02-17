
#include "oak_stairs_item.h"

#include "../block/oak_stairs_block.h"

OakStairsItem::OakStairsItem() = default;
OakStairsItem::~OakStairsItem() = default;

int OakStairsItem::getID() const {
  return 338;
}

std::shared_ptr<Item> OakStairsItem::clone() const {
  return std::make_shared<OakStairsItem>();
}

int OakStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakStairsBlock().getId();
}

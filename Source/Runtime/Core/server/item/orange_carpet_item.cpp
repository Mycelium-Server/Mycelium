
#include "orange_carpet_item.h"

#include "../block/orange_carpet_block.h"

OrangeCarpetItem::OrangeCarpetItem() = default;
OrangeCarpetItem::~OrangeCarpetItem() = default;

int OrangeCarpetItem::getID() const {
  return 399;
}

std::shared_ptr<Item> OrangeCarpetItem::clone() const {
  return std::make_shared<OrangeCarpetItem>();
}

int OrangeCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeCarpetBlock().getId();
}

#include "coarse_dirt_item.h"

#include "../block/coarse_dirt_block.h"

CoarseDirtItem::CoarseDirtItem() = default;
CoarseDirtItem::~CoarseDirtItem() = default;

int CoarseDirtItem::getID() const {
  return 16;
}

std::shared_ptr<Item> CoarseDirtItem::clone() const {
  return std::make_shared<CoarseDirtItem>();
}

int CoarseDirtItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CoarseDirtBlock().getId();
}
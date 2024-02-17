
#include "basalt_item.h"

#include "../../block/builtin/basalt_block.h"

BasaltItem::BasaltItem() = default;
BasaltItem::~BasaltItem() = default;

int BasaltItem::getID() const {
  return 283;
}

std::shared_ptr<Item> BasaltItem::clone() const {
  return std::make_shared<BasaltItem>();
}

int BasaltItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BasaltBlock().getId();
}
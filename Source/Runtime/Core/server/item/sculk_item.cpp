
#include "sculk_item.h"

#include "../block/sculk_block.h"

SculkItem::SculkItem() = default;
SculkItem::~SculkItem() = default;

int SculkItem::getID() const {
  return 326;
}

std::shared_ptr<Item> SculkItem::clone() const {
  return std::make_shared<SculkItem>();
}

int SculkItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SculkBlock().getId();
}

#include "lilac_item.h"

#include "../block/lilac_block.h"

LilacItem::LilacItem() = default;
LilacItem::~LilacItem() = default;

int LilacItem::getID() const {
  return 418;
}

std::shared_ptr<Item> LilacItem::clone() const {
  return std::make_shared<LilacItem>();
}

int LilacItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LilacBlock().getId();
}
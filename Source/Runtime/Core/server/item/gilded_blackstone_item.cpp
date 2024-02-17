
#include "gilded_blackstone_item.h"

#include "../block/gilded_blackstone_block.h"

GildedBlackstoneItem::GildedBlackstoneItem() = default;
GildedBlackstoneItem::~GildedBlackstoneItem() = default;

int GildedBlackstoneItem::getID() const {
  return 1115;
}

std::shared_ptr<Item> GildedBlackstoneItem::clone() const {
  return std::make_shared<GildedBlackstoneItem>();
}

int GildedBlackstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GildedBlackstoneBlock().getId();
}
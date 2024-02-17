
#include "sunflower_item.h"

#include "../block/sunflower_block.h"

SunflowerItem::SunflowerItem() = default;
SunflowerItem::~SunflowerItem() = default;

int SunflowerItem::getID() const {
  return 417;
}

std::shared_ptr<Item> SunflowerItem::clone() const {
  return std::make_shared<SunflowerItem>();
}

int SunflowerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SunflowerBlock().getId();
}
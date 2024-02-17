
#include "light_blue_terracotta_item.h"

#include "../block/light_blue_terracotta_block.h"

LightBlueTerracottaItem::LightBlueTerracottaItem() = default;
LightBlueTerracottaItem::~LightBlueTerracottaItem() = default;

int LightBlueTerracottaItem::getID() const {
  return 382;
}

std::shared_ptr<Item> LightBlueTerracottaItem::clone() const {
  return std::make_shared<LightBlueTerracottaItem>();
}

int LightBlueTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueTerracottaBlock().getId();
}
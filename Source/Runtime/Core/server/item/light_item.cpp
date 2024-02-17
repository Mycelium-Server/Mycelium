
#include "light_item.h"

#include "../block/light_block.h"

LightItem::LightItem() = default;
LightItem::~LightItem() = default;

int LightItem::getID() const {
  return 396;
}

std::shared_ptr<Item> LightItem::clone() const {
  return std::make_shared<LightItem>();
}

int LightItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlock().getId();
}
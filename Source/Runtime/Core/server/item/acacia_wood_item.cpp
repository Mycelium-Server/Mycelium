
#include "acacia_wood_item.h"

#include "../block/acacia_wood_block.h"

AcaciaWoodItem::AcaciaWoodItem() = default;
AcaciaWoodItem::~AcaciaWoodItem() = default;

int AcaciaWoodItem::getID() const {
  return 137;
}

std::shared_ptr<Item> AcaciaWoodItem::clone() const {
  return std::make_shared<AcaciaWoodItem>();
}

int AcaciaWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AcaciaWoodBlock().getId();
}

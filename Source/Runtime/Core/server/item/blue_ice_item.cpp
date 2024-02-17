
#include "blue_ice_item.h"

#include "../block/blue_ice_block.h"

BlueIceItem::BlueIceItem() = default;
BlueIceItem::~BlueIceItem() = default;

int BlueIceItem::getID() const {
  return 570;
}

std::shared_ptr<Item> BlueIceItem::clone() const {
  return std::make_shared<BlueIceItem>();
}

int BlueIceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueIceBlock().getId();
}

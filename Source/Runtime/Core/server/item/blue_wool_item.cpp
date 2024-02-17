
#include "blue_wool_item.h"

#include "../block/blue_wool_block.h"

BlueWoolItem::BlueWoolItem() = default;
BlueWoolItem::~BlueWoolItem() = default;

int BlueWoolItem::getID() const {
  return 178;
}

std::shared_ptr<Item> BlueWoolItem::clone() const {
  return std::make_shared<BlueWoolItem>();
}

int BlueWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueWoolBlock().getId();
}

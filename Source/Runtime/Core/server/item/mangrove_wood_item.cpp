
#include "mangrove_wood_item.h"

#include "../block/mangrove_wood_block.h"

MangroveWoodItem::MangroveWoodItem() = default;
MangroveWoodItem::~MangroveWoodItem() = default;

int MangroveWoodItem::getID() const {
  return 139;
}

std::shared_ptr<Item> MangroveWoodItem::clone() const {
  return std::make_shared<MangroveWoodItem>();
}

int MangroveWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveWoodBlock().getId();
}
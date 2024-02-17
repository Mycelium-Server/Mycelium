
#include "dark_oak_wood_item.h"

#include "../block/dark_oak_wood_block.h"

DarkOakWoodItem::DarkOakWoodItem() = default;
DarkOakWoodItem::~DarkOakWoodItem() = default;

int DarkOakWoodItem::getID() const {
  return 138;
}

std::shared_ptr<Item> DarkOakWoodItem::clone() const {
  return std::make_shared<DarkOakWoodItem>();
}

int DarkOakWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakWoodBlock().getId();
}

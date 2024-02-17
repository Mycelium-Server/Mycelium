
#include "stripped_oak_wood_item.h"

#include "../block/stripped_oak_wood_block.h"

StrippedOakWoodItem::StrippedOakWoodItem() = default;
StrippedOakWoodItem::~StrippedOakWoodItem() = default;

int StrippedOakWoodItem::getID() const {
  return 124;
}

std::shared_ptr<Item> StrippedOakWoodItem::clone() const {
  return std::make_shared<StrippedOakWoodItem>();
}

int StrippedOakWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedOakWoodBlock().getId();
}

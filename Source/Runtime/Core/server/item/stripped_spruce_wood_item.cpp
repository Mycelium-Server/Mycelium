
#include "stripped_spruce_wood_item.h"

#include "../block/stripped_spruce_wood_block.h"

StrippedSpruceWoodItem::StrippedSpruceWoodItem() = default;
StrippedSpruceWoodItem::~StrippedSpruceWoodItem() = default;

int StrippedSpruceWoodItem::getID() const {
  return 125;
}

std::shared_ptr<Item> StrippedSpruceWoodItem::clone() const {
  return std::make_shared<StrippedSpruceWoodItem>();
}

int StrippedSpruceWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedSpruceWoodBlock().getId();
}
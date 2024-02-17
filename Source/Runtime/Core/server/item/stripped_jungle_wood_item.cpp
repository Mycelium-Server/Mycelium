
#include "stripped_jungle_wood_item.h"

#include "../block/stripped_jungle_wood_block.h"

StrippedJungleWoodItem::StrippedJungleWoodItem() = default;
StrippedJungleWoodItem::~StrippedJungleWoodItem() = default;

int StrippedJungleWoodItem::getID() const {
  return 127;
}

std::shared_ptr<Item> StrippedJungleWoodItem::clone() const {
  return std::make_shared<StrippedJungleWoodItem>();
}

int StrippedJungleWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedJungleWoodBlock().getId();
}
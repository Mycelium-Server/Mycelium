
#include "stripped_mangrove_wood_item.h"

#include "../block/stripped_mangrove_wood_block.h"

StrippedMangroveWoodItem::StrippedMangroveWoodItem() = default;
StrippedMangroveWoodItem::~StrippedMangroveWoodItem() = default;

int StrippedMangroveWoodItem::getID() const {
  return 130;
}

std::shared_ptr<Item> StrippedMangroveWoodItem::clone() const {
  return std::make_shared<StrippedMangroveWoodItem>();
}

int StrippedMangroveWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedMangroveWoodBlock().getId();
}
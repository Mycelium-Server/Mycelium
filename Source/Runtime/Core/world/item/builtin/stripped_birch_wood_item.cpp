
#include "stripped_birch_wood_item.h"

#include "../../block/builtin/stripped_birch_wood_block.h"

StrippedBirchWoodItem::StrippedBirchWoodItem() = default;
StrippedBirchWoodItem::~StrippedBirchWoodItem() = default;

int StrippedBirchWoodItem::getID() const {
  return 126;
}

std::shared_ptr<Item> StrippedBirchWoodItem::clone() const {
  return std::make_shared<StrippedBirchWoodItem>();
}

int StrippedBirchWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedBirchWoodBlock().getId();
}
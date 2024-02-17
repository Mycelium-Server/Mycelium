
#include "stripped_dark_oak_wood_item.h"

#include "../../block/builtin/stripped_dark_oak_wood_block.h"

StrippedDarkOakWoodItem::StrippedDarkOakWoodItem() = default;
StrippedDarkOakWoodItem::~StrippedDarkOakWoodItem() = default;

int StrippedDarkOakWoodItem::getID() const {
  return 129;
}

std::shared_ptr<Item> StrippedDarkOakWoodItem::clone() const {
  return std::make_shared<StrippedDarkOakWoodItem>();
}

int StrippedDarkOakWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedDarkOakWoodBlock().getId();
}
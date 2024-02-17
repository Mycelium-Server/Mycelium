
#include "smoker_item.h"

#include "../block/smoker_block.h"

SmokerItem::SmokerItem() = default;
SmokerItem::~SmokerItem() = default;

int SmokerItem::getID() const {
  return 1090;
}

std::shared_ptr<Item> SmokerItem::clone() const {
  return std::make_shared<SmokerItem>();
}

int SmokerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmokerBlock().getId();
}
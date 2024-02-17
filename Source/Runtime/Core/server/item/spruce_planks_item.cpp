
#include "spruce_planks_item.h"

#include "../block/spruce_planks_block.h"

SprucePlanksItem::SprucePlanksItem() = default;
SprucePlanksItem::~SprucePlanksItem() = default;

int SprucePlanksItem::getID() const {
  return 24;
}

std::shared_ptr<Item> SprucePlanksItem::clone() const {
  return std::make_shared<SprucePlanksItem>();
}

int SprucePlanksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SprucePlanksBlock().getId();
}